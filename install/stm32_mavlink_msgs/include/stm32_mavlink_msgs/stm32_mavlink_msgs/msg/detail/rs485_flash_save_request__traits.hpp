// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from stm32_mavlink_msgs:msg/RS485FlashSaveRequest.idl
// generated code does not contain a copyright notice

#ifndef STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_FLASH_SAVE_REQUEST__TRAITS_HPP_
#define STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_FLASH_SAVE_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "stm32_mavlink_msgs/msg/detail/rs485_flash_save_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace stm32_mavlink_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RS485FlashSaveRequest & msg,
  std::ostream & out)
{
  out << "{";
  // member: motor_id
  {
    out << "motor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RS485FlashSaveRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: motor_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RS485FlashSaveRequest & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace stm32_mavlink_msgs

namespace rosidl_generator_traits
{

[[deprecated("use stm32_mavlink_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const stm32_mavlink_msgs::msg::RS485FlashSaveRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  stm32_mavlink_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use stm32_mavlink_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const stm32_mavlink_msgs::msg::RS485FlashSaveRequest & msg)
{
  return stm32_mavlink_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<stm32_mavlink_msgs::msg::RS485FlashSaveRequest>()
{
  return "stm32_mavlink_msgs::msg::RS485FlashSaveRequest";
}

template<>
inline const char * name<stm32_mavlink_msgs::msg::RS485FlashSaveRequest>()
{
  return "stm32_mavlink_msgs/msg/RS485FlashSaveRequest";
}

template<>
struct has_fixed_size<stm32_mavlink_msgs::msg::RS485FlashSaveRequest>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<stm32_mavlink_msgs::msg::RS485FlashSaveRequest>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<stm32_mavlink_msgs::msg::RS485FlashSaveRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_FLASH_SAVE_REQUEST__TRAITS_HPP_
