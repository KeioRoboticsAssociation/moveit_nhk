// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from stm32_mavlink_msgs:msg/DCMotorState.idl
// generated code does not contain a copyright notice

#ifndef STM32_MAVLINK_MSGS__MSG__DETAIL__DC_MOTOR_STATE__STRUCT_H_
#define STM32_MAVLINK_MSGS__MSG__DETAIL__DC_MOTOR_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STATUS_OK'.
/**
  * Status and diagnostics
 */
enum
{
  stm32_mavlink_msgs__msg__DCMotorState__STATUS_OK = 0
};

/// Constant 'STATUS_NOT_INITIALIZED'.
/**
  * Motor not yet calibrated or configured
 */
enum
{
  stm32_mavlink_msgs__msg__DCMotorState__STATUS_NOT_INITIALIZED = 1
};

/// Constant 'STATUS_ERROR'.
/**
  * General error condition
 */
enum
{
  stm32_mavlink_msgs__msg__DCMotorState__STATUS_ERROR = 2
};

/// Constant 'STATUS_OVERHEAT'.
/**
  * Temperature above safe threshold
 */
enum
{
  stm32_mavlink_msgs__msg__DCMotorState__STATUS_OVERHEAT = 3
};

/// Constant 'STATUS_OVERCURRENT'.
/**
  * Current above safe threshold
 */
enum
{
  stm32_mavlink_msgs__msg__DCMotorState__STATUS_OVERCURRENT = 4
};

/// Constant 'STATUS_TIMEOUT'.
/**
  * Communication timeout with motor controller
 */
enum
{
  stm32_mavlink_msgs__msg__DCMotorState__STATUS_TIMEOUT = 5
};

/// Struct defined in msg/DCMotorState in the package stm32_mavlink_msgs.
/**
  * DC Motor State Message
  * Real-time feedback and status information from DC motor
 */
typedef struct stm32_mavlink_msgs__msg__DCMotorState
{
  /// Motor identification
  /// Motor ID (matches DCMotorCommand.motor_id)
  uint8_t motor_id;
  /// Position and motion feedback
  /// Current absolute position in radians
  /// Measured from motor's calibrated zero point
  float position_rad;
  /// Current rotational velocity in radians per second
  /// Positive = forward rotation, negative = reverse
  float velocity_rad_s;
  /// Electrical measurements
  /// Current draw in amperes
  /// Actual current consumption (always positive)
  float current_a;
  /// Motor temperature in Celsius
  /// Used for thermal protection and monitoring
  float temperature_c;
  /// Current motor status (see STATUS_* constants)
  uint8_t status;
  /// Control state
  /// Motor enabled state (matches command)
  /// true = motor is actively controlled
  /// false = motor is freewheeling
  bool enabled;
  /// Control mode and duty cycle feedback (from SERVO_OUTPUT_RAW telemetry)
  /// Current control mode (0=position, 1=velocity, 2=current, 3=duty-to-position)
  uint8_t control_mode;
  /// Current duty cycle (-1.0 to 1.0)
  float current_duty_cycle;
  /// Target duty cycle (-1.0 to 1.0)
  float target_duty_cycle;
  /// Target velocity in rad/s (from LOCAL_POSITION_NED)
  float target_velocity_rad_s;
  /// Timing
  /// Timestamp of the measurement (nanoseconds since epoch)
  /// Used for data synchronization and timeout detection
  uint64_t timestamp;
} stm32_mavlink_msgs__msg__DCMotorState;

// Struct for a sequence of stm32_mavlink_msgs__msg__DCMotorState.
typedef struct stm32_mavlink_msgs__msg__DCMotorState__Sequence
{
  stm32_mavlink_msgs__msg__DCMotorState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} stm32_mavlink_msgs__msg__DCMotorState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STM32_MAVLINK_MSGS__MSG__DETAIL__DC_MOTOR_STATE__STRUCT_H_
