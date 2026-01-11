// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from stm32_mavlink_msgs:msg/RS485ReadRequest.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "stm32_mavlink_msgs/msg/detail/rs485_read_request__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace stm32_mavlink_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void RS485ReadRequest_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) stm32_mavlink_msgs::msg::RS485ReadRequest(_init);
}

void RS485ReadRequest_fini_function(void * message_memory)
{
  auto typed_message = static_cast<stm32_mavlink_msgs::msg::RS485ReadRequest *>(message_memory);
  typed_message->~RS485ReadRequest();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RS485ReadRequest_message_member_array[3] = {
  {
    "motor_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stm32_mavlink_msgs::msg::RS485ReadRequest, motor_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "address",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stm32_mavlink_msgs::msg::RS485ReadRequest, address),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "length",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stm32_mavlink_msgs::msg::RS485ReadRequest, length),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RS485ReadRequest_message_members = {
  "stm32_mavlink_msgs::msg",  // message namespace
  "RS485ReadRequest",  // message name
  3,  // number of fields
  sizeof(stm32_mavlink_msgs::msg::RS485ReadRequest),
  RS485ReadRequest_message_member_array,  // message members
  RS485ReadRequest_init_function,  // function to initialize message memory (memory has to be allocated)
  RS485ReadRequest_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RS485ReadRequest_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RS485ReadRequest_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace stm32_mavlink_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<stm32_mavlink_msgs::msg::RS485ReadRequest>()
{
  return &::stm32_mavlink_msgs::msg::rosidl_typesupport_introspection_cpp::RS485ReadRequest_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, stm32_mavlink_msgs, msg, RS485ReadRequest)() {
  return &::stm32_mavlink_msgs::msg::rosidl_typesupport_introspection_cpp::RS485ReadRequest_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
