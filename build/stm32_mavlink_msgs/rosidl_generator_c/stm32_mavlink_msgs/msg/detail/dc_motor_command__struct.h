// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from stm32_mavlink_msgs:msg/DCMotorCommand.idl
// generated code does not contain a copyright notice

#ifndef STM32_MAVLINK_MSGS__MSG__DETAIL__DC_MOTOR_COMMAND__STRUCT_H_
#define STM32_MAVLINK_MSGS__MSG__DETAIL__DC_MOTOR_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CONTROL_MODE_POSITION'.
/**
  * Control mode - Determines interpretation of target_value
  * CONTROL_MODE_POSITION (0): Position control using target_value as radians
  *   - Use for precise angular positioning (servo-like behavior)
  *   - PID controller moves motor to target absolute position
  *   - Unit: radians (relative to motor's zero position)
  * CONTROL_MODE_VELOCITY (1): Velocity control using target_value as rad/s
  *   - Use for constant speed applications (fans, pumps, wheels)
  *   - PID controller maintains target rotational speed
  *   - Unit: radians per second (positive = forward, negative = reverse)
  * CONTROL_MODE_CURRENT (2): Current control using target_value as amperes
  *   - Use for torque control or current limiting
  *   - Direct current control for precise force application
  *   - Unit: amperes (positive = forward torque, negative = reverse torque)
  * CONTROL_MODE_DUTY_TO_POSITION (3): Duty cycle control until position reached
  *   - Apply fixed duty cycle until target position is reached
  *   - Combines open-loop duty control with position feedback
  *   - target_value = duty cycle (-1.0 to 1.0), target_position_rad = position target
 */
enum
{
  stm32_mavlink_msgs__msg__DCMotorCommand__CONTROL_MODE_POSITION = 0
};

/// Constant 'CONTROL_MODE_VELOCITY'.
enum
{
  stm32_mavlink_msgs__msg__DCMotorCommand__CONTROL_MODE_VELOCITY = 1
};

/// Constant 'CONTROL_MODE_CURRENT'.
enum
{
  stm32_mavlink_msgs__msg__DCMotorCommand__CONTROL_MODE_CURRENT = 2
};

/// Constant 'CONTROL_MODE_DUTY_TO_POSITION'.
enum
{
  stm32_mavlink_msgs__msg__DCMotorCommand__CONTROL_MODE_DUTY_TO_POSITION = 3
};

/// Struct defined in msg/DCMotorCommand in the package stm32_mavlink_msgs.
/**
  * DC Motor Control Command Message
  * Simple brushed/brushless DC motor control interface
 */
typedef struct stm32_mavlink_msgs__msg__DCMotorCommand
{
  /// Motor identification
  /// Motor ID (10-15 for direct PWM DC motors)
  uint8_t motor_id;
  uint8_t control_mode;
  /// Command value - Interpretation depends on control_mode
  /// Target position (rad), velocity (rad/s), current (A), or duty cycle (-1.0 to 1.0)
  /// See control_mode constants for unit interpretation
  float target_value;
  /// Additional parameter for duty-to-position control mode
  /// Target position for CONTROL_MODE_DUTY_TO_POSITION (ignored for other modes)
  float target_position_rad;
  /// Control flag
  /// Enable/disable motor
  /// false = motor freewheels (no active control)
  /// true = motor applies control based on control_mode and target_value
  bool enabled;
} stm32_mavlink_msgs__msg__DCMotorCommand;

// Struct for a sequence of stm32_mavlink_msgs__msg__DCMotorCommand.
typedef struct stm32_mavlink_msgs__msg__DCMotorCommand__Sequence
{
  stm32_mavlink_msgs__msg__DCMotorCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} stm32_mavlink_msgs__msg__DCMotorCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STM32_MAVLINK_MSGS__MSG__DETAIL__DC_MOTOR_COMMAND__STRUCT_H_
