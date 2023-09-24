

echo "Opening turtlesime and teleop_key node"

## Install 

gnome-terminal -e 'bash -c "ros2 run turtlesim turtlesim_node; exec bash"' 





gnome-terminal -e 'bash -c "ros2 run turtlesim turtle_teleop_key; exec bash"'

# updated node


# Launching RQT graphs
rqt_graph

#
gnome-terminal -e 'bash -c "ros2 topic list; exec bash"'


# echoing topic 
gnome-terminal -e 'bash -c "topic echo /turtle1/cmd_vel; exec bash"'


# topic info
gnome-terminal -e 'bash -c "topic echo /turtle1/cmd_vel; exec bash"'

## inference show 
gnome-terminal -e 'bash -c "ros2 interface show geometry_msgs/msg/Twist; exec bash"'

#topic pub
gnome-terminal -e 'bash -c "ros2 topic pub --rate 1 /turtle1/cmd_vel geometry_msgs/msg/Twist "{linear: {x: 2.0, y: 0.0, z: 0.0}, angular: {x: 0.0, y: 0.0, z: 1.8}}"; exec bash"'

#topic hz
