// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from stm32_mavlink_msgs:msg/DCMotorState.idl
// generated code does not contain a copyright notice

#ifndef STM32_MAVLINK_MSGS__MSG__DETAIL__DC_MOTOR_STATE__BUILDER_HPP_
#define STM32_MAVLINK_MSGS__MSG__DETAIL__DC_MOTOR_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "stm32_mavlink_msgs/msg/detail/dc_motor_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace stm32_mavlink_msgs
{

namespace msg
{

namespace builder
{

class Init_DCMotorState_timestamp
{
public:
  explicit Init_DCMotorState_timestamp(::stm32_mavlink_msgs::msg::DCMotorState & msg)
  : msg_(msg)
  {}
  ::stm32_mavlink_msgs::msg::DCMotorState timestamp(::stm32_mavlink_msgs::msg::DCMotorState::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::DCMotorState msg_;
};

class Init_DCMotorState_target_velocity_rad_s
{
public:
  explicit Init_DCMotorState_target_velocity_rad_s(::stm32_mavlink_msgs::msg::DCMotorState & msg)
  : msg_(msg)
  {}
  Init_DCMotorState_timestamp target_velocity_rad_s(::stm32_mavlink_msgs::msg::DCMotorState::_target_velocity_rad_s_type arg)
  {
    msg_.target_velocity_rad_s = std::move(arg);
    return Init_DCMotorState_timestamp(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::DCMotorState msg_;
};

class Init_DCMotorState_target_duty_cycle
{
public:
  explicit Init_DCMotorState_target_duty_cycle(::stm32_mavlink_msgs::msg::DCMotorState & msg)
  : msg_(msg)
  {}
  Init_DCMotorState_target_velocity_rad_s target_duty_cycle(::stm32_mavlink_msgs::msg::DCMotorState::_target_duty_cycle_type arg)
  {
    msg_.target_duty_cycle = std::move(arg);
    return Init_DCMotorState_target_velocity_rad_s(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::DCMotorState msg_;
};

class Init_DCMotorState_current_duty_cycle
{
public:
  explicit Init_DCMotorState_current_duty_cycle(::stm32_mavlink_msgs::msg::DCMotorState & msg)
  : msg_(msg)
  {}
  Init_DCMotorState_target_duty_cycle current_duty_cycle(::stm32_mavlink_msgs::msg::DCMotorState::_current_duty_cycle_type arg)
  {
    msg_.current_duty_cycle = std::move(arg);
    return Init_DCMotorState_target_duty_cycle(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::DCMotorState msg_;
};

class Init_DCMotorState_control_mode
{
public:
  explicit Init_DCMotorState_control_mode(::stm32_mavlink_msgs::msg::DCMotorState & msg)
  : msg_(msg)
  {}
  Init_DCMotorState_current_duty_cycle control_mode(::stm32_mavlink_msgs::msg::DCMotorState::_control_mode_type arg)
  {
    msg_.control_mode = std::move(arg);
    return Init_DCMotorState_current_duty_cycle(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::DCMotorState msg_;
};

class Init_DCMotorState_enabled
{
public:
  explicit Init_DCMotorState_enabled(::stm32_mavlink_msgs::msg::DCMotorState & msg)
  : msg_(msg)
  {}
  Init_DCMotorState_control_mode enabled(::stm32_mavlink_msgs::msg::DCMotorState::_enabled_type arg)
  {
    msg_.enabled = std::move(arg);
    return Init_DCMotorState_control_mode(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::DCMotorState msg_;
};

class Init_DCMotorState_status
{
public:
  explicit Init_DCMotorState_status(::stm32_mavlink_msgs::msg::DCMotorState & msg)
  : msg_(msg)
  {}
  Init_DCMotorState_enabled status(::stm32_mavlink_msgs::msg::DCMotorState::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_DCMotorState_enabled(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::DCMotorState msg_;
};

class Init_DCMotorState_temperature_c
{
public:
  explicit Init_DCMotorState_temperature_c(::stm32_mavlink_msgs::msg::DCMotorState & msg)
  : msg_(msg)
  {}
  Init_DCMotorState_status temperature_c(::stm32_mavlink_msgs::msg::DCMotorState::_temperature_c_type arg)
  {
    msg_.temperature_c = std::move(arg);
    return Init_DCMotorState_status(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::DCMotorState msg_;
};

class Init_DCMotorState_current_a
{
public:
  explicit Init_DCMotorState_current_a(::stm32_mavlink_msgs::msg::DCMotorState & msg)
  : msg_(msg)
  {}
  Init_DCMotorState_temperature_c current_a(::stm32_mavlink_msgs::msg::DCMotorState::_current_a_type arg)
  {
    msg_.current_a = std::move(arg);
    return Init_DCMotorState_temperature_c(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::DCMotorState msg_;
};

class Init_DCMotorState_velocity_rad_s
{
public:
  explicit Init_DCMotorState_velocity_rad_s(::stm32_mavlink_msgs::msg::DCMotorState & msg)
  : msg_(msg)
  {}
  Init_DCMotorState_current_a velocity_rad_s(::stm32_mavlink_msgs::msg::DCMotorState::_velocity_rad_s_type arg)
  {
    msg_.velocity_rad_s = std::move(arg);
    return Init_DCMotorState_current_a(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::DCMotorState msg_;
};

class Init_DCMotorState_position_rad
{
public:
  explicit Init_DCMotorState_position_rad(::stm32_mavlink_msgs::msg::DCMotorState & msg)
  : msg_(msg)
  {}
  Init_DCMotorState_velocity_rad_s position_rad(::stm32_mavlink_msgs::msg::DCMotorState::_position_rad_type arg)
  {
    msg_.position_rad = std::move(arg);
    return Init_DCMotorState_velocity_rad_s(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::DCMotorState msg_;
};

class Init_DCMotorState_motor_id
{
public:
  Init_DCMotorState_motor_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DCMotorState_position_rad motor_id(::stm32_mavlink_msgs::msg::DCMotorState::_motor_id_type arg)
  {
    msg_.motor_id = std::move(arg);
    return Init_DCMotorState_position_rad(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::DCMotorState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::stm32_mavlink_msgs::msg::DCMotorState>()
{
  return stm32_mavlink_msgs::msg::builder::Init_DCMotorState_motor_id();
}

}  // namespace stm32_mavlink_msgs

#endif  // STM32_MAVLINK_MSGS__MSG__DETAIL__DC_MOTOR_STATE__BUILDER_HPP_
