// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from stm32_mavlink_msgs:msg/DCMotorConfig.idl
// generated code does not contain a copyright notice

#ifndef STM32_MAVLINK_MSGS__MSG__DETAIL__DC_MOTOR_CONFIG__STRUCT_H_
#define STM32_MAVLINK_MSGS__MSG__DETAIL__DC_MOTOR_CONFIG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/DCMotorConfig in the package stm32_mavlink_msgs.
/**
  * DC Motor Configuration Message
 */
typedef struct stm32_mavlink_msgs__msg__DCMotorConfig
{
  /// Motor ID
  uint8_t motor_id;
  /// Control mode (0: position, 1: velocity, 2: current)
  uint8_t mode;
  /// Speed control PID parameters (inner loop)
  /// Speed proportional gain
  float speed_kp;
  /// Speed integral gain
  float speed_ki;
  /// Speed derivative gain
  float speed_kd;
  /// Max integral value for speed control
  float speed_max_integral;
  /// Max output for speed control
  float speed_max_output;
  /// Position control PID parameters (outer loop)
  /// Position proportional gain
  float position_kp;
  /// Position integral gain
  float position_ki;
  /// Position derivative gain
  float position_kd;
  /// Max integral value for position control
  float position_max_integral;
  /// Max output for position control (max speed rad/s)
  float position_max_output;
  /// Physical limits
  /// Maximum speed in rad/s
  float max_speed_rad_s;
  /// Maximum acceleration in rad/s²
  float max_acceleration_rad_s2;
  /// Enable position limits
  bool use_position_limits;
  /// Minimum position limit in radians
  float position_limit_min_rad;
  /// Maximum position limit in radians
  float position_limit_max_rad;
  /// Safety settings
  /// Watchdog timeout in milliseconds
  uint32_t watchdog_timeout_ms;
  /// Control loop period in milliseconds
  uint32_t control_period_ms;
} stm32_mavlink_msgs__msg__DCMotorConfig;

// Struct for a sequence of stm32_mavlink_msgs__msg__DCMotorConfig.
typedef struct stm32_mavlink_msgs__msg__DCMotorConfig__Sequence
{
  stm32_mavlink_msgs__msg__DCMotorConfig * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} stm32_mavlink_msgs__msg__DCMotorConfig__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STM32_MAVLINK_MSGS__MSG__DETAIL__DC_MOTOR_CONFIG__STRUCT_H_
