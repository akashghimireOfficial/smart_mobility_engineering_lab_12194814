from setuptools import setup

package_name = 'fleet_management'

setup(
    name=package_name,
    version='0.1.0',
    packages=[package_name],
    install_requires=['setuptools'],
    data_files=[
        ('share/ament_index/resource_index/packages', ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        ('share/' + package_name + '/launch', ['launch/fleet_management_launch.py']),
        
    ],
    entry_points={
    'console_scripts': [
        'fleet_management_server_cli = fleet_management.fleet_management_server_cli:main',
        'fleet_management_client = fleet_management.fleet_management_client:main'  # Notice the change here
    ],
},

)
