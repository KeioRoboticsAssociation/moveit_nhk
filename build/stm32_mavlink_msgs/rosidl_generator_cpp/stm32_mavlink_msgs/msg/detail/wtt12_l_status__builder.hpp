// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from stm32_mavlink_msgs:msg/WTT12LStatus.idl
// generated code does not contain a copyright notice

#ifndef STM32_MAVLINK_MSGS__MSG__DETAIL__WTT12_L_STATUS__BUILDER_HPP_
#define STM32_MAVLINK_MSGS__MSG__DETAIL__WTT12_L_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "stm32_mavlink_msgs/msg/detail/wtt12_l_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace stm32_mavlink_msgs
{

namespace msg
{

namespace builder
{

class Init_WTT12LStatus_timestamp_ms
{
public:
  explicit Init_WTT12LStatus_timestamp_ms(::stm32_mavlink_msgs::msg::WTT12LStatus & msg)
  : msg_(msg)
  {}
  ::stm32_mavlink_msgs::msg::WTT12LStatus timestamp_ms(::stm32_mavlink_msgs::msg::WTT12LStatus::_timestamp_ms_type arg)
  {
    msg_.timestamp_ms = std::move(arg);
    return std::move(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::WTT12LStatus msg_;
};

class Init_WTT12LStatus_device_states
{
public:
  explicit Init_WTT12LStatus_device_states(::stm32_mavlink_msgs::msg::WTT12LStatus & msg)
  : msg_(msg)
  {}
  Init_WTT12LStatus_timestamp_ms device_states(::stm32_mavlink_msgs::msg::WTT12LStatus::_device_states_type arg)
  {
    msg_.device_states = std::move(arg);
    return Init_WTT12LStatus_timestamp_ms(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::WTT12LStatus msg_;
};

class Init_WTT12LStatus_device_count
{
public:
  explicit Init_WTT12LStatus_device_count(::stm32_mavlink_msgs::msg::WTT12LStatus & msg)
  : msg_(msg)
  {}
  Init_WTT12LStatus_device_states device_count(::stm32_mavlink_msgs::msg::WTT12LStatus::_device_count_type arg)
  {
    msg_.device_count = std::move(arg);
    return Init_WTT12LStatus_device_states(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::WTT12LStatus msg_;
};

class Init_WTT12LStatus_header
{
public:
  Init_WTT12LStatus_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WTT12LStatus_device_count header(::stm32_mavlink_msgs::msg::WTT12LStatus::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_WTT12LStatus_device_count(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::WTT12LStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::stm32_mavlink_msgs::msg::WTT12LStatus>()
{
  return stm32_mavlink_msgs::msg::builder::Init_WTT12LStatus_header();
}

}  // namespace stm32_mavlink_msgs

#endif  // STM32_MAVLINK_MSGS__MSG__DETAIL__WTT12_L_STATUS__BUILDER_HPP_
