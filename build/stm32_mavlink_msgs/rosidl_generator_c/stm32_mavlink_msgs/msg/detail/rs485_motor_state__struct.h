// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from stm32_mavlink_msgs:msg/RS485MotorState.idl
// generated code does not contain a copyright notice

#ifndef STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_MOTOR_STATE__STRUCT_H_
#define STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_MOTOR_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RS485MotorState in the package stm32_mavlink_msgs.
/**
  * RS485 Motor State Message (IDs 30-49)
  * Telemetry data from RS485-connected motors (e.g., Ikeya MD)
 */
typedef struct stm32_mavlink_msgs__msg__RS485MotorState
{
  /// Motor ID (30-49 for RS485 motors)
  uint8_t motor_id;
  /// RS485 board device ID (DIP switch setting)
  uint8_t device_id;
  /// Motor index on board (0-2 for 3-motor boards)
  uint8_t motor_index;
  /// Control mode (0=position, 1=velocity)
  uint8_t control_mode;
  /// Motor status (0=OK, 1=ERROR, 2=TIMEOUT, 3=NOT_INITIALIZED)
  uint8_t status;
  /// RS485 protocol error code (0=no error)
  uint8_t error_code;
  /// Current position in rotations
  float current_position_rotations;
  /// Current velocity in revolutions per second
  float current_velocity_rps;
  /// Target velocity in revolutions per second
  float target_velocity_rps;
  /// Acceleration setting in rev/s^2
  float acceleration_rps2;
  /// Timestamp in milliseconds
  uint32_t timestamp_ms;
} stm32_mavlink_msgs__msg__RS485MotorState;

// Struct for a sequence of stm32_mavlink_msgs__msg__RS485MotorState.
typedef struct stm32_mavlink_msgs__msg__RS485MotorState__Sequence
{
  stm32_mavlink_msgs__msg__RS485MotorState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} stm32_mavlink_msgs__msg__RS485MotorState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_MOTOR_STATE__STRUCT_H_
