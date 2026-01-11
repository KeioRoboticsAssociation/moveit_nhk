// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from stm32_mavlink_msgs:msg/RS485MotorCommand.idl
// generated code does not contain a copyright notice

#ifndef STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_MOTOR_COMMAND__BUILDER_HPP_
#define STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_MOTOR_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "stm32_mavlink_msgs/msg/detail/rs485_motor_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace stm32_mavlink_msgs
{

namespace msg
{

namespace builder
{

class Init_RS485MotorCommand_enabled
{
public:
  explicit Init_RS485MotorCommand_enabled(::stm32_mavlink_msgs::msg::RS485MotorCommand & msg)
  : msg_(msg)
  {}
  ::stm32_mavlink_msgs::msg::RS485MotorCommand enabled(::stm32_mavlink_msgs::msg::RS485MotorCommand::_enabled_type arg)
  {
    msg_.enabled = std::move(arg);
    return std::move(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::RS485MotorCommand msg_;
};

class Init_RS485MotorCommand_acceleration
{
public:
  explicit Init_RS485MotorCommand_acceleration(::stm32_mavlink_msgs::msg::RS485MotorCommand & msg)
  : msg_(msg)
  {}
  Init_RS485MotorCommand_enabled acceleration(::stm32_mavlink_msgs::msg::RS485MotorCommand::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_RS485MotorCommand_enabled(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::RS485MotorCommand msg_;
};

class Init_RS485MotorCommand_target_duty
{
public:
  explicit Init_RS485MotorCommand_target_duty(::stm32_mavlink_msgs::msg::RS485MotorCommand & msg)
  : msg_(msg)
  {}
  Init_RS485MotorCommand_acceleration target_duty(::stm32_mavlink_msgs::msg::RS485MotorCommand::_target_duty_type arg)
  {
    msg_.target_duty = std::move(arg);
    return Init_RS485MotorCommand_acceleration(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::RS485MotorCommand msg_;
};

class Init_RS485MotorCommand_target_position
{
public:
  explicit Init_RS485MotorCommand_target_position(::stm32_mavlink_msgs::msg::RS485MotorCommand & msg)
  : msg_(msg)
  {}
  Init_RS485MotorCommand_target_duty target_position(::stm32_mavlink_msgs::msg::RS485MotorCommand::_target_position_type arg)
  {
    msg_.target_position = std::move(arg);
    return Init_RS485MotorCommand_target_duty(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::RS485MotorCommand msg_;
};

class Init_RS485MotorCommand_target_velocity
{
public:
  explicit Init_RS485MotorCommand_target_velocity(::stm32_mavlink_msgs::msg::RS485MotorCommand & msg)
  : msg_(msg)
  {}
  Init_RS485MotorCommand_target_position target_velocity(::stm32_mavlink_msgs::msg::RS485MotorCommand::_target_velocity_type arg)
  {
    msg_.target_velocity = std::move(arg);
    return Init_RS485MotorCommand_target_position(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::RS485MotorCommand msg_;
};

class Init_RS485MotorCommand_control_mode
{
public:
  explicit Init_RS485MotorCommand_control_mode(::stm32_mavlink_msgs::msg::RS485MotorCommand & msg)
  : msg_(msg)
  {}
  Init_RS485MotorCommand_target_velocity control_mode(::stm32_mavlink_msgs::msg::RS485MotorCommand::_control_mode_type arg)
  {
    msg_.control_mode = std::move(arg);
    return Init_RS485MotorCommand_target_velocity(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::RS485MotorCommand msg_;
};

class Init_RS485MotorCommand_motor_index
{
public:
  explicit Init_RS485MotorCommand_motor_index(::stm32_mavlink_msgs::msg::RS485MotorCommand & msg)
  : msg_(msg)
  {}
  Init_RS485MotorCommand_control_mode motor_index(::stm32_mavlink_msgs::msg::RS485MotorCommand::_motor_index_type arg)
  {
    msg_.motor_index = std::move(arg);
    return Init_RS485MotorCommand_control_mode(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::RS485MotorCommand msg_;
};

class Init_RS485MotorCommand_device_id
{
public:
  Init_RS485MotorCommand_device_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RS485MotorCommand_motor_index device_id(::stm32_mavlink_msgs::msg::RS485MotorCommand::_device_id_type arg)
  {
    msg_.device_id = std::move(arg);
    return Init_RS485MotorCommand_motor_index(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::RS485MotorCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::stm32_mavlink_msgs::msg::RS485MotorCommand>()
{
  return stm32_mavlink_msgs::msg::builder::Init_RS485MotorCommand_device_id();
}

}  // namespace stm32_mavlink_msgs

#endif  // STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_MOTOR_COMMAND__BUILDER_HPP_
