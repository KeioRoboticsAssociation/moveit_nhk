// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from stm32_mavlink_msgs:msg/DCMotorState.idl
// generated code does not contain a copyright notice

#ifndef STM32_MAVLINK_MSGS__MSG__DETAIL__DC_MOTOR_STATE__TRAITS_HPP_
#define STM32_MAVLINK_MSGS__MSG__DETAIL__DC_MOTOR_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "stm32_mavlink_msgs/msg/detail/dc_motor_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace stm32_mavlink_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DCMotorState & msg,
  std::ostream & out)
{
  out << "{";
  // member: motor_id
  {
    out << "motor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_id, out);
    out << ", ";
  }

  // member: position_rad
  {
    out << "position_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.position_rad, out);
    out << ", ";
  }

  // member: velocity_rad_s
  {
    out << "velocity_rad_s: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_rad_s, out);
    out << ", ";
  }

  // member: current_a
  {
    out << "current_a: ";
    rosidl_generator_traits::value_to_yaml(msg.current_a, out);
    out << ", ";
  }

  // member: temperature_c
  {
    out << "temperature_c: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature_c, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: enabled
  {
    out << "enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.enabled, out);
    out << ", ";
  }

  // member: control_mode
  {
    out << "control_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.control_mode, out);
    out << ", ";
  }

  // member: current_duty_cycle
  {
    out << "current_duty_cycle: ";
    rosidl_generator_traits::value_to_yaml(msg.current_duty_cycle, out);
    out << ", ";
  }

  // member: target_duty_cycle
  {
    out << "target_duty_cycle: ";
    rosidl_generator_traits::value_to_yaml(msg.target_duty_cycle, out);
    out << ", ";
  }

  // member: target_velocity_rad_s
  {
    out << "target_velocity_rad_s: ";
    rosidl_generator_traits::value_to_yaml(msg.target_velocity_rad_s, out);
    out << ", ";
  }

  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DCMotorState & msg,
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

  // member: position_rad
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.position_rad, out);
    out << "\n";
  }

  // member: velocity_rad_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity_rad_s: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity_rad_s, out);
    out << "\n";
  }

  // member: current_a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_a: ";
    rosidl_generator_traits::value_to_yaml(msg.current_a, out);
    out << "\n";
  }

  // member: temperature_c
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temperature_c: ";
    rosidl_generator_traits::value_to_yaml(msg.temperature_c, out);
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

  // member: enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.enabled, out);
    out << "\n";
  }

  // member: control_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "control_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.control_mode, out);
    out << "\n";
  }

  // member: current_duty_cycle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_duty_cycle: ";
    rosidl_generator_traits::value_to_yaml(msg.current_duty_cycle, out);
    out << "\n";
  }

  // member: target_duty_cycle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_duty_cycle: ";
    rosidl_generator_traits::value_to_yaml(msg.target_duty_cycle, out);
    out << "\n";
  }

  // member: target_velocity_rad_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_velocity_rad_s: ";
    rosidl_generator_traits::value_to_yaml(msg.target_velocity_rad_s, out);
    out << "\n";
  }

  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DCMotorState & msg, bool use_flow_style = false)
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
  const stm32_mavlink_msgs::msg::DCMotorState & msg,
  std::ostream & out, size_t indentation = 0)
{
  stm32_mavlink_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use stm32_mavlink_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const stm32_mavlink_msgs::msg::DCMotorState & msg)
{
  return stm32_mavlink_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<stm32_mavlink_msgs::msg::DCMotorState>()
{
  return "stm32_mavlink_msgs::msg::DCMotorState";
}

template<>
inline const char * name<stm32_mavlink_msgs::msg::DCMotorState>()
{
  return "stm32_mavlink_msgs/msg/DCMotorState";
}

template<>
struct has_fixed_size<stm32_mavlink_msgs::msg::DCMotorState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<stm32_mavlink_msgs::msg::DCMotorState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<stm32_mavlink_msgs::msg::DCMotorState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // STM32_MAVLINK_MSGS__MSG__DETAIL__DC_MOTOR_STATE__TRAITS_HPP_
