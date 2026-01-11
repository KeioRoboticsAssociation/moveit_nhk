// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from stm32_mavlink_msgs:msg/RS485MotorConfig.idl
// generated code does not contain a copyright notice

#ifndef STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_MOTOR_CONFIG__STRUCT_HPP_
#define STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_MOTOR_CONFIG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__stm32_mavlink_msgs__msg__RS485MotorConfig __attribute__((deprecated))
#else
# define DEPRECATED__stm32_mavlink_msgs__msg__RS485MotorConfig __declspec(deprecated)
#endif

namespace stm32_mavlink_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RS485MotorConfig_
{
  using Type = RS485MotorConfig_<ContainerAllocator>;

  explicit RS485MotorConfig_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_id = 0;
      this->device_id = 0;
      this->motor_index = 0;
      this->max_velocity_rps = 0.0f;
      this->max_acceleration = 0.0f;
      this->enabled = false;
    }
  }

  explicit RS485MotorConfig_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_id = 0;
      this->device_id = 0;
      this->motor_index = 0;
      this->max_velocity_rps = 0.0f;
      this->max_acceleration = 0.0f;
      this->enabled = false;
    }
  }

  // field types and members
  using _motor_id_type =
    uint8_t;
  _motor_id_type motor_id;
  using _device_id_type =
    uint8_t;
  _device_id_type device_id;
  using _motor_index_type =
    uint8_t;
  _motor_index_type motor_index;
  using _max_velocity_rps_type =
    float;
  _max_velocity_rps_type max_velocity_rps;
  using _max_acceleration_type =
    float;
  _max_acceleration_type max_acceleration;
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
  Type & set__max_velocity_rps(
    const float & _arg)
  {
    this->max_velocity_rps = _arg;
    return *this;
  }
  Type & set__max_acceleration(
    const float & _arg)
  {
    this->max_acceleration = _arg;
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
    stm32_mavlink_msgs::msg::RS485MotorConfig_<ContainerAllocator> *;
  using ConstRawPtr =
    const stm32_mavlink_msgs::msg::RS485MotorConfig_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<stm32_mavlink_msgs::msg::RS485MotorConfig_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<stm32_mavlink_msgs::msg::RS485MotorConfig_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      stm32_mavlink_msgs::msg::RS485MotorConfig_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<stm32_mavlink_msgs::msg::RS485MotorConfig_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      stm32_mavlink_msgs::msg::RS485MotorConfig_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<stm32_mavlink_msgs::msg::RS485MotorConfig_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<stm32_mavlink_msgs::msg::RS485MotorConfig_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<stm32_mavlink_msgs::msg::RS485MotorConfig_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__stm32_mavlink_msgs__msg__RS485MotorConfig
    std::shared_ptr<stm32_mavlink_msgs::msg::RS485MotorConfig_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__stm32_mavlink_msgs__msg__RS485MotorConfig
    std::shared_ptr<stm32_mavlink_msgs::msg::RS485MotorConfig_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RS485MotorConfig_ & other) const
  {
    if (this->motor_id != other.motor_id) {
      return false;
    }
    if (this->device_id != other.device_id) {
      return false;
    }
    if (this->motor_index != other.motor_index) {
      return false;
    }
    if (this->max_velocity_rps != other.max_velocity_rps) {
      return false;
    }
    if (this->max_acceleration != other.max_acceleration) {
      return false;
    }
    if (this->enabled != other.enabled) {
      return false;
    }
    return true;
  }
  bool operator!=(const RS485MotorConfig_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RS485MotorConfig_

// alias to use template instance with default allocator
using RS485MotorConfig =
  stm32_mavlink_msgs::msg::RS485MotorConfig_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace stm32_mavlink_msgs

#endif  // STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_MOTOR_CONFIG__STRUCT_HPP_
