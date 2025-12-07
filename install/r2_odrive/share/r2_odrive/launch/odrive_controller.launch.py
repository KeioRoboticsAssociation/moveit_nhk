#!/usr/bin/env python3
"""
Launch file for ODrive Controller Node

Launches the ODrive controller node with configuration from YAML file.
"""

from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():
    # Get package share directory
    pkg_share = FindPackageShare('r2_odrive')

    # Path to config file
    config_file = PathJoinSubstitution([
        pkg_share,
        'config',
        'odrive_config.yaml'
    ])

    # Declare launch arguments
    declare_config_arg = DeclareLaunchArgument(
        'config_file',
        default_value=config_file,
        description='Path to ODrive configuration YAML file'
    )

    # ODrive Controller Node
    odrive_controller_node = Node(
        package='r2_odrive',
        executable='odrive_controller_node',
        name='odrive_controller_node',
        output='screen',
        parameters=[LaunchConfiguration('config_file')],
        # Enable debug logging if needed
        # arguments=['--ros-args', '--log-level', 'debug']
    )

    return LaunchDescription([
        declare_config_arg,
        odrive_controller_node,
    ])
