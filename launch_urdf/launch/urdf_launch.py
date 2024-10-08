import launch
from launch_ros.actions import Node
from launch.substitutions import LaunchConfiguration
from ament_index_python.packages import get_package_share_directory
import os 

def generate_launch_description():
    # Define launch arguments
    use_sim_time = LaunchConfiguration('use_sim_time', default='false')
    urdf = os.path.join(get_package_share_directory('launch_urdf'), 'urdf', 'testbot.urdf')

    with open(urdf, 'r') as infp:
        robot_desc = infp.read()

    return launch.LaunchDescription([
        launch.actions.DeclareLaunchArgument(
           'use_sim_time',
            default_value='false',),
        
        # Use joint_state_publisher_gui with GUI for joint control
        Node(
            package='joint_state_publisher_gui',
            executable='joint_state_publisher_gui',
            name='joint_state_publisher_gui',
            output='screen',
            parameters=[{
                'use_sim_time': use_sim_time
            }]
        ),
        
        Node(
            package='rviz2',
            executable='rviz2',
            name='rviz',
            output='screen',
            arguments=['-d', os.path.join(get_package_share_directory('launch_urdf'),'rviz','urdf_rviz.rviz')] # RViz 설정 파일이 있으면 사용, 없으면 생략
        ),
        
        # Robot state publisher to publish the robot description
        Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            name='robot_state_publisher',
            output='screen',
            parameters=[{
				'robot_description': robot_desc
			}]
        )
    ])


if __name__ == '__main__':
    generate_launch_description()
