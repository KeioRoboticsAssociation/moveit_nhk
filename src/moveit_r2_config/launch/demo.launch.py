from moveit_configs_utils import MoveItConfigsBuilder
from moveit_configs_utils.launches import generate_demo_launch
from launch_ros.actions import Node


def generate_launch_description():
    moveit_config = MoveItConfigsBuilder("a_r2", package_name="moveit_r2_config").to_moveit_configs()
    launch_description = generate_demo_launch(moveit_config)

    move_hand_node = Node(
        package="moveit_r2_config",
        executable="move_hand_node",
        output="screen",
        parameters=[
            {
                "group_name": "arm_with_hand",
                "tip_link": "link5_1",
                "topic_name": "/move_hand",
            }
        ],
    )

    launch_description.add_action(move_hand_node)
    return launch_description
