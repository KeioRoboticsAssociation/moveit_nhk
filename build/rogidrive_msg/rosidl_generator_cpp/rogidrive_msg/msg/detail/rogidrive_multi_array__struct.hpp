// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rogidrive_msg:msg/RogidriveMultiArray.idl
// generated code does not contain a copyright notice

#ifndef ROGIDRIVE_MSG__MSG__DETAIL__ROGIDRIVE_MULTI_ARRAY__STRUCT_HPP_
#define ROGIDRIVE_MSG__MSG__DETAIL__ROGIDRIVE_MULTI_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'data'
#include "rogidrive_msg/msg/detail/rogidrive_message__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rogidrive_msg__msg__RogidriveMultiArray __attribute__((deprecated))
#else
# define DEPRECATED__rogidrive_msg__msg__RogidriveMultiArray __declspec(deprecated)
#endif

namespace rogidrive_msg
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RogidriveMultiArray_
{
  using Type = RogidriveMultiArray_<ContainerAllocator>;

  explicit RogidriveMultiArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit RogidriveMultiArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _data_type =
    std::vector<rogidrive_msg::msg::RogidriveMessage_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rogidrive_msg::msg::RogidriveMessage_<ContainerAllocator>>>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__data(
    const std::vector<rogidrive_msg::msg::RogidriveMessage_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rogidrive_msg::msg::RogidriveMessage_<ContainerAllocator>>> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rogidrive_msg::msg::RogidriveMultiArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const rogidrive_msg::msg::RogidriveMultiArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rogidrive_msg::msg::RogidriveMultiArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rogidrive_msg::msg::RogidriveMultiArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rogidrive_msg::msg::RogidriveMultiArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rogidrive_msg::msg::RogidriveMultiArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rogidrive_msg::msg::RogidriveMultiArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rogidrive_msg::msg::RogidriveMultiArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rogidrive_msg::msg::RogidriveMultiArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rogidrive_msg::msg::RogidriveMultiArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rogidrive_msg__msg__RogidriveMultiArray
    std::shared_ptr<rogidrive_msg::msg::RogidriveMultiArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rogidrive_msg__msg__RogidriveMultiArray
    std::shared_ptr<rogidrive_msg::msg::RogidriveMultiArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RogidriveMultiArray_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const RogidriveMultiArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RogidriveMultiArray_

// alias to use template instance with default allocator
using RogidriveMultiArray =
  rogidrive_msg::msg::RogidriveMultiArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace rogidrive_msg

#endif  // ROGIDRIVE_MSG__MSG__DETAIL__ROGIDRIVE_MULTI_ARRAY__STRUCT_HPP_
