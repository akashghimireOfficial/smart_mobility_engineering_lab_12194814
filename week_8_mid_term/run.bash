 source /opt/ros/humble/setup.bash ## Enabling ros2 by sourcing it



sudo chmod +x -R ros2_midterm_ws/

cd /ros2_midterm_ws

colcon build ## to build it

source install/setup.bash



ros2 launch fleet_management fleet_management_launch.py



