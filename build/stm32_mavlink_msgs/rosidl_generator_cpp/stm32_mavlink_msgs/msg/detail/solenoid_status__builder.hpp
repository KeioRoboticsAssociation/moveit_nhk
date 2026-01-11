// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from stm32_mavlink_msgs:msg/SolenoidStatus.idl
// generated code does not contain a copyright notice

#ifndef STM32_MAVLINK_MSGS__MSG__DETAIL__SOLENOID_STATUS__BUILDER_HPP_
#define STM32_MAVLINK_MSGS__MSG__DETAIL__SOLENOID_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "stm32_mavlink_msgs/msg/detail/solenoid_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace stm32_mavlink_msgs
{

namespace msg
{

namespace builder
{

class Init_SolenoidStatus_timestamp_ms
{
public:
  explicit Init_SolenoidStatus_timestamp_ms(::stm32_mavlink_msgs::msg::SolenoidStatus & msg)
  : msg_(msg)
  {}
  ::stm32_mavlink_msgs::msg::SolenoidStatus timestamp_ms(::stm32_mavlink_msgs::msg::SolenoidStatus::_timestamp_ms_type arg)
  {
    msg_.timestamp_ms = std::move(arg);
    return std::move(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::SolenoidStatus msg_;
};

class Init_SolenoidStatus_solenoid_states
{
public:
  explicit Init_SolenoidStatus_solenoid_states(::stm32_mavlink_msgs::msg::SolenoidStatus & msg)
  : msg_(msg)
  {}
  Init_SolenoidStatus_timestamp_ms solenoid_states(::stm32_mavlink_msgs::msg::SolenoidStatus::_solenoid_states_type arg)
  {
    msg_.solenoid_states = std::move(arg);
    return Init_SolenoidStatus_timestamp_ms(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::SolenoidStatus msg_;
};

class Init_SolenoidStatus_solenoid_count
{
public:
  explicit Init_SolenoidStatus_solenoid_count(::stm32_mavlink_msgs::msg::SolenoidStatus & msg)
  : msg_(msg)
  {}
  Init_SolenoidStatus_solenoid_states solenoid_count(::stm32_mavlink_msgs::msg::SolenoidStatus::_solenoid_count_type arg)
  {
    msg_.solenoid_count = std::move(arg);
    return Init_SolenoidStatus_solenoid_states(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::SolenoidStatus msg_;
};

class Init_SolenoidStatus_header
{
public:
  Init_SolenoidStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SolenoidStatus_solenoid_count header(::stm32_mavlink_msgs::msg::SolenoidStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SolenoidStatus_solenoid_count(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::SolenoidStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::stm32_mavlink_msgs::msg::SolenoidStatus>()
{
  return stm32_mavlink_msgs::msg::builder::Init_SolenoidStatus_header();
}

}  // namespace stm32_mavlink_msgs

#endif  // STM32_MAVLINK_MSGS__MSG__DETAIL__SOLENOID_STATUS__BUILDER_HPP_
