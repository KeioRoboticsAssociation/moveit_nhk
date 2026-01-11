// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from stm32_mavlink_msgs:msg/WTT12LStatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "stm32_mavlink_msgs/msg/detail/wtt12_l_status__struct.hpp"
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

void WTT12LStatus_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) stm32_mavlink_msgs::msg::WTT12LStatus(_init);
}

void WTT12LStatus_fini_function(void * message_memory)
{
  auto typed_message = static_cast<stm32_mavlink_msgs::msg::WTT12LStatus *>(message_memory);
  typed_message->~WTT12LStatus();
}

size_t size_function__WTT12LStatus__device_states(const void * untyped_member)
{
  (void)untyped_member;
  return 8;
}

const void * get_const_function__WTT12LStatus__device_states(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<bool, 8> *>(untyped_member);
  return &member[index];
}

void * get_function__WTT12LStatus__device_states(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<bool, 8> *>(untyped_member);
  return &member[index];
}

void fetch_function__WTT12LStatus__device_states(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bool *>(
    get_const_function__WTT12LStatus__device_states(untyped_member, index));
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = item;
}

void assign_function__WTT12LStatus__device_states(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bool *>(
    get_function__WTT12LStatus__device_states(untyped_member, index));
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember WTT12LStatus_message_member_array[4] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stm32_mavlink_msgs::msg::WTT12LStatus, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "device_count",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stm32_mavlink_msgs::msg::WTT12LStatus, device_count),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "device_states",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    8,  // array size
    false,  // is upper bound
    offsetof(stm32_mavlink_msgs::msg::WTT12LStatus, device_states),  // bytes offset in struct
    nullptr,  // default value
    size_function__WTT12LStatus__device_states,  // size() function pointer
    get_const_function__WTT12LStatus__device_states,  // get_const(index) function pointer
    get_function__WTT12LStatus__device_states,  // get(index) function pointer
    fetch_function__WTT12LStatus__device_states,  // fetch(index, &value) function pointer
    assign_function__WTT12LStatus__device_states,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "timestamp_ms",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stm32_mavlink_msgs::msg::WTT12LStatus, timestamp_ms),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers WTT12LStatus_message_members = {
  "stm32_mavlink_msgs::msg",  // message namespace
  "WTT12LStatus",  // message name
  4,  // number of fields
  sizeof(stm32_mavlink_msgs::msg::WTT12LStatus),
  WTT12LStatus_message_member_array,  // message members
  WTT12LStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  WTT12LStatus_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t WTT12LStatus_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &WTT12LStatus_message_members,
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
get_message_type_support_handle<stm32_mavlink_msgs::msg::WTT12LStatus>()
{
  return &::stm32_mavlink_msgs::msg::rosidl_typesupport_introspection_cpp::WTT12LStatus_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, stm32_mavlink_msgs, msg, WTT12LStatus)() {
  return &::stm32_mavlink_msgs::msg::rosidl_typesupport_introspection_cpp::WTT12LStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
