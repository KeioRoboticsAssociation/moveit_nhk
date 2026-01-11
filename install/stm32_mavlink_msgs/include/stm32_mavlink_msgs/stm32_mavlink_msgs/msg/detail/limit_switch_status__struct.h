// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from stm32_mavlink_msgs:msg/LimitSwitchStatus.idl
// generated code does not contain a copyright notice

#ifndef STM32_MAVLINK_MSGS__MSG__DETAIL__LIMIT_SWITCH_STATUS__STRUCT_H_
#define STM32_MAVLINK_MSGS__MSG__DETAIL__LIMIT_SWITCH_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/LimitSwitchStatus in the package stm32_mavlink_msgs.
/**
  * Limit Switch Status Message
  * Real-time status of limit switches on STM32
 */
typedef struct stm32_mavlink_msgs__msg__LimitSwitchStatus
{
  /// Header with timestamp
  std_msgs__msg__Header header;
  /// Number of limit switches (always 16)
  uint8_t switch_count;
  /// Boolean array of switch states
  /// false = not triggered (LOW)
  /// true = triggered (HIGH)
  bool switch_states[16];
  /// STM32 timestamp in milliseconds
  uint32_t timestamp_ms;
} stm32_mavlink_msgs__msg__LimitSwitchStatus;

// Struct for a sequence of stm32_mavlink_msgs__msg__LimitSwitchStatus.
typedef struct stm32_mavlink_msgs__msg__LimitSwitchStatus__Sequence
{
  stm32_mavlink_msgs__msg__LimitSwitchStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} stm32_mavlink_msgs__msg__LimitSwitchStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STM32_MAVLINK_MSGS__MSG__DETAIL__LIMIT_SWITCH_STATUS__STRUCT_H_
