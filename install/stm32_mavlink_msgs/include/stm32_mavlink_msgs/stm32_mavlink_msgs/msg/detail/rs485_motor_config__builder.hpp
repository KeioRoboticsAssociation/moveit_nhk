// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from stm32_mavlink_msgs:msg/RS485MotorConfig.idl
// generated code does not contain a copyright notice

#ifndef STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_MOTOR_CONFIG__BUILDER_HPP_
#define STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_MOTOR_CONFIG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "stm32_mavlink_msgs/msg/detail/rs485_motor_config__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace stm32_mavlink_msgs
{

namespace msg
{

namespace builder
{

class Init_RS485MotorConfig_enabled
{
public:
  explicit Init_RS485MotorConfig_enabled(::stm32_mavlink_msgs::msg::RS485MotorConfig & msg)
  : msg_(msg)
  {}
  ::stm32_mavlink_msgs::msg::RS485MotorConfig enabled(::stm32_mavlink_msgs::msg::RS485MotorConfig::_enabled_type arg)
  {
    msg_.enabled = std::move(arg);
    return std::move(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::RS485MotorConfig msg_;
};

class Init_RS485MotorConfig_max_acceleration
{
public:
  explicit Init_RS485MotorConfig_max_acceleration(::stm32_mavlink_msgs::msg::RS485MotorConfig & msg)
  : msg_(msg)
  {}
  Init_RS485MotorConfig_enabled max_acceleration(::stm32_mavlink_msgs::msg::RS485MotorConfig::_max_acceleration_type arg)
  {
    msg_.max_acceleration = std::move(arg);
    return Init_RS485MotorConfig_enabled(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::RS485MotorConfig msg_;
};

class Init_RS485MotorConfig_max_velocity_rps
{
public:
  explicit Init_RS485MotorConfig_max_velocity_rps(::stm32_mavlink_msgs::msg::RS485MotorConfig & msg)
  : msg_(msg)
  {}
  Init_RS485MotorConfig_max_acceleration max_velocity_rps(::stm32_mavlink_msgs::msg::RS485MotorConfig::_max_velocity_rps_type arg)
  {
    msg_.max_velocity_rps = std::move(arg);
    return Init_RS485MotorConfig_max_acceleration(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::RS485MotorConfig msg_;
};

class Init_RS485MotorConfig_motor_index
{
public:
  explicit Init_RS485MotorConfig_motor_index(::stm32_mavlink_msgs::msg::RS485MotorConfig & msg)
  : msg_(msg)
  {}
  Init_RS485MotorConfig_max_velocity_rps motor_index(::stm32_mavlink_msgs::msg::RS485MotorConfig::_motor_index_type arg)
  {
    msg_.motor_index = std::move(arg);
    return Init_RS485MotorConfig_max_velocity_rps(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::RS485MotorConfig msg_;
};

class Init_RS485MotorConfig_device_id
{
public:
  explicit Init_RS485MotorConfig_device_id(::stm32_mavlink_msgs::msg::RS485MotorConfig & msg)
  : msg_(msg)
  {}
  Init_RS485MotorConfig_motor_index device_id(::stm32_mavlink_msgs::msg::RS485MotorConfig::_device_id_type arg)
  {
    msg_.device_id = std::move(arg);
    return Init_RS485MotorConfig_motor_index(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::RS485MotorConfig msg_;
};

class Init_RS485MotorConfig_motor_id
{
public:
  Init_RS485MotorConfig_motor_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RS485MotorConfig_device_id motor_id(::stm32_mavlink_msgs::msg::RS485MotorConfig::_motor_id_type arg)
  {
    msg_.motor_id = std::move(arg);
    return Init_RS485MotorConfig_device_id(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::RS485MotorConfig msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::stm32_mavlink_msgs::msg::RS485MotorConfig>()
{
  return stm32_mavlink_msgs::msg::builder::Init_RS485MotorConfig_motor_id();
}

}  // namespace stm32_mavlink_msgs

#endif  // STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_MOTOR_CONFIG__BUILDER_HPP_
