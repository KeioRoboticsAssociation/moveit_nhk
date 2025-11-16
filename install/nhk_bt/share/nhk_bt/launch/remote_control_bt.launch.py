from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():
    # パッケージパスを取得
    pkg_share = FindPackageShare('nhk_bt')

    # BT XMLファイルのパス
    bt_xml_path = PathJoinSubstitution([
        pkg_share,
        'config',
        'remote_control_sequence.xml'
    ])

    # Launch引数の宣言
    declare_circle_button_arg = DeclareLaunchArgument(
        'circle_button_index',
        default_value='1',
        description='PS4コントローラーの丸ボタンのインデックス'
    )

    declare_cross_button_arg = DeclareLaunchArgument(
        'cross_button_index',
        default_value='0',
        description='PS4コントローラーの×ボタンのインデックス'
    )

    # Remote Control BT Node
    remote_control_bt_node = Node(
        package='nhk_bt',
        executable='remote_control_bt_node',
        name='remote_control_bt_node',
        output='screen',
        parameters=[{
            'bt_xml_path': bt_xml_path,
            'circle_button_index': LaunchConfiguration('circle_button_index'),
            'cross_button_index': LaunchConfiguration('cross_button_index'),
        }],
        # デバッグログを表示
        arguments=['--ros-args', '--log-level', 'info']
    )

    return LaunchDescription([
        declare_circle_button_arg,
        declare_cross_button_arg,
        remote_control_bt_node,
    ])
