// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from stm32_mavlink_msgs:srv/FlashSaveRS485.idl
// generated code does not contain a copyright notice

#ifndef STM32_MAVLINK_MSGS__SRV__DETAIL__FLASH_SAVE_RS485__STRUCT_H_
#define STM32_MAVLINK_MSGS__SRV__DETAIL__FLASH_SAVE_RS485__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/FlashSaveRS485 in the package stm32_mavlink_msgs.
typedef struct stm32_mavlink_msgs__srv__FlashSaveRS485_Request
{
  /// Motor ID (30-49 for RS485 motors)
  uint8_t motor_id;
} stm32_mavlink_msgs__srv__FlashSaveRS485_Request;

// Struct for a sequence of stm32_mavlink_msgs__srv__FlashSaveRS485_Request.
typedef struct stm32_mavlink_msgs__srv__FlashSaveRS485_Request__Sequence
{
  stm32_mavlink_msgs__srv__FlashSaveRS485_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} stm32_mavlink_msgs__srv__FlashSaveRS485_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/FlashSaveRS485 in the package stm32_mavlink_msgs.
typedef struct stm32_mavlink_msgs__srv__FlashSaveRS485_Response
{
  /// True if flash save was successful
  bool success;
  /// MAV_RESULT code (0=accepted, 4=failed)
  uint8_t result;
  /// Error code from result_param2
  uint8_t error_code;
  /// Human-readable status message
  rosidl_runtime_c__String message;
} stm32_mavlink_msgs__srv__FlashSaveRS485_Response;

// Struct for a sequence of stm32_mavlink_msgs__srv__FlashSaveRS485_Response.
typedef struct stm32_mavlink_msgs__srv__FlashSaveRS485_Response__Sequence
{
  stm32_mavlink_msgs__srv__FlashSaveRS485_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} stm32_mavlink_msgs__srv__FlashSaveRS485_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STM32_MAVLINK_MSGS__SRV__DETAIL__FLASH_SAVE_RS485__STRUCT_H_
