# Installing requirement dependencies
sudo apt update
sudo apt install ros-humble-joint-state-publisher
sudo apt install rospack-tools

#examine launch.py
gnome-terminal -e 'bash -c "ros2 run rviz2 rviz2 -d $(ros2 pkg prefix --share turtle_tf2_py)/rviz/turtle_rviz.rviz; exec bash"' 

##multiple shapes
gnome-terminal -e 'bash -c "ros2 launch urdf_tutorial display.launch.py model:=urdf/02-multipleshapes.urdf; exec bash"' 




gnome-terminal -e 'bash -c "ros2 launch urdf_tutorial display.launch.py model:=urdf/05-visual.urdf; exec bash"' 
