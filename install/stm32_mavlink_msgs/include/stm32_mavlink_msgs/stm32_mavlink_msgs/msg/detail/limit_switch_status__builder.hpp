// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from stm32_mavlink_msgs:msg/LimitSwitchStatus.idl
// generated code does not contain a copyright notice

#ifndef STM32_MAVLINK_MSGS__MSG__DETAIL__LIMIT_SWITCH_STATUS__BUILDER_HPP_
#define STM32_MAVLINK_MSGS__MSG__DETAIL__LIMIT_SWITCH_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "stm32_mavlink_msgs/msg/detail/limit_switch_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace stm32_mavlink_msgs
{

namespace msg
{

namespace builder
{

class Init_LimitSwitchStatus_timestamp_ms
{
public:
  explicit Init_LimitSwitchStatus_timestamp_ms(::stm32_mavlink_msgs::msg::LimitSwitchStatus & msg)
  : msg_(msg)
  {}
  ::stm32_mavlink_msgs::msg::LimitSwitchStatus timestamp_ms(::stm32_mavlink_msgs::msg::LimitSwitchStatus::_timestamp_ms_type arg)
  {
    msg_.timestamp_ms = std::move(arg);
    return std::move(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::LimitSwitchStatus msg_;
};

class Init_LimitSwitchStatus_switch_states
{
public:
  explicit Init_LimitSwitchStatus_switch_states(::stm32_mavlink_msgs::msg::LimitSwitchStatus & msg)
  : msg_(msg)
  {}
  Init_LimitSwitchStatus_timestamp_ms switch_states(::stm32_mavlink_msgs::msg::LimitSwitchStatus::_switch_states_type arg)
  {
    msg_.switch_states = std::move(arg);
    return Init_LimitSwitchStatus_timestamp_ms(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::LimitSwitchStatus msg_;
};

class Init_LimitSwitchStatus_switch_count
{
public:
  explicit Init_LimitSwitchStatus_switch_count(::stm32_mavlink_msgs::msg::LimitSwitchStatus & msg)
  : msg_(msg)
  {}
  Init_LimitSwitchStatus_switch_states switch_count(::stm32_mavlink_msgs::msg::LimitSwitchStatus::_switch_count_type arg)
  {
    msg_.switch_count = std::move(arg);
    return Init_LimitSwitchStatus_switch_states(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::LimitSwitchStatus msg_;
};

class Init_LimitSwitchStatus_header
{
public:
  Init_LimitSwitchStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LimitSwitchStatus_switch_count header(::stm32_mavlink_msgs::msg::LimitSwitchStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LimitSwitchStatus_switch_count(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::LimitSwitchStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::stm32_mavlink_msgs::msg::LimitSwitchStatus>()
{
  return stm32_mavlink_msgs::msg::builder::Init_LimitSwitchStatus_header();
}

}  // namespace stm32_mavlink_msgs

#endif  // STM32_MAVLINK_MSGS__MSG__DETAIL__LIMIT_SWITCH_STATUS__BUILDER_HPP_
