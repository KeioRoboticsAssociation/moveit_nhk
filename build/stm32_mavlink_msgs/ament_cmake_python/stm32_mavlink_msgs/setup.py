from setuptools import find_packages
from setuptools import setup

setup(
    name='stm32_mavlink_msgs',
    version='1.0.0',
    packages=find_packages(
        include=('stm32_mavlink_msgs', 'stm32_mavlink_msgs.*')),
)
