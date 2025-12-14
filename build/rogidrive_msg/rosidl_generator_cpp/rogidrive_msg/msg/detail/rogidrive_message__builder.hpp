// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rogidrive_msg:msg/RogidriveMessage.idl
// generated code does not contain a copyright notice

#ifndef ROGIDRIVE_MSG__MSG__DETAIL__ROGIDRIVE_MESSAGE__BUILDER_HPP_
#define ROGIDRIVE_MSG__MSG__DETAIL__ROGIDRIVE_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rogidrive_msg/msg/detail/rogidrive_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rogidrive_msg
{

namespace msg
{

namespace builder
{

class Init_RogidriveMessage_current
{
public:
  explicit Init_RogidriveMessage_current(::rogidrive_msg::msg::RogidriveMessage & msg)
  : msg_(msg)
  {}
  ::rogidrive_msg::msg::RogidriveMessage current(::rogidrive_msg::msg::RogidriveMessage::_current_type arg)
  {
    msg_.current = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rogidrive_msg::msg::RogidriveMessage msg_;
};

class Init_RogidriveMessage_pos
{
public:
  explicit Init_RogidriveMessage_pos(::rogidrive_msg::msg::RogidriveMessage & msg)
  : msg_(msg)
  {}
  Init_RogidriveMessage_current pos(::rogidrive_msg::msg::RogidriveMessage::_pos_type arg)
  {
    msg_.pos = std::move(arg);
    return Init_RogidriveMessage_current(msg_);
  }

private:
  ::rogidrive_msg::msg::RogidriveMessage msg_;
};

class Init_RogidriveMessage_vel
{
public:
  explicit Init_RogidriveMessage_vel(::rogidrive_msg::msg::RogidriveMessage & msg)
  : msg_(msg)
  {}
  Init_RogidriveMessage_pos vel(::rogidrive_msg::msg::RogidriveMessage::_vel_type arg)
  {
    msg_.vel = std::move(arg);
    return Init_RogidriveMessage_pos(msg_);
  }

private:
  ::rogidrive_msg::msg::RogidriveMessage msg_;
};

class Init_RogidriveMessage_mode
{
public:
  explicit Init_RogidriveMessage_mode(::rogidrive_msg::msg::RogidriveMessage & msg)
  : msg_(msg)
  {}
  Init_RogidriveMessage_vel mode(::rogidrive_msg::msg::RogidriveMessage::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_RogidriveMessage_vel(msg_);
  }

private:
  ::rogidrive_msg::msg::RogidriveMessage msg_;
};

class Init_RogidriveMessage_name
{
public:
  Init_RogidriveMessage_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RogidriveMessage_mode name(::rogidrive_msg::msg::RogidriveMessage::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_RogidriveMessage_mode(msg_);
  }

private:
  ::rogidrive_msg::msg::RogidriveMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rogidrive_msg::msg::RogidriveMessage>()
{
  return rogidrive_msg::msg::builder::Init_RogidriveMessage_name();
}

}  // namespace rogidrive_msg

#endif  // ROGIDRIVE_MSG__MSG__DETAIL__ROGIDRIVE_MESSAGE__BUILDER_HPP_
