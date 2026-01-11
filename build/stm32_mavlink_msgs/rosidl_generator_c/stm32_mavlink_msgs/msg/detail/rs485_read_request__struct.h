// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from stm32_mavlink_msgs:msg/RS485ReadRequest.idl
// generated code does not contain a copyright notice

#ifndef STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_READ_REQUEST__STRUCT_H_
#define STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_READ_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RS485ReadRequest in the package stm32_mavlink_msgs.
/**
  * RS485 Read Request Message (MAVLink ID 12007)
  * Request to read parameters from RS485 motor control table
 */
typedef struct stm32_mavlink_msgs__msg__RS485ReadRequest
{
  /// Motor ID (30-49 for RS485 motors)
  uint8_t motor_id;
  /// Control table address to read
  uint16_t address;
  /// Number of bytes to read (1-64)
  uint8_t length;
} stm32_mavlink_msgs__msg__RS485ReadRequest;

// Struct for a sequence of stm32_mavlink_msgs__msg__RS485ReadRequest.
typedef struct stm32_mavlink_msgs__msg__RS485ReadRequest__Sequence
{
  stm32_mavlink_msgs__msg__RS485ReadRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} stm32_mavlink_msgs__msg__RS485ReadRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_READ_REQUEST__STRUCT_H_
