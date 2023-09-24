# Running a launch file

ros2 launch turtlesim multisim.launch.py

# controlling the Turtlesim
gnome-terminal -e 'bash -c "ros2 topic pub  /turtlesim1/turtle1/cmd_vel geometry_msgs/msg/Twist "{linear: {x: 2.0, y: 0.0, z: 0.0}, angular: {x: 0.0, y: 0.0, z: 1.8}}"; exec bash"'

gnome-terminal -e 'bash -c "ros2 topic pub  /turtlesim2/turtle1/cmd_vel geometry_msgs/msg/Twist "{linear: {x: 2.0, y: 0.0, z: 0.0}, angular: {x: 0.0, y: 0.0, z: -1.8}}""; exec bash"'