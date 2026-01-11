// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from stm32_mavlink_msgs:srv/ReadRS485Param.idl
// generated code does not contain a copyright notice

#ifndef STM32_MAVLINK_MSGS__SRV__DETAIL__READ_RS485_PARAM__BUILDER_HPP_
#define STM32_MAVLINK_MSGS__SRV__DETAIL__READ_RS485_PARAM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "stm32_mavlink_msgs/srv/detail/read_rs485_param__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace stm32_mavlink_msgs
{

namespace srv
{

namespace builder
{

class Init_ReadRS485Param_Request_length
{
public:
  explicit Init_ReadRS485Param_Request_length(::stm32_mavlink_msgs::srv::ReadRS485Param_Request & msg)
  : msg_(msg)
  {}
  ::stm32_mavlink_msgs::srv::ReadRS485Param_Request length(::stm32_mavlink_msgs::srv::ReadRS485Param_Request::_length_type arg)
  {
    msg_.length = std::move(arg);
    return std::move(msg_);
  }

private:
  ::stm32_mavlink_msgs::srv::ReadRS485Param_Request msg_;
};

class Init_ReadRS485Param_Request_address
{
public:
  explicit Init_ReadRS485Param_Request_address(::stm32_mavlink_msgs::srv::ReadRS485Param_Request & msg)
  : msg_(msg)
  {}
  Init_ReadRS485Param_Request_length address(::stm32_mavlink_msgs::srv::ReadRS485Param_Request::_address_type arg)
  {
    msg_.address = std::move(arg);
    return Init_ReadRS485Param_Request_length(msg_);
  }

private:
  ::stm32_mavlink_msgs::srv::ReadRS485Param_Request msg_;
};

class Init_ReadRS485Param_Request_motor_id
{
public:
  Init_ReadRS485Param_Request_motor_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReadRS485Param_Request_address motor_id(::stm32_mavlink_msgs::srv::ReadRS485Param_Request::_motor_id_type arg)
  {
    msg_.motor_id = std::move(arg);
    return Init_ReadRS485Param_Request_address(msg_);
  }

private:
  ::stm32_mavlink_msgs::srv::ReadRS485Param_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::stm32_mavlink_msgs::srv::ReadRS485Param_Request>()
{
  return stm32_mavlink_msgs::srv::builder::Init_ReadRS485Param_Request_motor_id();
}

}  // namespace stm32_mavlink_msgs


namespace stm32_mavlink_msgs
{

namespace srv
{

namespace builder
{

class Init_ReadRS485Param_Response_message
{
public:
  explicit Init_ReadRS485Param_Response_message(::stm32_mavlink_msgs::srv::ReadRS485Param_Response & msg)
  : msg_(msg)
  {}
  ::stm32_mavlink_msgs::srv::ReadRS485Param_Response message(::stm32_mavlink_msgs::srv::ReadRS485Param_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::stm32_mavlink_msgs::srv::ReadRS485Param_Response msg_;
};

class Init_ReadRS485Param_Response_rs485_error
{
public:
  explicit Init_ReadRS485Param_Response_rs485_error(::stm32_mavlink_msgs::srv::ReadRS485Param_Response & msg)
  : msg_(msg)
  {}
  Init_ReadRS485Param_Response_message rs485_error(::stm32_mavlink_msgs::srv::ReadRS485Param_Response::_rs485_error_type arg)
  {
    msg_.rs485_error = std::move(arg);
    return Init_ReadRS485Param_Response_message(msg_);
  }

private:
  ::stm32_mavlink_msgs::srv::ReadRS485Param_Response msg_;
};

class Init_ReadRS485Param_Response_status
{
public:
  explicit Init_ReadRS485Param_Response_status(::stm32_mavlink_msgs::srv::ReadRS485Param_Response & msg)
  : msg_(msg)
  {}
  Init_ReadRS485Param_Response_rs485_error status(::stm32_mavlink_msgs::srv::ReadRS485Param_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_ReadRS485Param_Response_rs485_error(msg_);
  }

private:
  ::stm32_mavlink_msgs::srv::ReadRS485Param_Response msg_;
};

class Init_ReadRS485Param_Response_data
{
public:
  explicit Init_ReadRS485Param_Response_data(::stm32_mavlink_msgs::srv::ReadRS485Param_Response & msg)
  : msg_(msg)
  {}
  Init_ReadRS485Param_Response_status data(::stm32_mavlink_msgs::srv::ReadRS485Param_Response::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_ReadRS485Param_Response_status(msg_);
  }

private:
  ::stm32_mavlink_msgs::srv::ReadRS485Param_Response msg_;
};

class Init_ReadRS485Param_Response_success
{
public:
  Init_ReadRS485Param_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReadRS485Param_Response_data success(::stm32_mavlink_msgs::srv::ReadRS485Param_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ReadRS485Param_Response_data(msg_);
  }

private:
  ::stm32_mavlink_msgs::srv::ReadRS485Param_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::stm32_mavlink_msgs::srv::ReadRS485Param_Response>()
{
  return stm32_mavlink_msgs::srv::builder::Init_ReadRS485Param_Response_success();
}

}  // namespace stm32_mavlink_msgs

#endif  // STM32_MAVLINK_MSGS__SRV__DETAIL__READ_RS485_PARAM__BUILDER_HPP_
