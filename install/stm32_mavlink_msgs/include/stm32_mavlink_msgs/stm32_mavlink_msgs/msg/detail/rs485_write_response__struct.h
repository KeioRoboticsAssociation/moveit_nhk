// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from stm32_mavlink_msgs:msg/RS485WriteResponse.idl
// generated code does not contain a copyright notice

#ifndef STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_WRITE_RESPONSE__STRUCT_H_
#define STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_WRITE_RESPONSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RS485WriteResponse in the package stm32_mavlink_msgs.
/**
  * RS485 Write Response Message (MAVLink ID 12010)
  * Response confirming write success or failure
 */
typedef struct stm32_mavlink_msgs__msg__RS485WriteResponse
{
  /// Motor ID (30-49 for RS485 motors)
  uint8_t motor_id;
  /// Control table address that was written
  uint16_t address;
  /// Number of bytes written
  uint8_t length;
  /// Status code (0=success, see error_code_t)
  uint8_t status;
  /// RS485 protocol error code (0=no error)
  uint8_t rs485_error;
} stm32_mavlink_msgs__msg__RS485WriteResponse;

// Struct for a sequence of stm32_mavlink_msgs__msg__RS485WriteResponse.
typedef struct stm32_mavlink_msgs__msg__RS485WriteResponse__Sequence
{
  stm32_mavlink_msgs__msg__RS485WriteResponse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} stm32_mavlink_msgs__msg__RS485WriteResponse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_WRITE_RESPONSE__STRUCT_H_
