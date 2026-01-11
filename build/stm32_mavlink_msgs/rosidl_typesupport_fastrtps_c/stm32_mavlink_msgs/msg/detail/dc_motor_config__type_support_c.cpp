// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from stm32_mavlink_msgs:msg/DCMotorConfig.idl
// generated code does not contain a copyright notice
#include "stm32_mavlink_msgs/msg/detail/dc_motor_config__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "stm32_mavlink_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "stm32_mavlink_msgs/msg/detail/dc_motor_config__struct.h"
#include "stm32_mavlink_msgs/msg/detail/dc_motor_config__functions.h"
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


using _DCMotorConfig__ros_msg_type = stm32_mavlink_msgs__msg__DCMotorConfig;

static bool _DCMotorConfig__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _DCMotorConfig__ros_msg_type * ros_message = static_cast<const _DCMotorConfig__ros_msg_type *>(untyped_ros_message);
  // Field name: motor_id
  {
    cdr << ros_message->motor_id;
  }

  // Field name: mode
  {
    cdr << ros_message->mode;
  }

  // Field name: speed_kp
  {
    cdr << ros_message->speed_kp;
  }

  // Field name: speed_ki
  {
    cdr << ros_message->speed_ki;
  }

  // Field name: speed_kd
  {
    cdr << ros_message->speed_kd;
  }

  // Field name: speed_max_integral
  {
    cdr << ros_message->speed_max_integral;
  }

  // Field name: speed_max_output
  {
    cdr << ros_message->speed_max_output;
  }

  // Field name: position_kp
  {
    cdr << ros_message->position_kp;
  }

  // Field name: position_ki
  {
    cdr << ros_message->position_ki;
  }

  // Field name: position_kd
  {
    cdr << ros_message->position_kd;
  }

  // Field name: position_max_integral
  {
    cdr << ros_message->position_max_integral;
  }

  // Field name: position_max_output
  {
    cdr << ros_message->position_max_output;
  }

  // Field name: max_speed_rad_s
  {
    cdr << ros_message->max_speed_rad_s;
  }

  // Field name: max_acceleration_rad_s2
  {
    cdr << ros_message->max_acceleration_rad_s2;
  }

  // Field name: use_position_limits
  {
    cdr << (ros_message->use_position_limits ? true : false);
  }

  // Field name: position_limit_min_rad
  {
    cdr << ros_message->position_limit_min_rad;
  }

  // Field name: position_limit_max_rad
  {
    cdr << ros_message->position_limit_max_rad;
  }

  // Field name: watchdog_timeout_ms
  {
    cdr << ros_message->watchdog_timeout_ms;
  }

  // Field name: control_period_ms
  {
    cdr << ros_message->control_period_ms;
  }

  return true;
}

static bool _DCMotorConfig__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _DCMotorConfig__ros_msg_type * ros_message = static_cast<_DCMotorConfig__ros_msg_type *>(untyped_ros_message);
  // Field name: motor_id
  {
    cdr >> ros_message->motor_id;
  }

  // Field name: mode
  {
    cdr >> ros_message->mode;
  }

  // Field name: speed_kp
  {
    cdr >> ros_message->speed_kp;
  }

  // Field name: speed_ki
  {
    cdr >> ros_message->speed_ki;
  }

  // Field name: speed_kd
  {
    cdr >> ros_message->speed_kd;
  }

  // Field name: speed_max_integral
  {
    cdr >> ros_message->speed_max_integral;
  }

  // Field name: speed_max_output
  {
    cdr >> ros_message->speed_max_output;
  }

  // Field name: position_kp
  {
    cdr >> ros_message->position_kp;
  }

  // Field name: position_ki
  {
    cdr >> ros_message->position_ki;
  }

  // Field name: position_kd
  {
    cdr >> ros_message->position_kd;
  }

  // Field name: position_max_integral
  {
    cdr >> ros_message->position_max_integral;
  }

  // Field name: position_max_output
  {
    cdr >> ros_message->position_max_output;
  }

  // Field name: max_speed_rad_s
  {
    cdr >> ros_message->max_speed_rad_s;
  }

  // Field name: max_acceleration_rad_s2
  {
    cdr >> ros_message->max_acceleration_rad_s2;
  }

  // Field name: use_position_limits
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->use_position_limits = tmp ? true : false;
  }

  // Field name: position_limit_min_rad
  {
    cdr >> ros_message->position_limit_min_rad;
  }

  // Field name: position_limit_max_rad
  {
    cdr >> ros_message->position_limit_max_rad;
  }

  // Field name: watchdog_timeout_ms
  {
    cdr >> ros_message->watchdog_timeout_ms;
  }

  // Field name: control_period_ms
  {
    cdr >> ros_message->control_period_ms;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_stm32_mavlink_msgs
size_t get_serialized_size_stm32_mavlink_msgs__msg__DCMotorConfig(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _DCMotorConfig__ros_msg_type * ros_message = static_cast<const _DCMotorConfig__ros_msg_type *>(untyped_ros_message);
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
  // field.name mode
  {
    size_t item_size = sizeof(ros_message->mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed_kp
  {
    size_t item_size = sizeof(ros_message->speed_kp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed_ki
  {
    size_t item_size = sizeof(ros_message->speed_ki);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed_kd
  {
    size_t item_size = sizeof(ros_message->speed_kd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed_max_integral
  {
    size_t item_size = sizeof(ros_message->speed_max_integral);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name speed_max_output
  {
    size_t item_size = sizeof(ros_message->speed_max_output);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name position_kp
  {
    size_t item_size = sizeof(ros_message->position_kp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name position_ki
  {
    size_t item_size = sizeof(ros_message->position_ki);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name position_kd
  {
    size_t item_size = sizeof(ros_message->position_kd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name position_max_integral
  {
    size_t item_size = sizeof(ros_message->position_max_integral);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name position_max_output
  {
    size_t item_size = sizeof(ros_message->position_max_output);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_speed_rad_s
  {
    size_t item_size = sizeof(ros_message->max_speed_rad_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_acceleration_rad_s2
  {
    size_t item_size = sizeof(ros_message->max_acceleration_rad_s2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name use_position_limits
  {
    size_t item_size = sizeof(ros_message->use_position_limits);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name position_limit_min_rad
  {
    size_t item_size = sizeof(ros_message->position_limit_min_rad);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name position_limit_max_rad
  {
    size_t item_size = sizeof(ros_message->position_limit_max_rad);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name watchdog_timeout_ms
  {
    size_t item_size = sizeof(ros_message->watchdog_timeout_ms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name control_period_ms
  {
    size_t item_size = sizeof(ros_message->control_period_ms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _DCMotorConfig__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_stm32_mavlink_msgs__msg__DCMotorConfig(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_stm32_mavlink_msgs
size_t max_serialized_size_stm32_mavlink_msgs__msg__DCMotorConfig(
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
  // member: mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: speed_kp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: speed_ki
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: speed_kd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: speed_max_integral
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: speed_max_output
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: position_kp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: position_ki
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: position_kd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: position_max_integral
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: position_max_output
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: max_speed_rad_s
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: max_acceleration_rad_s2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: use_position_limits
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: position_limit_min_rad
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: position_limit_max_rad
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: watchdog_timeout_ms
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: control_period_ms
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = stm32_mavlink_msgs__msg__DCMotorConfig;
    is_plain =
      (
      offsetof(DataType, control_period_ms) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _DCMotorConfig__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_stm32_mavlink_msgs__msg__DCMotorConfig(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_DCMotorConfig = {
  "stm32_mavlink_msgs::msg",
  "DCMotorConfig",
  _DCMotorConfig__cdr_serialize,
  _DCMotorConfig__cdr_deserialize,
  _DCMotorConfig__get_serialized_size,
  _DCMotorConfig__max_serialized_size
};

static rosidl_message_type_support_t _DCMotorConfig__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_DCMotorConfig,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, stm32_mavlink_msgs, msg, DCMotorConfig)() {
  return &_DCMotorConfig__type_support;
}

#if defined(__cplusplus)
}
#endif
