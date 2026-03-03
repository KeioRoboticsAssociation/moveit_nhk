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
import struct
from ament_index_python.packages import PackageNotFoundError, get_package_share_directory
from rclpy.node import Node
from rclpy.qos import QoSProfile, QoSHistoryPolicy, QoSReliabilityPolicy
from sensor_msgs.msg import JointState
from rogidrive_msg.msg import RogidriveMessage
from trajectory_msgs.msg import JointTrajectory
from rogilink_flex_interfaces.msg import Frame
from rogilink_flex_lib import Publisher

# JointState -> kfs_*_cmd 変換係数
# 使い方: value_out = value_in * scale + offset
KFS_CMD_COEFFICIENTS = {
    'Revolute 1_1': {'scale': 78.995 , 'offset': 0.0},  # kfs_yaw_cmd
    'Revolute 1_4': {'scale': 1.0, 'offset': 0.0},  # kfs_roll_cmd
    'Slider 1_3': {'scale': 1.0, 'offset': 0.0},    # kfs_x_cmd
}
KFS_CMD_CHANGE_EPSILON = 1.0e-6


class ODriveControllerNode(Node):
    """JointState から RogidriveMessage へ変換する ROS2 ノード"""

    def __init__(self) -> None:
        super().__init__('odrive_controller_node')

        self._declare_parameters()
        self._load_parameters()

        self._missing_joint_log: Dict[str, bool] = {}
        self._last_kfs_cmd_values: Dict[str, float] = {}
        # Stores exact values sent to each topic for resending
        self._last_sent_frames: Dict[str, float] = {}
        self.kfs_joint_to_topic, self.kfs_device_id = self._build_kfs_joint_mapping_and_device_id()

        # Robust Communication State
        self.waiting_for_ack = False
        self.retry_count = 0
        self.MAX_RETRIES = 3

        self.command_publisher = self.create_publisher(
            RogidriveMessage,
            self.odrive_cmd_topic,
            10,
        )
        self.rogidrive_cmd_publisher = self.create_publisher(
            RogidriveMessage,
            self.rogidrive_cmd_topic,
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
        self.joint_trajectory_subscription = self.create_subscription(
            JointTrajectory,
            self.trajectory_topic,
            self.joint_trajectory_callback,
            10,
        )

        if self.kfs_ack_from_pc_topic:
             self.ack_publisher = self.create_publisher(
                 Frame,
                 f'rogilink_transmission/{self.kfs_ack_from_pc_topic}',
                 10
             )

        if self.kfs_ack_from_micro_topic:
            self.create_subscription(
                Frame,
                f'rogilink_reception/{self.kfs_ack_from_micro_topic}',
                self.on_ack_received,
                10
            )
        
        if self.kfs_reached_from_micro_topic:
            self.create_subscription(
                Frame,
                f'rogilink_reception/{self.kfs_reached_from_micro_topic}',
                self.on_reached_received,
                10
            )

        self.get_logger().info(
            f'Listening on {self.joint_state_topic} and {self.trajectory_topic}, publishing to {self.odrive_cmd_topic}'
        )
        if self.joint_names:
            self.get_logger().info(f'Configured joint order: {self.joint_names}')
        self.get_logger().info(
            'Configured kfs command mapping: '
            + ', '.join([f'{joint}->{topic}' for joint, topic in self.kfs_joint_to_topic.items()])
        )
        self.get_logger().info(f'Configured kfs device_id: {self.kfs_device_id}')
        self.get_logger().info(f'Robust Comm: Ack(Micro->PC): {self.kfs_ack_from_micro_topic}, Reached: {self.kfs_reached_from_micro_topic}, Ack(PC->Micro): {self.kfs_ack_from_pc_topic}')

    def _declare_parameters(self) -> None:
        self.declare_parameter('joint_state_topic', '/joint_states')
        self.declare_parameter('trajectory_topic', '/joint_trajectory')
        self.declare_parameter('odrive_cmd_topic', '/odrive_cmd')
        self.declare_parameter('rogidrive_cmd_topic', '/rogidrive_cmd')
        # Default to Slider 1 -> index 0, Slider 3 -> index 1 ordering.
        self.declare_parameter('joint_names', ['Slider 1_2'])
        self.declare_parameter('default_mode', 3)
        self.declare_parameter('config_path', self._default_config_path())
        self.declare_parameter('kfs_device_id', -1)
        self.declare_parameter(
            'joint_to_topic_map',
            [
                'Revolute 1_1:kfs_yaw_cmd',
                'Revolute 1_4:kfs_roll_cmd',
                'Slider 1_3:kfs_x_cmd',
            ],
        )
        self.declare_parameter('rogilink_name_ack_from_micro', 'kfs_status')
        self.declare_parameter('rogilink_name_reached_from_micro', 'kfs_is_reached')
        self.declare_parameter('rogilink_name_ack_from_pc', 'kfs_ack_from_pc')
        self.declare_parameter('rogilink_id_ack_from_pc', 4)

    def _load_parameters(self) -> None:
        self.joint_state_topic = self.get_parameter('joint_state_topic').value
        self.trajectory_topic = self.get_parameter('trajectory_topic').value
        self.odrive_cmd_topic = self.get_parameter('odrive_cmd_topic').value
        self.rogidrive_cmd_topic = self.get_parameter('rogidrive_cmd_topic').value
        raw_joint_names = self.get_parameter('joint_names').value
        self.joint_names: List[str] = [name for name in raw_joint_names if name]
        self.default_mode = int(self.get_parameter('default_mode').value)
        self.config_path = self.get_parameter('config_path').value
        self.kfs_device_id_override = int(self.get_parameter('kfs_device_id').value)
        raw_joint_to_topic = self.get_parameter('joint_to_topic_map').value
        self.joint_to_topic_map = self._parse_joint_to_topic_map(raw_joint_to_topic)
        self.kfs_ack_from_micro_topic = self.get_parameter('rogilink_name_ack_from_micro').value
        self.kfs_reached_from_micro_topic = self.get_parameter('rogilink_name_reached_from_micro').value
        self.kfs_ack_from_pc_topic = self.get_parameter('rogilink_name_ack_from_pc').value
        self.kfs_ack_from_pc_id = self.get_parameter('rogilink_id_ack_from_pc').value

    @staticmethod
    def _parse_joint_to_topic_map(raw_values: List[str]) -> Dict[str, str]:
        result: Dict[str, str] = {}
        for item in raw_values:
            if not isinstance(item, str) or ':' not in item:
                continue
            joint_name, topic_name = item.split(':', 1)
            joint_name = joint_name.strip()
            topic_name = topic_name.strip()
            if joint_name and topic_name:
                result[joint_name] = topic_name
        return result

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
            'Revolute 1_1': 'kfs_yaw_cmd',
            'Revolute 1_4': 'kfs_roll_cmd',
            'Slider 1_3': 'kfs_x_cmd',
        }
        default_device_id = 0
        config_topic_names: List[str] = []
        try:
            with open(self.config_path, 'r', encoding='utf-8') as f:
                config = json.load(f)
            config_device_id = int(config.get('device_id', default_device_id))
            for message in config.get('transmission_messages', []):
                name = message.get('name', '')
                if not isinstance(name, str) or not name:
                    continue
                config_topic_names.append(name)
        except (OSError, json.JSONDecodeError, TypeError) as e:
            self.get_logger().warn(
                f'Failed to read config_path={self.config_path}, fallback to default cmd topics: {e}'
            )
            if self.kfs_device_id_override >= 0:
                return default_mapping, self.kfs_device_id_override
            return default_mapping, default_device_id

        mapping = dict(default_mapping)
        mapping.update(self.joint_to_topic_map)

        config_topic_set = set(config_topic_names)
        invalid_pairs = [f'{joint}->{topic}' for joint, topic in mapping.items() if topic not in config_topic_set]
        if invalid_pairs:
            self.get_logger().warn(
                'joint_to_topic_map の一部が config.json transmission_messages に存在しません: '
                + ', '.join(invalid_pairs)
            )
            if config_topic_names:
                self.get_logger().warn(
                    'available transmission topic names: ' + ', '.join(config_topic_names)
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

    def joint_trajectory_callback(self, msg: JointTrajectory) -> None:
        if not msg.joint_names or not msg.points:
            return

        final_point = msg.points[-1]
        if not final_point.positions:
            return

        name_to_index = {name: idx for idx, name in enumerate(msg.joint_names)}
        self.get_logger().info(f'Received /joint_trajectory with {len(msg.points)} points. Last point positions: {final_point.positions}')
        self._publish_kfs_cmds(final_point.positions, name_to_index)

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
        if joint_name in ('Slider1_2', 'Slider 1_2'):
            return -position * 100.0
        return position

    def _convert_velocity(self, joint_name: str, velocity: float) -> float:
        """速度 [rad/s] → ODrive の回転速度 [turn/s] への変換を書く場所"""
        return velocity

    def _convert_current(self, joint_name: str, effort: float) -> float:
        """effort → 電流[A] への変換を書く場所"""
        return effort

    def _publish_kfs_cmds(self, positions: List[float], name_to_index: Dict[str, int]) -> None:
        for joint_name, topic_name in self.kfs_joint_to_topic.items():
            index = name_to_index.get(joint_name)
            if index is None:
                if not self._missing_joint_log.get(joint_name):
                    self.get_logger().warn(f'JointState に {joint_name} が見つかりません')
                    self._missing_joint_log[joint_name] = True
                continue

            value = self._get_value(positions, index)
            converted_value = self._convert_kfs_cmd_value(joint_name, value)
            if self._should_publish_kfs_cmd(topic_name, converted_value):
                # Only publish if value changed Significantly, OR if we want to ensure robust delivery
                # For robust delivery (MoveRack style), we might want to send anyway if we haven't received ack?
                # But here we stick to "change detection" to avoid spamming, relying on resend logic for robustness.
                self.kfs_publishers[topic_name].publish(converted_value)
                self.get_logger().info(f'Published to {topic_name}: {converted_value:.4f} (from joint {joint_name})')
                self._last_kfs_cmd_values[topic_name] = converted_value
                # Update last sent frame for resending
                self._last_sent_frames[topic_name] = converted_value
                self.waiting_for_ack = True
                self.retry_count = 0

                # /rogidrive_cmd にも同じ目標値をパブリッシュ
                # name フィールドに kfs トピック名（kfs_yaw_cmd 等）を使用
                rogi_msg = RogidriveMessage()
                rogi_msg.name = topic_name
                rogi_msg.mode = 3  # POSITION_CONTROL
                rogi_msg.vel = 0.0
                rogi_msg.pos = converted_value
                rogi_msg.current = 0.0
                self.rogidrive_cmd_publisher.publish(rogi_msg)
                self.get_logger().info(
                    f'Published to {self.rogidrive_cmd_topic}: name={topic_name}, pos={converted_value:.4f}'
                )
        
        # If we sent anything (waiting_for_ack is True), we might want to trigger a check/resend timer?
        # MoveRackNode relies on nack to trigger resend. We will do the same.

    def _convert_kfs_cmd_value(self, joint_name: str, value: float) -> float:
        """JointState 値 → kfs_*_cmd 変換（係数テーブル編集で調整）"""
        coeffs = KFS_CMD_COEFFICIENTS.get(joint_name, {'scale': 1.0, 'offset': 0.0})
        scale = float(coeffs.get('scale', 1.0))
        offset = float(coeffs.get('offset', 0.0))
        return value * scale + offset

    def _should_publish_kfs_cmd(self, topic_name: str, value: float) -> bool:
        last = self._last_kfs_cmd_values.get(topic_name)
        if last is None:
            return True
        return abs(value - last) > KFS_CMD_CHANGE_EPSILON

    def on_ack_received(self, msg: Frame) -> None:
        """Handle ACK/NACK from Microcontroller"""
        try:
            status_str = bytes(msg.data).decode('utf-8').rstrip('\x00')
        except Exception:
            return

        if 'ack' in status_str:
            if self.waiting_for_ack:
                self.waiting_for_ack = False
                self.retry_count = 0
                self.get_logger().debug('ACK received.')
        elif 'nack' in status_str:
            if self.retry_count < self.MAX_RETRIES:
                self.retry_count += 1
                self.get_logger().warn(f'NACK received. Retrying... ({self.retry_count}/{self.MAX_RETRIES})')
                self._resend_latest_commands()
            else:
                self.get_logger().error('NACK received. Max retries reached.')
                self.waiting_for_ack = False

    def _resend_latest_commands(self) -> None:
        """Resend the last sent commands for all mapped joints"""
        for topic_name, value in self._last_sent_frames.items():
            if topic_name in self.kfs_publishers:
                self.kfs_publishers[topic_name].publish(value)

    def on_reached_received(self, msg: Frame) -> None:
        """Handle reached signal and send handshake ACK"""
        # If we receive reached signal, send ACK back to PC (Handshake)
        # MoveRackNode logic: on reached, send "ack" string to rogilink_name_ack_from_pc_
        if self.ack_publisher:
            frame = Frame()
            frame.device_id = self.kfs_device_id_override if self.kfs_device_id_override >= 0 else self.kfs_device_id
            frame.frame_id = self.kfs_ack_from_pc_id
            ack_str = b"ack"
            frame.data = [int(b) for b in ack_str]
            self.ack_publisher.publish(frame)
            # self.get_logger().info('Sent Handshake ACK to Micro')


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
