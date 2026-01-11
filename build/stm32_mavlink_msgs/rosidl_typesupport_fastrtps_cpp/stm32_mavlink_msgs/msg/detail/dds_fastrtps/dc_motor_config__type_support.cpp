// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from stm32_mavlink_msgs:msg/DCMotorConfig.idl
// generated code does not contain a copyright notice
#include "stm32_mavlink_msgs/msg/detail/dc_motor_config__rosidl_typesupport_fastrtps_cpp.hpp"
#include "stm32_mavlink_msgs/msg/detail/dc_motor_config__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace stm32_mavlink_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_stm32_mavlink_msgs
cdr_serialize(
  const stm32_mavlink_msgs::msg::DCMotorConfig & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: motor_id
  cdr << ros_message.motor_id;
  // Member: mode
  cdr << ros_message.mode;
  // Member: speed_kp
  cdr << ros_message.speed_kp;
  // Member: speed_ki
  cdr << ros_message.speed_ki;
  // Member: speed_kd
  cdr << ros_message.speed_kd;
  // Member: speed_max_integral
  cdr << ros_message.speed_max_integral;
  // Member: speed_max_output
  cdr << ros_message.speed_max_output;
  // Member: position_kp
  cdr << ros_message.position_kp;
  // Member: position_ki
  cdr << ros_message.position_ki;
  // Member: position_kd
  cdr << ros_message.position_kd;
  // Member: position_max_integral
  cdr << ros_message.position_max_integral;
  // Member: position_max_output
  cdr << ros_message.position_max_output;
  // Member: max_speed_rad_s
  cdr << ros_message.max_speed_rad_s;
  // Member: max_acceleration_rad_s2
  cdr << ros_message.max_acceleration_rad_s2;
  // Member: use_position_limits
  cdr << (ros_message.use_position_limits ? true : false);
  // Member: position_limit_min_rad
  cdr << ros_message.position_limit_min_rad;
  // Member: position_limit_max_rad
  cdr << ros_message.position_limit_max_rad;
  // Member: watchdog_timeout_ms
  cdr << ros_message.watchdog_timeout_ms;
  // Member: control_period_ms
  cdr << ros_message.control_period_ms;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_stm32_mavlink_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  stm32_mavlink_msgs::msg::DCMotorConfig & ros_message)
{
  // Member: motor_id
  cdr >> ros_message.motor_id;

  // Member: mode
  cdr >> ros_message.mode;

  // Member: speed_kp
  cdr >> ros_message.speed_kp;

  // Member: speed_ki
  cdr >> ros_message.speed_ki;

  // Member: speed_kd
  cdr >> ros_message.speed_kd;

  // Member: speed_max_integral
  cdr >> ros_message.speed_max_integral;

  // Member: speed_max_output
  cdr >> ros_message.speed_max_output;

  // Member: position_kp
  cdr >> ros_message.position_kp;

  // Member: position_ki
  cdr >> ros_message.position_ki;

  // Member: position_kd
  cdr >> ros_message.position_kd;

  // Member: position_max_integral
  cdr >> ros_message.position_max_integral;

  // Member: position_max_output
  cdr >> ros_message.position_max_output;

  // Member: max_speed_rad_s
  cdr >> ros_message.max_speed_rad_s;

  // Member: max_acceleration_rad_s2
  cdr >> ros_message.max_acceleration_rad_s2;

  // Member: use_position_limits
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.use_position_limits = tmp ? true : false;
  }

  // Member: position_limit_min_rad
  cdr >> ros_message.position_limit_min_rad;

  // Member: position_limit_max_rad
  cdr >> ros_message.position_limit_max_rad;

  // Member: watchdog_timeout_ms
  cdr >> ros_message.watchdog_timeout_ms;

  // Member: control_period_ms
  cdr >> ros_message.control_period_ms;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_stm32_mavlink_msgs
get_serialized_size(
  const stm32_mavlink_msgs::msg::DCMotorConfig & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: motor_id
  {
    size_t item_size = sizeof(ros_message.motor_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mode
  {
    size_t item_size = sizeof(ros_message.mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed_kp
  {
    size_t item_size = sizeof(ros_message.speed_kp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed_ki
  {
    size_t item_size = sizeof(ros_message.speed_ki);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed_kd
  {
    size_t item_size = sizeof(ros_message.speed_kd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed_max_integral
  {
    size_t item_size = sizeof(ros_message.speed_max_integral);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: speed_max_output
  {
    size_t item_size = sizeof(ros_message.speed_max_output);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: position_kp
  {
    size_t item_size = sizeof(ros_message.position_kp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: position_ki
  {
    size_t item_size = sizeof(ros_message.position_ki);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: position_kd
  {
    size_t item_size = sizeof(ros_message.position_kd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: position_max_integral
  {
    size_t item_size = sizeof(ros_message.position_max_integral);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: position_max_output
  {
    size_t item_size = sizeof(ros_message.position_max_output);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_speed_rad_s
  {
    size_t item_size = sizeof(ros_message.max_speed_rad_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_acceleration_rad_s2
  {
    size_t item_size = sizeof(ros_message.max_acceleration_rad_s2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: use_position_limits
  {
    size_t item_size = sizeof(ros_message.use_position_limits);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: position_limit_min_rad
  {
    size_t item_size = sizeof(ros_message.position_limit_min_rad);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: position_limit_max_rad
  {
    size_t item_size = sizeof(ros_message.position_limit_max_rad);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: watchdog_timeout_ms
  {
    size_t item_size = sizeof(ros_message.watchdog_timeout_ms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: control_period_ms
  {
    size_t item_size = sizeof(ros_message.control_period_ms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_stm32_mavlink_msgs
max_serialized_size_DCMotorConfig(
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


  // Member: motor_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: speed_kp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: speed_ki
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: speed_kd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: speed_max_integral
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: speed_max_output
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: position_kp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: position_ki
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: position_kd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: position_max_integral
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: position_max_output
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: max_speed_rad_s
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: max_acceleration_rad_s2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: use_position_limits
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: position_limit_min_rad
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: position_limit_max_rad
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: watchdog_timeout_ms
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: control_period_ms
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
    using DataType = stm32_mavlink_msgs::msg::DCMotorConfig;
    is_plain =
      (
      offsetof(DataType, control_period_ms) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _DCMotorConfig__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const stm32_mavlink_msgs::msg::DCMotorConfig *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _DCMotorConfig__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<stm32_mavlink_msgs::msg::DCMotorConfig *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _DCMotorConfig__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const stm32_mavlink_msgs::msg::DCMotorConfig *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _DCMotorConfig__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_DCMotorConfig(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _DCMotorConfig__callbacks = {
  "stm32_mavlink_msgs::msg",
  "DCMotorConfig",
  _DCMotorConfig__cdr_serialize,
  _DCMotorConfig__cdr_deserialize,
  _DCMotorConfig__get_serialized_size,
  _DCMotorConfig__max_serialized_size
};

static rosidl_message_type_support_t _DCMotorConfig__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_DCMotorConfig__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace stm32_mavlink_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_stm32_mavlink_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<stm32_mavlink_msgs::msg::DCMotorConfig>()
{
  return &stm32_mavlink_msgs::msg::typesupport_fastrtps_cpp::_DCMotorConfig__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, stm32_mavlink_msgs, msg, DCMotorConfig)() {
  return &stm32_mavlink_msgs::msg::typesupport_fastrtps_cpp::_DCMotorConfig__handle;
}

#ifdef __cplusplus
}
#endif
