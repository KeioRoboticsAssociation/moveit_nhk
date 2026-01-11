// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from stm32_mavlink_msgs:msg/RS485MotorState.idl
// generated code does not contain a copyright notice

#ifndef STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_MOTOR_STATE__BUILDER_HPP_
#define STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_MOTOR_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "stm32_mavlink_msgs/msg/detail/rs485_motor_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace stm32_mavlink_msgs
{

namespace msg
{

namespace builder
{

class Init_RS485MotorState_timestamp_ms
{
public:
  explicit Init_RS485MotorState_timestamp_ms(::stm32_mavlink_msgs::msg::RS485MotorState & msg)
  : msg_(msg)
  {}
  ::stm32_mavlink_msgs::msg::RS485MotorState timestamp_ms(::stm32_mavlink_msgs::msg::RS485MotorState::_timestamp_ms_type arg)
  {
    msg_.timestamp_ms = std::move(arg);
    return std::move(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::RS485MotorState msg_;
};

class Init_RS485MotorState_acceleration_rps2
{
public:
  explicit Init_RS485MotorState_acceleration_rps2(::stm32_mavlink_msgs::msg::RS485MotorState & msg)
  : msg_(msg)
  {}
  Init_RS485MotorState_timestamp_ms acceleration_rps2(::stm32_mavlink_msgs::msg::RS485MotorState::_acceleration_rps2_type arg)
  {
    msg_.acceleration_rps2 = std::move(arg);
    return Init_RS485MotorState_timestamp_ms(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::RS485MotorState msg_;
};

class Init_RS485MotorState_target_velocity_rps
{
public:
  explicit Init_RS485MotorState_target_velocity_rps(::stm32_mavlink_msgs::msg::RS485MotorState & msg)
  : msg_(msg)
  {}
  Init_RS485MotorState_acceleration_rps2 target_velocity_rps(::stm32_mavlink_msgs::msg::RS485MotorState::_target_velocity_rps_type arg)
  {
    msg_.target_velocity_rps = std::move(arg);
    return Init_RS485MotorState_acceleration_rps2(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::RS485MotorState msg_;
};

class Init_RS485MotorState_current_velocity_rps
{
public:
  explicit Init_RS485MotorState_current_velocity_rps(::stm32_mavlink_msgs::msg::RS485MotorState & msg)
  : msg_(msg)
  {}
  Init_RS485MotorState_target_velocity_rps current_velocity_rps(::stm32_mavlink_msgs::msg::RS485MotorState::_current_velocity_rps_type arg)
  {
    msg_.current_velocity_rps = std::move(arg);
    return Init_RS485MotorState_target_velocity_rps(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::RS485MotorState msg_;
};

class Init_RS485MotorState_current_position_rotations
{
public:
  explicit Init_RS485MotorState_current_position_rotations(::stm32_mavlink_msgs::msg::RS485MotorState & msg)
  : msg_(msg)
  {}
  Init_RS485MotorState_current_velocity_rps current_position_rotations(::stm32_mavlink_msgs::msg::RS485MotorState::_current_position_rotations_type arg)
  {
    msg_.current_position_rotations = std::move(arg);
    return Init_RS485MotorState_current_velocity_rps(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::RS485MotorState msg_;
};

class Init_RS485MotorState_error_code
{
public:
  explicit Init_RS485MotorState_error_code(::stm32_mavlink_msgs::msg::RS485MotorState & msg)
  : msg_(msg)
  {}
  Init_RS485MotorState_current_position_rotations error_code(::stm32_mavlink_msgs::msg::RS485MotorState::_error_code_type arg)
  {
    msg_.error_code = std::move(arg);
    return Init_RS485MotorState_current_position_rotations(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::RS485MotorState msg_;
};

class Init_RS485MotorState_status
{
public:
  explicit Init_RS485MotorState_status(::stm32_mavlink_msgs::msg::RS485MotorState & msg)
  : msg_(msg)
  {}
  Init_RS485MotorState_error_code status(::stm32_mavlink_msgs::msg::RS485MotorState::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_RS485MotorState_error_code(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::RS485MotorState msg_;
};

class Init_RS485MotorState_control_mode
{
public:
  explicit Init_RS485MotorState_control_mode(::stm32_mavlink_msgs::msg::RS485MotorState & msg)
  : msg_(msg)
  {}
  Init_RS485MotorState_status control_mode(::stm32_mavlink_msgs::msg::RS485MotorState::_control_mode_type arg)
  {
    msg_.control_mode = std::move(arg);
    return Init_RS485MotorState_status(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::RS485MotorState msg_;
};

class Init_RS485MotorState_motor_index
{
public:
  explicit Init_RS485MotorState_motor_index(::stm32_mavlink_msgs::msg::RS485MotorState & msg)
  : msg_(msg)
  {}
  Init_RS485MotorState_control_mode motor_index(::stm32_mavlink_msgs::msg::RS485MotorState::_motor_index_type arg)
  {
    msg_.motor_index = std::move(arg);
    return Init_RS485MotorState_control_mode(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::RS485MotorState msg_;
};

class Init_RS485MotorState_device_id
{
public:
  explicit Init_RS485MotorState_device_id(::stm32_mavlink_msgs::msg::RS485MotorState & msg)
  : msg_(msg)
  {}
  Init_RS485MotorState_motor_index device_id(::stm32_mavlink_msgs::msg::RS485MotorState::_device_id_type arg)
  {
    msg_.device_id = std::move(arg);
    return Init_RS485MotorState_motor_index(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::RS485MotorState msg_;
};

class Init_RS485MotorState_motor_id
{
public:
  Init_RS485MotorState_motor_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RS485MotorState_device_id motor_id(::stm32_mavlink_msgs::msg::RS485MotorState::_motor_id_type arg)
  {
    msg_.motor_id = std::move(arg);
    return Init_RS485MotorState_device_id(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::RS485MotorState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::stm32_mavlink_msgs::msg::RS485MotorState>()
{
  return stm32_mavlink_msgs::msg::builder::Init_RS485MotorState_motor_id();
}

}  // namespace stm32_mavlink_msgs

#endif  // STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_MOTOR_STATE__BUILDER_HPP_
