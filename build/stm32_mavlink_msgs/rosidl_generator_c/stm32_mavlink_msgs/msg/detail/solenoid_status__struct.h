// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from stm32_mavlink_msgs:msg/SolenoidStatus.idl
// generated code does not contain a copyright notice

#ifndef STM32_MAVLINK_MSGS__MSG__DETAIL__SOLENOID_STATUS__STRUCT_H_
#define STM32_MAVLINK_MSGS__MSG__DETAIL__SOLENOID_STATUS__STRUCT_H_

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

/// Struct defined in msg/SolenoidStatus in the package stm32_mavlink_msgs.
/**
  * Solenoid Status Message
  * Real-time status of solenoid outputs on STM32
 */
typedef struct stm32_mavlink_msgs__msg__SolenoidStatus
{
  /// Header with timestamp
  std_msgs__msg__Header header;
  /// Number of solenoids configured (max 8)
  uint8_t solenoid_count;
  /// Boolean array of output states
  /// false = OFF
  /// true = ON
  bool solenoid_states[8];
  /// STM32 timestamp in milliseconds
  uint32_t timestamp_ms;
} stm32_mavlink_msgs__msg__SolenoidStatus;

// Struct for a sequence of stm32_mavlink_msgs__msg__SolenoidStatus.
typedef struct stm32_mavlink_msgs__msg__SolenoidStatus__Sequence
{
  stm32_mavlink_msgs__msg__SolenoidStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} stm32_mavlink_msgs__msg__SolenoidStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STM32_MAVLINK_MSGS__MSG__DETAIL__SOLENOID_STATUS__STRUCT_H_
