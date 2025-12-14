import odrive
import odrive.utils
import rclpy
import rclpy.node
import json
import time
from std_msgs.msg import Bool
from rogidrive_msg.msg import RogidriveMessage
from rogidrive_msg.msg import RogidriveMultiArray

AXIS_STATE_CLOSED_LOOP_CONTROL = 8
AXIS_STATE_IDLE = 1

TORQUE_CONTROL = 1
VELOCITY_CONTROL = 2
POSITION_CONTROL = 3

MODE_PASSTHROUGH = 1
MODE_VEL_RAMP = 2
VEL_RAMP_RATE = 10

FULL_CALIBRATION_SEQUENCE = 3

VEL_GAIN = 0.26
VEL_INTEGRATOR_GAIN = 1.5


class Rogidrive(rclpy.node.Node):

    def __init__(self):
        super().__init__('rogidrive')
        self.subscription = self.create_subscription(RogidriveMessage,
                                                     'odrive_cmd',
                                                     self.cmd_callback, 100)
        self.odrive_enable_sub = self.create_subscription(Bool, 'odrive_enable', self.odrive_enable_callback, 100)
        self.pub = self.create_publisher(
            RogidriveMultiArray, 'odrive_status', 100)
        self.status = RogidriveMultiArray()
        self.declare_parameter('config_path', 'default_value')
        self.config_path = self.get_parameter(
            'config_path').get_parameter_value().string_value
        self.is_calibrated = False

        with open(self.config_path, 'r') as json_file:
            self.config = json.load(json_file)['motors']

        self.connect_odrive()

        i = 0
        for axis in self.config:
            self.status.data.append(RogidriveMessage())
            i += 1
        self.timer = self.create_timer(0.1, self.timer_callback)

        self.odrive_enable_callback(Bool(data=True))
    
    def odrive_enable_callback(self, msg):
        self.calibration_check()
        if msg.data:
            if self.is_calibrated:
                self.set_closed_loop()
                self.get_logger().info("entered closed loop")
            else:
                self.get_logger().warn("Not calibrated - starting automatic calibration...")
                self.auto_calibrate()
                if self.is_calibrated:
                    self.set_closed_loop()
                    self.get_logger().info("entered closed loop after calibration")
                else:
                    self.get_logger().error("Automatic calibration failed!")
            

    def connect_odrive(self):
        serial_set = set()
        for motor in self.config.items():
            serial_set.add(motor[1]['serial'])

        self.devs = []
        self.get_logger().info("Connecting to ODrive devices...")
        for serial in serial_set:
            self.devs.append(odrive.find_any(serial_number=serial))
            for motor in self.config.items():
                if motor[1]['serial'] == serial:
                    motor[1]['mode'] = 0
                    if motor[1]['axis'] == 0:
                        motor[1]['dev'] = self.devs[-1].axis0
                    elif motor[1]['axis'] == 1:
                        motor[1]['dev'] = self.devs[-1].axis1
            self.get_logger().info(f"ODrive {serial} connected")
        
    def calibration_check(self):
        num = 0
        self.get_logger().info("calibration check")
        for axis in self.config:
            num += int(self.config[axis]['dev'].encoder.is_ready)
        if num != len(self.config):
            self.get_logger().info("Not Calibrated!!!")
        num = 0
        for axis in self.config:
            num += int(self.config[axis]['dev'].encoder.is_ready)
        self.get_logger().info("Calibrated: %s" % num)
        if num == len(self.config):
            self.is_calibrated = True
        else:
            self.is_calibrated = False
            self.get_logger().error('\033[31m' + "Calibration failed!" + '\033[0m')

    def auto_calibrate(self):
        """Automatically calibrate all axes that are not calibrated"""
        self.get_logger().info("Starting automatic calibration sequence...")

        # Track which axes need calibration
        axes_to_calibrate = []
        for axis in self.config:
            if not self.config[axis]['dev'].encoder.is_ready:
                axes_to_calibrate.append(axis)
                self.get_logger().info(f"Axis '{axis}' needs calibration")

        if not axes_to_calibrate:
            self.get_logger().info("All axes already calibrated")
            self.is_calibrated = True
            return

        # Start calibration for all uncalibrated axes
        for axis in axes_to_calibrate:
            self.get_logger().info(f"Starting calibration for axis '{axis}'...")
            self.config[axis]['dev'].requested_state = FULL_CALIBRATION_SEQUENCE

        # Wait for all calibrations to complete
        max_wait_time = 30  # Maximum 30 seconds per axis
        start_time = time.time()

        while axes_to_calibrate and (time.time() - start_time) < max_wait_time * len(axes_to_calibrate):
            time.sleep(0.5)  # Check every 500ms

            for axis in list(axes_to_calibrate):  # Use list() to avoid modification during iteration
                try:
                    # Check if this axis is now calibrated
                    if self.config[axis]['dev'].encoder.is_ready:
                        self.get_logger().info(f"✓ Axis '{axis}' calibration complete")
                        axes_to_calibrate.remove(axis)
                    else:
                        # Check current state
                        current_state = self.config[axis]['dev'].current_state
                        if current_state == 1:  # IDLE state - calibration might have failed
                            error = self.config[axis]['dev'].error
                            if error != 0:
                                self.get_logger().error(f"✗ Axis '{axis}' calibration failed with error: {error}")
                                axes_to_calibrate.remove(axis)
                except Exception as e:
                    self.get_logger().error(f"Error checking calibration status for '{axis}': {e}")
                    axes_to_calibrate.remove(axis)

        # Final calibration check
        self.calibration_check()

        if axes_to_calibrate:
            self.get_logger().error(f"Calibration timeout for axes: {', '.join(axes_to_calibrate)}")
        else:
            self.get_logger().info("✓ All axes calibration complete!")

    def set_closed_loop(self):
        for axis in self.config:
            self.config[axis]['dev'].encoder.set_linear_count(0)
            self.config[axis]['dev'].controller.config.input_mode = 1
            self.config[axis]['dev'].controller.input_vel = 0
            self.config[axis]['dev'].controller.input_pos = 0
            self.config[axis]['mode'] = 0
            time.sleep(0.1)
            self.config[axis]['dev'].requested_state = AXIS_STATE_CLOSED_LOOP_CONTROL
            self.get_logger().info("Closed loop set %s" % axis)
    
    def cmd_callback(self, cmd_msg:RogidriveMessage):
        try:
            if cmd_msg.mode == RogidriveMessage.VELOCITY_CONTROL:
                if cmd_msg.mode != self.config[cmd_msg.name]['mode']:
                    self.config[cmd_msg.name]['dev'].controller.config.control_mode = VELOCITY_CONTROL
                    self.config[cmd_msg.name]['dev'].controller.config.vel_ramp_rate = VEL_RAMP_RATE
                    self.config[cmd_msg.name]['dev'].controller.config.input_mode = MODE_VEL_RAMP
                    self.config[cmd_msg.name]['dev'].controller.config.vel_gain = VEL_GAIN
                    self.config[cmd_msg.name]['dev'].controller.config.vel_integrator_gain = VEL_INTEGRATOR_GAIN
                    self.config[cmd_msg.name]['mode'] = cmd_msg.mode
                    self.config[cmd_msg.name]['dev'].controller.config.vel_integrator_limit = 10.0
                self.config[cmd_msg.name]['dev'].controller.input_vel = cmd_msg.vel
            elif cmd_msg.mode == RogidriveMessage.POSITION_CONTROL:
                if cmd_msg.mode != self.config[cmd_msg.name]['mode']:
                    self.config[cmd_msg.name]['dev'].controller.config.control_mode = POSITION_CONTROL
                    self.config[cmd_msg.name]['dev'].controller.config.input_mode = 5 # trap traj
                    self.config[cmd_msg.name]['dev'].trap_traj.config.accel_limit = 300
                    self.config[cmd_msg.name]['mode'] = cmd_msg.mode
                self.config[cmd_msg.name]['dev'].controller.config.vel_limit = cmd_msg.vel
                self.config[cmd_msg.name]['dev'].trap_traj.config.vel_limit = cmd_msg.vel
                self.config[cmd_msg.name]['dev'].controller.input_pos = cmd_msg.pos
            elif cmd_msg.mode == RogidriveMessage.TORQUE_CONTROL:
                if cmd_msg.mode != self.config[cmd_msg.name]['mode']:
                    self.config[cmd_msg.name]['dev'].controller.config.control_mode = TORQUE_CONTROL
                    self.config[cmd_msg.name]['dev'].controller.config.input_mode = 1
                    self.config[cmd_msg.name]['mode'] = cmd_msg.mode
                self.config[cmd_msg.name]['dev'].controller.input_torque = cmd_msg.current
        except Exception as e:
            self.get_logger().error("cError: %s %s" % (e, cmd_msg.name))
            self.connect_odrive()

    def timer_callback(self):
        i = 0
        for axis in self.config:
            try:
                self.status.data[i].name = axis
                self.status.data[i].mode = self.config[axis]['dev'].controller.config.control_mode
                self.status.data[i].pos = self.config[axis]['dev'].encoder.pos_estimate
                self.status.data[i].vel = self.config[axis]['dev'].encoder.vel_estimate
                self.status.data[i].current = self.config[axis]['dev'].motor.current_control.Iq_measured
                i += 1
            except Exception as e:
                self.get_logger().error("tError: %s %s" % (e, axis))
                self.connect_odrive()
        self.pub.publish(self.status)

    def enidle(self):
        for axis in self.config:
            self.config[axis]['dev'].requested_state = AXIS_STATE_IDLE
            self.config[axis]['dev'].controller.input_vel = 0
            self.config[axis]['dev'].controller.input_torque = 0
            self.get_logger().info("Set %s to idle" % axis)

    def __del__(self):
        for axis in self.config:
            self.config[axis]['dev'].requested_state = AXIS_STATE_IDLE
            self.config[axis]['dev'].controller.input_vel = 0
            self.config[axis]['dev'].controller.input_torque = 0

def main():
    try:
        rclpy.init()
        rogidrive = Rogidrive()
        rclpy.spin(rogidrive)
    
    except KeyboardInterrupt:
        rogidrive.enidle()
        pass
    finally:
        if rclpy.ok():
            rogidrive.destroy_node()
            rclpy.shutdown()


if __name__ == '__main__':
    main()
