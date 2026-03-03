from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node


def generate_launch_description():
    action_name_arg = DeclareLaunchArgument(
        "action_name",
        default_value="/path_index",
        description="PathIndex action name",
    )
    trajectory_topic_arg = DeclareLaunchArgument(
        "trajectory_topic",
        default_value="/joint_trajectory",
        description="JointTrajectory topic for linear joint command",
    )
    slider6_joint_name_arg = DeclareLaunchArgument(
        "slider6_joint_name",
        default_value="Slider 1_3",
        description="Linear joint name in JointTrajectory",
    )
    push_value_arg = DeclareLaunchArgument(
        "push_value",
        default_value="1.00",
        description="Linear joint push target position",
    )
    back_value_arg = DeclareLaunchArgument(
        "back_value",
        default_value="-1.00",
        description="Linear joint back target position",
    )
    move_duration_arg = DeclareLaunchArgument(
        "move_duration_sec",
        default_value="0.2",
        description="Linear joint motion duration in trajectory",
    )

    gui_node = Node(
        package="nhk_bt",
        executable="path_index_gui",
        name="path_index_gui",
        output="screen",
        parameters=[
            {"action_name": LaunchConfiguration("action_name")},
            {"trajectory_topic": LaunchConfiguration("trajectory_topic")},
            {"slider6_joint_name": LaunchConfiguration("slider6_joint_name")},
            {"push_value": LaunchConfiguration("push_value")},
            {"back_value": LaunchConfiguration("back_value")},
            {"move_duration_sec": LaunchConfiguration("move_duration_sec")},
        ],
    )

    return LaunchDescription(
        [
            action_name_arg,
            trajectory_topic_arg,
            slider6_joint_name_arg,
            push_value_arg,
            back_value_arg,
            move_duration_arg,
            gui_node,
        ]
    )
