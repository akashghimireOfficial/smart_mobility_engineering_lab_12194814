
cd ~/ros2_ws/src # changing to new ros ws enviroment

## Create a new package in src/folder
ros2 pkg create --build-type ament_python python_parameters --dependencies rclpy



# #creates an empy python file for setting parameters node and launch file
touch ~/ros2_ws/src/python_parameters/python_parameters/python_parameters_node.py
touch ~/ros2_ws/src/python_parameters/python_parameters/python_parameters_launch.py

#building
cd ~/ros2_ws/
rosdep install -i --from-path src --rosdistro humble -y
colcon build --packages-select python_parameters

source install/setup.bash
ros2 run python_parameters minimal_param_node


ros2 interface show tutorial_interfaces/msg/Num

gnome-terminal -e 'bash -c "ros2 param list; exec bash"' 

gnome-terminal -e 'bash -c "ros2 param set /minimal_param_node my_parameter earth; exec bash"' 

