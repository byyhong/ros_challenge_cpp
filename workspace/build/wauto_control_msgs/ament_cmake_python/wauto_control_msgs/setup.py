from setuptools import find_packages
from setuptools import setup

setup(
    name='wauto_control_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('wauto_control_msgs', 'wauto_control_msgs.*')),
)
