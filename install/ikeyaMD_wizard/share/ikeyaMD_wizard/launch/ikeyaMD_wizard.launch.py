#!/usr/bin/env python3

import os
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, ExecuteProcess
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare, FindPackagePrefix
from ament_index_python.packages import get_package_share_directory


def generate_launch_description():
    """Generate launch description for ikeyaMD Wizard"""

    # Get package directories
    ikeyaMD_wizard_dir = get_package_share_directory('ikeyaMD_wizard')

    # NOTE: MAVLink UDP interface should be launched separately
    # Run: ros2 launch stm32_mavlink_udp stm32_udp.launch.py
    # The wizard will connect to the /rs485motor/read_request and /rs485motor/write_request topics

    # ikeyaMD Wizard GUI Node
    ikeyaMD_wizard_gui_node = ExecuteProcess(
        cmd=['python3', PathJoinSubstitution([
            FindPackagePrefix('ikeyaMD_wizard'),
            'lib',
            'ikeyaMD_wizard',
            'ikeyaMD_wizard_gui.py'
        ])],
        name='ikeyaMD_wizard_gui',
        output='screen'
    )

    return LaunchDescription([
        ikeyaMD_wizard_gui_node,
    ])
