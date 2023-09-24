#gnome-terminal -e 'bash -c "ros2 run turtlesim turtlesim_node; exec bash"' && gnome-terminal -e 'bash -c "ros2 run turtlesim turtle_teleop_key; exec bash"'

## Update the Ubuntu Enviroment





#Creting a workspace

mkdir -p ~/ros2_ws2/src
cd ~/ros2_ws2/src # changing to new ros ws enviroment

## clonming source code

git clone https://github.com/ros/ros_tutorials.git -b humble

## Resolve dependencies
cd ..
rosdep install -i --from-path src --rosdistro humble -y

## building the workspace with colcon

colcon build

## Sourcing the overlay

cd ~/ros2_ws2
source install/local_setup.bash
ros2 run turtlesim turtlesim_node


## Verifying it we are running the same or different turtlesim

gnome-terminal -e 'bash -c "ros2 run turtlesim turtlesim_node; exec bash"' 