// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from stm32_mavlink_msgs:msg/RS485MotorState.idl
// generated code does not contain a copyright notice

#ifndef STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_MOTOR_STATE__TRAITS_HPP_
#define STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_MOTOR_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "stm32_mavlink_msgs/msg/detail/rs485_motor_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace stm32_mavlink_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RS485MotorState & msg,
  std::ostream & out)
{
  out << "{";
  // member: motor_id
  {
    out << "motor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_id, out);
    out << ", ";
  }

  // member: device_id
  {
    out << "device_id: ";
    rosidl_generator_traits::value_to_yaml(msg.device_id, out);
    out << ", ";
  }

  // member: motor_index
  {
    out << "motor_index: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_index, out);
    out << ", ";
  }

  // member: control_mode
  {
    out << "control_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.control_mode, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: error_code
  {
    out << "error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_code, out);
    out << ", ";
  }

  // member: current_position_rotations
  {
    out << "current_position_rotations: ";
    rosidl_generator_traits::value_to_yaml(msg.current_position_rotations, out);
    out << ", ";
  }

  // member: current_velocity_rps
  {
    out << "current_velocity_rps: ";
    rosidl_generator_traits::value_to_yaml(msg.current_velocity_rps, out);
    out << ", ";
  }

  // member: target_velocity_rps
  {
    out << "target_velocity_rps: ";
    rosidl_generator_traits::value_to_yaml(msg.target_velocity_rps, out);
    out << ", ";
  }

  // member: acceleration_rps2
  {
    out << "acceleration_rps2: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration_rps2, out);
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
  const RS485MotorState & msg,
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

  // member: device_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "device_id: ";
    rosidl_generator_traits::value_to_yaml(msg.device_id, out);
    out << "\n";
  }

  // member: motor_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motor_index: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_index, out);
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

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: error_code
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_code: ";
    rosidl_generator_traits::value_to_yaml(msg.error_code, out);
    out << "\n";
  }

  // member: current_position_rotations
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_position_rotations: ";
    rosidl_generator_traits::value_to_yaml(msg.current_position_rotations, out);
    out << "\n";
  }

  // member: current_velocity_rps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_velocity_rps: ";
    rosidl_generator_traits::value_to_yaml(msg.current_velocity_rps, out);
    out << "\n";
  }

  // member: target_velocity_rps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_velocity_rps: ";
    rosidl_generator_traits::value_to_yaml(msg.target_velocity_rps, out);
    out << "\n";
  }

  // member: acceleration_rps2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration_rps2: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration_rps2, out);
    out << "\n";
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

inline std::string to_yaml(const RS485MotorState & msg, bool use_flow_style = false)
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
  const stm32_mavlink_msgs::msg::RS485MotorState & msg,
  std::ostream & out, size_t indentation = 0)
{
  stm32_mavlink_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use stm32_mavlink_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const stm32_mavlink_msgs::msg::RS485MotorState & msg)
{
  return stm32_mavlink_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<stm32_mavlink_msgs::msg::RS485MotorState>()
{
  return "stm32_mavlink_msgs::msg::RS485MotorState";
}

template<>
inline const char * name<stm32_mavlink_msgs::msg::RS485MotorState>()
{
  return "stm32_mavlink_msgs/msg/RS485MotorState";
}

template<>
struct has_fixed_size<stm32_mavlink_msgs::msg::RS485MotorState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<stm32_mavlink_msgs::msg::RS485MotorState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<stm32_mavlink_msgs::msg::RS485MotorState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_MOTOR_STATE__TRAITS_HPP_
