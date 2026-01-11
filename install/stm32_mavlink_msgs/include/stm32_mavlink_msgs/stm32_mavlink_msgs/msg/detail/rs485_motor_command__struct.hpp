// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from stm32_mavlink_msgs:msg/RS485MotorCommand.idl
// generated code does not contain a copyright notice

#ifndef STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_MOTOR_COMMAND__STRUCT_HPP_
#define STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_MOTOR_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__stm32_mavlink_msgs__msg__RS485MotorCommand __attribute__((deprecated))
#else
# define DEPRECATED__stm32_mavlink_msgs__msg__RS485MotorCommand __declspec(deprecated)
#endif

namespace stm32_mavlink_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RS485MotorCommand_
{
  using Type = RS485MotorCommand_<ContainerAllocator>;

  explicit RS485MotorCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->device_id = 0;
      this->motor_index = 0;
      this->control_mode = 0;
      this->target_velocity = 0.0f;
      this->target_position = 0.0f;
      this->target_duty = 0.0f;
      this->acceleration = 0.0f;
      this->enabled = false;
    }
  }

  explicit RS485MotorCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->device_id = 0;
      this->motor_index = 0;
      this->control_mode = 0;
      this->target_velocity = 0.0f;
      this->target_position = 0.0f;
      this->target_duty = 0.0f;
      this->acceleration = 0.0f;
      this->enabled = false;
    }
  }

  // field types and members
  using _device_id_type =
    uint8_t;
  _device_id_type device_id;
  using _motor_index_type =
    uint8_t;
  _motor_index_type motor_index;
  using _control_mode_type =
    uint8_t;
  _control_mode_type control_mode;
  using _target_velocity_type =
    float;
  _target_velocity_type target_velocity;
  using _target_position_type =
    float;
  _target_position_type target_position;
  using _target_duty_type =
    float;
  _target_duty_type target_duty;
  using _acceleration_type =
    float;
  _acceleration_type acceleration;
  using _enabled_type =
    bool;
  _enabled_type enabled;

  // setters for named parameter idiom
  Type & set__device_id(
    const uint8_t & _arg)
  {
    this->device_id = _arg;
    return *this;
  }
  Type & set__motor_index(
    const uint8_t & _arg)
  {
    this->motor_index = _arg;
    return *this;
  }
  Type & set__control_mode(
    const uint8_t & _arg)
  {
    this->control_mode = _arg;
    return *this;
  }
  Type & set__target_velocity(
    const float & _arg)
  {
    this->target_velocity = _arg;
    return *this;
  }
  Type & set__target_position(
    const float & _arg)
  {
    this->target_position = _arg;
    return *this;
  }
  Type & set__target_duty(
    const float & _arg)
  {
    this->target_duty = _arg;
    return *this;
  }
  Type & set__acceleration(
    const float & _arg)
  {
    this->acceleration = _arg;
    return *this;
  }
  Type & set__enabled(
    const bool & _arg)
  {
    this->enabled = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    stm32_mavlink_msgs::msg::RS485MotorCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const stm32_mavlink_msgs::msg::RS485MotorCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<stm32_mavlink_msgs::msg::RS485MotorCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<stm32_mavlink_msgs::msg::RS485MotorCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      stm32_mavlink_msgs::msg::RS485MotorCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<stm32_mavlink_msgs::msg::RS485MotorCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      stm32_mavlink_msgs::msg::RS485MotorCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<stm32_mavlink_msgs::msg::RS485MotorCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<stm32_mavlink_msgs::msg::RS485MotorCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<stm32_mavlink_msgs::msg::RS485MotorCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__stm32_mavlink_msgs__msg__RS485MotorCommand
    std::shared_ptr<stm32_mavlink_msgs::msg::RS485MotorCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__stm32_mavlink_msgs__msg__RS485MotorCommand
    std::shared_ptr<stm32_mavlink_msgs::msg::RS485MotorCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RS485MotorCommand_ & other) const
  {
    if (this->device_id != other.device_id) {
      return false;
    }
    if (this->motor_index != other.motor_index) {
      return false;
    }
    if (this->control_mode != other.control_mode) {
      return false;
    }
    if (this->target_velocity != other.target_velocity) {
      return false;
    }
    if (this->target_position != other.target_position) {
      return false;
    }
    if (this->target_duty != other.target_duty) {
      return false;
    }
    if (this->acceleration != other.acceleration) {
      return false;
    }
    if (this->enabled != other.enabled) {
      return false;
    }
    return true;
  }
  bool operator!=(const RS485MotorCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RS485MotorCommand_

// alias to use template instance with default allocator
using RS485MotorCommand =
  stm32_mavlink_msgs::msg::RS485MotorCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace stm32_mavlink_msgs

#endif  // STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_MOTOR_COMMAND__STRUCT_HPP_
