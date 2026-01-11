// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from stm32_mavlink_msgs:msg/SolenoidCommand.idl
// generated code does not contain a copyright notice

#ifndef STM32_MAVLINK_MSGS__MSG__DETAIL__SOLENOID_COMMAND__TRAITS_HPP_
#define STM32_MAVLINK_MSGS__MSG__DETAIL__SOLENOID_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "stm32_mavlink_msgs/msg/detail/solenoid_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace stm32_mavlink_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SolenoidCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: solenoid_id
  {
    out << "solenoid_id: ";
    rosidl_generator_traits::value_to_yaml(msg.solenoid_id, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SolenoidCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: solenoid_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "solenoid_id: ";
    rosidl_generator_traits::value_to_yaml(msg.solenoid_id, out);
    out << "\n";
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SolenoidCommand & msg, bool use_flow_style = false)
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
  const stm32_mavlink_msgs::msg::SolenoidCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  stm32_mavlink_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use stm32_mavlink_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const stm32_mavlink_msgs::msg::SolenoidCommand & msg)
{
  return stm32_mavlink_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<stm32_mavlink_msgs::msg::SolenoidCommand>()
{
  return "stm32_mavlink_msgs::msg::SolenoidCommand";
}

template<>
inline const char * name<stm32_mavlink_msgs::msg::SolenoidCommand>()
{
  return "stm32_mavlink_msgs/msg/SolenoidCommand";
}

template<>
struct has_fixed_size<stm32_mavlink_msgs::msg::SolenoidCommand>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<stm32_mavlink_msgs::msg::SolenoidCommand>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<stm32_mavlink_msgs::msg::SolenoidCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // STM32_MAVLINK_MSGS__MSG__DETAIL__SOLENOID_COMMAND__TRAITS_HPP_
