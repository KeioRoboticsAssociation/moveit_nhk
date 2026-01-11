// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from stm32_mavlink_msgs:srv/FlashSaveRS485.idl
// generated code does not contain a copyright notice

#ifndef STM32_MAVLINK_MSGS__SRV__DETAIL__FLASH_SAVE_RS485__BUILDER_HPP_
#define STM32_MAVLINK_MSGS__SRV__DETAIL__FLASH_SAVE_RS485__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "stm32_mavlink_msgs/srv/detail/flash_save_rs485__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace stm32_mavlink_msgs
{

namespace srv
{

namespace builder
{

class Init_FlashSaveRS485_Request_motor_id
{
public:
  Init_FlashSaveRS485_Request_motor_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::stm32_mavlink_msgs::srv::FlashSaveRS485_Request motor_id(::stm32_mavlink_msgs::srv::FlashSaveRS485_Request::_motor_id_type arg)
  {
    msg_.motor_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::stm32_mavlink_msgs::srv::FlashSaveRS485_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::stm32_mavlink_msgs::srv::FlashSaveRS485_Request>()
{
  return stm32_mavlink_msgs::srv::builder::Init_FlashSaveRS485_Request_motor_id();
}

}  // namespace stm32_mavlink_msgs


namespace stm32_mavlink_msgs
{

namespace srv
{

namespace builder
{

class Init_FlashSaveRS485_Response_message
{
public:
  explicit Init_FlashSaveRS485_Response_message(::stm32_mavlink_msgs::srv::FlashSaveRS485_Response & msg)
  : msg_(msg)
  {}
  ::stm32_mavlink_msgs::srv::FlashSaveRS485_Response message(::stm32_mavlink_msgs::srv::FlashSaveRS485_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::stm32_mavlink_msgs::srv::FlashSaveRS485_Response msg_;
};

class Init_FlashSaveRS485_Response_error_code
{
public:
  explicit Init_FlashSaveRS485_Response_error_code(::stm32_mavlink_msgs::srv::FlashSaveRS485_Response & msg)
  : msg_(msg)
  {}
  Init_FlashSaveRS485_Response_message error_code(::stm32_mavlink_msgs::srv::FlashSaveRS485_Response::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_FlashSaveRS485_Response_message(msg_);
  }

private:
  ::stm32_mavlink_msgs::srv::FlashSaveRS485_Response msg_;
};

class Init_FlashSaveRS485_Response_result
{
public:
  explicit Init_FlashSaveRS485_Response_result(::stm32_mavlink_msgs::srv::FlashSaveRS485_Response & msg)
  : msg_(msg)
  {}
  Init_FlashSaveRS485_Response_error_code result(::stm32_mavlink_msgs::srv::FlashSaveRS485_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_FlashSaveRS485_Response_error_code(msg_);
  }

private:
  ::stm32_mavlink_msgs::srv::FlashSaveRS485_Response msg_;
};

class Init_FlashSaveRS485_Response_success
{
public:
  Init_FlashSaveRS485_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FlashSaveRS485_Response_result success(::stm32_mavlink_msgs::srv::FlashSaveRS485_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_FlashSaveRS485_Response_result(msg_);
  }

private:
  ::stm32_mavlink_msgs::srv::FlashSaveRS485_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::stm32_mavlink_msgs::srv::FlashSaveRS485_Response>()
{
  return stm32_mavlink_msgs::srv::builder::Init_FlashSaveRS485_Response_success();
}

}  // namespace stm32_mavlink_msgs

#endif  // STM32_MAVLINK_MSGS__SRV__DETAIL__FLASH_SAVE_RS485__BUILDER_HPP_
