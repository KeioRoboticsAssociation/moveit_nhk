// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from stm32_mavlink_msgs:msg/SolenoidStatus.idl
// generated code does not contain a copyright notice

#ifndef STM32_MAVLINK_MSGS__MSG__DETAIL__SOLENOID_STATUS__STRUCT_HPP_
#define STM32_MAVLINK_MSGS__MSG__DETAIL__SOLENOID_STATUS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__stm32_mavlink_msgs__msg__SolenoidStatus __attribute__((deprecated))
#else
# define DEPRECATED__stm32_mavlink_msgs__msg__SolenoidStatus __declspec(deprecated)
#endif

namespace stm32_mavlink_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SolenoidStatus_
{
  using Type = SolenoidStatus_<ContainerAllocator>;

  explicit SolenoidStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->solenoid_count = 0;
      std::fill<typename std::array<bool, 8>::iterator, bool>(this->solenoid_states.begin(), this->solenoid_states.end(), false);
      this->timestamp_ms = 0ul;
    }
  }

  explicit SolenoidStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    solenoid_states(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->solenoid_count = 0;
      std::fill<typename std::array<bool, 8>::iterator, bool>(this->solenoid_states.begin(), this->solenoid_states.end(), false);
      this->timestamp_ms = 0ul;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _solenoid_count_type =
    uint8_t;
  _solenoid_count_type solenoid_count;
  using _solenoid_states_type =
    std::array<bool, 8>;
  _solenoid_states_type solenoid_states;
  using _timestamp_ms_type =
    uint32_t;
  _timestamp_ms_type timestamp_ms;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__solenoid_count(
    const uint8_t & _arg)
  {
    this->solenoid_count = _arg;
    return *this;
  }
  Type & set__solenoid_states(
    const std::array<bool, 8> & _arg)
  {
    this->solenoid_states = _arg;
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
    stm32_mavlink_msgs::msg::SolenoidStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const stm32_mavlink_msgs::msg::SolenoidStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<stm32_mavlink_msgs::msg::SolenoidStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<stm32_mavlink_msgs::msg::SolenoidStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      stm32_mavlink_msgs::msg::SolenoidStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<stm32_mavlink_msgs::msg::SolenoidStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      stm32_mavlink_msgs::msg::SolenoidStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<stm32_mavlink_msgs::msg::SolenoidStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<stm32_mavlink_msgs::msg::SolenoidStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<stm32_mavlink_msgs::msg::SolenoidStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__stm32_mavlink_msgs__msg__SolenoidStatus
    std::shared_ptr<stm32_mavlink_msgs::msg::SolenoidStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__stm32_mavlink_msgs__msg__SolenoidStatus
    std::shared_ptr<stm32_mavlink_msgs::msg::SolenoidStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SolenoidStatus_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->solenoid_count != other.solenoid_count) {
      return false;
    }
    if (this->solenoid_states != other.solenoid_states) {
      return false;
    }
    if (this->timestamp_ms != other.timestamp_ms) {
      return false;
    }
    return true;
  }
  bool operator!=(const SolenoidStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SolenoidStatus_

// alias to use template instance with default allocator
using SolenoidStatus =
  stm32_mavlink_msgs::msg::SolenoidStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace stm32_mavlink_msgs

#endif  // STM32_MAVLINK_MSGS__MSG__DETAIL__SOLENOID_STATUS__STRUCT_HPP_
