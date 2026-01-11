// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from stm32_mavlink_msgs:srv/GetDCMotorConfig.idl
// generated code does not contain a copyright notice

#ifndef STM32_MAVLINK_MSGS__SRV__DETAIL__GET_DC_MOTOR_CONFIG__STRUCT_H_
#define STM32_MAVLINK_MSGS__SRV__DETAIL__GET_DC_MOTOR_CONFIG__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/GetDCMotorConfig in the package stm32_mavlink_msgs.
typedef struct stm32_mavlink_msgs__srv__GetDCMotorConfig_Request
{
  uint8_t motor_id;
} stm32_mavlink_msgs__srv__GetDCMotorConfig_Request;

// Struct for a sequence of stm32_mavlink_msgs__srv__GetDCMotorConfig_Request.
typedef struct stm32_mavlink_msgs__srv__GetDCMotorConfig_Request__Sequence
{
  stm32_mavlink_msgs__srv__GetDCMotorConfig_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} stm32_mavlink_msgs__srv__GetDCMotorConfig_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'config'
#include "stm32_mavlink_msgs/msg/detail/dc_motor_config__struct.h"
// Member 'message'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/GetDCMotorConfig in the package stm32_mavlink_msgs.
typedef struct stm32_mavlink_msgs__srv__GetDCMotorConfig_Response
{
  bool success;
  stm32_mavlink_msgs__msg__DCMotorConfig config;
  rosidl_runtime_c__String message;
} stm32_mavlink_msgs__srv__GetDCMotorConfig_Response;

// Struct for a sequence of stm32_mavlink_msgs__srv__GetDCMotorConfig_Response.
typedef struct stm32_mavlink_msgs__srv__GetDCMotorConfig_Response__Sequence
{
  stm32_mavlink_msgs__srv__GetDCMotorConfig_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} stm32_mavlink_msgs__srv__GetDCMotorConfig_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // STM32_MAVLINK_MSGS__SRV__DETAIL__GET_DC_MOTOR_CONFIG__STRUCT_H_
