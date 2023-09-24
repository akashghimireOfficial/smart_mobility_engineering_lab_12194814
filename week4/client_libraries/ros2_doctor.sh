#check the setup
echo "cehck setup"
ros2 doctor

echo "check system"
gnome-terminal -e 'bash -c "ros2 run turtlesim turtlesim_node; exec bash"' 
gnome-terminal -e 'bash -c "ros2 run turtlesim turtlesim_node; exec bash"' 
gnome-terminal -e 'bash -c "ros2 topic echo /turtle1/color_sensor; exec bash"' 

## getting full support
ros2 doctor --report