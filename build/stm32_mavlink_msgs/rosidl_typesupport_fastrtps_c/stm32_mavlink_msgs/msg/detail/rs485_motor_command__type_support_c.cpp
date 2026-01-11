// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from stm32_mavlink_msgs:msg/RS485MotorCommand.idl
// generated code does not contain a copyright notice
#include "stm32_mavlink_msgs/msg/detail/rs485_motor_command__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "stm32_mavlink_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "stm32_mavlink_msgs/msg/detail/rs485_motor_command__struct.h"
#include "stm32_mavlink_msgs/msg/detail/rs485_motor_command__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _RS485MotorCommand__ros_msg_type = stm32_mavlink_msgs__msg__RS485MotorCommand;

static bool _RS485MotorCommand__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RS485MotorCommand__ros_msg_type * ros_message = static_cast<const _RS485MotorCommand__ros_msg_type *>(untyped_ros_message);
  // Field name: device_id
  {
    cdr << ros_message->device_id;
  }

  // Field name: motor_index
  {
    cdr << ros_message->motor_index;
  }

  // Field name: control_mode
  {
    cdr << ros_message->control_mode;
  }

  // Field name: target_velocity
  {
    cdr << ros_message->target_velocity;
  }

  // Field name: target_position
  {
    cdr << ros_message->target_position;
  }

  // Field name: target_duty
  {
    cdr << ros_message->target_duty;
  }

  // Field name: acceleration
  {
    cdr << ros_message->acceleration;
  }

  // Field name: enabled
  {
    cdr << (ros_message->enabled ? true : false);
  }

  return true;
}

static bool _RS485MotorCommand__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RS485MotorCommand__ros_msg_type * ros_message = static_cast<_RS485MotorCommand__ros_msg_type *>(untyped_ros_message);
  // Field name: device_id
  {
    cdr >> ros_message->device_id;
  }

  // Field name: motor_index
  {
    cdr >> ros_message->motor_index;
  }

  // Field name: control_mode
  {
    cdr >> ros_message->control_mode;
  }

  // Field name: target_velocity
  {
    cdr >> ros_message->target_velocity;
  }

  // Field name: target_position
  {
    cdr >> ros_message->target_position;
  }

  // Field name: target_duty
  {
    cdr >> ros_message->target_duty;
  }

  // Field name: acceleration
  {
    cdr >> ros_message->acceleration;
  }

  // Field name: enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->enabled = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_stm32_mavlink_msgs
size_t get_serialized_size_stm32_mavlink_msgs__msg__RS485MotorCommand(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RS485MotorCommand__ros_msg_type * ros_message = static_cast<const _RS485MotorCommand__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name device_id
  {
    size_t item_size = sizeof(ros_message->device_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name motor_index
  {
    size_t item_size = sizeof(ros_message->motor_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name control_mode
  {
    size_t item_size = sizeof(ros_message->control_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name target_velocity
  {
    size_t item_size = sizeof(ros_message->target_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name target_position
  {
    size_t item_size = sizeof(ros_message->target_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name target_duty
  {
    size_t item_size = sizeof(ros_message->target_duty);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acceleration
  {
    size_t item_size = sizeof(ros_message->acceleration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name enabled
  {
    size_t item_size = sizeof(ros_message->enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RS485MotorCommand__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_stm32_mavlink_msgs__msg__RS485MotorCommand(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_stm32_mavlink_msgs
size_t max_serialized_size_stm32_mavlink_msgs__msg__RS485MotorCommand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: device_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: motor_index
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: control_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: target_velocity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: target_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: target_duty
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: acceleration
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: enabled
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = stm32_mavlink_msgs__msg__RS485MotorCommand;
    is_plain =
      (
      offsetof(DataType, enabled) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _RS485MotorCommand__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_stm32_mavlink_msgs__msg__RS485MotorCommand(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RS485MotorCommand = {
  "stm32_mavlink_msgs::msg",
  "RS485MotorCommand",
  _RS485MotorCommand__cdr_serialize,
  _RS485MotorCommand__cdr_deserialize,
  _RS485MotorCommand__get_serialized_size,
  _RS485MotorCommand__max_serialized_size
};

static rosidl_message_type_support_t _RS485MotorCommand__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RS485MotorCommand,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, stm32_mavlink_msgs, msg, RS485MotorCommand)() {
  return &_RS485MotorCommand__type_support;
}

#if defined(__cplusplus)
}
#endif
