
# This shell script is used to install ROS2 Humble Version. You need to have ubuntu 22.04 version in order to run this. 

# First step is to make sure we have alocale support. 


locale  # check for UTF-8

sudo apt update && sudo apt install locales
sudo locale-gen en_US en_US.UTF-8
sudo update-locale LC_ALL=en_US.UTF-8 LANG=en_US.UTF-8
export LANG=en_US.UTF-8

locale  # verify settings

##  Make sure Ubuntu Universe repository is enabled, so we can install ROS 2 apt repository. 


sudo apt install software-properties-common
sudo add-apt-repository universe



## Adding ROS2 GPG key with the apt

sudo apt update && sudo apt install curl -y
sudo curl -sSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.key -o /usr/share/keyrings/ros-archive-keyring.gpg
echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] http://packages.ros.org/ros2/ubuntu $(. /etc/os-release && echo $UBUNTU_CODENAME) main" | sudo tee /etc/apt/sources.list.d/ros2.list > /dev/null


## Installing ROS 2 Package

## Before that make sure to update system


sudo apt update
sudo apt upgrade



## Here, we will install ros-humble-dekstop

sudo apt install ros-humble-desktop


## It is important to add ros enviroment before running it

## Add to bashrc, if already exist it will just ignore 

#!/bin/bash

# Define the line to be added
LINE="source /opt/ros/humble/setup.bash"

# Check if the line already exists in the .bashrc
if grep -Fxq "$LINE" ~/.bashrc
then
    echo "The line is already in .bashrc"
else
    # Append the line to .bashrc
    echo "$LINE" >> ~/.bashrc
    echo "The line has been added to .bashrc"
fi


## Apply changes in the bashrc to your current terminal

source ~/.bashrc
