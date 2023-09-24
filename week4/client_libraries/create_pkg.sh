#gnome-terminal -e 'bash -c "ros2 run turtlesim turtlesim_node; exec bash"' && gnome-terminal -e 'bash -c "ros2 run turtlesim turtle_teleop_key; exec bash"'

## Update the Ubuntu Enviroment






#Creting a workspace


cd ~/ros2_ws/src # changing to new ros ws enviroment

# creating a new package
ros2 pkg create --build-type ament_cmake --node-name my_node my_package



# building 'my_package'
cd ~/ros2_ws

echo -e "Building the package"

colcon build --packages-select my_package

# Source the setup file

source install/local_setup.bash

## Using the package
ros2 run my_package my_node # my node is node name



