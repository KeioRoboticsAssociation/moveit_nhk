import rclpy
import rclpy.node
from rogidrive_msg.msg import RogidriveMessage


# publish rogidrivemessage to topic 'odrive_cmd'
def main(args=None):
    rclpy.init(args=args)
    node = rclpy.create_node('rogidrive_tester')
    pub = node.create_publisher(RogidriveMessage, 'odrive_cmd', 10)
    msg = RogidriveMessage()

    try:
        while rclpy.ok():
            msg.name = input("input motor name: ")
            msg.mode = int(input("input mode (1=torque, 2=velocity, 3=position): "))

            if msg.mode == RogidriveMessage.TORQUE_CONTROL:
                msg.current = float(input("input current (A): "))
            elif msg.mode == RogidriveMessage.VELOCITY_CONTROL:
                msg.vel = float(input("input velocity (rev/s): "))
            elif msg.mode == RogidriveMessage.POSITION_CONTROL:
                msg.vel = float(input("input vel limit (rev/s): "))
                msg.pos = float(input("input position (rev): "))
            else:
                node.get_logger().error("Invalid mode! Use 1, 2, or 3")
                continue

            node.get_logger().info('Publishing: "%s"' % msg)
            pub.publish(msg)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()
