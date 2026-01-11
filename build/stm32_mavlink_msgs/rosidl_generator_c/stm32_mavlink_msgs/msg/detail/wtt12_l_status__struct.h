// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from stm32_mavlink_msgs:msg/WTT12LStatus.idl
// generated code does not contain a copyright notice

#ifndef STM32_MAVLINK_MSGS__MSG__DETAIL__WTT12_L_STATUS__STRUCT_H_
#define STM32_MAVLINK_MSGS__MSG__DETAIL__WTT12_L_STATUS__STRUCT_H_

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

/// Struct defined in msg/WTT12LStatus in the package stm32_mavlink_msgs.
/**
  * WTT12L Sensor Status Message
  * Real-time status of WTT12L photoelectric sensors
 */
typedef struct stm32_mavlink_msgs__msg__WTT12LStatus
{
  /// Header with timestamp
  std_msgs__msg__Header header;
  /// Number of WTT12L devices configured (max 8)
  uint8_t device_count;
  /// Boolean array of device states
  /// false = not triggered (object not detected)
  /// true = triggered (object detected)
  /// Each element represents one WTT12L device
  bool device_states[8];
  /// STM32 timestamp in milliseconds
  uint32_t timestamp_ms;
} stm32_mavlink_msgs__msg__WTT12LStatus;

// Struct for a sequence of stm32_mavlink_msgs__msg__WTT12LStatus.
typedef struct stm32_mavlink_msgs__msg__WTT12LStatus__Sequence
{
  stm32_mavlink_msgs__msg__WTT12LStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} stm32_mavlink_msgs__msg__WTT12LStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STM32_MAVLINK_MSGS__MSG__DETAIL__WTT12_L_STATUS__STRUCT_H_
