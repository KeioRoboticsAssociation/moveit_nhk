#!/usr/bin/env python3
"""
JointState → Rogidrive converter node.

`/joint_states` の position 情報を受け取り，ODrive 側で利用しやすい
`RogidriveMessage` に変換して `/odrive_cmd` に流す。
"""

from typing import Dict, List

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState
from rogidrive_msg.msg import RogidriveMessage


class ODriveControllerNode(Node):
    """JointState から RogidriveMessage へ変換する ROS2 ノード"""

    def __init__(self) -> None:
        super().__init__('odrive_controller_node')

        self._declare_parameters()
        self._load_parameters()

        self._missing_joint_log: Dict[str, bool] = {}

        self.command_publisher = self.create_publisher(
            RogidriveMessage,
            self.odrive_cmd_topic,
            10,
        )
        self.joint_state_subscription = self.create_subscription(
            JointState,
            self.joint_state_topic,
            self.joint_state_callback,
            10,
        )

        self.get_logger().info(
            f'Listening on {self.joint_state_topic} and publishing to {self.odrive_cmd_topic}'
        )
        if self.joint_names:
            self.get_logger().info(f'Configured joint order: {self.joint_names}')

    def _declare_parameters(self) -> None:
        self.declare_parameter('joint_state_topic', '/joint_states')
        self.declare_parameter('odrive_cmd_topic', '/odrive_cmd')
        # Default to Slider 1 -> index 0, Slider 3 -> index 1 ordering.
        self.declare_parameter('joint_names', ['Slider 4'])
        self.declare_parameter('default_mode', 3)

    def _load_parameters(self) -> None:
        self.joint_state_topic = self.get_parameter('joint_state_topic').value
        self.odrive_cmd_topic = self.get_parameter('odrive_cmd_topic').value
        raw_joint_names = self.get_parameter('joint_names').value
        self.joint_names: List[str] = [name for name in raw_joint_names if name]
        self.default_mode = int(self.get_parameter('default_mode').value)

    def joint_state_callback(self, msg: JointState) -> None:
        if not msg.name:
            self.get_logger().warn('JointState に name が含まれていません')
            return

        name_to_index = {name: idx for idx, name in enumerate(msg.name)}
        target_names = self.joint_names if self.joint_names else list(msg.name)
        for joint_name in target_names:
            index = name_to_index.get(joint_name)
            if index is None:
                if not self._missing_joint_log.get(joint_name):
                    self.get_logger().warn(f'JointState に {joint_name} が見つかりません')
                    self._missing_joint_log[joint_name] = True
                continue

            position = self._get_value(msg.position, index)
            velocity = self._get_value(msg.velocity, index)
            effort = self._get_value(msg.effort, index)

            rogi_msg = self._convert_joint_state(joint_name, position, velocity, effort)
            self.command_publisher.publish(rogi_msg)

    @staticmethod
    def _get_value(sequence: List[float], index: int, default: float = 0.0) -> float:
        if index < len(sequence):
            return sequence[index]
        return default

    def _convert_joint_state(
        self,
        joint_name: str,
        position: float,
        velocity: float,
        effort: float,
    ) -> RogidriveMessage:
        """変換式を書き換える想定のメソッド"""

        msg = RogidriveMessage()
        msg.name = joint_name
        msg.mode = self.default_mode

        # ==== ここから変換式を自由に書き換えてください ==== #
        msg.pos = self._convert_position(joint_name, position)
        msg.vel = 10.0
        msg.current = self._convert_current(joint_name, effort)
        # ==== ここまで変換式 ==== #

        return msg

    def _convert_position(self, joint_name: str, position: float) -> float:
        """位置 [rad/m] → ODrive の回転数 [turn] への変換を書く場所"""
        if joint_name in ('Slider4', 'Slider 4'):
            return -position * 100.0
        return position

    def _convert_velocity(self, joint_name: str, velocity: float) -> float:
        """速度 [rad/s] → ODrive の回転速度 [turn/s] への変換を書く場所"""
        return velocity

    def _convert_current(self, joint_name: str, effort: float) -> float:
        """effort → 電流[A] への変換を書く場所"""
        return effort


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
            node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
