// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rogidrive_msg:msg/RogidriveMessage.idl
// generated code does not contain a copyright notice

#ifndef ROGIDRIVE_MSG__MSG__DETAIL__ROGIDRIVE_MESSAGE__STRUCT_HPP_
#define ROGIDRIVE_MSG__MSG__DETAIL__ROGIDRIVE_MESSAGE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rogidrive_msg__msg__RogidriveMessage __attribute__((deprecated))
#else
# define DEPRECATED__rogidrive_msg__msg__RogidriveMessage __declspec(deprecated)
#endif

namespace rogidrive_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RogidriveMessage_
{
  using Type = RogidriveMessage_<ContainerAllocator>;

  explicit RogidriveMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->mode = 0;
      this->vel = 0.0f;
      this->pos = 0.0f;
      this->current = 0.0f;
    }
  }

  explicit RogidriveMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
      this->mode = 0;
      this->vel = 0.0f;
      this->pos = 0.0f;
      this->current = 0.0f;
    }
  }

  // field types and members
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _name_type name;
  using _mode_type =
    int8_t;
  _mode_type mode;
  using _vel_type =
    float;
  _vel_type vel;
  using _pos_type =
    float;
  _pos_type pos;
  using _current_type =
    float;
  _current_type current;

  // setters for named parameter idiom
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->name = _arg;
    return *this;
  }
  Type & set__mode(
    const int8_t & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__vel(
    const float & _arg)
  {
    this->vel = _arg;
    return *this;
  }
  Type & set__pos(
    const float & _arg)
  {
    this->pos = _arg;
    return *this;
  }
  Type & set__current(
    const float & _arg)
  {
    this->current = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t TORQUE_CONTROL =
    1;
  static constexpr int8_t VELOCITY_CONTROL =
    2;
  static constexpr int8_t POSITION_CONTROL =
    3;

  // pointer types
  using RawPtr =
    rogidrive_msg::msg::RogidriveMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const rogidrive_msg::msg::RogidriveMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rogidrive_msg::msg::RogidriveMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rogidrive_msg::msg::RogidriveMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rogidrive_msg::msg::RogidriveMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rogidrive_msg::msg::RogidriveMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rogidrive_msg::msg::RogidriveMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rogidrive_msg::msg::RogidriveMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rogidrive_msg::msg::RogidriveMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rogidrive_msg::msg::RogidriveMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rogidrive_msg__msg__RogidriveMessage
    std::shared_ptr<rogidrive_msg::msg::RogidriveMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rogidrive_msg__msg__RogidriveMessage
    std::shared_ptr<rogidrive_msg::msg::RogidriveMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RogidriveMessage_ & other) const
  {
    if (this->name != other.name) {
      return false;
    }
    if (this->mode != other.mode) {
      return false;
    }
    if (this->vel != other.vel) {
      return false;
    }
    if (this->pos != other.pos) {
      return false;
    }
    if (this->current != other.current) {
      return false;
    }
    return true;
  }
  bool operator!=(const RogidriveMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RogidriveMessage_

// alias to use template instance with default allocator
using RogidriveMessage =
  rogidrive_msg::msg::RogidriveMessage_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t RogidriveMessage_<ContainerAllocator>::TORQUE_CONTROL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t RogidriveMessage_<ContainerAllocator>::VELOCITY_CONTROL;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t RogidriveMessage_<ContainerAllocator>::POSITION_CONTROL;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace rogidrive_msg

#endif  // ROGIDRIVE_MSG__MSG__DETAIL__ROGIDRIVE_MESSAGE__STRUCT_HPP_
