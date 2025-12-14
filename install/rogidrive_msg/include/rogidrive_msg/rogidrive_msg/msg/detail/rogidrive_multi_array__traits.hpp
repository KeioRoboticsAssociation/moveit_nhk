// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rogidrive_msg:msg/RogidriveMultiArray.idl
// generated code does not contain a copyright notice

#ifndef ROGIDRIVE_MSG__MSG__DETAIL__ROGIDRIVE_MULTI_ARRAY__TRAITS_HPP_
#define ROGIDRIVE_MSG__MSG__DETAIL__ROGIDRIVE_MULTI_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rogidrive_msg/msg/detail/rogidrive_multi_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'data'
#include "rogidrive_msg/msg/detail/rogidrive_message__traits.hpp"

namespace rogidrive_msg
{

namespace msg
{

inline void to_flow_style_yaml(
  const RogidriveMultiArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RogidriveMultiArray & msg,
  std::ostream & out, size_t indentation = 0)
{
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
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RogidriveMultiArray & msg, bool use_flow_style = false)
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
  const rogidrive_msg::msg::RogidriveMultiArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  rogidrive_msg::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rogidrive_msg::msg::to_yaml() instead")]]
inline std::string to_yaml(const rogidrive_msg::msg::RogidriveMultiArray & msg)
{
  return rogidrive_msg::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rogidrive_msg::msg::RogidriveMultiArray>()
{
  return "rogidrive_msg::msg::RogidriveMultiArray";
}

template<>
inline const char * name<rogidrive_msg::msg::RogidriveMultiArray>()
{
  return "rogidrive_msg/msg/RogidriveMultiArray";
}

template<>
struct has_fixed_size<rogidrive_msg::msg::RogidriveMultiArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rogidrive_msg::msg::RogidriveMultiArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rogidrive_msg::msg::RogidriveMultiArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROGIDRIVE_MSG__MSG__DETAIL__ROGIDRIVE_MULTI_ARRAY__TRAITS_HPP_
