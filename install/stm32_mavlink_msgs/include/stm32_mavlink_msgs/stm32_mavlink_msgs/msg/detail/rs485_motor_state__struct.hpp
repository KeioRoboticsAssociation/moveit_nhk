// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from stm32_mavlink_msgs:msg/RS485MotorState.idl
// generated code does not contain a copyright notice

#ifndef STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_MOTOR_STATE__STRUCT_HPP_
#define STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_MOTOR_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__stm32_mavlink_msgs__msg__RS485MotorState __attribute__((deprecated))
#else
# define DEPRECATED__stm32_mavlink_msgs__msg__RS485MotorState __declspec(deprecated)
#endif

namespace stm32_mavlink_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RS485MotorState_
{
  using Type = RS485MotorState_<ContainerAllocator>;

  explicit RS485MotorState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_id = 0;
      this->device_id = 0;
      this->motor_index = 0;
      this->control_mode = 0;
      this->status = 0;
      this->error_code = 0;
      this->current_position_rotations = 0.0f;
      this->current_velocity_rps = 0.0f;
      this->target_velocity_rps = 0.0f;
      this->acceleration_rps2 = 0.0f;
      this->timestamp_ms = 0ul;
    }
  }

  explicit RS485MotorState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_id = 0;
      this->device_id = 0;
      this->motor_index = 0;
      this->control_mode = 0;
      this->status = 0;
      this->error_code = 0;
      this->current_position_rotations = 0.0f;
      this->current_velocity_rps = 0.0f;
      this->target_velocity_rps = 0.0f;
      this->acceleration_rps2 = 0.0f;
      this->timestamp_ms = 0ul;
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
  using _control_mode_type =
    uint8_t;
  _control_mode_type control_mode;
  using _status_type =
    uint8_t;
  _status_type status;
  using _error_code_type =
    uint8_t;
  _error_code_type error_code;
  using _current_position_rotations_type =
    float;
  _current_position_rotations_type current_position_rotations;
  using _current_velocity_rps_type =
    float;
  _current_velocity_rps_type current_velocity_rps;
  using _target_velocity_rps_type =
    float;
  _target_velocity_rps_type target_velocity_rps;
  using _acceleration_rps2_type =
    float;
  _acceleration_rps2_type acceleration_rps2;
  using _timestamp_ms_type =
    uint32_t;
  _timestamp_ms_type timestamp_ms;

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
  Type & set__control_mode(
    const uint8_t & _arg)
  {
    this->control_mode = _arg;
    return *this;
  }
  Type & set__status(
    const uint8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__error_code(
    const uint8_t & _arg)
  {
    this->error_code = _arg;
    return *this;
  }
  Type & set__current_position_rotations(
    const float & _arg)
  {
    this->current_position_rotations = _arg;
    return *this;
  }
  Type & set__current_velocity_rps(
    const float & _arg)
  {
    this->current_velocity_rps = _arg;
    return *this;
  }
  Type & set__target_velocity_rps(
    const float & _arg)
  {
    this->target_velocity_rps = _arg;
    return *this;
  }
  Type & set__acceleration_rps2(
    const float & _arg)
  {
    this->acceleration_rps2 = _arg;
    return *this;
  }
  Type & set__timestamp_ms(
    const uint32_t & _arg)
  {
    this->timestamp_ms = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    stm32_mavlink_msgs::msg::RS485MotorState_<ContainerAllocator> *;
  using ConstRawPtr =
    const stm32_mavlink_msgs::msg::RS485MotorState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<stm32_mavlink_msgs::msg::RS485MotorState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<stm32_mavlink_msgs::msg::RS485MotorState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      stm32_mavlink_msgs::msg::RS485MotorState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<stm32_mavlink_msgs::msg::RS485MotorState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      stm32_mavlink_msgs::msg::RS485MotorState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<stm32_mavlink_msgs::msg::RS485MotorState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<stm32_mavlink_msgs::msg::RS485MotorState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<stm32_mavlink_msgs::msg::RS485MotorState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__stm32_mavlink_msgs__msg__RS485MotorState
    std::shared_ptr<stm32_mavlink_msgs::msg::RS485MotorState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__stm32_mavlink_msgs__msg__RS485MotorState
    std::shared_ptr<stm32_mavlink_msgs::msg::RS485MotorState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RS485MotorState_ & other) const
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
    if (this->control_mode != other.control_mode) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->error_code != other.error_code) {
      return false;
    }
    if (this->current_position_rotations != other.current_position_rotations) {
      return false;
    }
    if (this->current_velocity_rps != other.current_velocity_rps) {
      return false;
    }
    if (this->target_velocity_rps != other.target_velocity_rps) {
      return false;
    }
    if (this->acceleration_rps2 != other.acceleration_rps2) {
      return false;
    }
    if (this->timestamp_ms != other.timestamp_ms) {
      return false;
    }
    return true;
  }
  bool operator!=(const RS485MotorState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RS485MotorState_

// alias to use template instance with default allocator
using RS485MotorState =
  stm32_mavlink_msgs::msg::RS485MotorState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace stm32_mavlink_msgs

#endif  // STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_MOTOR_STATE__STRUCT_HPP_
