// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from stm32_mavlink_msgs:msg/SolenoidCommand.idl
// generated code does not contain a copyright notice

#ifndef STM32_MAVLINK_MSGS__MSG__DETAIL__SOLENOID_COMMAND__BUILDER_HPP_
#define STM32_MAVLINK_MSGS__MSG__DETAIL__SOLENOID_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "stm32_mavlink_msgs/msg/detail/solenoid_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace stm32_mavlink_msgs
{

namespace msg
{

namespace builder
{

class Init_SolenoidCommand_state
{
public:
  explicit Init_SolenoidCommand_state(::stm32_mavlink_msgs::msg::SolenoidCommand & msg)
  : msg_(msg)
  {}
  ::stm32_mavlink_msgs::msg::SolenoidCommand state(::stm32_mavlink_msgs::msg::SolenoidCommand::_state_type arg)
  {
    msg_.state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::SolenoidCommand msg_;
};

class Init_SolenoidCommand_solenoid_id
{
public:
  Init_SolenoidCommand_solenoid_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SolenoidCommand_state solenoid_id(::stm32_mavlink_msgs::msg::SolenoidCommand::_solenoid_id_type arg)
  {
    msg_.solenoid_id = std::move(arg);
    return Init_SolenoidCommand_state(msg_);
  }

private:
  ::stm32_mavlink_msgs::msg::SolenoidCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::stm32_mavlink_msgs::msg::SolenoidCommand>()
{
  return stm32_mavlink_msgs::msg::builder::Init_SolenoidCommand_solenoid_id();
}

}  // namespace stm32_mavlink_msgs

#endif  // STM32_MAVLINK_MSGS__MSG__DETAIL__SOLENOID_COMMAND__BUILDER_HPP_
