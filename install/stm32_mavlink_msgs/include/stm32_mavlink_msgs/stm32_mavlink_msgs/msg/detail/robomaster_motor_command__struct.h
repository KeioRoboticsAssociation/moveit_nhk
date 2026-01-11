// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from stm32_mavlink_msgs:msg/RobomasterMotorCommand.idl
// generated code does not contain a copyright notice

#ifndef STM32_MAVLINK_MSGS__MSG__DETAIL__ROBOMASTER_MOTOR_COMMAND__STRUCT_H_
#define STM32_MAVLINK_MSGS__MSG__DETAIL__ROBOMASTER_MOTOR_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CONTROL_MODE_OPEN_LOOP'.
/**
  * Control mode - Determines motor control behavior (matches STM32 MAVLink MOTOR_CONTROL_MODE enum)
  * CONTROL_MODE_OPEN_LOOP (0): Open loop PWM/current control using target_current_ma
  *   - Direct motor drive without feedback control
  *   - Use for torque control or when precise current limiting is needed
  *   - Range: -16000 to 16000 mA (approximately -16A to +16A)
  *   - Motor applies specified current regardless of speed or position
  * CONTROL_MODE_SPEED (1): Closed-loop velocity control using target_velocity_rps
  *   - Use for constant speed applications (wheels, conveyors, etc.)
  *   - PID controller maintains target rotational speed
  *   - Unit: rotations per second (positive = forward, negative = reverse)
  * CONTROL_MODE_POSITION (2): Closed-loop position control using target_position_rad
  *   - Use for precise positioning (arms, turrets, actuators)
  *   - PID controller moves motor to target absolute position
  *   - Unit: radians (relative to motor's zero position)
  * CONTROL_MODE_DISABLED (3): Motor disabled state
  *   - Motor is completely disabled and freewheels
  *   - All target values are ignored
  *   - Use for emergency stops or power saving
  * CONTROL_MODE_DUTY_TO_POSITION (4): Apply duty cycle until target position reached
  *   - Hybrid control: applies constant duty cycle (open loop) until position target is met
  *   - Uses target_current_ma as duty cycle percentage (-16000 to +16000 = -100% to +100%)
  *   - Uses target_position_rad as position target to stop at
  *   - Useful for fast positioning without overshoot in systems with known dynamics
 */
enum
{
  stm32_mavlink_msgs__msg__RobomasterMotorCommand__CONTROL_MODE_OPEN_LOOP = 0
};

/// Constant 'CONTROL_MODE_SPEED'.
enum
{
  stm32_mavlink_msgs__msg__RobomasterMotorCommand__CONTROL_MODE_SPEED = 1
};

/// Constant 'CONTROL_MODE_POSITION'.
enum
{
  stm32_mavlink_msgs__msg__RobomasterMotorCommand__CONTROL_MODE_POSITION = 2
};

/// Constant 'CONTROL_MODE_DISABLED'.
enum
{
  stm32_mavlink_msgs__msg__RobomasterMotorCommand__CONTROL_MODE_DISABLED = 3
};

/// Constant 'CONTROL_MODE_DUTY_TO_POSITION'.
enum
{
  stm32_mavlink_msgs__msg__RobomasterMotorCommand__CONTROL_MODE_DUTY_TO_POSITION = 4
};

/// Constant 'CONTROL_MODE_CURRENT'.
/**
  * Legacy aliases for backward compatibility
  * Same as OPEN_LOOP
 */
enum
{
  stm32_mavlink_msgs__msg__RobomasterMotorCommand__CONTROL_MODE_CURRENT = 0
};

/// Constant 'CONTROL_MODE_VELOCITY'.
/**
  * Same as SPEED
 */
enum
{
  stm32_mavlink_msgs__msg__RobomasterMotorCommand__CONTROL_MODE_VELOCITY = 1
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/RobomasterMotorCommand in the package stm32_mavlink_msgs.
/**
  * RoboMaster Motor Command Message
  * Motor control command for individual RoboMaster motors
 */
typedef struct stm32_mavlink_msgs__msg__RobomasterMotorCommand
{
  std_msgs__msg__Header header;
  /// Motor identification
  /// Motor ID (20-29 for RoboMaster motors)
  uint8_t motor_id;
  uint8_t control_mode;
  /// Command values - Usage depends on control_mode
  /// Target current in milliamps (-16000 to 16000)
  /// CONTROL_MODE_OPEN_LOOP: Direct current/torque control
  /// CONTROL_MODE_DUTY_TO_POSITION: Duty cycle (-16000 to +16000 = -100% to +100%)
  int16_t target_current_ma;
  /// Target velocity in rotations per second
  /// CONTROL_MODE_SPEED: Target rotational speed
  /// Positive values = clockwise rotation (when viewed from motor shaft end)
  float target_velocity_rps;
  /// Target position in radians
  /// CONTROL_MODE_POSITION: Target absolute position
  /// CONTROL_MODE_DUTY_TO_POSITION: Position to stop at when using duty cycle
  /// Absolute position relative to motor's calibrated zero point
  float target_position_rad;
  /// Control flags
  /// Enable/disable motor
  /// false = motor freewheels (no active control)
  /// true = motor applies control based on control_mode
  bool enabled;
  /// Reset communication watchdog timer
  /// Set to true to reset timeout counter on STM32 side
  bool reset_watchdog;
  /// Emergency stop this motor immediately
  /// Overrides all other commands, motor stops and disables
  bool emergency_stop;
} stm32_mavlink_msgs__msg__RobomasterMotorCommand;

// Struct for a sequence of stm32_mavlink_msgs__msg__RobomasterMotorCommand.
typedef struct stm32_mavlink_msgs__msg__RobomasterMotorCommand__Sequence
{
  stm32_mavlink_msgs__msg__RobomasterMotorCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} stm32_mavlink_msgs__msg__RobomasterMotorCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STM32_MAVLINK_MSGS__MSG__DETAIL__ROBOMASTER_MOTOR_COMMAND__STRUCT_H_
