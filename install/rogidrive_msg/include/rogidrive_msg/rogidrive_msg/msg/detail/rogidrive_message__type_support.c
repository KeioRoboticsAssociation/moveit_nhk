// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rogidrive_msg:msg/RogidriveMessage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rogidrive_msg/msg/detail/rogidrive_message__rosidl_typesupport_introspection_c.h"
#include "rogidrive_msg/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rogidrive_msg/msg/detail/rogidrive_message__functions.h"
#include "rogidrive_msg/msg/detail/rogidrive_message__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rogidrive_msg__msg__RogidriveMessage__rosidl_typesupport_introspection_c__RogidriveMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rogidrive_msg__msg__RogidriveMessage__init(message_memory);
}

void rogidrive_msg__msg__RogidriveMessage__rosidl_typesupport_introspection_c__RogidriveMessage_fini_function(void * message_memory)
{
  rogidrive_msg__msg__RogidriveMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rogidrive_msg__msg__RogidriveMessage__rosidl_typesupport_introspection_c__RogidriveMessage_message_member_array[5] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rogidrive_msg__msg__RogidriveMessage, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rogidrive_msg__msg__RogidriveMessage, mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vel",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rogidrive_msg__msg__RogidriveMessage, vel),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rogidrive_msg__msg__RogidriveMessage, pos),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "current",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rogidrive_msg__msg__RogidriveMessage, current),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rogidrive_msg__msg__RogidriveMessage__rosidl_typesupport_introspection_c__RogidriveMessage_message_members = {
  "rogidrive_msg__msg",  // message namespace
  "RogidriveMessage",  // message name
  5,  // number of fields
  sizeof(rogidrive_msg__msg__RogidriveMessage),
  rogidrive_msg__msg__RogidriveMessage__rosidl_typesupport_introspection_c__RogidriveMessage_message_member_array,  // message members
  rogidrive_msg__msg__RogidriveMessage__rosidl_typesupport_introspection_c__RogidriveMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  rogidrive_msg__msg__RogidriveMessage__rosidl_typesupport_introspection_c__RogidriveMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rogidrive_msg__msg__RogidriveMessage__rosidl_typesupport_introspection_c__RogidriveMessage_message_type_support_handle = {
  0,
  &rogidrive_msg__msg__RogidriveMessage__rosidl_typesupport_introspection_c__RogidriveMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rogidrive_msg
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rogidrive_msg, msg, RogidriveMessage)() {
  if (!rogidrive_msg__msg__RogidriveMessage__rosidl_typesupport_introspection_c__RogidriveMessage_message_type_support_handle.typesupport_identifier) {
    rogidrive_msg__msg__RogidriveMessage__rosidl_typesupport_introspection_c__RogidriveMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rogidrive_msg__msg__RogidriveMessage__rosidl_typesupport_introspection_c__RogidriveMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
