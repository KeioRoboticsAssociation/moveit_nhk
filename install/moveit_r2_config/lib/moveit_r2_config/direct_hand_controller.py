#!/usr/bin/env python3

import math
from typing import Dict, Optional

import rclpy
from builtin_interfaces.msg import Duration
from geometry_msgs.msg import Vector3
from rclpy.duration import Duration as RclpyDuration
from rclpy.node import Node
from rclpy.time import Time
from sensor_msgs.msg import JointState
from std_msgs.msg import Header
from tf2_ros import Buffer, TransformException, TransformListener
from trajectory_msgs.msg import JointTrajectory, JointTrajectoryPoint


class DirectHandController(Node):
    """Publish joint commands based on desired link5_1 offsets without MoveIt."""

    def __init__(self) -> None:
        super().__init__("direct_hand_controller")

        self.topic_name: str = (
            self.declare_parameter("topic_name", "/move_hand")
            .get_parameter_value()
            .string_value
        )
        self.controller_topic: str = (
            self.declare_parameter("controller_topic", "/arm_controller/joint_trajectory")
            .get_parameter_value()
            .string_value
        )
        self.tip_link: str = (
            self.declare_parameter("tip_link", "link5_1").get_parameter_value().string_value
        )
        self.base_frame: str = (
            self.declare_parameter("base_frame", "base_link").get_parameter_value().string_value
        )
        self.radius_epsilon: float = (
            self.declare_parameter("radius_epsilon", 1e-3).get_parameter_value().double_value
        )

        self.tf_buffer = Buffer()
        self.tf_listener = TransformListener(self.tf_buffer, self)

        self.initial_tip_logged = False
        self.warned_missing_transform = False
        self.initial_tip_timer = self.create_timer(1.0, self._try_log_initial_tip_pose)

        self.joint_state_sub = self.create_subscription(
            JointState, "/joint_states", self._joint_state_callback, 10
        )
        self.command_sub = self.create_subscription(
            Vector3, self.topic_name, self._command_callback, 10
        )
        self.publisher = self.create_publisher(JointTrajectory, self.controller_topic, 10)

        self.current_positions: Dict[str, float] = {}
        self.initial_positions: Optional[Dict[str, float]] = None

        self.joint_names = ["Slider 1", "Revolute 2", "Revolute 3", "Slider 4", "Slider 5"]
        self.get_logger().info(
            f"Direct control listening to {self.topic_name} and publishing to {self.controller_topic}"
        )

    def _try_log_initial_tip_pose(self) -> None:
        if self.initial_tip_logged:
            self.initial_tip_timer.cancel()
            return
        try:
            transform = self.tf_buffer.lookup_transform(
                self.base_frame,
                self.tip_link,
                Time(),
                timeout=RclpyDuration(seconds=0.5),
            )
        except TransformException as exc:
            if not self.warned_missing_transform:
                self.get_logger().warn(
                    f"Waiting for transform {self.base_frame}->{self.tip_link}: {exc}"
                )
                self.warned_missing_transform = True
            return

        translation = transform.transform.translation
        self.initial_tip_logged = True
        self.get_logger().info(
            f"Initial {self.tip_link} pose relative to {self.base_frame}: "
            f"x={translation.x:.4f}, y={translation.y:.4f}, z={translation.z:.4f}"
        )
        self.initial_tip_timer.cancel()

    def _joint_state_callback(self, msg: JointState) -> None:
        for name, position in zip(msg.name, msg.position):
            if name in self.joint_names:
                self.current_positions[name] = position

        if self.initial_positions is None and all(
            joint in self.current_positions for joint in ["Slider 1", "Revolute 2", "Slider 4"]
        ):
            self.initial_positions = {
                joint: self.current_positions[joint] for joint in ["Slider 1", "Revolute 2", "Slider 4"]
            }
            self.get_logger().info(
                "Captured initial joint positions: "
                + ", ".join(f"{j}={self.initial_positions[j]:.4f}" for j in self.initial_positions)
            )

    def _command_callback(self, msg: Vector3) -> None:
        if self.initial_positions is None or len(self.current_positions) < len(self.joint_names):
            self.get_logger().warn("Joint states not ready yet; skipping command.")
            return

        target_positions = dict(self.current_positions)

        if abs(msg.y) < self.radius_epsilon:
            target_positions["Slider 1"] = self.initial_positions["Slider 1"] + msg.z
            target_positions["Slider 4"] = self.initial_positions["Slider 4"]
            target_positions["Revolute 2"] = self.initial_positions["Revolute 2"]
        else:
            radius = math.sqrt(msg.y * msg.y + msg.z * msg.z)
            angle = math.atan2(msg.z, msg.y)
            target_positions["Slider 4"] = self.initial_positions["Slider 4"] + radius
            target_positions["Revolute 2"] = self.initial_positions["Revolute 2"] + angle

        point = JointTrajectoryPoint()
        point.positions = [
            target_positions.get("Slider 1", 0.0),
            target_positions.get("Revolute 2", 0.0),
            target_positions.get("Revolute 3", 0.0),
            target_positions.get("Slider 4", 0.0),
            target_positions.get("Slider 5", 0.0),
        ]
        point.time_from_start = Duration(sec=1, nanosec=0)

        traj = JointTrajectory()
        traj.header = Header()
        traj.header.stamp = self.get_clock().now().to_msg()
        traj.joint_names = self.joint_names
        traj.points.append(point)

        self.publisher.publish(traj)
        self.get_logger().info(
            f"Commanded joints -> Slider1:{point.positions[0]:.4f}, "
            f"Revolute2:{point.positions[1]:.4f}, Slider4:{point.positions[3]:.4f}"
        )


def main() -> None:
    rclpy.init()
    node = DirectHandController()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
