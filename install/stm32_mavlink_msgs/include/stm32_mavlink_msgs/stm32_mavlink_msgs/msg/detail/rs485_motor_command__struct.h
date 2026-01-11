// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from stm32_mavlink_msgs:msg/RS485MotorCommand.idl
// generated code does not contain a copyright notice

#ifndef STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_MOTOR_COMMAND__STRUCT_H_
#define STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_MOTOR_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RS485MotorCommand in the package stm32_mavlink_msgs.
/**
  * RS485 Motor Command Message (Protocol v2.2)
  * User-friendly command message using physical device addressing
  * Use this with /rs485motor/command topic
 */
typedef struct stm32_mavlink_msgs__msg__RS485MotorCommand
{
  /// Physical motor addressing (user-friendly)
  /// RS485 device ID (1-15, set via DIP switches)
  uint8_t device_id;
  /// Motor index on device (0-2)
  uint8_t motor_index;
  /// Control mode: 0=velocity, 1=position, 2=duty (matches RS485_PROTOCOL_v2-2.md)
  /// 0=velocity, 1=position, 2=duty
  uint8_t control_mode;
  /// Target velocity in rad/s (for velocity mode)
  float target_velocity;
  /// Target position in rad (for position mode)
  float target_position;
  /// Target duty cycle -1.0 to 1.0 (for duty mode)
  float target_duty;
  /// Acceleration in rad/s^2 (reserved for future use)
  float acceleration;
  /// Enable/disable motor
  bool enabled;
} stm32_mavlink_msgs__msg__RS485MotorCommand;

// Struct for a sequence of stm32_mavlink_msgs__msg__RS485MotorCommand.
typedef struct stm32_mavlink_msgs__msg__RS485MotorCommand__Sequence
{
  stm32_mavlink_msgs__msg__RS485MotorCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} stm32_mavlink_msgs__msg__RS485MotorCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_MOTOR_COMMAND__STRUCT_H_
