sudo apt-get install ros-humble-turtle-tf2-py ros-humble-tf2-tools ros-humble-tf-transformations

# Running the demo 
gnome-terminal -e 'bash -c "ros2 launch turtle_tf2_py turtle_tf2_demo.launch.py; exec bash"' 

# In another terminal 

gnome-terminal -e 'bash -c "ros2 run turtlesim turtle_teleop_key; exec bash"' 


## Using tf2 tools to view
gnome-terminal -e 'bash -c "ros2 run tf2_tools view_frames; exec bash"' 


# using tf echo

gnome-terminal -e 'bash -c "ros2 run tf2_ros tf2_echo turtle2 turtle1; exec bash"' 

# rvisz and tf2
gnome-terminal -e 'bash -c "ros2 run rviz2 rviz2 -d $(ros2 pkg prefix --share turtle_tf2_py)/rviz/turtle_rviz.rviz; exec bash"' 

