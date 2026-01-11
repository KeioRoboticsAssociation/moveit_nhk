// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from stm32_mavlink_msgs:msg/RS485WriteResponse.idl
// generated code does not contain a copyright notice

#ifndef STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_WRITE_RESPONSE__TRAITS_HPP_
#define STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_WRITE_RESPONSE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "stm32_mavlink_msgs/msg/detail/rs485_write_response__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace stm32_mavlink_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RS485WriteResponse & msg,
  std::ostream & out)
{
  out << "{";
  // member: motor_id
  {
    out << "motor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_id, out);
    out << ", ";
  }

  // member: address
  {
    out << "address: ";
    rosidl_generator_traits::value_to_yaml(msg.address, out);
    out << ", ";
  }

  // member: length
  {
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: rs485_error
  {
    out << "rs485_error: ";
    rosidl_generator_traits::value_to_yaml(msg.rs485_error, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RS485WriteResponse & msg,
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

  // member: address
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "address: ";
    rosidl_generator_traits::value_to_yaml(msg.address, out);
    out << "\n";
  }

  // member: length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: rs485_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rs485_error: ";
    rosidl_generator_traits::value_to_yaml(msg.rs485_error, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RS485WriteResponse & msg, bool use_flow_style = false)
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
  const stm32_mavlink_msgs::msg::RS485WriteResponse & msg,
  std::ostream & out, size_t indentation = 0)
{
  stm32_mavlink_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use stm32_mavlink_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const stm32_mavlink_msgs::msg::RS485WriteResponse & msg)
{
  return stm32_mavlink_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<stm32_mavlink_msgs::msg::RS485WriteResponse>()
{
  return "stm32_mavlink_msgs::msg::RS485WriteResponse";
}

template<>
inline const char * name<stm32_mavlink_msgs::msg::RS485WriteResponse>()
{
  return "stm32_mavlink_msgs/msg/RS485WriteResponse";
}

template<>
struct has_fixed_size<stm32_mavlink_msgs::msg::RS485WriteResponse>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<stm32_mavlink_msgs::msg::RS485WriteResponse>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<stm32_mavlink_msgs::msg::RS485WriteResponse>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_WRITE_RESPONSE__TRAITS_HPP_
