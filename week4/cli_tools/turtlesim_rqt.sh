#gnome-terminal -e 'bash -c "ros2 run turtlesim turtlesim_node; exec bash"' && gnome-terminal -e 'bash -c "ros2 run turtlesim turtle_teleop_key; exec bash"'

## Update the ROS Enviroment
echo "Updating ROS Enviroment"

sudo apt update

echo "Installing turtlesim"
# Install turtlesim
sudo apt install ros-humble-turtlesim

if ros2 pkg executables turtlesim; then
    echo -e "\n\nturtlesim has been installed successfully.\n\n"

else
    echo "Error: need to re-install turtlesim."

fi



## Install 

gnome-terminal -e 'bash -c "ros2 run turtlesim turtlesim_node; exec bash"' 

gnome-terminal -e 'bash -c "ros2 run turtlesim turtle_teleop_key; exec bash"'


# Install rqt
sudo apt install ~nros-humble-rqt*

# Opening rqt

gnome-terminal -e 'bash -c "rqt;exec bash"'


# Remapping 
gnome-terminal -e 'bash -c "ros2 run turtlesim turtle_teleop_key --ros-args --remap turtle1/cmd_vel:=turtle2/cmd_vel;exec bash"'