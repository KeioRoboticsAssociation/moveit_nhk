// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from stm32_mavlink_msgs:msg/RS485WriteRequest.idl
// generated code does not contain a copyright notice

#ifndef STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_WRITE_REQUEST__STRUCT_HPP_
#define STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_WRITE_REQUEST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__stm32_mavlink_msgs__msg__RS485WriteRequest __attribute__((deprecated))
#else
# define DEPRECATED__stm32_mavlink_msgs__msg__RS485WriteRequest __declspec(deprecated)
#endif

namespace stm32_mavlink_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RS485WriteRequest_
{
  using Type = RS485WriteRequest_<ContainerAllocator>;

  explicit RS485WriteRequest_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_id = 0;
      this->address = 0;
      this->length = 0;
      std::fill<typename std::array<uint8_t, 64>::iterator, uint8_t>(this->data.begin(), this->data.end(), 0);
    }
  }

  explicit RS485WriteRequest_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_id = 0;
      this->address = 0;
      this->length = 0;
      std::fill<typename std::array<uint8_t, 64>::iterator, uint8_t>(this->data.begin(), this->data.end(), 0);
    }
  }

  // field types and members
  using _motor_id_type =
    uint8_t;
  _motor_id_type motor_id;
  using _address_type =
    uint16_t;
  _address_type address;
  using _length_type =
    uint8_t;
  _length_type length;
  using _data_type =
    std::array<uint8_t, 64>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__motor_id(
    const uint8_t & _arg)
  {
    this->motor_id = _arg;
    return *this;
  }
  Type & set__address(
    const uint16_t & _arg)
  {
    this->address = _arg;
    return *this;
  }
  Type & set__length(
    const uint8_t & _arg)
  {
    this->length = _arg;
    return *this;
  }
  Type & set__data(
    const std::array<uint8_t, 64> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    stm32_mavlink_msgs::msg::RS485WriteRequest_<ContainerAllocator> *;
  using ConstRawPtr =
    const stm32_mavlink_msgs::msg::RS485WriteRequest_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<stm32_mavlink_msgs::msg::RS485WriteRequest_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<stm32_mavlink_msgs::msg::RS485WriteRequest_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      stm32_mavlink_msgs::msg::RS485WriteRequest_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<stm32_mavlink_msgs::msg::RS485WriteRequest_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      stm32_mavlink_msgs::msg::RS485WriteRequest_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<stm32_mavlink_msgs::msg::RS485WriteRequest_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<stm32_mavlink_msgs::msg::RS485WriteRequest_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<stm32_mavlink_msgs::msg::RS485WriteRequest_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__stm32_mavlink_msgs__msg__RS485WriteRequest
    std::shared_ptr<stm32_mavlink_msgs::msg::RS485WriteRequest_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__stm32_mavlink_msgs__msg__RS485WriteRequest
    std::shared_ptr<stm32_mavlink_msgs::msg::RS485WriteRequest_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RS485WriteRequest_ & other) const
  {
    if (this->motor_id != other.motor_id) {
      return false;
    }
    if (this->address != other.address) {
      return false;
    }
    if (this->length != other.length) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const RS485WriteRequest_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RS485WriteRequest_

// alias to use template instance with default allocator
using RS485WriteRequest =
  stm32_mavlink_msgs::msg::RS485WriteRequest_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace stm32_mavlink_msgs

#endif  // STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_WRITE_REQUEST__STRUCT_HPP_
