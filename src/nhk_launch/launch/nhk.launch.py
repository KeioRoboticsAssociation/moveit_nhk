#!/usr/bin/env python3

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare


def generate_launch_description() -> LaunchDescription:
    config_path_arg = DeclareLaunchArgument(
        "config_path",
        default_value="/home/a/ws_nhk/src/r2_odrive/config/config.json",
        description="Path to rogilink_flex_gui config json",
    )
    rogidrive_config_path_arg = DeclareLaunchArgument(
        "rogidrive_config_path",
        default_value="/home/a/ws_nhk/src/r2_odrive/config/odrive_config.json",
        description="Path to rogidrive config json",
    )

    trajectory_viz_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            PathJoinSubstitution(
                [
                    FindPackageShare("a_r2_trajectory_viz"),
                    "launch",
                    "a_r2_trajectory_viz.launch.py",
                ]
            )
        )
    )

    rtz_to_joint_trajectory_node = Node(
        package="r2_odrive",
        executable="rtz_to_joint_trajectory",
        output="screen",
        parameters=[{"duration_sec": 2.0}],
    )

    odrive_controller_node = Node(
        package="r2_odrive",
        executable="odrive_controller_node",
        output="screen",
    )

    rogidrive_node = Node(
        package="rogidrive",
        executable="rogidrive",
        output="screen",
        parameters=[{"config_path": LaunchConfiguration("rogidrive_config_path")}],
    )

    rogilink_flex_gui_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            PathJoinSubstitution(
                [FindPackageShare("rogilink_flex_gui"), "gui.launch.py"]
            )
        ),
        launch_arguments={"config_path": LaunchConfiguration("config_path")}.items(),
    )

    path_index_action_server_node = Node(
        package="nhk_bt",
        executable="path_index_action_server",
        output="screen",
    )

    path_index_gui_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            PathJoinSubstitution(
                [FindPackageShare("nhk_bt"), "launch", "path_index_gui.launch.py"]
            )
        )
    )

    return LaunchDescription(
        [
            config_path_arg,
            rogidrive_config_path_arg,
            trajectory_viz_launch,
            rtz_to_joint_trajectory_node,
            odrive_controller_node,
            rogidrive_node,
            rogilink_flex_gui_launch,
            path_index_action_server_node,
            path_index_gui_launch,
        ]
    )
