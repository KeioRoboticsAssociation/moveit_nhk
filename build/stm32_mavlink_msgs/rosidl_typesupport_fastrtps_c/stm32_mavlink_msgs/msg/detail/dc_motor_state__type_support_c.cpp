// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from stm32_mavlink_msgs:msg/DCMotorState.idl
// generated code does not contain a copyright notice
#include "stm32_mavlink_msgs/msg/detail/dc_motor_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "stm32_mavlink_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "stm32_mavlink_msgs/msg/detail/dc_motor_state__struct.h"
#include "stm32_mavlink_msgs/msg/detail/dc_motor_state__functions.h"
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


using _DCMotorState__ros_msg_type = stm32_mavlink_msgs__msg__DCMotorState;

static bool _DCMotorState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DCMotorState__ros_msg_type * ros_message = static_cast<const _DCMotorState__ros_msg_type *>(untyped_ros_message);
  // Field name: motor_id
  {
    cdr << ros_message->motor_id;
  }

  // Field name: position_rad
  {
    cdr << ros_message->position_rad;
  }

  // Field name: velocity_rad_s
  {
    cdr << ros_message->velocity_rad_s;
  }

  // Field name: current_a
  {
    cdr << ros_message->current_a;
  }

  // Field name: temperature_c
  {
    cdr << ros_message->temperature_c;
  }

  // Field name: status
  {
    cdr << ros_message->status;
  }

  // Field name: enabled
  {
    cdr << (ros_message->enabled ? true : false);
  }

  // Field name: control_mode
  {
    cdr << ros_message->control_mode;
  }

  // Field name: current_duty_cycle
  {
    cdr << ros_message->current_duty_cycle;
  }

  // Field name: target_duty_cycle
  {
    cdr << ros_message->target_duty_cycle;
  }

  // Field name: target_velocity_rad_s
  {
    cdr << ros_message->target_velocity_rad_s;
  }

  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  return true;
}

static bool _DCMotorState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DCMotorState__ros_msg_type * ros_message = static_cast<_DCMotorState__ros_msg_type *>(untyped_ros_message);
  // Field name: motor_id
  {
    cdr >> ros_message->motor_id;
  }

  // Field name: position_rad
  {
    cdr >> ros_message->position_rad;
  }

  // Field name: velocity_rad_s
  {
    cdr >> ros_message->velocity_rad_s;
  }

  // Field name: current_a
  {
    cdr >> ros_message->current_a;
  }

  // Field name: temperature_c
  {
    cdr >> ros_message->temperature_c;
  }

  // Field name: status
  {
    cdr >> ros_message->status;
  }

  // Field name: enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->enabled = tmp ? true : false;
  }

  // Field name: control_mode
  {
    cdr >> ros_message->control_mode;
  }

  // Field name: current_duty_cycle
  {
    cdr >> ros_message->current_duty_cycle;
  }

  // Field name: target_duty_cycle
  {
    cdr >> ros_message->target_duty_cycle;
  }

  // Field name: target_velocity_rad_s
  {
    cdr >> ros_message->target_velocity_rad_s;
  }

  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_stm32_mavlink_msgs
size_t get_serialized_size_stm32_mavlink_msgs__msg__DCMotorState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DCMotorState__ros_msg_type * ros_message = static_cast<const _DCMotorState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name motor_id
  {
    size_t item_size = sizeof(ros_message->motor_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name position_rad
  {
    size_t item_size = sizeof(ros_message->position_rad);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name velocity_rad_s
  {
    size_t item_size = sizeof(ros_message->velocity_rad_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name current_a
  {
    size_t item_size = sizeof(ros_message->current_a);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name temperature_c
  {
    size_t item_size = sizeof(ros_message->temperature_c);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name status
  {
    size_t item_size = sizeof(ros_message->status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name enabled
  {
    size_t item_size = sizeof(ros_message->enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name control_mode
  {
    size_t item_size = sizeof(ros_message->control_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name current_duty_cycle
  {
    size_t item_size = sizeof(ros_message->current_duty_cycle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name target_duty_cycle
  {
    size_t item_size = sizeof(ros_message->target_duty_cycle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name target_velocity_rad_s
  {
    size_t item_size = sizeof(ros_message->target_velocity_rad_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name timestamp
  {
    size_t item_size = sizeof(ros_message->timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _DCMotorState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_stm32_mavlink_msgs__msg__DCMotorState(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_stm32_mavlink_msgs
size_t max_serialized_size_stm32_mavlink_msgs__msg__DCMotorState(
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

  // member: motor_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: position_rad
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: velocity_rad_s
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: current_a
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: temperature_c
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: enabled
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
  // member: current_duty_cycle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: target_duty_cycle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: target_velocity_rad_s
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = stm32_mavlink_msgs__msg__DCMotorState;
    is_plain =
      (
      offsetof(DataType, timestamp) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _DCMotorState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_stm32_mavlink_msgs__msg__DCMotorState(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_DCMotorState = {
  "stm32_mavlink_msgs::msg",
  "DCMotorState",
  _DCMotorState__cdr_serialize,
  _DCMotorState__cdr_deserialize,
  _DCMotorState__get_serialized_size,
  _DCMotorState__max_serialized_size
};

static rosidl_message_type_support_t _DCMotorState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DCMotorState,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, stm32_mavlink_msgs, msg, DCMotorState)() {
  return &_DCMotorState__type_support;
}

#if defined(__cplusplus)
}
#endif
