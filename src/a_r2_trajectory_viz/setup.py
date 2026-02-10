from glob import glob
from setuptools import setup

package_name = "a_r2_trajectory_viz"

setup(
    name=package_name,
    version="0.0.1",
    packages=[package_name],
    data_files=[
        ("share/ament_index/resource_index/packages", ["resource/" + package_name]),
        ("share/" + package_name, ["package.xml"]),
        ("share/" + package_name + "/launch", glob("launch/*.launch.py")),
        ("share/" + package_name + "/config", glob("config/*.rviz")),
    ],
    install_requires=["setuptools"],
    zip_safe=True,
    maintainer="a",
    maintainer_email="a@todo.todo",
    description="RViz visualization and joint state publisher driven by JointTrajectory",
    license="Apache-2.0",
    tests_require=["pytest"],
    entry_points={
        "console_scripts": [
            "joint_trajectory_to_joint_states = a_r2_trajectory_viz.joint_trajectory_to_joint_states:main",
        ],
    },
)
