// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from stm32_mavlink_msgs:msg/RS485FlashSaveRequest.idl
// generated code does not contain a copyright notice

#ifndef STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_FLASH_SAVE_REQUEST__BUILDER_HPP_
#define STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_FLASH_SAVE_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "stm32_mavlink_msgs/msg/detail/rs485_flash_save_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace stm32_mavlink_msgs
{

namespace msg
{

namespace builder
{

class Init_RS485FlashSaveRequest_motor_id
{
public:
  Init_RS485FlashSaveRequest_motor_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::stm32_mavlink_msgs::msg::RS485FlashSaveRequest motor_id(::stm32_mavlink_msgs::msg::RS485FlashSaveRequest::_motor_id_type arg)
  {
    msg_.motor_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::RS485FlashSaveRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::stm32_mavlink_msgs::msg::RS485FlashSaveRequest>()
{
  return stm32_mavlink_msgs::msg::builder::Init_RS485FlashSaveRequest_motor_id();
}

}  // namespace stm32_mavlink_msgs

#endif  // STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_FLASH_SAVE_REQUEST__BUILDER_HPP_
