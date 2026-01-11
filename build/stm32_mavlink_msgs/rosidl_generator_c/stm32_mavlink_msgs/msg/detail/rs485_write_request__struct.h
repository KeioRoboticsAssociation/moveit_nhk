// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from stm32_mavlink_msgs:msg/RS485WriteRequest.idl
// generated code does not contain a copyright notice

#ifndef STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_WRITE_REQUEST__STRUCT_H_
#define STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_WRITE_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RS485WriteRequest in the package stm32_mavlink_msgs.
/**
  * RS485 Write Request Message (MAVLink ID 12009)
  * Request to write parameters to RS485 motor control table
 */
typedef struct stm32_mavlink_msgs__msg__RS485WriteRequest
{
  /// Motor ID (30-49 for RS485 motors)
  uint8_t motor_id;
  /// Control table address to write
  uint16_t address;
  /// Number of bytes to write (1-64)
  uint8_t length;
  /// Data to write (up to 64 bytes, little-endian)
  uint8_t data[64];
} stm32_mavlink_msgs__msg__RS485WriteRequest;

// Struct for a sequence of stm32_mavlink_msgs__msg__RS485WriteRequest.
typedef struct stm32_mavlink_msgs__msg__RS485WriteRequest__Sequence
{
  stm32_mavlink_msgs__msg__RS485WriteRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} stm32_mavlink_msgs__msg__RS485WriteRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_WRITE_REQUEST__STRUCT_H_
