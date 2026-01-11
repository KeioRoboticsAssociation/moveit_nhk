// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from stm32_mavlink_msgs:msg/DCMotorCommand.idl
// generated code does not contain a copyright notice

#ifndef STM32_MAVLINK_MSGS__MSG__DETAIL__DC_MOTOR_COMMAND__BUILDER_HPP_
#define STM32_MAVLINK_MSGS__MSG__DETAIL__DC_MOTOR_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "stm32_mavlink_msgs/msg/detail/dc_motor_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace stm32_mavlink_msgs
{

namespace msg
{

namespace builder
{

class Init_DCMotorCommand_enabled
{
public:
  explicit Init_DCMotorCommand_enabled(::stm32_mavlink_msgs::msg::DCMotorCommand & msg)
  : msg_(msg)
  {}
  ::stm32_mavlink_msgs::msg::DCMotorCommand enabled(::stm32_mavlink_msgs::msg::DCMotorCommand::_enabled_type arg)
  {
    msg_.enabled = std::move(arg);
    return std::move(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::DCMotorCommand msg_;
};

class Init_DCMotorCommand_target_position_rad
{
public:
  explicit Init_DCMotorCommand_target_position_rad(::stm32_mavlink_msgs::msg::DCMotorCommand & msg)
  : msg_(msg)
  {}
  Init_DCMotorCommand_enabled target_position_rad(::stm32_mavlink_msgs::msg::DCMotorCommand::_target_position_rad_type arg)
  {
    msg_.target_position_rad = std::move(arg);
    return Init_DCMotorCommand_enabled(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::DCMotorCommand msg_;
};

class Init_DCMotorCommand_target_value
{
public:
  explicit Init_DCMotorCommand_target_value(::stm32_mavlink_msgs::msg::DCMotorCommand & msg)
  : msg_(msg)
  {}
  Init_DCMotorCommand_target_position_rad target_value(::stm32_mavlink_msgs::msg::DCMotorCommand::_target_value_type arg)
  {
    msg_.target_value = std::move(arg);
    return Init_DCMotorCommand_target_position_rad(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::DCMotorCommand msg_;
};

class Init_DCMotorCommand_control_mode
{
public:
  explicit Init_DCMotorCommand_control_mode(::stm32_mavlink_msgs::msg::DCMotorCommand & msg)
  : msg_(msg)
  {}
  Init_DCMotorCommand_target_value control_mode(::stm32_mavlink_msgs::msg::DCMotorCommand::_control_mode_type arg)
  {
    msg_.control_mode = std::move(arg);
    return Init_DCMotorCommand_target_value(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::DCMotorCommand msg_;
};

class Init_DCMotorCommand_motor_id
{
public:
  Init_DCMotorCommand_motor_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DCMotorCommand_control_mode motor_id(::stm32_mavlink_msgs::msg::DCMotorCommand::_motor_id_type arg)
  {
    msg_.motor_id = std::move(arg);
    return Init_DCMotorCommand_control_mode(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::DCMotorCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::stm32_mavlink_msgs::msg::DCMotorCommand>()
{
  return stm32_mavlink_msgs::msg::builder::Init_DCMotorCommand_motor_id();
}

}  // namespace stm32_mavlink_msgs

#endif  // STM32_MAVLINK_MSGS__MSG__DETAIL__DC_MOTOR_COMMAND__BUILDER_HPP_
