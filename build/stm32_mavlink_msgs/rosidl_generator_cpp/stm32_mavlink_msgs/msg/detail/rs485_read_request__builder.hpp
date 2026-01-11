// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from stm32_mavlink_msgs:msg/RS485ReadRequest.idl
// generated code does not contain a copyright notice

#ifndef STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_READ_REQUEST__BUILDER_HPP_
#define STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_READ_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "stm32_mavlink_msgs/msg/detail/rs485_read_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace stm32_mavlink_msgs
{

namespace msg
{

namespace builder
{

class Init_RS485ReadRequest_length
{
public:
  explicit Init_RS485ReadRequest_length(::stm32_mavlink_msgs::msg::RS485ReadRequest & msg)
  : msg_(msg)
  {}
  ::stm32_mavlink_msgs::msg::RS485ReadRequest length(::stm32_mavlink_msgs::msg::RS485ReadRequest::_length_type arg)
  {
    msg_.length = std::move(arg);
    return std::move(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::RS485ReadRequest msg_;
};

class Init_RS485ReadRequest_address
{
public:
  explicit Init_RS485ReadRequest_address(::stm32_mavlink_msgs::msg::RS485ReadRequest & msg)
  : msg_(msg)
  {}
  Init_RS485ReadRequest_length address(::stm32_mavlink_msgs::msg::RS485ReadRequest::_address_type arg)
  {
    msg_.address = std::move(arg);
    return Init_RS485ReadRequest_length(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::RS485ReadRequest msg_;
};

class Init_RS485ReadRequest_motor_id
{
public:
  Init_RS485ReadRequest_motor_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RS485ReadRequest_address motor_id(::stm32_mavlink_msgs::msg::RS485ReadRequest::_motor_id_type arg)
  {
    msg_.motor_id = std::move(arg);
    return Init_RS485ReadRequest_address(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::RS485ReadRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::stm32_mavlink_msgs::msg::RS485ReadRequest>()
{
  return stm32_mavlink_msgs::msg::builder::Init_RS485ReadRequest_motor_id();
}

}  // namespace stm32_mavlink_msgs

#endif  // STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_READ_REQUEST__BUILDER_HPP_
