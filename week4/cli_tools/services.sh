#gnome-terminal -e 'bash -c "ros2 run turtlesim turtlesim_node; exec bash"' && gnome-terminal -e 'bash -c "ros2 run turtlesim turtle_teleop_key; exec bash"'



echo "Opening turtlesime and teleop_key node"

## Install 

gnome-terminal -e 'bash -c "ros2 run turtlesim turtlesim_node; exec bash"' 





gnome-terminal -e 'bash -c "ros2 run turtlesim turtle_teleop_key; exec bash"'

# updated node


# Launching service list
ros2 service list


## to returm with type 
ros2 service list -t

## Service find
ros2 service find std_srvs/srv/Empty

## ros2 inferace show

ros2 interface show turtlesim/srv/Spawn

##service call
#
gnome-terminal -e 'bash -c "ros2 service call /spawn turtlesim/srv/Spawn "{x: 2, y: 2, theta: 0.2, name: ''}"; exec bash"'


