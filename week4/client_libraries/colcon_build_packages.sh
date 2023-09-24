#gnome-terminal -e 'bash -c "ros2 run turtlesim turtlesim_node; exec bash"' && gnome-terminal -e 'bash -c "ros2 run turtlesim turtle_teleop_key; exec bash"'

## Update the Ubuntu Enviroment


sudo apt update

## Installing colcon common extension 
sudo apt install python3-colcon-common-extensions

#Creting a workspace

mkdir -p ~/ros2_ws/src
cd ~/ros2_ws # changing to new ros ws enviroment


echo -c  "\n\nInside ros ws folders\n\n"

## Adding some other sources

ls 

# adding some source from external github
git clone https://github.com/ros2/examples src/examples -b humble

echo -c  "\n\nVisualising after adding git source \n\n"

ls

## Source an Underlay 

colcon build --symlink-install

## you will see other folder after this 

echo -c  "\n\nInside after sourcing\n\n"

## Test the package we just build

colcon test

## Souring the enviroment
source install/setup.bash


# demo 

# running subscriber
gnome-terminal -e 'bash -c "ros2 run examples_rclcpp_minimal_subscriber subscriber_member_function; exec bash"' gnome-terminal -e 'bash -c "ros2 run examples_rclcpp_minimal_subscriber subscriber_member_function; exec bash"' 
#running publisher
gnome-terminal -e 'bash -c "ros2 run examples_rclcpp_minimal_publisher publisher_member_function; exec bash"'

## Creating your own package
echo "source /usr/share/colcon_cd/function/colcon_cd.sh" >> ~/.bashrc
echo "export _colcon_cd_root=/opt/ros/humble/" >> ~/.bashrc
# Setup `colcon` tab completion

echo "source /usr/share/colcon_argcomplete/hook/colcon-argcomplete.bash" >> ~/.bashrc

