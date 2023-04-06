from setuptools import find_packages
from setuptools import setup

setup(
    name='wauto_vehicle_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('wauto_vehicle_msgs', 'wauto_vehicle_msgs.*')),
)
