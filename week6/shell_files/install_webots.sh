#installing webots in ubuntu
sudo apt-get install ros-humble-webots-ros2

# adding to enviroment permanently
echo "export WEBOTS_HOME=/usr/local/webots" >> ~/.bashrc
source ~/.bashrc


#launching the webots
ros2 launch webots_ros2_universal_robot multirobot_launch.py

gnome-terminal -e 'bash -c "ros2 topic pub /cmd_vel geometry_msgs/Twist  "linear: { x: 0.1 }";exec bash"'