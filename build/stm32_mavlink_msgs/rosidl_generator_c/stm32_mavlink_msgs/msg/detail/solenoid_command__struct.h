// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from stm32_mavlink_msgs:msg/SolenoidCommand.idl
// generated code does not contain a copyright notice

#ifndef STM32_MAVLINK_MSGS__MSG__DETAIL__SOLENOID_COMMAND__STRUCT_H_
#define STM32_MAVLINK_MSGS__MSG__DETAIL__SOLENOID_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SolenoidCommand in the package stm32_mavlink_msgs.
/**
  * Solenoid Command Message
  * Command to control solenoid output state
 */
typedef struct stm32_mavlink_msgs__msg__SolenoidCommand
{
  /// Solenoid ID (125-130)
  uint8_t solenoid_id;
  /// Output state (false=OFF, true=ON)
  bool state;
} stm32_mavlink_msgs__msg__SolenoidCommand;

// Struct for a sequence of stm32_mavlink_msgs__msg__SolenoidCommand.
typedef struct stm32_mavlink_msgs__msg__SolenoidCommand__Sequence
{
  stm32_mavlink_msgs__msg__SolenoidCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} stm32_mavlink_msgs__msg__SolenoidCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STM32_MAVLINK_MSGS__MSG__DETAIL__SOLENOID_COMMAND__STRUCT_H_
