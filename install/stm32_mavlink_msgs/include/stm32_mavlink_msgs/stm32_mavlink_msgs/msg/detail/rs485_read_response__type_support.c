// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from stm32_mavlink_msgs:msg/RS485ReadResponse.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "stm32_mavlink_msgs/msg/detail/rs485_read_response__rosidl_typesupport_introspection_c.h"
#include "stm32_mavlink_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "stm32_mavlink_msgs/msg/detail/rs485_read_response__functions.h"
#include "stm32_mavlink_msgs/msg/detail/rs485_read_response__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void stm32_mavlink_msgs__msg__RS485ReadResponse__rosidl_typesupport_introspection_c__RS485ReadResponse_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  stm32_mavlink_msgs__msg__RS485ReadResponse__init(message_memory);
}

void stm32_mavlink_msgs__msg__RS485ReadResponse__rosidl_typesupport_introspection_c__RS485ReadResponse_fini_function(void * message_memory)
{
  stm32_mavlink_msgs__msg__RS485ReadResponse__fini(message_memory);
}

size_t stm32_mavlink_msgs__msg__RS485ReadResponse__rosidl_typesupport_introspection_c__size_function__RS485ReadResponse__data(
  const void * untyped_member)
{
  (void)untyped_member;
  return 64;
}

const void * stm32_mavlink_msgs__msg__RS485ReadResponse__rosidl_typesupport_introspection_c__get_const_function__RS485ReadResponse__data(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * stm32_mavlink_msgs__msg__RS485ReadResponse__rosidl_typesupport_introspection_c__get_function__RS485ReadResponse__data(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void stm32_mavlink_msgs__msg__RS485ReadResponse__rosidl_typesupport_introspection_c__fetch_function__RS485ReadResponse__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    stm32_mavlink_msgs__msg__RS485ReadResponse__rosidl_typesupport_introspection_c__get_const_function__RS485ReadResponse__data(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void stm32_mavlink_msgs__msg__RS485ReadResponse__rosidl_typesupport_introspection_c__assign_function__RS485ReadResponse__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    stm32_mavlink_msgs__msg__RS485ReadResponse__rosidl_typesupport_introspection_c__get_function__RS485ReadResponse__data(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember stm32_mavlink_msgs__msg__RS485ReadResponse__rosidl_typesupport_introspection_c__RS485ReadResponse_message_member_array[6] = {
  {
    "motor_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stm32_mavlink_msgs__msg__RS485ReadResponse, motor_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "address",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stm32_mavlink_msgs__msg__RS485ReadResponse, address),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stm32_mavlink_msgs__msg__RS485ReadResponse, length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    64,  // array size
    false,  // is upper bound
    offsetof(stm32_mavlink_msgs__msg__RS485ReadResponse, data),  // bytes offset in struct
    NULL,  // default value
    stm32_mavlink_msgs__msg__RS485ReadResponse__rosidl_typesupport_introspection_c__size_function__RS485ReadResponse__data,  // size() function pointer
    stm32_mavlink_msgs__msg__RS485ReadResponse__rosidl_typesupport_introspection_c__get_const_function__RS485ReadResponse__data,  // get_const(index) function pointer
    stm32_mavlink_msgs__msg__RS485ReadResponse__rosidl_typesupport_introspection_c__get_function__RS485ReadResponse__data,  // get(index) function pointer
    stm32_mavlink_msgs__msg__RS485ReadResponse__rosidl_typesupport_introspection_c__fetch_function__RS485ReadResponse__data,  // fetch(index, &value) function pointer
    stm32_mavlink_msgs__msg__RS485ReadResponse__rosidl_typesupport_introspection_c__assign_function__RS485ReadResponse__data,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stm32_mavlink_msgs__msg__RS485ReadResponse, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rs485_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stm32_mavlink_msgs__msg__RS485ReadResponse, rs485_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers stm32_mavlink_msgs__msg__RS485ReadResponse__rosidl_typesupport_introspection_c__RS485ReadResponse_message_members = {
  "stm32_mavlink_msgs__msg",  // message namespace
  "RS485ReadResponse",  // message name
  6,  // number of fields
  sizeof(stm32_mavlink_msgs__msg__RS485ReadResponse),
  stm32_mavlink_msgs__msg__RS485ReadResponse__rosidl_typesupport_introspection_c__RS485ReadResponse_message_member_array,  // message members
  stm32_mavlink_msgs__msg__RS485ReadResponse__rosidl_typesupport_introspection_c__RS485ReadResponse_init_function,  // function to initialize message memory (memory has to be allocated)
  stm32_mavlink_msgs__msg__RS485ReadResponse__rosidl_typesupport_introspection_c__RS485ReadResponse_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t stm32_mavlink_msgs__msg__RS485ReadResponse__rosidl_typesupport_introspection_c__RS485ReadResponse_message_type_support_handle = {
  0,
  &stm32_mavlink_msgs__msg__RS485ReadResponse__rosidl_typesupport_introspection_c__RS485ReadResponse_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_stm32_mavlink_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, stm32_mavlink_msgs, msg, RS485ReadResponse)() {
  if (!stm32_mavlink_msgs__msg__RS485ReadResponse__rosidl_typesupport_introspection_c__RS485ReadResponse_message_type_support_handle.typesupport_identifier) {
    stm32_mavlink_msgs__msg__RS485ReadResponse__rosidl_typesupport_introspection_c__RS485ReadResponse_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &stm32_mavlink_msgs__msg__RS485ReadResponse__rosidl_typesupport_introspection_c__RS485ReadResponse_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
