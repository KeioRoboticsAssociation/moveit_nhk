#!/usr/bin/env python3
"""
Subscribe to r and publish a JointTrajectory command.
"""

from typing import List

import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32
from trajectory_msgs.msg import JointTrajectory, JointTrajectoryPoint
from builtin_interfaces.msg import Duration


class RtzToJointTrajectory(Node):
    def __init__(self) -> None:
        super().__init__('rtz_to_joint_trajectory')

        self._declare_parameters()
        self._load_parameters()

        self.publisher = self.create_publisher(
            JointTrajectory,
            self.output_topic,
            10,
        )
        self.subscription = self.create_subscription(
            Float32,
            self.input_topic,
            self._callback,
            10,
        )

        self.get_logger().info(
            f'Listening on {self.input_topic} and publishing to {self.output_topic}'
        )
        self.get_logger().info(
            f'Joint order: {self.joint_names}'
        )

    def _declare_parameters(self) -> None:
        self.declare_parameter('input_topic', '/r_cmd')
        self.declare_parameter('output_topic', '/arm_controller/joint_trajectory')
        self.declare_parameter(
            'joint_names',
            ['Slider 1', 'Revolute 2', 'Revolute 3', 'Slider 4', 'Slider 5'],
        )
        self.declare_parameter('joint_name_r', 'Slider 4')
        self.declare_parameter('joint_name_theta', 'Revolute 2')
        self.declare_parameter('duration_sec', 0.5)

    def _load_parameters(self) -> None:
        self.input_topic = self.get_parameter('input_topic').value
        self.output_topic = self.get_parameter('output_topic').value
        self.joint_names: List[str] = [
            name for name in self.get_parameter('joint_names').value if name
        ]
        self.joint_name_r = self.get_parameter('joint_name_r').value
        self.joint_name_theta = self.get_parameter('joint_name_theta').value
        self.duration_sec = float(self.get_parameter('duration_sec').value)

    def _callback(self, msg: Float32) -> None:
        r_value = float(msg.data)
        theta_value = 0.0
        positions = []
        for name in self.joint_names:
            if name == self.joint_name_r:
                positions.append(r_value)
            elif name == self.joint_name_theta:
                positions.append(theta_value)
            else:
                positions.append(0.0)

        point = JointTrajectoryPoint()
        point.positions = positions
        point.time_from_start = self._duration_from_seconds(self.duration_sec)

        traj = JointTrajectory()
        traj.joint_names = self.joint_names
        traj.points = [point]

        self.publisher.publish(traj)

    @staticmethod
    def _duration_from_seconds(seconds: float) -> Duration:
        sec = int(seconds)
        nanosec = int((seconds - sec) * 1_000_000_000)
        return Duration(sec=sec, nanosec=nanosec)


def main(args=None):
    rclpy.init(args=args)
    node = None
    try:
        node = RtzToJointTrajectory()
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        if node:
            node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
