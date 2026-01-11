// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from stm32_mavlink_msgs:msg/RS485MotorConfig.idl
// generated code does not contain a copyright notice

#ifndef STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_MOTOR_CONFIG__STRUCT_H_
#define STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_MOTOR_CONFIG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RS485MotorConfig in the package stm32_mavlink_msgs.
/**
  * RS485 Motor Configuration Message
 */
typedef struct stm32_mavlink_msgs__msg__RS485MotorConfig
{
  /// Motor ID (30-49 for RS485 motors)
  uint8_t motor_id;
  /// RS485 board device ID (DIP switch setting)
  uint8_t device_id;
  /// Motor index on board (0-2 for 3-motor boards)
  uint8_t motor_index;
  /// Maximum velocity limit in rev/s
  float max_velocity_rps;
  /// Maximum acceleration in rev/s^2
  float max_acceleration;
  /// Motor enable state
  bool enabled;
} stm32_mavlink_msgs__msg__RS485MotorConfig;

// Struct for a sequence of stm32_mavlink_msgs__msg__RS485MotorConfig.
typedef struct stm32_mavlink_msgs__msg__RS485MotorConfig__Sequence
{
  stm32_mavlink_msgs__msg__RS485MotorConfig * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} stm32_mavlink_msgs__msg__RS485MotorConfig__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_MOTOR_CONFIG__STRUCT_H_
