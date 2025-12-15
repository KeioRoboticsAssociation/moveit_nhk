#!/usr/bin/env python3

import sys
from typing import Optional

import moveit_commander
import rclpy
from geometry_msgs.msg import Pose, Vector3
from moveit_commander import MoveGroupCommander
from rclpy.node import Node
from tf_transformations import quaternion_matrix


class MoveHandNode(Node):
    """Apply relative end-effector shifts received on /move_hand."""

    def __init__(self) -> None:
        super().__init__("move_hand_node")

        self.group_name: str = (
            self.declare_parameter("group_name", "arm_with_hand").get_parameter_value().string_value
        )
        self.tip_link: str = (
            self.declare_parameter("tip_link", "link5_1").get_parameter_value().string_value
        )
        topic_name: str = (
            self.declare_parameter("topic_name", "/move_hand").get_parameter_value().string_value
        )

        self.move_group: Optional[MoveGroupCommander] = None
        try:
            self.move_group = MoveGroupCommander(self.group_name)
        except RuntimeError as err:
            self.get_logger().error(f"MoveGroupCommander init failed: {err}")
            raise

        self.move_group.set_end_effector_link(self.tip_link)

        self.create_subscription(Vector3, topic_name, self._move_hand_callback, 10)
        self.get_logger().info(
            f"Listening for Vector3 commands on {topic_name} to move {self.tip_link} of {self.group_name}"
        )

    def destroy_node(self) -> bool:
        if self.move_group:
            self.move_group.stop()
            self.move_group.clear_pose_targets()
        return super().destroy_node()

    def _move_hand_callback(self, msg: Vector3) -> None:
        if not self.move_group:
            self.get_logger().error("Move group is not initialized.")
            return

        current_pose = self.move_group.get_current_pose(self.tip_link).pose
        target_pose = Pose()
        target_pose.orientation = current_pose.orientation

        relative = [msg.x, msg.y, msg.z]
        quaternion = [
            current_pose.orientation.x,
            current_pose.orientation.y,
            current_pose.orientation.z,
            current_pose.orientation.w,
        ]
        rotation_matrix = quaternion_matrix(quaternion)[:3, :3]
        world_delta = rotation_matrix.dot(relative)

        target_pose.position.x = current_pose.position.x + world_delta[0]
        target_pose.position.y = current_pose.position.y + world_delta[1]
        target_pose.position.z = current_pose.position.z + world_delta[2]

        self.move_group.set_pose_target(target_pose, self.tip_link)
        success = self.move_group.go(wait=True)
        self.move_group.stop()
        self.move_group.clear_pose_targets()

        if success:
            self.get_logger().info(
                f"Moved {self.tip_link} by relative Vector3({msg.x:.3f}, {msg.y:.3f}, {msg.z:.3f})"
            )
        else:
            self.get_logger().warn("MoveIt failed to plan/execute the requested motion.")


def main(args=None) -> None:
    rclpy.init(args=args)
    moveit_commander.roscpp_initialize(sys.argv)
    node = MoveHandNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        moveit_commander.roscpp_shutdown()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
