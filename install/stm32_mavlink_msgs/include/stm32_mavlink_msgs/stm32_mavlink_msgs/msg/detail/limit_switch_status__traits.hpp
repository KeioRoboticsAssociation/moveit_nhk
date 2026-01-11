// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from stm32_mavlink_msgs:msg/LimitSwitchStatus.idl
// generated code does not contain a copyright notice

#ifndef STM32_MAVLINK_MSGS__MSG__DETAIL__LIMIT_SWITCH_STATUS__TRAITS_HPP_
#define STM32_MAVLINK_MSGS__MSG__DETAIL__LIMIT_SWITCH_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "stm32_mavlink_msgs/msg/detail/limit_switch_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace stm32_mavlink_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LimitSwitchStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: switch_count
  {
    out << "switch_count: ";
    rosidl_generator_traits::value_to_yaml(msg.switch_count, out);
    out << ", ";
  }

  // member: switch_states
  {
    if (msg.switch_states.size() == 0) {
      out << "switch_states: []";
    } else {
      out << "switch_states: [";
      size_t pending_items = msg.switch_states.size();
      for (auto item : msg.switch_states) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: timestamp_ms
  {
    out << "timestamp_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp_ms, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LimitSwitchStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: switch_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "switch_count: ";
    rosidl_generator_traits::value_to_yaml(msg.switch_count, out);
    out << "\n";
  }

  // member: switch_states
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.switch_states.size() == 0) {
      out << "switch_states: []\n";
    } else {
      out << "switch_states:\n";
      for (auto item : msg.switch_states) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: timestamp_ms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp_ms, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LimitSwitchStatus & msg, bool use_flow_style = false)
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
  const stm32_mavlink_msgs::msg::LimitSwitchStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  stm32_mavlink_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use stm32_mavlink_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const stm32_mavlink_msgs::msg::LimitSwitchStatus & msg)
{
  return stm32_mavlink_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<stm32_mavlink_msgs::msg::LimitSwitchStatus>()
{
  return "stm32_mavlink_msgs::msg::LimitSwitchStatus";
}

template<>
inline const char * name<stm32_mavlink_msgs::msg::LimitSwitchStatus>()
{
  return "stm32_mavlink_msgs/msg/LimitSwitchStatus";
}

template<>
struct has_fixed_size<stm32_mavlink_msgs::msg::LimitSwitchStatus>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<stm32_mavlink_msgs::msg::LimitSwitchStatus>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<stm32_mavlink_msgs::msg::LimitSwitchStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // STM32_MAVLINK_MSGS__MSG__DETAIL__LIMIT_SWITCH_STATUS__TRAITS_HPP_
