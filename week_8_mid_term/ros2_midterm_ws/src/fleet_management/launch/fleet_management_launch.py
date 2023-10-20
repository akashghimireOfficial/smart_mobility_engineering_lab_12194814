import launch
from launch_ros.actions import Node

def generate_launch_description():
    return launch.LaunchDescription([
        Node(
            package='fleet_management',
            executable='fleet_management_server_cli',
            name='fleet_management_server',
            output='screen'
        ),
        Node(
            package='fleet_management',
            executable='fleet_management_client',
            name='fleet_management_client',
            output='screen',
            arguments=['5']  # This can be changed or parameterized based on the desired fleet size.
        )
    ])
