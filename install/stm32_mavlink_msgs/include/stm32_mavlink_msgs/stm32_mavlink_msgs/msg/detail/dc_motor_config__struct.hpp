// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from stm32_mavlink_msgs:msg/DCMotorConfig.idl
// generated code does not contain a copyright notice

#ifndef STM32_MAVLINK_MSGS__MSG__DETAIL__DC_MOTOR_CONFIG__STRUCT_HPP_
#define STM32_MAVLINK_MSGS__MSG__DETAIL__DC_MOTOR_CONFIG__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__stm32_mavlink_msgs__msg__DCMotorConfig __attribute__((deprecated))
#else
# define DEPRECATED__stm32_mavlink_msgs__msg__DCMotorConfig __declspec(deprecated)
#endif

namespace stm32_mavlink_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DCMotorConfig_
{
  using Type = DCMotorConfig_<ContainerAllocator>;

  explicit DCMotorConfig_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_id = 0;
      this->mode = 0;
      this->speed_kp = 0.0f;
      this->speed_ki = 0.0f;
      this->speed_kd = 0.0f;
      this->speed_max_integral = 0.0f;
      this->speed_max_output = 0.0f;
      this->position_kp = 0.0f;
      this->position_ki = 0.0f;
      this->position_kd = 0.0f;
      this->position_max_integral = 0.0f;
      this->position_max_output = 0.0f;
      this->max_speed_rad_s = 0.0f;
      this->max_acceleration_rad_s2 = 0.0f;
      this->use_position_limits = false;
      this->position_limit_min_rad = 0.0f;
      this->position_limit_max_rad = 0.0f;
      this->watchdog_timeout_ms = 0ul;
      this->control_period_ms = 0ul;
    }
  }

  explicit DCMotorConfig_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_id = 0;
      this->mode = 0;
      this->speed_kp = 0.0f;
      this->speed_ki = 0.0f;
      this->speed_kd = 0.0f;
      this->speed_max_integral = 0.0f;
      this->speed_max_output = 0.0f;
      this->position_kp = 0.0f;
      this->position_ki = 0.0f;
      this->position_kd = 0.0f;
      this->position_max_integral = 0.0f;
      this->position_max_output = 0.0f;
      this->max_speed_rad_s = 0.0f;
      this->max_acceleration_rad_s2 = 0.0f;
      this->use_position_limits = false;
      this->position_limit_min_rad = 0.0f;
      this->position_limit_max_rad = 0.0f;
      this->watchdog_timeout_ms = 0ul;
      this->control_period_ms = 0ul;
    }
  }

  // field types and members
  using _motor_id_type =
    uint8_t;
  _motor_id_type motor_id;
  using _mode_type =
    uint8_t;
  _mode_type mode;
  using _speed_kp_type =
    float;
  _speed_kp_type speed_kp;
  using _speed_ki_type =
    float;
  _speed_ki_type speed_ki;
  using _speed_kd_type =
    float;
  _speed_kd_type speed_kd;
  using _speed_max_integral_type =
    float;
  _speed_max_integral_type speed_max_integral;
  using _speed_max_output_type =
    float;
  _speed_max_output_type speed_max_output;
  using _position_kp_type =
    float;
  _position_kp_type position_kp;
  using _position_ki_type =
    float;
  _position_ki_type position_ki;
  using _position_kd_type =
    float;
  _position_kd_type position_kd;
  using _position_max_integral_type =
    float;
  _position_max_integral_type position_max_integral;
  using _position_max_output_type =
    float;
  _position_max_output_type position_max_output;
  using _max_speed_rad_s_type =
    float;
  _max_speed_rad_s_type max_speed_rad_s;
  using _max_acceleration_rad_s2_type =
    float;
  _max_acceleration_rad_s2_type max_acceleration_rad_s2;
  using _use_position_limits_type =
    bool;
  _use_position_limits_type use_position_limits;
  using _position_limit_min_rad_type =
    float;
  _position_limit_min_rad_type position_limit_min_rad;
  using _position_limit_max_rad_type =
    float;
  _position_limit_max_rad_type position_limit_max_rad;
  using _watchdog_timeout_ms_type =
    uint32_t;
  _watchdog_timeout_ms_type watchdog_timeout_ms;
  using _control_period_ms_type =
    uint32_t;
  _control_period_ms_type control_period_ms;

  // setters for named parameter idiom
  Type & set__motor_id(
    const uint8_t & _arg)
  {
    this->motor_id = _arg;
    return *this;
  }
  Type & set__mode(
    const uint8_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__speed_kp(
    const float & _arg)
  {
    this->speed_kp = _arg;
    return *this;
  }
  Type & set__speed_ki(
    const float & _arg)
  {
    this->speed_ki = _arg;
    return *this;
  }
  Type & set__speed_kd(
    const float & _arg)
  {
    this->speed_kd = _arg;
    return *this;
  }
  Type & set__speed_max_integral(
    const float & _arg)
  {
    this->speed_max_integral = _arg;
    return *this;
  }
  Type & set__speed_max_output(
    const float & _arg)
  {
    this->speed_max_output = _arg;
    return *this;
  }
  Type & set__position_kp(
    const float & _arg)
  {
    this->position_kp = _arg;
    return *this;
  }
  Type & set__position_ki(
    const float & _arg)
  {
    this->position_ki = _arg;
    return *this;
  }
  Type & set__position_kd(
    const float & _arg)
  {
    this->position_kd = _arg;
    return *this;
  }
  Type & set__position_max_integral(
    const float & _arg)
  {
    this->position_max_integral = _arg;
    return *this;
  }
  Type & set__position_max_output(
    const float & _arg)
  {
    this->position_max_output = _arg;
    return *this;
  }
  Type & set__max_speed_rad_s(
    const float & _arg)
  {
    this->max_speed_rad_s = _arg;
    return *this;
  }
  Type & set__max_acceleration_rad_s2(
    const float & _arg)
  {
    this->max_acceleration_rad_s2 = _arg;
    return *this;
  }
  Type & set__use_position_limits(
    const bool & _arg)
  {
    this->use_position_limits = _arg;
    return *this;
  }
  Type & set__position_limit_min_rad(
    const float & _arg)
  {
    this->position_limit_min_rad = _arg;
    return *this;
  }
  Type & set__position_limit_max_rad(
    const float & _arg)
  {
    this->position_limit_max_rad = _arg;
    return *this;
  }
  Type & set__watchdog_timeout_ms(
    const uint32_t & _arg)
  {
    this->watchdog_timeout_ms = _arg;
    return *this;
  }
  Type & set__control_period_ms(
    const uint32_t & _arg)
  {
    this->control_period_ms = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    stm32_mavlink_msgs::msg::DCMotorConfig_<ContainerAllocator> *;
  using ConstRawPtr =
    const stm32_mavlink_msgs::msg::DCMotorConfig_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<stm32_mavlink_msgs::msg::DCMotorConfig_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<stm32_mavlink_msgs::msg::DCMotorConfig_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      stm32_mavlink_msgs::msg::DCMotorConfig_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<stm32_mavlink_msgs::msg::DCMotorConfig_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      stm32_mavlink_msgs::msg::DCMotorConfig_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<stm32_mavlink_msgs::msg::DCMotorConfig_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<stm32_mavlink_msgs::msg::DCMotorConfig_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<stm32_mavlink_msgs::msg::DCMotorConfig_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__stm32_mavlink_msgs__msg__DCMotorConfig
    std::shared_ptr<stm32_mavlink_msgs::msg::DCMotorConfig_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__stm32_mavlink_msgs__msg__DCMotorConfig
    std::shared_ptr<stm32_mavlink_msgs::msg::DCMotorConfig_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DCMotorConfig_ & other) const
  {
    if (this->motor_id != other.motor_id) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    if (this->speed_kp != other.speed_kp) {
      return false;
    }
    if (this->speed_ki != other.speed_ki) {
      return false;
    }
    if (this->speed_kd != other.speed_kd) {
      return false;
    }
    if (this->speed_max_integral != other.speed_max_integral) {
      return false;
    }
    if (this->speed_max_output != other.speed_max_output) {
      return false;
    }
    if (this->position_kp != other.position_kp) {
      return false;
    }
    if (this->position_ki != other.position_ki) {
      return false;
    }
    if (this->position_kd != other.position_kd) {
      return false;
    }
    if (this->position_max_integral != other.position_max_integral) {
      return false;
    }
    if (this->position_max_output != other.position_max_output) {
      return false;
    }
    if (this->max_speed_rad_s != other.max_speed_rad_s) {
      return false;
    }
    if (this->max_acceleration_rad_s2 != other.max_acceleration_rad_s2) {
      return false;
    }
    if (this->use_position_limits != other.use_position_limits) {
      return false;
    }
    if (this->position_limit_min_rad != other.position_limit_min_rad) {
      return false;
    }
    if (this->position_limit_max_rad != other.position_limit_max_rad) {
      return false;
    }
    if (this->watchdog_timeout_ms != other.watchdog_timeout_ms) {
      return false;
    }
    if (this->control_period_ms != other.control_period_ms) {
      return false;
    }
    return true;
  }
  bool operator!=(const DCMotorConfig_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DCMotorConfig_

// alias to use template instance with default allocator
using DCMotorConfig =
  stm32_mavlink_msgs::msg::DCMotorConfig_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace stm32_mavlink_msgs

#endif  // STM32_MAVLINK_MSGS__MSG__DETAIL__DC_MOTOR_CONFIG__STRUCT_HPP_
