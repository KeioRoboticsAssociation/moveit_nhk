// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from stm32_mavlink_msgs:srv/ReadRS485Param.idl
// generated code does not contain a copyright notice

#ifndef STM32_MAVLINK_MSGS__SRV__DETAIL__READ_RS485_PARAM__STRUCT_H_
#define STM32_MAVLINK_MSGS__SRV__DETAIL__READ_RS485_PARAM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ReadRS485Param in the package stm32_mavlink_msgs.
typedef struct stm32_mavlink_msgs__srv__ReadRS485Param_Request
{
  /// Motor ID (30-49 for RS485 motors)
  uint8_t motor_id;
  /// Control table address to read
  uint16_t address;
  /// Number of bytes to read (1-64)
  uint8_t length;
} stm32_mavlink_msgs__srv__ReadRS485Param_Request;

// Struct for a sequence of stm32_mavlink_msgs__srv__ReadRS485Param_Request.
typedef struct stm32_mavlink_msgs__srv__ReadRS485Param_Request__Sequence
{
  stm32_mavlink_msgs__srv__ReadRS485Param_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} stm32_mavlink_msgs__srv__ReadRS485Param_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ReadRS485Param in the package stm32_mavlink_msgs.
typedef struct stm32_mavlink_msgs__srv__ReadRS485Param_Response
{
  /// True if read was successful
  bool success;
  /// Read data (up to 64 bytes)
  uint8_t data[64];
  /// Status code (0=success, see error_code_t)
  uint8_t status;
  /// RS485 protocol error code (0=no error)
  uint8_t rs485_error;
  /// Human-readable status message
  rosidl_runtime_c__String message;
} stm32_mavlink_msgs__srv__ReadRS485Param_Response;

// Struct for a sequence of stm32_mavlink_msgs__srv__ReadRS485Param_Response.
typedef struct stm32_mavlink_msgs__srv__ReadRS485Param_Response__Sequence
{
  stm32_mavlink_msgs__srv__ReadRS485Param_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} stm32_mavlink_msgs__srv__ReadRS485Param_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STM32_MAVLINK_MSGS__SRV__DETAIL__READ_RS485_PARAM__STRUCT_H_
