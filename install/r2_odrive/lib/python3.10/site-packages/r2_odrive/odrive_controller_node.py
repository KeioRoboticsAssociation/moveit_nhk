#!/usr/bin/env python3
"""
ODrive ROS2 Controller Node

Subscribes to Float32MultiArray messages containing motor speed commands
and sends them to ODrive motor controllers via USB/Serial.

Author: a
License: Apache-2.0
"""

import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32MultiArray
import odrive
from odrive.enums import AxisState, ControlMode
import time
from typing import List, Dict, Optional


class MotorConfig:
    """Configuration for a single motor"""
    def __init__(self, config_dict: dict):
        self.odrive_serial = config_dict.get('odrive_serial', None)
        self.device_index = config_dict.get('device_index', None)
        self.axis = config_dict.get('axis', 0)
        self.name = config_dict.get('name', 'unnamed')
        self.speed_multiplier = config_dict.get('speed_multiplier', 1.0)

        # Runtime fields
        self.odrive_handle = None
        self.axis_handle = None
        self.connected = False


class ODriveControllerNode(Node):
    """ROS2 node for controlling ODrive motors"""

    def __init__(self):
        super().__init__('odrive_controller_node')

        # Declare and get parameters
        self._declare_parameters()
        self._load_parameters()

        # Initialize motor configurations
        self.motors: List[MotorConfig] = []
        self._parse_motor_configs()

        # Connect to ODrive devices
        self.odrive_devices: Dict[str, any] = {}  # Cache of connected ODrives
        self._connect_to_odrives()

        # Create subscriber for speed commands
        self.subscription = self.create_subscription(
            Float32MultiArray,
            self.speed_command_topic,
            self.speed_command_callback,
            10
        )

        # Watchdog timer to stop motors if no commands received
        if self.enable_watchdog:
            self.last_command_time = self.get_clock().now()
            self.watchdog_timer = self.create_timer(
                0.1,  # Check every 100ms
                self._watchdog_callback
            )

        self.get_logger().info(f'ODrive Controller Node initialized')
        self.get_logger().info(f'Subscribed to: {self.speed_command_topic}')
        self.get_logger().info(f'Controlling {len(self.motors)} motors')

    def _declare_parameters(self):
        """Declare all ROS parameters"""
        # Topic configuration
        self.declare_parameter('speed_command_topic', '/motor_speeds')

        # Connection settings
        self.declare_parameter('connection_type', 'usb')
        self.declare_parameter('serial_port', '')
        self.declare_parameter('connection_timeout', 30.0)
        self.declare_parameter('max_reconnect_attempts', 3)

        # Control settings
        self.declare_parameter('control_mode', 'velocity')

        # Watchdog settings
        self.declare_parameter('command_timeout', 1.0)
        self.declare_parameter('enable_watchdog', True)

        # Motor configurations (as separate arrays)
        self.declare_parameter('motor_serials', [''])
        self.declare_parameter('motor_axes', [0])
        self.declare_parameter('motor_names', [''])
        self.declare_parameter('motor_speed_multipliers', [0.0])

    def _load_parameters(self):
        """Load parameters from ROS parameter server"""
        self.speed_command_topic = self.get_parameter('speed_command_topic').value
        self.connection_type = self.get_parameter('connection_type').value
        self.serial_port = self.get_parameter('serial_port').value
        self.connection_timeout = self.get_parameter('connection_timeout').value
        self.max_reconnect_attempts = self.get_parameter('max_reconnect_attempts').value
        self.control_mode = self.get_parameter('control_mode').value
        self.command_timeout = self.get_parameter('command_timeout').value
        self.enable_watchdog = self.get_parameter('enable_watchdog').value

    def _parse_motor_configs(self):
        """Parse motor configurations from parameters"""
        motor_serials = self.get_parameter('motor_serials').value
        motor_axes = self.get_parameter('motor_axes').value
        motor_names = self.get_parameter('motor_names').value
        motor_speed_multipliers = self.get_parameter('motor_speed_multipliers').value

        print(f"DEBUG: motor_serials = {motor_serials}")
        print(f"DEBUG: motor_axes = {motor_axes}")
        print(f"DEBUG: motor_names = {motor_names}")
        print(f"DEBUG: motor_speed_multipliers = {motor_speed_multipliers}")

        # Validate that all arrays have the same length
        if not motor_serials or len(motor_serials) == 0:
            self.get_logger().error('No motors configured! Check your YAML config file.')
            raise ValueError('No motors configured')

        num_motors = len(motor_serials)
        if (len(motor_axes) != num_motors or
            len(motor_names) != num_motors or
            len(motor_speed_multipliers) != num_motors):
            self.get_logger().error(
                f'Motor configuration arrays have mismatched lengths! '
                f'serials: {len(motor_serials)}, axes: {len(motor_axes)}, '
                f'names: {len(motor_names)}, multipliers: {len(motor_speed_multipliers)}'
            )
            raise ValueError('Motor configuration arrays have mismatched lengths')

        # Create MotorConfig objects from the arrays
        for i in range(num_motors):
            motor_dict = {
                'odrive_serial': motor_serials[i],
                'axis': motor_axes[i],
                'name': motor_names[i],
                'speed_multiplier': motor_speed_multipliers[i]
            }
            motor_config = MotorConfig(motor_dict)
            self.motors.append(motor_config)
            self.get_logger().info(
                f'Configured motor: {motor_config.name} '
                f'(Serial: {motor_config.odrive_serial}, '
                f'Axis: {motor_config.axis})'
            )

    def _connect_to_odrives(self):
        """Connect to all ODrive devices specified in configuration"""
        self.get_logger().info('Connecting to ODrive devices...')

        # Build list of unique ODrive identifiers
        unique_odrives = set()
        for motor in self.motors:
            if motor.odrive_serial:
                unique_odrives.add(('serial', motor.odrive_serial))
            elif motor.device_index is not None:
                unique_odrives.add(('index', motor.device_index))

        # Connect to each unique ODrive
        for odrive_type, odrive_id in unique_odrives:
            try:
                if odrive_type == 'serial':
                    self.get_logger().info(f'Finding ODrive with serial: {odrive_id}')
                    odrv = odrive.find_any(serial_number=odrive_id, timeout=self.connection_timeout)
                    cache_key = f'serial_{odrive_id}'
                elif odrive_type == 'index':
                    self.get_logger().info(f'Finding ODrive at index: {odrive_id}')
                    # For simplicity, find_any and use index later
                    # In production, you might want to enumerate all devices
                    odrv = odrive.find_any(timeout=self.connection_timeout)
                    cache_key = f'index_{odrive_id}'

                if odrv:
                    self.odrive_devices[cache_key] = odrv
                    self.get_logger().info(f'Connected to ODrive: {cache_key}')
                    self.get_logger().info(f'  Serial: {odrv.serial_number}')
                    self.get_logger().info(f'  Hardware version: v{odrv.hw_version_major}.{odrv.hw_version_minor}')
                else:
                    self.get_logger().error(f'Failed to connect to ODrive: {cache_key}')

            except Exception as e:
                self.get_logger().error(f'Error connecting to ODrive {odrive_id}: {str(e)}')

        # Associate motors with their ODrive handles
        for motor in self.motors:
            if motor.odrive_serial:
                cache_key = f'serial_{motor.odrive_serial}'
            elif motor.device_index is not None:
                cache_key = f'index_{motor.device_index}'
            else:
                self.get_logger().error(f'Motor {motor.name} has no ODrive identifier!')
                continue

            if cache_key in self.odrive_devices:
                motor.odrive_handle = self.odrive_devices[cache_key]
                motor.axis_handle = getattr(motor.odrive_handle, f'axis{motor.axis}')
                motor.connected = True

                # Set control mode
                self._set_control_mode(motor)

                # Enable motor (set to closed loop control)
                self._enable_motor(motor)

                self.get_logger().info(f'Motor {motor.name} ready')
            else:
                self.get_logger().error(f'Motor {motor.name} cannot find ODrive: {cache_key}')

    def _set_control_mode(self, motor: MotorConfig):
        """Set the control mode for a motor"""
        try:
            if self.control_mode == 'velocity':
                motor.axis_handle.controller.config.control_mode = ControlMode.VELOCITY_CONTROL
                self.get_logger().info(f'Motor {motor.name} set to velocity control mode')
            elif self.control_mode == 'position':
                motor.axis_handle.controller.config.control_mode = ControlMode.POSITION_CONTROL
                self.get_logger().info(f'Motor {motor.name} set to position control mode')
        except Exception as e:
            self.get_logger().error(f'Error setting control mode for {motor.name}: {str(e)}')

    def _enable_motor(self, motor: MotorConfig):
        """Enable a motor (enter closed loop control)"""
        try:
            motor.axis_handle.requested_state = AxisState.CLOSED_LOOP_CONTROL
            self.get_logger().info(f'Motor {motor.name} enabled (closed loop control)')
        except Exception as e:
            self.get_logger().error(f'Error enabling motor {motor.name}: {str(e)}')

    def speed_command_callback(self, msg: Float32MultiArray):
        """
        Callback for speed command messages

        Expects Float32MultiArray with exactly 3 elements [speed1, speed2, speed3]
        """
        # Update watchdog timer
        if self.enable_watchdog:
            self.last_command_time = self.get_clock().now()

        # Validate message
        if len(msg.data) != len(self.motors):
            self.get_logger().error(
                f'Received {len(msg.data)} speed values but have {len(self.motors)} motors configured!'
            )
            return

        # Send commands to each motor
        for i, motor in enumerate(self.motors):
            if not motor.connected:
                continue

            try:
                speed = msg.data[i] * motor.speed_multiplier

                if self.control_mode == 'velocity':
                    motor.axis_handle.controller.input_vel = speed
                elif self.control_mode == 'position':
                    motor.axis_handle.controller.input_pos = speed

                # Log at debug level to avoid spam
                # self.get_logger().debug(f'Motor {motor.name}: speed={speed:.3f}')

            except Exception as e:
                self.get_logger().error(
                    f'Error sending command to motor {motor.name}: {str(e)}'
                )

    def _watchdog_callback(self):
        """Watchdog timer callback - stops motors if no commands received"""
        time_since_last_command = (self.get_clock().now() - self.last_command_time).nanoseconds / 1e9

        if time_since_last_command > self.command_timeout:
            # Stop all motors
            for motor in self.motors:
                if motor.connected:
                    try:
                        motor.axis_handle.controller.input_vel = 0.0
                    except Exception as e:
                        self.get_logger().error(
                            f'Error stopping motor {motor.name} in watchdog: {str(e)}'
                        )

            # Log warning only once
            if not hasattr(self, '_watchdog_triggered') or not self._watchdog_triggered:
                self.get_logger().warn(
                    f'Watchdog triggered: No commands for {time_since_last_command:.2f}s. Motors stopped.'
                )
                self._watchdog_triggered = True
        else:
            self._watchdog_triggered = False

    def shutdown(self):
        """Clean shutdown - disable all motors"""
        self.get_logger().info('Shutting down ODrive controller...')
        for motor in self.motors:
            if motor.connected:
                try:
                    motor.axis_handle.controller.input_vel = 0.0
                    motor.axis_handle.requested_state = AxisState.IDLE
                    self.get_logger().info(f'Motor {motor.name} disabled')
                except Exception as e:
                    self.get_logger().error(f'Error disabling motor {motor.name}: {str(e)}')


def main(args=None):
    rclpy.init(args=args)

    node = None
    try:
        node = ODriveControllerNode()
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    except Exception as e:
        if node:
            node.get_logger().error(f'Fatal error: {str(e)}')
        else:
            print(f'Fatal error during node initialization: {str(e)}')
            import traceback
            traceback.print_exc()
    finally:
        if node:
            node.shutdown()
            node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
