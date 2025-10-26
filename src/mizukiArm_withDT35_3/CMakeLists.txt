cmake_minimum_required(VERSION 3.5)
project(mizukiArm_withDT35_3)

find_package(ament_cmake REQUIRED)

install(
  DIRECTORY config launch meshes textures urdf
  DESTINATION share/${PROJECT_NAME}
)

ament_package()
