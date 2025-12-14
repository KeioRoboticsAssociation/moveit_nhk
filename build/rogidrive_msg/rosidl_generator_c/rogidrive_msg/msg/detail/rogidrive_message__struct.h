// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rogidrive_msg:msg/RogidriveMessage.idl
// generated code does not contain a copyright notice

#ifndef ROGIDRIVE_MSG__MSG__DETAIL__ROGIDRIVE_MESSAGE__STRUCT_H_
#define ROGIDRIVE_MSG__MSG__DETAIL__ROGIDRIVE_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TORQUE_CONTROL'.
enum
{
  rogidrive_msg__msg__RogidriveMessage__TORQUE_CONTROL = 1
};

/// Constant 'VELOCITY_CONTROL'.
enum
{
  rogidrive_msg__msg__RogidriveMessage__VELOCITY_CONTROL = 2
};

/// Constant 'POSITION_CONTROL'.
enum
{
  rogidrive_msg__msg__RogidriveMessage__POSITION_CONTROL = 3
};

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/RogidriveMessage in the package rogidrive_msg.
typedef struct rogidrive_msg__msg__RogidriveMessage
{
  rosidl_runtime_c__String name;
  int8_t mode;
  float vel;
  float pos;
  float current;
} rogidrive_msg__msg__RogidriveMessage;

// Struct for a sequence of rogidrive_msg__msg__RogidriveMessage.
typedef struct rogidrive_msg__msg__RogidriveMessage__Sequence
{
  rogidrive_msg__msg__RogidriveMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rogidrive_msg__msg__RogidriveMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROGIDRIVE_MSG__MSG__DETAIL__ROGIDRIVE_MESSAGE__STRUCT_H_
