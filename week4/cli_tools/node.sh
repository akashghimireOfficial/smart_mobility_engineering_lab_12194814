#gnome-terminal -e 'bash -c "ros2 run turtlesim turtlesim_node; exec bash"' && gnome-terminal -e 'bash -c "ros2 run turtlesim turtle_teleop_key; exec bash"'

## Update the ROS Enviroment
echo "Updating ROS Enviroment"

sudo apt update

echo "Opening turtlesime and teleop_key node"

## Install 

gnome-terminal -e 'bash -c "ros2 run turtlesim turtlesim_node; exec bash"' 

echo -e "\n\nROS2 Node List\n\n"
ros2 node list




gnome-terminal -e 'bash -c "ros2 run turtlesim turtle_teleop_key; exec bash"'

# updated node
echo -e "\n\nUpdated ROS2 Node List list\n\n"

ros2 node list





## Remapping
ros2 run turtlesim turtlesim_node --ros-args --remap __node:=my_turtle

# getting ROS2 information
ros2 node info /my_turtle
