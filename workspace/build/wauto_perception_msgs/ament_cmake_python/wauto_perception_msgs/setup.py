from setuptools import find_packages
from setuptools import setup

setup(
    name='wauto_perception_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('wauto_perception_msgs', 'wauto_perception_msgs.*')),
)
