// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from stm32_mavlink_msgs:msg/DCMotorConfig.idl
// generated code does not contain a copyright notice

#ifndef STM32_MAVLINK_MSGS__MSG__DETAIL__DC_MOTOR_CONFIG__TRAITS_HPP_
#define STM32_MAVLINK_MSGS__MSG__DETAIL__DC_MOTOR_CONFIG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "stm32_mavlink_msgs/msg/detail/dc_motor_config__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace stm32_mavlink_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DCMotorConfig & msg,
  std::ostream & out)
{
  out << "{";
  // member: motor_id
  {
    out << "motor_id: ";
    rosidl_generator_traits::value_to_yaml(msg.motor_id, out);
    out << ", ";
  }

  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << ", ";
  }

  // member: speed_kp
  {
    out << "speed_kp: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_kp, out);
    out << ", ";
  }

  // member: speed_ki
  {
    out << "speed_ki: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_ki, out);
    out << ", ";
  }

  // member: speed_kd
  {
    out << "speed_kd: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_kd, out);
    out << ", ";
  }

  // member: speed_max_integral
  {
    out << "speed_max_integral: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_max_integral, out);
    out << ", ";
  }

  // member: speed_max_output
  {
    out << "speed_max_output: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_max_output, out);
    out << ", ";
  }

  // member: position_kp
  {
    out << "position_kp: ";
    rosidl_generator_traits::value_to_yaml(msg.position_kp, out);
    out << ", ";
  }

  // member: position_ki
  {
    out << "position_ki: ";
    rosidl_generator_traits::value_to_yaml(msg.position_ki, out);
    out << ", ";
  }

  // member: position_kd
  {
    out << "position_kd: ";
    rosidl_generator_traits::value_to_yaml(msg.position_kd, out);
    out << ", ";
  }

  // member: position_max_integral
  {
    out << "position_max_integral: ";
    rosidl_generator_traits::value_to_yaml(msg.position_max_integral, out);
    out << ", ";
  }

  // member: position_max_output
  {
    out << "position_max_output: ";
    rosidl_generator_traits::value_to_yaml(msg.position_max_output, out);
    out << ", ";
  }

  // member: max_speed_rad_s
  {
    out << "max_speed_rad_s: ";
    rosidl_generator_traits::value_to_yaml(msg.max_speed_rad_s, out);
    out << ", ";
  }

  // member: max_acceleration_rad_s2
  {
    out << "max_acceleration_rad_s2: ";
    rosidl_generator_traits::value_to_yaml(msg.max_acceleration_rad_s2, out);
    out << ", ";
  }

  // member: use_position_limits
  {
    out << "use_position_limits: ";
    rosidl_generator_traits::value_to_yaml(msg.use_position_limits, out);
    out << ", ";
  }

  // member: position_limit_min_rad
  {
    out << "position_limit_min_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.position_limit_min_rad, out);
    out << ", ";
  }

  // member: position_limit_max_rad
  {
    out << "position_limit_max_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.position_limit_max_rad, out);
    out << ", ";
  }

  // member: watchdog_timeout_ms
  {
    out << "watchdog_timeout_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.watchdog_timeout_ms, out);
    out << ", ";
  }

  // member: control_period_ms
  {
    out << "control_period_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.control_period_ms, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DCMotorConfig & msg,
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

  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }

  // member: speed_kp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_kp: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_kp, out);
    out << "\n";
  }

  // member: speed_ki
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_ki: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_ki, out);
    out << "\n";
  }

  // member: speed_kd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_kd: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_kd, out);
    out << "\n";
  }

  // member: speed_max_integral
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_max_integral: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_max_integral, out);
    out << "\n";
  }

  // member: speed_max_output
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_max_output: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_max_output, out);
    out << "\n";
  }

  // member: position_kp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_kp: ";
    rosidl_generator_traits::value_to_yaml(msg.position_kp, out);
    out << "\n";
  }

  // member: position_ki
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_ki: ";
    rosidl_generator_traits::value_to_yaml(msg.position_ki, out);
    out << "\n";
  }

  // member: position_kd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_kd: ";
    rosidl_generator_traits::value_to_yaml(msg.position_kd, out);
    out << "\n";
  }

  // member: position_max_integral
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_max_integral: ";
    rosidl_generator_traits::value_to_yaml(msg.position_max_integral, out);
    out << "\n";
  }

  // member: position_max_output
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_max_output: ";
    rosidl_generator_traits::value_to_yaml(msg.position_max_output, out);
    out << "\n";
  }

  // member: max_speed_rad_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_speed_rad_s: ";
    rosidl_generator_traits::value_to_yaml(msg.max_speed_rad_s, out);
    out << "\n";
  }

  // member: max_acceleration_rad_s2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_acceleration_rad_s2: ";
    rosidl_generator_traits::value_to_yaml(msg.max_acceleration_rad_s2, out);
    out << "\n";
  }

  // member: use_position_limits
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "use_position_limits: ";
    rosidl_generator_traits::value_to_yaml(msg.use_position_limits, out);
    out << "\n";
  }

  // member: position_limit_min_rad
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_limit_min_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.position_limit_min_rad, out);
    out << "\n";
  }

  // member: position_limit_max_rad
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_limit_max_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.position_limit_max_rad, out);
    out << "\n";
  }

  // member: watchdog_timeout_ms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "watchdog_timeout_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.watchdog_timeout_ms, out);
    out << "\n";
  }

  // member: control_period_ms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "control_period_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.control_period_ms, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DCMotorConfig & msg, bool use_flow_style = false)
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
  const stm32_mavlink_msgs::msg::DCMotorConfig & msg,
  std::ostream & out, size_t indentation = 0)
{
  stm32_mavlink_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use stm32_mavlink_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const stm32_mavlink_msgs::msg::DCMotorConfig & msg)
{
  return stm32_mavlink_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<stm32_mavlink_msgs::msg::DCMotorConfig>()
{
  return "stm32_mavlink_msgs::msg::DCMotorConfig";
}

template<>
inline const char * name<stm32_mavlink_msgs::msg::DCMotorConfig>()
{
  return "stm32_mavlink_msgs/msg/DCMotorConfig";
}

template<>
struct has_fixed_size<stm32_mavlink_msgs::msg::DCMotorConfig>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<stm32_mavlink_msgs::msg::DCMotorConfig>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<stm32_mavlink_msgs::msg::DCMotorConfig>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // STM32_MAVLINK_MSGS__MSG__DETAIL__DC_MOTOR_CONFIG__TRAITS_HPP_
