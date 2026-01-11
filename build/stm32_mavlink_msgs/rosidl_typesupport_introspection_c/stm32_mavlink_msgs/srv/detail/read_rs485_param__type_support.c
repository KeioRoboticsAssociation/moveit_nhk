// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from stm32_mavlink_msgs:srv/ReadRS485Param.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "stm32_mavlink_msgs/srv/detail/read_rs485_param__rosidl_typesupport_introspection_c.h"
#include "stm32_mavlink_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "stm32_mavlink_msgs/srv/detail/read_rs485_param__functions.h"
#include "stm32_mavlink_msgs/srv/detail/read_rs485_param__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void stm32_mavlink_msgs__srv__ReadRS485Param_Request__rosidl_typesupport_introspection_c__ReadRS485Param_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  stm32_mavlink_msgs__srv__ReadRS485Param_Request__init(message_memory);
}

void stm32_mavlink_msgs__srv__ReadRS485Param_Request__rosidl_typesupport_introspection_c__ReadRS485Param_Request_fini_function(void * message_memory)
{
  stm32_mavlink_msgs__srv__ReadRS485Param_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember stm32_mavlink_msgs__srv__ReadRS485Param_Request__rosidl_typesupport_introspection_c__ReadRS485Param_Request_message_member_array[3] = {
  {
    "motor_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stm32_mavlink_msgs__srv__ReadRS485Param_Request, motor_id),  // bytes offset in struct
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
    offsetof(stm32_mavlink_msgs__srv__ReadRS485Param_Request, address),  // bytes offset in struct
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
    offsetof(stm32_mavlink_msgs__srv__ReadRS485Param_Request, length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers stm32_mavlink_msgs__srv__ReadRS485Param_Request__rosidl_typesupport_introspection_c__ReadRS485Param_Request_message_members = {
  "stm32_mavlink_msgs__srv",  // message namespace
  "ReadRS485Param_Request",  // message name
  3,  // number of fields
  sizeof(stm32_mavlink_msgs__srv__ReadRS485Param_Request),
  stm32_mavlink_msgs__srv__ReadRS485Param_Request__rosidl_typesupport_introspection_c__ReadRS485Param_Request_message_member_array,  // message members
  stm32_mavlink_msgs__srv__ReadRS485Param_Request__rosidl_typesupport_introspection_c__ReadRS485Param_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  stm32_mavlink_msgs__srv__ReadRS485Param_Request__rosidl_typesupport_introspection_c__ReadRS485Param_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t stm32_mavlink_msgs__srv__ReadRS485Param_Request__rosidl_typesupport_introspection_c__ReadRS485Param_Request_message_type_support_handle = {
  0,
  &stm32_mavlink_msgs__srv__ReadRS485Param_Request__rosidl_typesupport_introspection_c__ReadRS485Param_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_stm32_mavlink_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, stm32_mavlink_msgs, srv, ReadRS485Param_Request)() {
  if (!stm32_mavlink_msgs__srv__ReadRS485Param_Request__rosidl_typesupport_introspection_c__ReadRS485Param_Request_message_type_support_handle.typesupport_identifier) {
    stm32_mavlink_msgs__srv__ReadRS485Param_Request__rosidl_typesupport_introspection_c__ReadRS485Param_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &stm32_mavlink_msgs__srv__ReadRS485Param_Request__rosidl_typesupport_introspection_c__ReadRS485Param_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "stm32_mavlink_msgs/srv/detail/read_rs485_param__rosidl_typesupport_introspection_c.h"
// already included above
// #include "stm32_mavlink_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "stm32_mavlink_msgs/srv/detail/read_rs485_param__functions.h"
// already included above
// #include "stm32_mavlink_msgs/srv/detail/read_rs485_param__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void stm32_mavlink_msgs__srv__ReadRS485Param_Response__rosidl_typesupport_introspection_c__ReadRS485Param_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  stm32_mavlink_msgs__srv__ReadRS485Param_Response__init(message_memory);
}

void stm32_mavlink_msgs__srv__ReadRS485Param_Response__rosidl_typesupport_introspection_c__ReadRS485Param_Response_fini_function(void * message_memory)
{
  stm32_mavlink_msgs__srv__ReadRS485Param_Response__fini(message_memory);
}

size_t stm32_mavlink_msgs__srv__ReadRS485Param_Response__rosidl_typesupport_introspection_c__size_function__ReadRS485Param_Response__data(
  const void * untyped_member)
{
  (void)untyped_member;
  return 64;
}

const void * stm32_mavlink_msgs__srv__ReadRS485Param_Response__rosidl_typesupport_introspection_c__get_const_function__ReadRS485Param_Response__data(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * stm32_mavlink_msgs__srv__ReadRS485Param_Response__rosidl_typesupport_introspection_c__get_function__ReadRS485Param_Response__data(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void stm32_mavlink_msgs__srv__ReadRS485Param_Response__rosidl_typesupport_introspection_c__fetch_function__ReadRS485Param_Response__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    stm32_mavlink_msgs__srv__ReadRS485Param_Response__rosidl_typesupport_introspection_c__get_const_function__ReadRS485Param_Response__data(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void stm32_mavlink_msgs__srv__ReadRS485Param_Response__rosidl_typesupport_introspection_c__assign_function__ReadRS485Param_Response__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    stm32_mavlink_msgs__srv__ReadRS485Param_Response__rosidl_typesupport_introspection_c__get_function__ReadRS485Param_Response__data(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember stm32_mavlink_msgs__srv__ReadRS485Param_Response__rosidl_typesupport_introspection_c__ReadRS485Param_Response_message_member_array[5] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stm32_mavlink_msgs__srv__ReadRS485Param_Response, success),  // bytes offset in struct
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
    offsetof(stm32_mavlink_msgs__srv__ReadRS485Param_Response, data),  // bytes offset in struct
    NULL,  // default value
    stm32_mavlink_msgs__srv__ReadRS485Param_Response__rosidl_typesupport_introspection_c__size_function__ReadRS485Param_Response__data,  // size() function pointer
    stm32_mavlink_msgs__srv__ReadRS485Param_Response__rosidl_typesupport_introspection_c__get_const_function__ReadRS485Param_Response__data,  // get_const(index) function pointer
    stm32_mavlink_msgs__srv__ReadRS485Param_Response__rosidl_typesupport_introspection_c__get_function__ReadRS485Param_Response__data,  // get(index) function pointer
    stm32_mavlink_msgs__srv__ReadRS485Param_Response__rosidl_typesupport_introspection_c__fetch_function__ReadRS485Param_Response__data,  // fetch(index, &value) function pointer
    stm32_mavlink_msgs__srv__ReadRS485Param_Response__rosidl_typesupport_introspection_c__assign_function__ReadRS485Param_Response__data,  // assign(index, value) function pointer
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
    offsetof(stm32_mavlink_msgs__srv__ReadRS485Param_Response, status),  // bytes offset in struct
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
    offsetof(stm32_mavlink_msgs__srv__ReadRS485Param_Response, rs485_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(stm32_mavlink_msgs__srv__ReadRS485Param_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers stm32_mavlink_msgs__srv__ReadRS485Param_Response__rosidl_typesupport_introspection_c__ReadRS485Param_Response_message_members = {
  "stm32_mavlink_msgs__srv",  // message namespace
  "ReadRS485Param_Response",  // message name
  5,  // number of fields
  sizeof(stm32_mavlink_msgs__srv__ReadRS485Param_Response),
  stm32_mavlink_msgs__srv__ReadRS485Param_Response__rosidl_typesupport_introspection_c__ReadRS485Param_Response_message_member_array,  // message members
  stm32_mavlink_msgs__srv__ReadRS485Param_Response__rosidl_typesupport_introspection_c__ReadRS485Param_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  stm32_mavlink_msgs__srv__ReadRS485Param_Response__rosidl_typesupport_introspection_c__ReadRS485Param_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t stm32_mavlink_msgs__srv__ReadRS485Param_Response__rosidl_typesupport_introspection_c__ReadRS485Param_Response_message_type_support_handle = {
  0,
  &stm32_mavlink_msgs__srv__ReadRS485Param_Response__rosidl_typesupport_introspection_c__ReadRS485Param_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_stm32_mavlink_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, stm32_mavlink_msgs, srv, ReadRS485Param_Response)() {
  if (!stm32_mavlink_msgs__srv__ReadRS485Param_Response__rosidl_typesupport_introspection_c__ReadRS485Param_Response_message_type_support_handle.typesupport_identifier) {
    stm32_mavlink_msgs__srv__ReadRS485Param_Response__rosidl_typesupport_introspection_c__ReadRS485Param_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &stm32_mavlink_msgs__srv__ReadRS485Param_Response__rosidl_typesupport_introspection_c__ReadRS485Param_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "stm32_mavlink_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "stm32_mavlink_msgs/srv/detail/read_rs485_param__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers stm32_mavlink_msgs__srv__detail__read_rs485_param__rosidl_typesupport_introspection_c__ReadRS485Param_service_members = {
  "stm32_mavlink_msgs__srv",  // service namespace
  "ReadRS485Param",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // stm32_mavlink_msgs__srv__detail__read_rs485_param__rosidl_typesupport_introspection_c__ReadRS485Param_Request_message_type_support_handle,
  NULL  // response message
  // stm32_mavlink_msgs__srv__detail__read_rs485_param__rosidl_typesupport_introspection_c__ReadRS485Param_Response_message_type_support_handle
};

static rosidl_service_type_support_t stm32_mavlink_msgs__srv__detail__read_rs485_param__rosidl_typesupport_introspection_c__ReadRS485Param_service_type_support_handle = {
  0,
  &stm32_mavlink_msgs__srv__detail__read_rs485_param__rosidl_typesupport_introspection_c__ReadRS485Param_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, stm32_mavlink_msgs, srv, ReadRS485Param_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, stm32_mavlink_msgs, srv, ReadRS485Param_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_stm32_mavlink_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, stm32_mavlink_msgs, srv, ReadRS485Param)() {
  if (!stm32_mavlink_msgs__srv__detail__read_rs485_param__rosidl_typesupport_introspection_c__ReadRS485Param_service_type_support_handle.typesupport_identifier) {
    stm32_mavlink_msgs__srv__detail__read_rs485_param__rosidl_typesupport_introspection_c__ReadRS485Param_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)stm32_mavlink_msgs__srv__detail__read_rs485_param__rosidl_typesupport_introspection_c__ReadRS485Param_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, stm32_mavlink_msgs, srv, ReadRS485Param_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, stm32_mavlink_msgs, srv, ReadRS485Param_Response)()->data;
  }

  return &stm32_mavlink_msgs__srv__detail__read_rs485_param__rosidl_typesupport_introspection_c__ReadRS485Param_service_type_support_handle;
}
