#!/usr/bin/env python3

import math
from typing import Dict, Optional

import rclpy
from builtin_interfaces.msg import Duration
from geometry_msgs.msg import Vector3
from rclpy.node import Node
from sensor_msgs.msg import JointState
from std_msgs.msg import Header
from trajectory_msgs.msg import JointTrajectory, JointTrajectoryPoint


class DirectArmController(Node):
    """シンプルにジョイント目標をパブリッシュするだけのノード。MoveIt を通さない。"""

    def __init__(self) -> None:
        super().__init__("direct_arm_controller")

        self.topic_name: str = (
            self.declare_parameter("topic_name", "/move_arm")
            .get_parameter_value()
            .string_value
        )
        self.controller_topic: str = (
            self.declare_parameter("controller_topic", "/arm_controller/joint_trajectory")
            .get_parameter_value()
            .string_value
        )
        self.motion_duration: float = (
            self.declare_parameter("motion_duration", 1.0)
            .get_parameter_value()
            .double_value
        )

        # sakai_r2 のジョイント順。trajectory_msgs はこの順で送る。
        self.joint_names = ["Slider 1", "Revolute 2", "Slider 3"]

        self.current_positions: Dict[str, float] = {}
        self.initial_positions: Optional[Dict[str, float]] = None

        self.joint_state_sub = self.create_subscription(
            JointState, "/joint_states", self._joint_state_callback, 10
        )
        self.command_sub = self.create_subscription(
            Vector3, self.topic_name, self._command_callback, 10
        )
        self.publisher = self.create_publisher(JointTrajectory, self.controller_topic, 10)

        self.get_logger().info(
            f"Direct control listening to {self.topic_name} and publishing to {self.controller_topic}"
        )

    def _joint_state_callback(self, msg: JointState) -> None:
        for name, position in zip(msg.name, msg.position):
            if name in self.joint_names:
                self.current_positions[name] = position

        if self.initial_positions is None and all(
            joint in self.current_positions for joint in self.joint_names
        ):
            self.initial_positions = {joint: self.current_positions[joint] for joint in self.joint_names}
            self.get_logger().info(
                "Captured initial joint positions: "
                + ", ".join(f"{j}={self.initial_positions[j]:.4f}" for j in self.joint_names)
            )

    def _command_callback(self, msg: Vector3) -> None:
        if self.initial_positions is None or len(self.current_positions) < len(self.joint_names):
            self.get_logger().warn("Joint states not ready yet; skipping command.")
            return

        # 入力 Vector3 を「初期姿勢からのオフセット」として扱う。
        target_positions = dict(self.initial_positions)
        target_positions["Slider 1"] += msg.x
        target_positions["Revolute 2"] += msg.y
        target_positions["Slider 3"] += msg.z

        point = JointTrajectoryPoint()
        point.positions = [target_positions[name] for name in self.joint_names]
        # 過剰に時間が短いと jerk が大きくなるので適度なデフォルトを使用。
        sec = max(self.motion_duration, 0.01)
        point.time_from_start = Duration(sec=int(math.floor(sec)), nanosec=int((sec % 1) * 1e9))

        traj = JointTrajectory()
        traj.header = Header()
        traj.header.stamp = self.get_clock().now().to_msg()
        traj.joint_names = self.joint_names
        traj.points.append(point)

        self.publisher.publish(traj)
        self.get_logger().info(
            f"Commanded joints -> Slider1:{point.positions[0]:.4f}, "
            f"Revolute2:{point.positions[1]:.4f}, Slider3:{point.positions[2]:.4f}"
        )


def main() -> None:
    rclpy.init()
    node = DirectArmController()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
