## setting up the port to 11811 and id 0
gnome-terminal -e 'bash -c "fastdds discovery --server-id 0;exec bash"'
## Execute the listener node and remmapping
gnome-terminal -e 'bash -c "export ROS_DISCOVERY_SERVER=127.0.0.1:11811 && ros2 run demo_nodes_cpp listener --ros-args --remap __node:=listener_discovery_server ;exec bash"'

## Launching talker node
gnome-terminal -e 'bash -c "export ROS_DISCOVERY_SERVER=127.0.0.1:11811 && ros2 run demo_nodes_cpp talker --ros-args --remap __node:=talker_discovery_server;exec bash"'

# Discoveing server execution


gnome-terminal -e 'bash -c "ros2 run demo_nodes_cpp listener --ros-args --remap __node:=simple_listener;exec bash"'
gnome-terminal -e 'bash -c "ros2 run demo_nodes_cpp talker --ros-args --remap __node:=simple_talker;exec bash"'