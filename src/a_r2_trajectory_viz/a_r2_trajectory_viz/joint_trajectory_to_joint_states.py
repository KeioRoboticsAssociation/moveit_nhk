#!/usr/bin/env python3

from bisect import bisect_right
from dataclasses import dataclass
from typing import Dict, List, Optional

import rclpy
from rclpy.duration import Duration
from rclpy.node import Node
from sensor_msgs.msg import JointState
from trajectory_msgs.msg import JointTrajectory, JointTrajectoryPoint


@dataclass
class ActiveTrajectory:
    names: List[str]
    points: List[JointTrajectoryPoint]
    start_ns: int


class JointTrajectoryToJointStates(Node):
    def __init__(self) -> None:
        super().__init__("joint_trajectory_to_joint_states")

        self.declare_parameter("trajectory_topic", "/joint_trajectory")
        self.declare_parameter("joint_states_topic", "/joint_states")
        self.declare_parameter("publish_rate", 50.0)
        self.declare_parameter(
            "default_joint_names",
            ["Slider 1", "Revolute 2", "Revolute 3", "Slider 4", "Slider 5"],
        )

        trajectory_topic = self.get_parameter("trajectory_topic").get_parameter_value().string_value
        joint_states_topic = self.get_parameter("joint_states_topic").get_parameter_value().string_value
        self.publish_rate = self.get_parameter("publish_rate").get_parameter_value().double_value
        default_joint_names = (
            self.get_parameter("default_joint_names").get_parameter_value().string_array_value
        )

        self.joint_order: List[str] = list(default_joint_names)
        self.current_positions: Dict[str, float] = {name: 0.0 for name in self.joint_order}
        self.active_traj: Optional[ActiveTrajectory] = None

        self.joint_state_pub = self.create_publisher(JointState, joint_states_topic, 10)
        self.create_subscription(JointTrajectory, trajectory_topic, self.on_trajectory, 10)

        period = 1.0 / self.publish_rate if self.publish_rate > 0.0 else 0.02
        self.create_timer(period, self.on_timer)

        self.get_logger().info(
            f"Listening on '{trajectory_topic}', publishing JointState on '{joint_states_topic}' at {1.0 / period:.1f} Hz"
        )

    def on_trajectory(self, msg: JointTrajectory) -> None:
        if not msg.joint_names:
            self.get_logger().warn("Received JointTrajectory with empty joint_names, ignored.")
            return
        if not msg.points:
            self.get_logger().warn("Received JointTrajectory with no points, ignored.")
            return

        if not self.joint_order:
            self.joint_order = list(msg.joint_names)
        for name in msg.joint_names:
            if name not in self.current_positions:
                self.current_positions[name] = 0.0
                self.joint_order.append(name)

        start_ns = self.get_clock().now().nanoseconds
        if msg.header.stamp.sec != 0 or msg.header.stamp.nanosec != 0:
            stamp_ns = msg.header.stamp.sec * 1_000_000_000 + msg.header.stamp.nanosec
            now_ns = self.get_clock().now().nanoseconds
            if stamp_ns > now_ns:
                start_ns = stamp_ns

        self.active_traj = ActiveTrajectory(names=list(msg.joint_names), points=list(msg.points), start_ns=start_ns)

    def on_timer(self) -> None:
        if self.active_traj is not None:
            self._update_from_active_trajectory()
        self._publish_joint_states()

    def _update_from_active_trajectory(self) -> None:
        assert self.active_traj is not None
        traj = self.active_traj
        now_ns = self.get_clock().now().nanoseconds
        elapsed = max(0.0, (now_ns - traj.start_ns) / 1_000_000_000.0)

        time_list = [self._point_time(p) for p in traj.points]
        idx = bisect_right(time_list, elapsed)

        if idx <= 0:
            self._apply_point(traj.names, traj.points[0])
            return
        if idx >= len(traj.points):
            self._apply_point(traj.names, traj.points[-1])
            return

        p0 = traj.points[idx - 1]
        p1 = traj.points[idx]
        t0 = self._point_time(p0)
        t1 = self._point_time(p1)
        if t1 <= t0:
            self._apply_point(traj.names, p1)
            return

        ratio = (elapsed - t0) / (t1 - t0)
        for i, name in enumerate(traj.names):
            if i >= len(p0.positions) or i >= len(p1.positions):
                continue
            self.current_positions[name] = p0.positions[i] + ratio * (p1.positions[i] - p0.positions[i])

    def _apply_point(self, names: List[str], point: JointTrajectoryPoint) -> None:
        for i, name in enumerate(names):
            if i < len(point.positions):
                self.current_positions[name] = point.positions[i]

    def _publish_joint_states(self) -> None:
        msg = JointState()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = list(self.joint_order)
        msg.position = [self.current_positions.get(name, 0.0) for name in self.joint_order]
        self.joint_state_pub.publish(msg)

    @staticmethod
    def _point_time(point: JointTrajectoryPoint) -> float:
        return float(Duration.from_msg(point.time_from_start).nanoseconds) / 1_000_000_000.0


def main(args=None) -> None:
    rclpy.init(args=args)
    node = JointTrajectoryToJointStates()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        # In ros2 launch shutdown, the context can already be closed.
        if rclpy.ok():
            rclpy.shutdown()


if __name__ == "__main__":
    main()
