// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from stm32_mavlink_msgs:msg/RS485ReadRequest.idl
// generated code does not contain a copyright notice

#ifndef STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_READ_REQUEST__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_READ_REQUEST__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "stm32_mavlink_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "stm32_mavlink_msgs/msg/detail/rs485_read_request__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace stm32_mavlink_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_stm32_mavlink_msgs
cdr_serialize(
  const stm32_mavlink_msgs::msg::RS485ReadRequest & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_stm32_mavlink_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  stm32_mavlink_msgs::msg::RS485ReadRequest & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_stm32_mavlink_msgs
get_serialized_size(
  const stm32_mavlink_msgs::msg::RS485ReadRequest & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_stm32_mavlink_msgs
max_serialized_size_RS485ReadRequest(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace stm32_mavlink_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_stm32_mavlink_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, stm32_mavlink_msgs, msg, RS485ReadRequest)();

#ifdef __cplusplus
}
#endif

#endif  // STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_READ_REQUEST__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
