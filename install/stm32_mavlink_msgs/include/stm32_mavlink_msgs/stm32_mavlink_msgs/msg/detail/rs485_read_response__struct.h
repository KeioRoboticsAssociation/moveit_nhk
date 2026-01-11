// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from stm32_mavlink_msgs:msg/RS485ReadResponse.idl
// generated code does not contain a copyright notice

#ifndef STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_READ_RESPONSE__STRUCT_H_
#define STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_READ_RESPONSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RS485ReadResponse in the package stm32_mavlink_msgs.
/**
  * RS485 Read Response Message (MAVLink ID 12008)
  * Response containing data read from RS485 motor control table
 */
typedef struct stm32_mavlink_msgs__msg__RS485ReadResponse
{
  /// Motor ID (30-49 for RS485 motors)
  uint8_t motor_id;
  /// Control table address that was read
  uint16_t address;
  /// Number of bytes read
  uint8_t length;
  /// Read data (up to 64 bytes, little-endian)
  uint8_t data[64];
  /// Status code (0=success, see error_code_t)
  uint8_t status;
  /// RS485 protocol error code (0=no error)
  uint8_t rs485_error;
} stm32_mavlink_msgs__msg__RS485ReadResponse;

// Struct for a sequence of stm32_mavlink_msgs__msg__RS485ReadResponse.
typedef struct stm32_mavlink_msgs__msg__RS485ReadResponse__Sequence
{
  stm32_mavlink_msgs__msg__RS485ReadResponse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} stm32_mavlink_msgs__msg__RS485ReadResponse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_READ_RESPONSE__STRUCT_H_
