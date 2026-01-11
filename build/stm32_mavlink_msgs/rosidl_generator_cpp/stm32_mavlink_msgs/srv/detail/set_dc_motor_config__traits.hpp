// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from stm32_mavlink_msgs:srv/SetDCMotorConfig.idl
// generated code does not contain a copyright notice

#ifndef STM32_MAVLINK_MSGS__SRV__DETAIL__SET_DC_MOTOR_CONFIG__TRAITS_HPP_
#define STM32_MAVLINK_MSGS__SRV__DETAIL__SET_DC_MOTOR_CONFIG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "stm32_mavlink_msgs/srv/detail/set_dc_motor_config__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'config'
#include "stm32_mavlink_msgs/msg/detail/dc_motor_config__traits.hpp"

namespace stm32_mavlink_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetDCMotorConfig_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: config
  {
    out << "config: ";
    to_flow_style_yaml(msg.config, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetDCMotorConfig_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: config
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "config:\n";
    to_block_style_yaml(msg.config, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetDCMotorConfig_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace stm32_mavlink_msgs

namespace rosidl_generator_traits
{

[[deprecated("use stm32_mavlink_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const stm32_mavlink_msgs::srv::SetDCMotorConfig_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  stm32_mavlink_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use stm32_mavlink_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const stm32_mavlink_msgs::srv::SetDCMotorConfig_Request & msg)
{
  return stm32_mavlink_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<stm32_mavlink_msgs::srv::SetDCMotorConfig_Request>()
{
  return "stm32_mavlink_msgs::srv::SetDCMotorConfig_Request";
}

template<>
inline const char * name<stm32_mavlink_msgs::srv::SetDCMotorConfig_Request>()
{
  return "stm32_mavlink_msgs/srv/SetDCMotorConfig_Request";
}

template<>
struct has_fixed_size<stm32_mavlink_msgs::srv::SetDCMotorConfig_Request>
  : std::integral_constant<bool, has_fixed_size<stm32_mavlink_msgs::msg::DCMotorConfig>::value> {};

template<>
struct has_bounded_size<stm32_mavlink_msgs::srv::SetDCMotorConfig_Request>
  : std::integral_constant<bool, has_bounded_size<stm32_mavlink_msgs::msg::DCMotorConfig>::value> {};

template<>
struct is_message<stm32_mavlink_msgs::srv::SetDCMotorConfig_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace stm32_mavlink_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetDCMotorConfig_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetDCMotorConfig_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetDCMotorConfig_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace stm32_mavlink_msgs

namespace rosidl_generator_traits
{

[[deprecated("use stm32_mavlink_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const stm32_mavlink_msgs::srv::SetDCMotorConfig_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  stm32_mavlink_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use stm32_mavlink_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const stm32_mavlink_msgs::srv::SetDCMotorConfig_Response & msg)
{
  return stm32_mavlink_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<stm32_mavlink_msgs::srv::SetDCMotorConfig_Response>()
{
  return "stm32_mavlink_msgs::srv::SetDCMotorConfig_Response";
}

template<>
inline const char * name<stm32_mavlink_msgs::srv::SetDCMotorConfig_Response>()
{
  return "stm32_mavlink_msgs/srv/SetDCMotorConfig_Response";
}

template<>
struct has_fixed_size<stm32_mavlink_msgs::srv::SetDCMotorConfig_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<stm32_mavlink_msgs::srv::SetDCMotorConfig_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<stm32_mavlink_msgs::srv::SetDCMotorConfig_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<stm32_mavlink_msgs::srv::SetDCMotorConfig>()
{
  return "stm32_mavlink_msgs::srv::SetDCMotorConfig";
}

template<>
inline const char * name<stm32_mavlink_msgs::srv::SetDCMotorConfig>()
{
  return "stm32_mavlink_msgs/srv/SetDCMotorConfig";
}

template<>
struct has_fixed_size<stm32_mavlink_msgs::srv::SetDCMotorConfig>
  : std::integral_constant<
    bool,
    has_fixed_size<stm32_mavlink_msgs::srv::SetDCMotorConfig_Request>::value &&
    has_fixed_size<stm32_mavlink_msgs::srv::SetDCMotorConfig_Response>::value
  >
{
};

template<>
struct has_bounded_size<stm32_mavlink_msgs::srv::SetDCMotorConfig>
  : std::integral_constant<
    bool,
    has_bounded_size<stm32_mavlink_msgs::srv::SetDCMotorConfig_Request>::value &&
    has_bounded_size<stm32_mavlink_msgs::srv::SetDCMotorConfig_Response>::value
  >
{
};

template<>
struct is_service<stm32_mavlink_msgs::srv::SetDCMotorConfig>
  : std::true_type
{
};

template<>
struct is_service_request<stm32_mavlink_msgs::srv::SetDCMotorConfig_Request>
  : std::true_type
{
};

template<>
struct is_service_response<stm32_mavlink_msgs::srv::SetDCMotorConfig_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // STM32_MAVLINK_MSGS__SRV__DETAIL__SET_DC_MOTOR_CONFIG__TRAITS_HPP_
