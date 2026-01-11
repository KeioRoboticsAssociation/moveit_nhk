// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from stm32_mavlink_msgs:srv/ReadRS485Param.idl
// generated code does not contain a copyright notice

#ifndef STM32_MAVLINK_MSGS__SRV__DETAIL__READ_RS485_PARAM__STRUCT_HPP_
#define STM32_MAVLINK_MSGS__SRV__DETAIL__READ_RS485_PARAM__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__stm32_mavlink_msgs__srv__ReadRS485Param_Request __attribute__((deprecated))
#else
# define DEPRECATED__stm32_mavlink_msgs__srv__ReadRS485Param_Request __declspec(deprecated)
#endif

namespace stm32_mavlink_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ReadRS485Param_Request_
{
  using Type = ReadRS485Param_Request_<ContainerAllocator>;

  explicit ReadRS485Param_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_id = 0;
      this->address = 0;
      this->length = 0;
    }
  }

  explicit ReadRS485Param_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->motor_id = 0;
      this->address = 0;
      this->length = 0;
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

  // constant declarations

  // pointer types
  using RawPtr =
    stm32_mavlink_msgs::srv::ReadRS485Param_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const stm32_mavlink_msgs::srv::ReadRS485Param_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<stm32_mavlink_msgs::srv::ReadRS485Param_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<stm32_mavlink_msgs::srv::ReadRS485Param_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      stm32_mavlink_msgs::srv::ReadRS485Param_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<stm32_mavlink_msgs::srv::ReadRS485Param_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      stm32_mavlink_msgs::srv::ReadRS485Param_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<stm32_mavlink_msgs::srv::ReadRS485Param_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<stm32_mavlink_msgs::srv::ReadRS485Param_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<stm32_mavlink_msgs::srv::ReadRS485Param_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__stm32_mavlink_msgs__srv__ReadRS485Param_Request
    std::shared_ptr<stm32_mavlink_msgs::srv::ReadRS485Param_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__stm32_mavlink_msgs__srv__ReadRS485Param_Request
    std::shared_ptr<stm32_mavlink_msgs::srv::ReadRS485Param_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ReadRS485Param_Request_ & other) const
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
    return true;
  }
  bool operator!=(const ReadRS485Param_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ReadRS485Param_Request_

// alias to use template instance with default allocator
using ReadRS485Param_Request =
  stm32_mavlink_msgs::srv::ReadRS485Param_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace stm32_mavlink_msgs


#ifndef _WIN32
# define DEPRECATED__stm32_mavlink_msgs__srv__ReadRS485Param_Response __attribute__((deprecated))
#else
# define DEPRECATED__stm32_mavlink_msgs__srv__ReadRS485Param_Response __declspec(deprecated)
#endif

namespace stm32_mavlink_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ReadRS485Param_Response_
{
  using Type = ReadRS485Param_Response_<ContainerAllocator>;

  explicit ReadRS485Param_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      std::fill<typename std::array<uint8_t, 64>::iterator, uint8_t>(this->data.begin(), this->data.end(), 0);
      this->status = 0;
      this->rs485_error = 0;
      this->message = "";
    }
  }

  explicit ReadRS485Param_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : data(_alloc),
    message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      std::fill<typename std::array<uint8_t, 64>::iterator, uint8_t>(this->data.begin(), this->data.end(), 0);
      this->status = 0;
      this->rs485_error = 0;
      this->message = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _data_type =
    std::array<uint8_t, 64>;
  _data_type data;
  using _status_type =
    uint8_t;
  _status_type status;
  using _rs485_error_type =
    uint8_t;
  _rs485_error_type rs485_error;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__data(
    const std::array<uint8_t, 64> & _arg)
  {
    this->data = _arg;
    return *this;
  }
  Type & set__status(
    const uint8_t & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__rs485_error(
    const uint8_t & _arg)
  {
    this->rs485_error = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    stm32_mavlink_msgs::srv::ReadRS485Param_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const stm32_mavlink_msgs::srv::ReadRS485Param_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<stm32_mavlink_msgs::srv::ReadRS485Param_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<stm32_mavlink_msgs::srv::ReadRS485Param_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      stm32_mavlink_msgs::srv::ReadRS485Param_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<stm32_mavlink_msgs::srv::ReadRS485Param_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      stm32_mavlink_msgs::srv::ReadRS485Param_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<stm32_mavlink_msgs::srv::ReadRS485Param_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<stm32_mavlink_msgs::srv::ReadRS485Param_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<stm32_mavlink_msgs::srv::ReadRS485Param_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__stm32_mavlink_msgs__srv__ReadRS485Param_Response
    std::shared_ptr<stm32_mavlink_msgs::srv::ReadRS485Param_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__stm32_mavlink_msgs__srv__ReadRS485Param_Response
    std::shared_ptr<stm32_mavlink_msgs::srv::ReadRS485Param_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ReadRS485Param_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->rs485_error != other.rs485_error) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const ReadRS485Param_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ReadRS485Param_Response_

// alias to use template instance with default allocator
using ReadRS485Param_Response =
  stm32_mavlink_msgs::srv::ReadRS485Param_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace stm32_mavlink_msgs

namespace stm32_mavlink_msgs
{

namespace srv
{

struct ReadRS485Param
{
  using Request = stm32_mavlink_msgs::srv::ReadRS485Param_Request;
  using Response = stm32_mavlink_msgs::srv::ReadRS485Param_Response;
};

}  // namespace srv

}  // namespace stm32_mavlink_msgs

#endif  // STM32_MAVLINK_MSGS__SRV__DETAIL__READ_RS485_PARAM__STRUCT_HPP_
