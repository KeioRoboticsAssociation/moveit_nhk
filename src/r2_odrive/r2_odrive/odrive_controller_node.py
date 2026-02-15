#!/usr/bin/env python3
"""
JointState → Rogidrive converter node.

`/joint_states` の position 情報を受け取り，ODrive 側で利用しやすい
`RogidriveMessage` に変換して `/odrive_cmd` に流す。
"""

import json
import os
from typing import Dict, List

import rclpy
from ament_index_python.packages import PackageNotFoundError, get_package_share_directory
from rclpy.node import Node
from sensor_msgs.msg import JointState
from rogidrive_msg.msg import RogidriveMessage
from rogilink_flex_lib import Publisher

# JointState -> kfs_*_cmd 変換係数
# 使い方: value_out = value_in * scale + offset
KFS_CMD_COEFFICIENTS = {
    'Revolute 2': {'scale': 1.0, 'offset': 0.0},  # kfs_yaw_cmd
    'Revolute 5': {'scale': 1.0, 'offset': 0.0},  # kfs_roll_cmd
    'Slider 6': {'scale': 1.0, 'offset': 0.0},    # kfs_x_cmd
}


class ODriveControllerNode(Node):
    """JointState から RogidriveMessage へ変換する ROS2 ノード"""

    def __init__(self) -> None:
        super().__init__('odrive_controller_node')

        self._declare_parameters()
        self._load_parameters()

        self._missing_joint_log: Dict[str, bool] = {}
        self.kfs_joint_to_topic, self.kfs_device_id = self._build_kfs_joint_mapping_and_device_id()

        self.command_publisher = self.create_publisher(
            RogidriveMessage,
            self.odrive_cmd_topic,
            10,
        )
        self.kfs_publishers = {
            topic_name: Publisher(self, topic_name, 'float32', device_id=self.kfs_device_id)
            for topic_name in self.kfs_joint_to_topic.values()
        }
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
        self.get_logger().info(
            'Configured kfs command mapping: '
            + ', '.join([f'{joint}->{topic}' for joint, topic in self.kfs_joint_to_topic.items()])
        )
        self.get_logger().info(f'Configured kfs device_id: {self.kfs_device_id}')

    def _declare_parameters(self) -> None:
        self.declare_parameter('joint_state_topic', '/joint_states')
        self.declare_parameter('odrive_cmd_topic', '/odrive_cmd')
        # Default to Slider 1 -> index 0, Slider 3 -> index 1 ordering.
        self.declare_parameter('joint_names', ['Slider 4'])
        self.declare_parameter('default_mode', 3)
        self.declare_parameter('config_path', self._default_config_path())
        self.declare_parameter('kfs_device_id', -1)

    def _load_parameters(self) -> None:
        self.joint_state_topic = self.get_parameter('joint_state_topic').value
        self.odrive_cmd_topic = self.get_parameter('odrive_cmd_topic').value
        raw_joint_names = self.get_parameter('joint_names').value
        self.joint_names: List[str] = [name for name in raw_joint_names if name]
        self.default_mode = int(self.get_parameter('default_mode').value)
        self.config_path = self.get_parameter('config_path').value
        self.kfs_device_id_override = int(self.get_parameter('kfs_device_id').value)

    @staticmethod
    def _default_config_path() -> str:
        try:
            return os.path.join(get_package_share_directory('r2_odrive'), 'config', 'config.json')
        except PackageNotFoundError:
            pass
        return os.path.abspath(
            os.path.join(os.path.dirname(__file__), '..', 'config', 'config.json')
        )

    def _build_kfs_joint_mapping_and_device_id(self) -> tuple[Dict[str, str], int]:
        default_mapping = {
            'Revolute 2': 'kfs_yaw_cmd',
            'Revolute 5': 'kfs_roll_cmd',
            'Slider 6': 'kfs_x_cmd',
        }
        default_device_id = 0
        topic_by_key: Dict[str, str] = {}
        try:
            with open(self.config_path, 'r', encoding='utf-8') as f:
                config = json.load(f)
            config_device_id = int(config.get('device_id', default_device_id))
            for message in config.get('transmission_messages', []):
                name = message.get('name', '')
                if not isinstance(name, str) or not name.endswith('_cmd'):
                    continue
                lowered = name.lower()
                if 'yaw' in lowered:
                    topic_by_key['yaw'] = name
                elif 'roll' in lowered:
                    topic_by_key['roll'] = name
                elif '_x_' in lowered or lowered.startswith('x_') or lowered.endswith('_x_cmd'):
                    topic_by_key['x'] = name
        except (OSError, json.JSONDecodeError, TypeError) as e:
            self.get_logger().warn(
                f'Failed to read config_path={self.config_path}, fallback to default cmd topics: {e}'
            )
            if self.kfs_device_id_override >= 0:
                return default_mapping, self.kfs_device_id_override
            return default_mapping, default_device_id

        mapping = {
            'Revolute 2': topic_by_key.get('yaw', default_mapping['Revolute 2']),
            'Revolute 5': topic_by_key.get('roll', default_mapping['Revolute 5']),
            'Slider 6': topic_by_key.get('x', default_mapping['Slider 6']),
        }

        missing_keys = [k for k in ('yaw', 'roll', 'x') if k not in topic_by_key]
        if missing_keys:
            self.get_logger().warn(
                'config.json の transmission_messages から一部の cmd topic を特定できなかったため、'
                f'既定値を併用します: missing={missing_keys}'
            )
        device_id = self.kfs_device_id_override if self.kfs_device_id_override >= 0 else config_device_id
        return mapping, device_id

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
        self._publish_kfs_cmds(msg, name_to_index)

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

    def _publish_kfs_cmds(self, msg: JointState, name_to_index: Dict[str, int]) -> None:
        for joint_name, topic_name in self.kfs_joint_to_topic.items():
            index = name_to_index.get(joint_name)
            if index is None:
                if not self._missing_joint_log.get(joint_name):
                    self.get_logger().warn(f'JointState に {joint_name} が見つかりません')
                    self._missing_joint_log[joint_name] = True
                continue

            value = self._get_value(msg.position, index)
            converted_value = self._convert_kfs_cmd_value(joint_name, value)
            self.kfs_publishers[topic_name].publish(converted_value)

    def _convert_kfs_cmd_value(self, joint_name: str, value: float) -> float:
        """JointState 値 → kfs_*_cmd 変換（係数テーブル編集で調整）"""
        coeffs = KFS_CMD_COEFFICIENTS.get(joint_name, {'scale': 1.0, 'offset': 0.0})
        scale = float(coeffs.get('scale', 1.0))
        offset = float(coeffs.get('offset', 0.0))
        return value * scale + offset


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
