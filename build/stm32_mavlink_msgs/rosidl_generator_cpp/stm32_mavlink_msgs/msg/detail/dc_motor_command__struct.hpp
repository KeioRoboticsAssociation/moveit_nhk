// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from stm32_mavlink_msgs:msg/DCMotorCommand.idl
// generated code does not contain a copyright notice

#ifndef STM32_MAVLINK_MSGS__MSG__DETAIL__DC_MOTOR_COMMAND__STRUCT_HPP_
#define STM32_MAVLINK_MSGS__MSG__DETAIL__DC_MOTOR_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__stm32_mavlink_msgs__msg__DCMotorCommand __attribute__((deprecated))
#else
# define DEPRECATED__stm32_mavlink_msgs__msg__DCMotorCommand __declspec(deprecated)
#endif

namespace stm32_mavlink_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DCMotorCommand_
{
  using Type = DCMotorCommand_<ContainerAllocator>;

  explicit DCMotorCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_id = 0;
      this->control_mode = 0;
      this->target_value = 0.0f;
      this->target_position_rad = 0.0f;
      this->enabled = false;
    }
  }

  explicit DCMotorCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_id = 0;
      this->control_mode = 0;
      this->target_value = 0.0f;
      this->target_position_rad = 0.0f;
      this->enabled = false;
    }
  }

  // field types and members
  using _motor_id_type =
    uint8_t;
  _motor_id_type motor_id;
  using _control_mode_type =
    uint8_t;
  _control_mode_type control_mode;
  using _target_value_type =
    float;
  _target_value_type target_value;
  using _target_position_rad_type =
    float;
  _target_position_rad_type target_position_rad;
  using _enabled_type =
    bool;
  _enabled_type enabled;

  // setters for named parameter idiom
  Type & set__motor_id(
    const uint8_t & _arg)
  {
    this->motor_id = _arg;
    return *this;
  }
  Type & set__control_mode(
    const uint8_t & _arg)
  {
    this->control_mode = _arg;
    return *this;
  }
  Type & set__target_value(
    const float & _arg)
  {
    this->target_value = _arg;
    return *this;
  }
  Type & set__target_position_rad(
    const float & _arg)
  {
    this->target_position_rad = _arg;
    return *this;
  }
  Type & set__enabled(
    const bool & _arg)
  {
    this->enabled = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t CONTROL_MODE_POSITION =
    0u;
  static constexpr uint8_t CONTROL_MODE_VELOCITY =
    1u;
  static constexpr uint8_t CONTROL_MODE_CURRENT =
    2u;
  static constexpr uint8_t CONTROL_MODE_DUTY_TO_POSITION =
    3u;

  // pointer types
  using RawPtr =
    stm32_mavlink_msgs::msg::DCMotorCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const stm32_mavlink_msgs::msg::DCMotorCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<stm32_mavlink_msgs::msg::DCMotorCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<stm32_mavlink_msgs::msg::DCMotorCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      stm32_mavlink_msgs::msg::DCMotorCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<stm32_mavlink_msgs::msg::DCMotorCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      stm32_mavlink_msgs::msg::DCMotorCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<stm32_mavlink_msgs::msg::DCMotorCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<stm32_mavlink_msgs::msg::DCMotorCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<stm32_mavlink_msgs::msg::DCMotorCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__stm32_mavlink_msgs__msg__DCMotorCommand
    std::shared_ptr<stm32_mavlink_msgs::msg::DCMotorCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__stm32_mavlink_msgs__msg__DCMotorCommand
    std::shared_ptr<stm32_mavlink_msgs::msg::DCMotorCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DCMotorCommand_ & other) const
  {
    if (this->motor_id != other.motor_id) {
      return false;
    }
    if (this->control_mode != other.control_mode) {
      return false;
    }
    if (this->target_value != other.target_value) {
      return false;
    }
    if (this->target_position_rad != other.target_position_rad) {
      return false;
    }
    if (this->enabled != other.enabled) {
      return false;
    }
    return true;
  }
  bool operator!=(const DCMotorCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DCMotorCommand_

// alias to use template instance with default allocator
using DCMotorCommand =
  stm32_mavlink_msgs::msg::DCMotorCommand_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DCMotorCommand_<ContainerAllocator>::CONTROL_MODE_POSITION;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DCMotorCommand_<ContainerAllocator>::CONTROL_MODE_VELOCITY;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DCMotorCommand_<ContainerAllocator>::CONTROL_MODE_CURRENT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DCMotorCommand_<ContainerAllocator>::CONTROL_MODE_DUTY_TO_POSITION;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace stm32_mavlink_msgs

#endif  // STM32_MAVLINK_MSGS__MSG__DETAIL__DC_MOTOR_COMMAND__STRUCT_HPP_
