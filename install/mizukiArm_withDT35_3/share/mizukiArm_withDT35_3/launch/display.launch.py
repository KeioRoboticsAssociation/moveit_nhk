from pathlib import Path

from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch_ros.actions import Node
from launch.substitutions import LaunchConfiguration


def generate_launch_description():
    share_dir = Path(get_package_share_directory("mizukiArm_withDT35_3"))
    default_rviz_config = share_dir / "urdf.rviz"
    urdf_path = share_dir / "urdf" / "MizukiArm_withDT35_3.urdf"

    robot_description = urdf_path.read_text()

    rviz_config_arg = DeclareLaunchArgument(
        "rviz_config",
        default_value=str(default_rviz_config),
        description="RViz2 configuration file to load",
    )

    robot_state_publisher = Node(
        package="robot_state_publisher",
        executable="robot_state_publisher",
        name="robot_state_publisher",
        parameters=[{"robot_description": robot_description}],
    )

    joint_state_publisher_gui = Node(
        package="joint_state_publisher_gui",
        executable="joint_state_publisher_gui",
        name="joint_state_publisher_gui",
    )

    rviz = Node(
        package="rviz2",
        executable="rviz2",
        name="rviz2",
        output="screen",
        arguments=["-d", LaunchConfiguration("rviz_config")],
    )

    return LaunchDescription(
        [
            rviz_config_arg,
            joint_state_publisher_gui,
            robot_state_publisher,
            rviz,
        ]
    )
