// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rogidrive_msg:msg/RogidriveMultiArray.idl
// generated code does not contain a copyright notice

#ifndef ROGIDRIVE_MSG__MSG__DETAIL__ROGIDRIVE_MULTI_ARRAY__BUILDER_HPP_
#define ROGIDRIVE_MSG__MSG__DETAIL__ROGIDRIVE_MULTI_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rogidrive_msg/msg/detail/rogidrive_multi_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rogidrive_msg
{

namespace msg
{

namespace builder
{

class Init_RogidriveMultiArray_data
{
public:
  Init_RogidriveMultiArray_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rogidrive_msg::msg::RogidriveMultiArray data(::rogidrive_msg::msg::RogidriveMultiArray::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rogidrive_msg::msg::RogidriveMultiArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rogidrive_msg::msg::RogidriveMultiArray>()
{
  return rogidrive_msg::msg::builder::Init_RogidriveMultiArray_data();
}

}  // namespace rogidrive_msg

#endif  // ROGIDRIVE_MSG__MSG__DETAIL__ROGIDRIVE_MULTI_ARRAY__BUILDER_HPP_
