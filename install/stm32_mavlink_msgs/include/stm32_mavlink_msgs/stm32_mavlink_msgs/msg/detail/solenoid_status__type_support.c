// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from stm32_mavlink_msgs:msg/SolenoidStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "stm32_mavlink_msgs/msg/detail/solenoid_status__rosidl_typesupport_introspection_c.h"
#include "stm32_mavlink_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "stm32_mavlink_msgs/msg/detail/solenoid_status__functions.h"
#include "stm32_mavlink_msgs/msg/detail/solenoid_status__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void stm32_mavlink_msgs__msg__SolenoidStatus__rosidl_typesupport_introspection_c__SolenoidStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  stm32_mavlink_msgs__msg__SolenoidStatus__init(message_memory);
}

void stm32_mavlink_msgs__msg__SolenoidStatus__rosidl_typesupport_introspection_c__SolenoidStatus_fini_function(void * message_memory)
{
  stm32_mavlink_msgs__msg__SolenoidStatus__fini(message_memory);
}

size_t stm32_mavlink_msgs__msg__SolenoidStatus__rosidl_typesupport_introspection_c__size_function__SolenoidStatus__solenoid_states(
  const void * untyped_member)
{
  (void)untyped_member;
  return 8;
}

const void * stm32_mavlink_msgs__msg__SolenoidStatus__rosidl_typesupport_introspection_c__get_const_function__SolenoidStatus__solenoid_states(
  const void * untyped_member, size_t index)
{
  const bool * member =
    (const bool *)(untyped_member);
  return &member[index];
}

void * stm32_mavlink_msgs__msg__SolenoidStatus__rosidl_typesupport_introspection_c__get_function__SolenoidStatus__solenoid_states(
  void * untyped_member, size_t index)
{
  bool * member =
    (bool *)(untyped_member);
  return &member[index];
}

void stm32_mavlink_msgs__msg__SolenoidStatus__rosidl_typesupport_introspection_c__fetch_function__SolenoidStatus__solenoid_states(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    stm32_mavlink_msgs__msg__SolenoidStatus__rosidl_typesupport_introspection_c__get_const_function__SolenoidStatus__solenoid_states(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void stm32_mavlink_msgs__msg__SolenoidStatus__rosidl_typesupport_introspection_c__assign_function__SolenoidStatus__solenoid_states(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    stm32_mavlink_msgs__msg__SolenoidStatus__rosidl_typesupport_introspection_c__get_function__SolenoidStatus__solenoid_states(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember stm32_mavlink_msgs__msg__SolenoidStatus__rosidl_typesupport_introspection_c__SolenoidStatus_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stm32_mavlink_msgs__msg__SolenoidStatus, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "solenoid_count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stm32_mavlink_msgs__msg__SolenoidStatus, solenoid_count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "solenoid_states",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    8,  // array size
    false,  // is upper bound
    offsetof(stm32_mavlink_msgs__msg__SolenoidStatus, solenoid_states),  // bytes offset in struct
    NULL,  // default value
    stm32_mavlink_msgs__msg__SolenoidStatus__rosidl_typesupport_introspection_c__size_function__SolenoidStatus__solenoid_states,  // size() function pointer
    stm32_mavlink_msgs__msg__SolenoidStatus__rosidl_typesupport_introspection_c__get_const_function__SolenoidStatus__solenoid_states,  // get_const(index) function pointer
    stm32_mavlink_msgs__msg__SolenoidStatus__rosidl_typesupport_introspection_c__get_function__SolenoidStatus__solenoid_states,  // get(index) function pointer
    stm32_mavlink_msgs__msg__SolenoidStatus__rosidl_typesupport_introspection_c__fetch_function__SolenoidStatus__solenoid_states,  // fetch(index, &value) function pointer
    stm32_mavlink_msgs__msg__SolenoidStatus__rosidl_typesupport_introspection_c__assign_function__SolenoidStatus__solenoid_states,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timestamp_ms",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stm32_mavlink_msgs__msg__SolenoidStatus, timestamp_ms),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers stm32_mavlink_msgs__msg__SolenoidStatus__rosidl_typesupport_introspection_c__SolenoidStatus_message_members = {
  "stm32_mavlink_msgs__msg",  // message namespace
  "SolenoidStatus",  // message name
  4,  // number of fields
  sizeof(stm32_mavlink_msgs__msg__SolenoidStatus),
  stm32_mavlink_msgs__msg__SolenoidStatus__rosidl_typesupport_introspection_c__SolenoidStatus_message_member_array,  // message members
  stm32_mavlink_msgs__msg__SolenoidStatus__rosidl_typesupport_introspection_c__SolenoidStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  stm32_mavlink_msgs__msg__SolenoidStatus__rosidl_typesupport_introspection_c__SolenoidStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t stm32_mavlink_msgs__msg__SolenoidStatus__rosidl_typesupport_introspection_c__SolenoidStatus_message_type_support_handle = {
  0,
  &stm32_mavlink_msgs__msg__SolenoidStatus__rosidl_typesupport_introspection_c__SolenoidStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_stm32_mavlink_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, stm32_mavlink_msgs, msg, SolenoidStatus)() {
  stm32_mavlink_msgs__msg__SolenoidStatus__rosidl_typesupport_introspection_c__SolenoidStatus_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!stm32_mavlink_msgs__msg__SolenoidStatus__rosidl_typesupport_introspection_c__SolenoidStatus_message_type_support_handle.typesupport_identifier) {
    stm32_mavlink_msgs__msg__SolenoidStatus__rosidl_typesupport_introspection_c__SolenoidStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &stm32_mavlink_msgs__msg__SolenoidStatus__rosidl_typesupport_introspection_c__SolenoidStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
