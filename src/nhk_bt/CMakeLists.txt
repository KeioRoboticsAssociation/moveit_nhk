cmake_minimum_required(VERSION 3.8)
project(nhk_bt)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# C++17が必要
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(std_msgs REQUIRED)
find_package(behaviortree_cpp REQUIRED)
find_package(nhk_action_interfaces REQUIRED)

# Include directories
include_directories(include)

# Remote Control BT Node
add_executable(remote_control_bt_node
  src/remote_control_bt_node.cpp
)

ament_target_dependencies(remote_control_bt_node
  rclcpp
  sensor_msgs
  behaviortree_cpp
)

# PathIndex Action Server
add_executable(path_index_action_server
  src/path_index_action_server.cpp
)

ament_target_dependencies(path_index_action_server
  rclcpp
  rclcpp_action
  std_msgs
  nhk_action_interfaces
)

# Install executables
install(TARGETS
  remote_control_bt_node
  path_index_action_server
  DESTINATION lib/${PROJECT_NAME}
)

# Install config files
install(DIRECTORY
  config
  DESTINATION share/${PROJECT_NAME}
)

# Install launch files
install(DIRECTORY
  launch
  DESTINATION share/${PROJECT_NAME}
)

# Install include files
install(DIRECTORY
  include/
  DESTINATION include
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
