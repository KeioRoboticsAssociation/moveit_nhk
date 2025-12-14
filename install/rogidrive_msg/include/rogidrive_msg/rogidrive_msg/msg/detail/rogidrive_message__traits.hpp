// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rogidrive_msg:msg/RogidriveMessage.idl
// generated code does not contain a copyright notice

#ifndef ROGIDRIVE_MSG__MSG__DETAIL__ROGIDRIVE_MESSAGE__TRAITS_HPP_
#define ROGIDRIVE_MSG__MSG__DETAIL__ROGIDRIVE_MESSAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rogidrive_msg/msg/detail/rogidrive_message__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rogidrive_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const RogidriveMessage & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << ", ";
  }

  // member: vel
  {
    out << "vel: ";
    rosidl_generator_traits::value_to_yaml(msg.vel, out);
    out << ", ";
  }

  // member: pos
  {
    out << "pos: ";
    rosidl_generator_traits::value_to_yaml(msg.pos, out);
    out << ", ";
  }

  // member: current
  {
    out << "current: ";
    rosidl_generator_traits::value_to_yaml(msg.current, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RogidriveMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
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

  // member: vel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel: ";
    rosidl_generator_traits::value_to_yaml(msg.vel, out);
    out << "\n";
  }

  // member: pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pos: ";
    rosidl_generator_traits::value_to_yaml(msg.pos, out);
    out << "\n";
  }

  // member: current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current: ";
    rosidl_generator_traits::value_to_yaml(msg.current, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RogidriveMessage & msg, bool use_flow_style = false)
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

}  // namespace rogidrive_msg

namespace rosidl_generator_traits
{

[[deprecated("use rogidrive_msg::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rogidrive_msg::msg::RogidriveMessage & msg,
  std::ostream & out, size_t indentation = 0)
{
  rogidrive_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rogidrive_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const rogidrive_msg::msg::RogidriveMessage & msg)
{
  return rogidrive_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rogidrive_msg::msg::RogidriveMessage>()
{
  return "rogidrive_msg::msg::RogidriveMessage";
}

template<>
inline const char * name<rogidrive_msg::msg::RogidriveMessage>()
{
  return "rogidrive_msg/msg/RogidriveMessage";
}

template<>
struct has_fixed_size<rogidrive_msg::msg::RogidriveMessage>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rogidrive_msg::msg::RogidriveMessage>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rogidrive_msg::msg::RogidriveMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROGIDRIVE_MSG__MSG__DETAIL__ROGIDRIVE_MESSAGE__TRAITS_HPP_
