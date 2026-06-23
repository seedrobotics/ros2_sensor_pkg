from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, OpaqueFunction
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare


def launch_setup(context, *args, **kwargs):
    hand = LaunchConfiguration('hand').perform(context)

    config_file = PathJoinSubstitution(
        [FindPackageShare('ros2_sensor_pkg'), 'config', f'sensors_{hand}.yaml']
    )

    sensor_node = Node(
        package='ros2_sensor_pkg',
        executable='read_publish_sensor_node.py',
        name=f'seed_fts3_{hand}',
        output='screen',
        parameters=[config_file],
    )

    return [sensor_node]


def generate_launch_description():
    hand_arg = DeclareLaunchArgument(
        'hand',
        default_value='right',
        choices=['left', 'right'],
        description='Which hand to launch (selects config/sensors_<hand>.yaml '
                    'and names the node seed_fts3_<hand>)',
    )

    return LaunchDescription([
        hand_arg,
        OpaqueFunction(function=launch_setup),
    ])
