// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from stm32_mavlink_msgs:msg/RS485MotorState.idl
// generated code does not contain a copyright notice
#include "stm32_mavlink_msgs/msg/detail/rs485_motor_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "stm32_mavlink_msgs/msg/detail/rs485_motor_state__struct.hpp"

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
  const stm32_mavlink_msgs::msg::RS485MotorState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: motor_id
  cdr << ros_message.motor_id;
  // Member: device_id
  cdr << ros_message.device_id;
  // Member: motor_index
  cdr << ros_message.motor_index;
  // Member: control_mode
  cdr << ros_message.control_mode;
  // Member: status
  cdr << ros_message.status;
  // Member: error_code
  cdr << ros_message.error_code;
  // Member: current_position_rotations
  cdr << ros_message.current_position_rotations;
  // Member: current_velocity_rps
  cdr << ros_message.current_velocity_rps;
  // Member: target_velocity_rps
  cdr << ros_message.target_velocity_rps;
  // Member: acceleration_rps2
  cdr << ros_message.acceleration_rps2;
  // Member: timestamp_ms
  cdr << ros_message.timestamp_ms;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_stm32_mavlink_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  stm32_mavlink_msgs::msg::RS485MotorState & ros_message)
{
  // Member: motor_id
  cdr >> ros_message.motor_id;

  // Member: device_id
  cdr >> ros_message.device_id;

  // Member: motor_index
  cdr >> ros_message.motor_index;

  // Member: control_mode
  cdr >> ros_message.control_mode;

  // Member: status
  cdr >> ros_message.status;

  // Member: error_code
  cdr >> ros_message.error_code;

  // Member: current_position_rotations
  cdr >> ros_message.current_position_rotations;

  // Member: current_velocity_rps
  cdr >> ros_message.current_velocity_rps;

  // Member: target_velocity_rps
  cdr >> ros_message.target_velocity_rps;

  // Member: acceleration_rps2
  cdr >> ros_message.acceleration_rps2;

  // Member: timestamp_ms
  cdr >> ros_message.timestamp_ms;

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_stm32_mavlink_msgs
get_serialized_size(
  const stm32_mavlink_msgs::msg::RS485MotorState & ros_message,
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
  // Member: device_id
  {
    size_t item_size = sizeof(ros_message.device_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: motor_index
  {
    size_t item_size = sizeof(ros_message.motor_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: control_mode
  {
    size_t item_size = sizeof(ros_message.control_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: status
  {
    size_t item_size = sizeof(ros_message.status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: error_code
  {
    size_t item_size = sizeof(ros_message.error_code);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: current_position_rotations
  {
    size_t item_size = sizeof(ros_message.current_position_rotations);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: current_velocity_rps
  {
    size_t item_size = sizeof(ros_message.current_velocity_rps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: target_velocity_rps
  {
    size_t item_size = sizeof(ros_message.target_velocity_rps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: acceleration_rps2
  {
    size_t item_size = sizeof(ros_message.acceleration_rps2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: timestamp_ms
  {
    size_t item_size = sizeof(ros_message.timestamp_ms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_stm32_mavlink_msgs
max_serialized_size_RS485MotorState(
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

  // Member: device_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: motor_index
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: control_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: status
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: error_code
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: current_position_rotations
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: current_velocity_rps
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: target_velocity_rps
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: acceleration_rps2
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: timestamp_ms
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
    using DataType = stm32_mavlink_msgs::msg::RS485MotorState;
    is_plain =
      (
      offsetof(DataType, timestamp_ms) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _RS485MotorState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const stm32_mavlink_msgs::msg::RS485MotorState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RS485MotorState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<stm32_mavlink_msgs::msg::RS485MotorState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RS485MotorState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const stm32_mavlink_msgs::msg::RS485MotorState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RS485MotorState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_RS485MotorState(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _RS485MotorState__callbacks = {
  "stm32_mavlink_msgs::msg",
  "RS485MotorState",
  _RS485MotorState__cdr_serialize,
  _RS485MotorState__cdr_deserialize,
  _RS485MotorState__get_serialized_size,
  _RS485MotorState__max_serialized_size
};

static rosidl_message_type_support_t _RS485MotorState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RS485MotorState__callbacks,
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
get_message_type_support_handle<stm32_mavlink_msgs::msg::RS485MotorState>()
{
  return &stm32_mavlink_msgs::msg::typesupport_fastrtps_cpp::_RS485MotorState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, stm32_mavlink_msgs, msg, RS485MotorState)() {
  return &stm32_mavlink_msgs::msg::typesupport_fastrtps_cpp::_RS485MotorState__handle;
}

#ifdef __cplusplus
}
#endif
