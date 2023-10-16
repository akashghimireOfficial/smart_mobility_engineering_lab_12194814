from setuptools import setup

package_name = 'distance_travel'

setup(
    name=package_name,
    version='0.0.1',
    packages=[],
    py_modules=[
        'distance_travel.travel_distance_server',
        'distance_travel.distance_monitor',
        'distance_travel.travel_distance_client',  # Add this line
    ],
    install_requires=['setuptools'],
    entry_points={
        'console_scripts': [
            'travel_distance_server = distance_travel.travel_distance_server:main',
            'distance_monitor = distance_travel.distance_monitor:main',
            'travel_distance_client = distance_travel.travel_distance_client:main',  # Add this line
        ],
    },
)
