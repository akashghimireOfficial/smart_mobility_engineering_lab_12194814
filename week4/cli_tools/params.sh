


echo "Opening turtlesime and teleop_key node"

## Install 

gnome-terminal -e 'bash -c "ros2 run turtlesim turtlesim_node; exec bash"' 






gnome-terminal -e 'bash -c "ros2 run turtlesim turtle_teleop_key; exec bash"'

# updated node


# Launching parameter list
ros2 param list


## get param value
ros2 param get /turtlesim background_g

## set param value

ros2 param set /turtlesim background_r 150

#dump param 
ros2 param dump /turtlesim > turtlesim.yaml

## load param
ros2 param dump /turtlesim > turtlesim.yaml


#loading param file on startup


ros2 run turtlesim turtlesim_node --ros-args --params-file turtlesim.yaml