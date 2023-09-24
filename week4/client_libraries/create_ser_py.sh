
cd ~/ros2_ws/src # changing to new ros ws enviroment

## Create a new package in src/folder
ros2 pkg create --build-type ament_python py_srvcli --dependencies rclpy example_interfaces

# #creates an empy python file for service
# touch ~/ros2_ws/src/py_srvcli/py_srvcli/service_member_function.py

# #creates an empy python file for client
# touch ~/ros2_ws/src/py_srvcli/py_srvcli/client_member_function.py

rosdep install -i --from-path src --rosdistro humble -y

colcon build --packages-select py_srvcli

source install/setup.bash

gnome-terminal -e 'bash -c "ros2 run py_srvcli client 2 3; exec bash"' 
ros2 run py_srvcli service


