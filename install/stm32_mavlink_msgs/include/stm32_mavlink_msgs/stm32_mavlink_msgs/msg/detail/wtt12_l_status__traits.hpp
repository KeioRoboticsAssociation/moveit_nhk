// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from stm32_mavlink_msgs:msg/WTT12LStatus.idl
// generated code does not contain a copyright notice

#ifndef STM32_MAVLINK_MSGS__MSG__DETAIL__WTT12_L_STATUS__TRAITS_HPP_
#define STM32_MAVLINK_MSGS__MSG__DETAIL__WTT12_L_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "stm32_mavlink_msgs/msg/detail/wtt12_l_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace stm32_mavlink_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const WTT12LStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: device_count
  {
    out << "device_count: ";
    rosidl_generator_traits::value_to_yaml(msg.device_count, out);
    out << ", ";
  }

  // member: device_states
  {
    if (msg.device_states.size() == 0) {
      out << "device_states: []";
    } else {
      out << "device_states: [";
      size_t pending_items = msg.device_states.size();
      for (auto item : msg.device_states) {
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
  const WTT12LStatus & msg,
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

  // member: device_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "device_count: ";
    rosidl_generator_traits::value_to_yaml(msg.device_count, out);
    out << "\n";
  }

  // member: device_states
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.device_states.size() == 0) {
      out << "device_states: []\n";
    } else {
      out << "device_states:\n";
      for (auto item : msg.device_states) {
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

inline std::string to_yaml(const WTT12LStatus & msg, bool use_flow_style = false)
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
  const stm32_mavlink_msgs::msg::WTT12LStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  stm32_mavlink_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use stm32_mavlink_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const stm32_mavlink_msgs::msg::WTT12LStatus & msg)
{
  return stm32_mavlink_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<stm32_mavlink_msgs::msg::WTT12LStatus>()
{
  return "stm32_mavlink_msgs::msg::WTT12LStatus";
}

template<>
inline const char * name<stm32_mavlink_msgs::msg::WTT12LStatus>()
{
  return "stm32_mavlink_msgs/msg/WTT12LStatus";
}

template<>
struct has_fixed_size<stm32_mavlink_msgs::msg::WTT12LStatus>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<stm32_mavlink_msgs::msg::WTT12LStatus>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<stm32_mavlink_msgs::msg::WTT12LStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // STM32_MAVLINK_MSGS__MSG__DETAIL__WTT12_L_STATUS__TRAITS_HPP_
