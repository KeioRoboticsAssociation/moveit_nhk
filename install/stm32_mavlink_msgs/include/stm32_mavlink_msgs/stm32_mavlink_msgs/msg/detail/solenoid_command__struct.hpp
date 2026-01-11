// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from stm32_mavlink_msgs:msg/SolenoidCommand.idl
// generated code does not contain a copyright notice

#ifndef STM32_MAVLINK_MSGS__MSG__DETAIL__SOLENOID_COMMAND__STRUCT_HPP_
#define STM32_MAVLINK_MSGS__MSG__DETAIL__SOLENOID_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__stm32_mavlink_msgs__msg__SolenoidCommand __attribute__((deprecated))
#else
# define DEPRECATED__stm32_mavlink_msgs__msg__SolenoidCommand __declspec(deprecated)
#endif

namespace stm32_mavlink_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct SolenoidCommand_
{
  using Type = SolenoidCommand_<ContainerAllocator>;

  explicit SolenoidCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->solenoid_id = 0;
      this->state = false;
    }
  }

  explicit SolenoidCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->solenoid_id = 0;
      this->state = false;
    }
  }

  // field types and members
  using _solenoid_id_type =
    uint8_t;
  _solenoid_id_type solenoid_id;
  using _state_type =
    bool;
  _state_type state;

  // setters for named parameter idiom
  Type & set__solenoid_id(
    const uint8_t & _arg)
  {
    this->solenoid_id = _arg;
    return *this;
  }
  Type & set__state(
    const bool & _arg)
  {
    this->state = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    stm32_mavlink_msgs::msg::SolenoidCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const stm32_mavlink_msgs::msg::SolenoidCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<stm32_mavlink_msgs::msg::SolenoidCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<stm32_mavlink_msgs::msg::SolenoidCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      stm32_mavlink_msgs::msg::SolenoidCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<stm32_mavlink_msgs::msg::SolenoidCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      stm32_mavlink_msgs::msg::SolenoidCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<stm32_mavlink_msgs::msg::SolenoidCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<stm32_mavlink_msgs::msg::SolenoidCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<stm32_mavlink_msgs::msg::SolenoidCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__stm32_mavlink_msgs__msg__SolenoidCommand
    std::shared_ptr<stm32_mavlink_msgs::msg::SolenoidCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__stm32_mavlink_msgs__msg__SolenoidCommand
    std::shared_ptr<stm32_mavlink_msgs::msg::SolenoidCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SolenoidCommand_ & other) const
  {
    if (this->solenoid_id != other.solenoid_id) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    return true;
  }
  bool operator!=(const SolenoidCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SolenoidCommand_

// alias to use template instance with default allocator
using SolenoidCommand =
  stm32_mavlink_msgs::msg::SolenoidCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace stm32_mavlink_msgs

#endif  // STM32_MAVLINK_MSGS__MSG__DETAIL__SOLENOID_COMMAND__STRUCT_HPP_
