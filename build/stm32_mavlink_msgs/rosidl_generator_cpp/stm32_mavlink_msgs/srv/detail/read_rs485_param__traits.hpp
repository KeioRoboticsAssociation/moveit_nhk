// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from stm32_mavlink_msgs:srv/ReadRS485Param.idl
// generated code does not contain a copyright notice

#ifndef STM32_MAVLINK_MSGS__SRV__DETAIL__READ_RS485_PARAM__TRAITS_HPP_
#define STM32_MAVLINK_MSGS__SRV__DETAIL__READ_RS485_PARAM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "stm32_mavlink_msgs/srv/detail/read_rs485_param__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace stm32_mavlink_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ReadRS485Param_Request & msg,
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
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ReadRS485Param_Request & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ReadRS485Param_Request & msg, bool use_flow_style = false)
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
  const stm32_mavlink_msgs::srv::ReadRS485Param_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  stm32_mavlink_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use stm32_mavlink_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const stm32_mavlink_msgs::srv::ReadRS485Param_Request & msg)
{
  return stm32_mavlink_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<stm32_mavlink_msgs::srv::ReadRS485Param_Request>()
{
  return "stm32_mavlink_msgs::srv::ReadRS485Param_Request";
}

template<>
inline const char * name<stm32_mavlink_msgs::srv::ReadRS485Param_Request>()
{
  return "stm32_mavlink_msgs/srv/ReadRS485Param_Request";
}

template<>
struct has_fixed_size<stm32_mavlink_msgs::srv::ReadRS485Param_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<stm32_mavlink_msgs::srv::ReadRS485Param_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<stm32_mavlink_msgs::srv::ReadRS485Param_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace stm32_mavlink_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ReadRS485Param_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
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
  const ReadRS485Param_Response & msg,
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

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
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

inline std::string to_yaml(const ReadRS485Param_Response & msg, bool use_flow_style = false)
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
  const stm32_mavlink_msgs::srv::ReadRS485Param_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  stm32_mavlink_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use stm32_mavlink_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const stm32_mavlink_msgs::srv::ReadRS485Param_Response & msg)
{
  return stm32_mavlink_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<stm32_mavlink_msgs::srv::ReadRS485Param_Response>()
{
  return "stm32_mavlink_msgs::srv::ReadRS485Param_Response";
}

template<>
inline const char * name<stm32_mavlink_msgs::srv::ReadRS485Param_Response>()
{
  return "stm32_mavlink_msgs/srv/ReadRS485Param_Response";
}

template<>
struct has_fixed_size<stm32_mavlink_msgs::srv::ReadRS485Param_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<stm32_mavlink_msgs::srv::ReadRS485Param_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<stm32_mavlink_msgs::srv::ReadRS485Param_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<stm32_mavlink_msgs::srv::ReadRS485Param>()
{
  return "stm32_mavlink_msgs::srv::ReadRS485Param";
}

template<>
inline const char * name<stm32_mavlink_msgs::srv::ReadRS485Param>()
{
  return "stm32_mavlink_msgs/srv/ReadRS485Param";
}

template<>
struct has_fixed_size<stm32_mavlink_msgs::srv::ReadRS485Param>
  : std::integral_constant<
    bool,
    has_fixed_size<stm32_mavlink_msgs::srv::ReadRS485Param_Request>::value &&
    has_fixed_size<stm32_mavlink_msgs::srv::ReadRS485Param_Response>::value
  >
{
};

template<>
struct has_bounded_size<stm32_mavlink_msgs::srv::ReadRS485Param>
  : std::integral_constant<
    bool,
    has_bounded_size<stm32_mavlink_msgs::srv::ReadRS485Param_Request>::value &&
    has_bounded_size<stm32_mavlink_msgs::srv::ReadRS485Param_Response>::value
  >
{
};

template<>
struct is_service<stm32_mavlink_msgs::srv::ReadRS485Param>
  : std::true_type
{
};

template<>
struct is_service_request<stm32_mavlink_msgs::srv::ReadRS485Param_Request>
  : std::true_type
{
};

template<>
struct is_service_response<stm32_mavlink_msgs::srv::ReadRS485Param_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // STM32_MAVLINK_MSGS__SRV__DETAIL__READ_RS485_PARAM__TRAITS_HPP_
