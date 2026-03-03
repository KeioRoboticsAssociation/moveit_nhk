import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare

def generate_launch_description():
    log_level = LaunchConfiguration('log_level')
    log_level_arg = DeclareLaunchArgument(
        'log_level',
        default_value='info',
        description='Logging level'
    )

    # main_udp_launch = IncludeLaunchDescription(
    #     PythonLaunchDescriptionSource(
    #         PathJoinSubstitution([
    #             FindPackageShare('stm32_mavlink_udp'),
    #             'launch',
    #             'stm32_udp.launch.py'
    #         ])
    #     )
    # )

    # r2_motor_mapping_path = os.path.join(
    #     get_package_share_directory('r2_odrive'),
    #     'config',
    #     'r2_dcmotor_mapping.yaml'
    # )
    # rs485_interface2_launch = IncludeLaunchDescription(
    #     PythonLaunchDescriptionSource(
    #         PathJoinSubstitution([
    #             FindPackageShare('rs485_interface2'),
    #             'launch',
    #             'rs485_interface2.launch.py'
    #         ]),
            
    #     ),
    #     launch_arguments={
    #         'config_file_path': r2_motor_mapping_path,
    #         'log_level': log_level
    #     }.items(),
    # )

    rogilink_flex_config_path1 = os.path.join(
        get_package_share_directory('r2_odrive'),
        'config',
        'config.json'
    )
    # rogilink_flex_config_path2 = os.path.join(
    #     get_package_share_directory('r2_odrive'),
    #     'config',
    #     'rogilink_flex_config2.json'
    # )

    rogilink_flex1 = Node(
        package='rogilink_flex',
        executable='rogilink_flex',
        name='rogilink_flex1',
        output='screen',
        parameters=[
            {'config_path': rogilink_flex_config_path1},
        ],
        arguments=[
            {'log_level': log_level}
        ]
    )
    # rogilink_flex2 = Node(
    #     package='rogilink_flex',
    #     executable='rogilink_flex',
    #     name='rogilink_flex2',
    #     output='screen',
    #     parameters=[
    #         {'config_path': rogilink_flex_config_path2},
    #     ],
    #     arguments=[
    #         {'log_level': log_level}
    #     ]   
    # )


    return LaunchDescription([
        log_level_arg,
        # main_udp_launch,
        # rs485_interface2_launch,
        rogilink_flex1,
        # rogilink_flex2
    ])