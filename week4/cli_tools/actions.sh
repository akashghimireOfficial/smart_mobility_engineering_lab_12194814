


echo "Opening turtlesime and teleop_key node"

## Install 

gnome-terminal -e 'bash -c "ros2 run turtlesim turtlesim_node; exec bash"' 






gnome-terminal -e 'bash -c "ros2 run turtlesim turtle_teleop_key; exec bash"'

# updated node


# Launching actions
ros2 action list


# action list with types
ros2 action list -t 

# info of action 
ros2 action info /turtle1/rotate_absolute


# ros 2 interface show

ros2 interface show turtlesim/action/RotateAbsolute

# sending action goal
gnome-terminal -e 'bash -c "ros2 action send_goal /turtle1/rotate_absolute turtlesim/action/RotateAbsolute "{theta: 1.57}"; exec bash"'


