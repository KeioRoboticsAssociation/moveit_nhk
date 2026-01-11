// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from stm32_mavlink_msgs:msg/RS485FlashSaveRequest.idl
// generated code does not contain a copyright notice

#ifndef STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_FLASH_SAVE_REQUEST__STRUCT_H_
#define STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_FLASH_SAVE_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RS485FlashSaveRequest in the package stm32_mavlink_msgs.
/**
  * RS485 Flash Save Request Message (MAVLink ID 12011)
  * Request to save configuration to flash memory
 */
typedef struct stm32_mavlink_msgs__msg__RS485FlashSaveRequest
{
  /// Motor ID (30-49 for RS485 motors)
  uint8_t motor_id;
} stm32_mavlink_msgs__msg__RS485FlashSaveRequest;

// Struct for a sequence of stm32_mavlink_msgs__msg__RS485FlashSaveRequest.
typedef struct stm32_mavlink_msgs__msg__RS485FlashSaveRequest__Sequence
{
  stm32_mavlink_msgs__msg__RS485FlashSaveRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} stm32_mavlink_msgs__msg__RS485FlashSaveRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_FLASH_SAVE_REQUEST__STRUCT_H_
