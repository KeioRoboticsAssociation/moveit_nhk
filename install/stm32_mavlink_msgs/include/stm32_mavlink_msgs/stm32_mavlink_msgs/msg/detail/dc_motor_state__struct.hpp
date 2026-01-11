// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from stm32_mavlink_msgs:msg/DCMotorState.idl
// generated code does not contain a copyright notice

#ifndef STM32_MAVLINK_MSGS__MSG__DETAIL__DC_MOTOR_STATE__STRUCT_HPP_
#define STM32_MAVLINK_MSGS__MSG__DETAIL__DC_MOTOR_STATE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__stm32_mavlink_msgs__msg__DCMotorState __attribute__((deprecated))
#else
# define DEPRECATED__stm32_mavlink_msgs__msg__DCMotorState __declspec(deprecated)
#endif

namespace stm32_mavlink_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DCMotorState_
{
  using Type = DCMotorState_<ContainerAllocator>;

  explicit DCMotorState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_id = 0;
      this->position_rad = 0.0f;
      this->velocity_rad_s = 0.0f;
      this->current_a = 0.0f;
      this->temperature_c = 0.0f;
      this->status = 0;
      this->enabled = false;
      this->control_mode = 0;
      this->current_duty_cycle = 0.0f;
      this->target_duty_cycle = 0.0f;
      this->target_velocity_rad_s = 0.0f;
      this->timestamp = 0ull;
    }
  }

  explicit DCMotorState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_id = 0;
      this->position_rad = 0.0f;
      this->velocity_rad_s = 0.0f;
      this->current_a = 0.0f;
      this->temperature_c = 0.0f;
      this->status = 0;
      this->enabled = false;
      this->control_mode = 0;
      this->current_duty_cycle = 0.0f;
      this->target_duty_cycle = 0.0f;
      this->target_velocity_rad_s = 0.0f;
      this->timestamp = 0ull;
    }
  }

  // field types and members
  using _motor_id_type =
    uint8_t;
  _motor_id_type motor_id;
  using _position_rad_type =
    float;
  _position_rad_type position_rad;
  using _velocity_rad_s_type =
    float;
  _velocity_rad_s_type velocity_rad_s;
  using _current_a_type =
    float;
  _current_a_type current_a;
  using _temperature_c_type =
    float;
  _temperature_c_type temperature_c;
  using _status_type =
    uint8_t;
  _status_type status;
  using _enabled_type =
    bool;
  _enabled_type enabled;
  using _control_mode_type =
    uint8_t;
  _control_mode_type control_mode;
  using _current_duty_cycle_type =
    float;
  _current_duty_cycle_type current_duty_cycle;
  using _target_duty_cycle_type =
    float;
  _target_duty_cycle_type target_duty_cycle;
  using _target_velocity_rad_s_type =
    float;
  _target_velocity_rad_s_type target_velocity_rad_s;
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;

  // setters for named parameter idiom
  Type & set__motor_id(
    const uint8_t & _arg)
  {
    this->motor_id = _arg;
    return *this;
  }
  Type & set__position_rad(
    const float & _arg)
  {
    this->position_rad = _arg;
    return *this;
  }
  Type & set__velocity_rad_s(
    const float & _arg)
  {
    this->velocity_rad_s = _arg;
    return *this;
  }
  Type & set__current_a(
    const float & _arg)
  {
    this->current_a = _arg;
    return *this;
  }
  Type & set__temperature_c(
    const float & _arg)
  {
    this->temperature_c = _arg;
    return *this;
  }
  Type & set__status(
    const uint8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__enabled(
    const bool & _arg)
  {
    this->enabled = _arg;
    return *this;
  }
  Type & set__control_mode(
    const uint8_t & _arg)
  {
    this->control_mode = _arg;
    return *this;
  }
  Type & set__current_duty_cycle(
    const float & _arg)
  {
    this->current_duty_cycle = _arg;
    return *this;
  }
  Type & set__target_duty_cycle(
    const float & _arg)
  {
    this->target_duty_cycle = _arg;
    return *this;
  }
  Type & set__target_velocity_rad_s(
    const float & _arg)
  {
    this->target_velocity_rad_s = _arg;
    return *this;
  }
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t STATUS_OK =
    0u;
  static constexpr uint8_t STATUS_NOT_INITIALIZED =
    1u;
  static constexpr uint8_t STATUS_ERROR =
    2u;
  static constexpr uint8_t STATUS_OVERHEAT =
    3u;
  static constexpr uint8_t STATUS_OVERCURRENT =
    4u;
  static constexpr uint8_t STATUS_TIMEOUT =
    5u;

  // pointer types
  using RawPtr =
    stm32_mavlink_msgs::msg::DCMotorState_<ContainerAllocator> *;
  using ConstRawPtr =
    const stm32_mavlink_msgs::msg::DCMotorState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<stm32_mavlink_msgs::msg::DCMotorState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<stm32_mavlink_msgs::msg::DCMotorState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      stm32_mavlink_msgs::msg::DCMotorState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<stm32_mavlink_msgs::msg::DCMotorState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      stm32_mavlink_msgs::msg::DCMotorState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<stm32_mavlink_msgs::msg::DCMotorState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<stm32_mavlink_msgs::msg::DCMotorState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<stm32_mavlink_msgs::msg::DCMotorState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__stm32_mavlink_msgs__msg__DCMotorState
    std::shared_ptr<stm32_mavlink_msgs::msg::DCMotorState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__stm32_mavlink_msgs__msg__DCMotorState
    std::shared_ptr<stm32_mavlink_msgs::msg::DCMotorState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DCMotorState_ & other) const
  {
    if (this->motor_id != other.motor_id) {
      return false;
    }
    if (this->position_rad != other.position_rad) {
      return false;
    }
    if (this->velocity_rad_s != other.velocity_rad_s) {
      return false;
    }
    if (this->current_a != other.current_a) {
      return false;
    }
    if (this->temperature_c != other.temperature_c) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->enabled != other.enabled) {
      return false;
    }
    if (this->control_mode != other.control_mode) {
      return false;
    }
    if (this->current_duty_cycle != other.current_duty_cycle) {
      return false;
    }
    if (this->target_duty_cycle != other.target_duty_cycle) {
      return false;
    }
    if (this->target_velocity_rad_s != other.target_velocity_rad_s) {
      return false;
    }
    if (this->timestamp != other.timestamp) {
      return false;
    }
    return true;
  }
  bool operator!=(const DCMotorState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DCMotorState_

// alias to use template instance with default allocator
using DCMotorState =
  stm32_mavlink_msgs::msg::DCMotorState_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DCMotorState_<ContainerAllocator>::STATUS_OK;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DCMotorState_<ContainerAllocator>::STATUS_NOT_INITIALIZED;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DCMotorState_<ContainerAllocator>::STATUS_ERROR;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DCMotorState_<ContainerAllocator>::STATUS_OVERHEAT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DCMotorState_<ContainerAllocator>::STATUS_OVERCURRENT;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t DCMotorState_<ContainerAllocator>::STATUS_TIMEOUT;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace stm32_mavlink_msgs

#endif  // STM32_MAVLINK_MSGS__MSG__DETAIL__DC_MOTOR_STATE__STRUCT_HPP_
