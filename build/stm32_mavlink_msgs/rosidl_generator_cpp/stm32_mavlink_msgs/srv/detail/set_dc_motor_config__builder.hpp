// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from stm32_mavlink_msgs:srv/SetDCMotorConfig.idl
// generated code does not contain a copyright notice

#ifndef STM32_MAVLINK_MSGS__SRV__DETAIL__SET_DC_MOTOR_CONFIG__BUILDER_HPP_
#define STM32_MAVLINK_MSGS__SRV__DETAIL__SET_DC_MOTOR_CONFIG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "stm32_mavlink_msgs/srv/detail/set_dc_motor_config__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace stm32_mavlink_msgs
{

namespace srv
{

namespace builder
{

class Init_SetDCMotorConfig_Request_config
{
public:
  Init_SetDCMotorConfig_Request_config()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::stm32_mavlink_msgs::srv::SetDCMotorConfig_Request config(::stm32_mavlink_msgs::srv::SetDCMotorConfig_Request::_config_type arg)
  {
    msg_.config = std::move(arg);
    return std::move(msg_);
  }

private:
  ::stm32_mavlink_msgs::srv::SetDCMotorConfig_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::stm32_mavlink_msgs::srv::SetDCMotorConfig_Request>()
{
  return stm32_mavlink_msgs::srv::builder::Init_SetDCMotorConfig_Request_config();
}

}  // namespace stm32_mavlink_msgs


namespace stm32_mavlink_msgs
{

namespace srv
{

namespace builder
{

class Init_SetDCMotorConfig_Response_message
{
public:
  explicit Init_SetDCMotorConfig_Response_message(::stm32_mavlink_msgs::srv::SetDCMotorConfig_Response & msg)
  : msg_(msg)
  {}
  ::stm32_mavlink_msgs::srv::SetDCMotorConfig_Response message(::stm32_mavlink_msgs::srv::SetDCMotorConfig_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::stm32_mavlink_msgs::srv::SetDCMotorConfig_Response msg_;
};

class Init_SetDCMotorConfig_Response_success
{
public:
  Init_SetDCMotorConfig_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetDCMotorConfig_Response_message success(::stm32_mavlink_msgs::srv::SetDCMotorConfig_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SetDCMotorConfig_Response_message(msg_);
  }

private:
  ::stm32_mavlink_msgs::srv::SetDCMotorConfig_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::stm32_mavlink_msgs::srv::SetDCMotorConfig_Response>()
{
  return stm32_mavlink_msgs::srv::builder::Init_SetDCMotorConfig_Response_success();
}

}  // namespace stm32_mavlink_msgs

#endif  // STM32_MAVLINK_MSGS__SRV__DETAIL__SET_DC_MOTOR_CONFIG__BUILDER_HPP_
