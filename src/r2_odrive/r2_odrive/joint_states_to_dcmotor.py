#!/usr/bin/env python3
"""
JointState の Revolute 2 を DCMotorCommand に変換して publish するノード.
"""

from typing import Dict, List

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState
from stm32_mavlink_msgs.msg import DCMotorCommand


class JointStatesToDCMotor(Node):
    def __init__(self) -> None:
        super().__init__('joint_states_to_dcmotor')

        self._declare_parameters()
        self._load_parameters()

        self._missing_joint_log: Dict[str, bool] = {}

        self.command_publisher = self.create_publisher(
            DCMotorCommand,
            self.command_topic,
            10,
        )
        self.joint_state_subscription = self.create_subscription(
            JointState,
            self.joint_state_topic,
            self._joint_state_callback,
            10,
        )

        self.get_logger().info(
            f'Listening on {self.joint_state_topic} and publishing to {self.command_topic}'
        )
        self.get_logger().info(f'Target joint: {self.joint_name}')

    def _declare_parameters(self) -> None:
        self.declare_parameter('joint_state_topic', '/joint_states')
        self.declare_parameter('command_topic', '/dcmotor/command')
        self.declare_parameter('joint_name', 'Revolute 2')
        self.declare_parameter('motor_id', 10)
        self.declare_parameter('control_mode', 0)
        self.declare_parameter('enabled', True)

    def _load_parameters(self) -> None:
        self.joint_state_topic = self.get_parameter('joint_state_topic').value
        self.command_topic = self.get_parameter('command_topic').value
        self.joint_name = self.get_parameter('joint_name').value
        self.motor_id = int(self.get_parameter('motor_id').value)
        self.control_mode = int(self.get_parameter('control_mode').value)
        self.enabled = bool(self.get_parameter('enabled').value)

    def _joint_state_callback(self, msg: JointState) -> None:
        if not msg.name:
            self.get_logger().warn('JointState に name が含まれていません')
            return

        name_to_index = {name: idx for idx, name in enumerate(msg.name)}
        index = name_to_index.get(self.joint_name)
        if index is None:
            if not self._missing_joint_log.get(self.joint_name):
                self.get_logger().warn(f'JointState に {self.joint_name} が見つかりません')
                self._missing_joint_log[self.joint_name] = True
            return

        position = self._get_value(msg.position, index)

        command = DCMotorCommand()
        command.motor_id = self.motor_id
        command.control_mode = self.control_mode
        command.target_value = float(position)
        command.enabled = self.enabled

        self.command_publisher.publish(command)

    @staticmethod
    def _get_value(sequence: List[float], index: int, default: float = 0.0) -> float:
        if index < len(sequence):
            return sequence[index]
        return default


def main(args=None):
    rclpy.init(args=args)

    node = None
    try:
        node = JointStatesToDCMotor()
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
            node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
