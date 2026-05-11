from setuptools import find_packages
from setuptools import setup

setup(
    name='ros2_sensor_pkg',
    version='0.1.0',
    packages=find_packages(
        include=('ros2_sensor_pkg', 'ros2_sensor_pkg.*')),
)
