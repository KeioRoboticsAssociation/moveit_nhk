from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description():
    return LaunchDescription([
        DeclareLaunchArgument(
            'config_path',
            default_value='',
            description='Path to ODrive configuration JSON file'
        ),

        Node(
            package='rogidrive',
            executable='rogidrive',
            name='rogidrive',
            output='screen',
            parameters=[{
                'config_path': LaunchConfiguration('config_path')
            }]
        ),
    ])
