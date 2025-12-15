cmake_minimum_required(VERSION 3.22)
project(moveit_r2_config)

find_package(ament_cmake REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(moveit_ros_planning_interface REQUIRED)
find_package(rclcpp REQUIRED)

add_executable(move_hand_node src/move_hand_node.cpp)
ament_target_dependencies(
  move_hand_node
  geometry_msgs
  moveit_ros_planning_interface
  rclcpp)

if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/launch")
  install(
    DIRECTORY launch
    DESTINATION share/${PROJECT_NAME}
    PATTERN "setup_assistant.launch" EXCLUDE)
endif()

install(DIRECTORY config DESTINATION share/${PROJECT_NAME})
install(FILES .setup_assistant DESTINATION share/${PROJECT_NAME})

install(TARGETS move_hand_node DESTINATION lib/${PROJECT_NAME})
install(PROGRAMS scripts/direct_hand_controller.py DESTINATION lib/${PROJECT_NAME})

ament_package()
