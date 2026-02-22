#!/usr/bin/env python3

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare


def generate_launch_description() -> LaunchDescription:
    ld = LaunchDescription()

    default_rviz = PathJoinSubstitution([FindPackageShare("urdf_launch"), "config", "urdf.rviz"])

    ld.add_action(DeclareLaunchArgument("trajectory_topic", default_value="/joint_trajectory"))
    ld.add_action(DeclareLaunchArgument("rviz_config", default_value=default_rviz))

    # Mirror urdf_tutorial behavior: let urdf_launch handle robot_description + robot_state_publisher.
    ld.add_action(
        IncludeLaunchDescription(
            PathJoinSubstitution([FindPackageShare("urdf_launch"), "launch", "description.launch.py"]),
            launch_arguments={
                "urdf_package": "r2_v5_02_09-2_description",
                "urdf_package_path": "urdf/r2_v5_02_09-2.urdf",
            }.items(),
        )
    )

    ld.add_action(
        Node(
            package="a_r2_trajectory_viz",
            executable="joint_trajectory_to_joint_states",
            name="joint_trajectory_to_joint_states",
            output="screen",
            parameters=[
                {
                    "trajectory_topic": LaunchConfiguration("trajectory_topic"),
                    "joint_states_topic": "/joint_states",
                    "publish_rate": 50.0,
                    "default_joint_names": [
                        "Revolute 1_1",
                        "Slider 1_2",
                        "Slider 1_3",
                        "Revolute 1_4",
                        "Revolute 2_1",
                        "Revolute 2_2",
                    ],
                }
            ],
        )
    )

    ld.add_action(
        Node(
            package="rviz2",
            executable="rviz2",
            name="rviz2",
            output="screen",
            arguments=["-d", LaunchConfiguration("rviz_config")],
        )
    )
    return ld
