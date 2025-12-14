// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rogidrive_msg:msg/RogidriveMultiArray.idl
// generated code does not contain a copyright notice

#ifndef ROGIDRIVE_MSG__MSG__DETAIL__ROGIDRIVE_MULTI_ARRAY__STRUCT_H_
#define ROGIDRIVE_MSG__MSG__DETAIL__ROGIDRIVE_MULTI_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'data'
#include "rogidrive_msg/msg/detail/rogidrive_message__struct.h"

/// Struct defined in msg/RogidriveMultiArray in the package rogidrive_msg.
typedef struct rogidrive_msg__msg__RogidriveMultiArray
{
  rogidrive_msg__msg__RogidriveMessage__Sequence data;
} rogidrive_msg__msg__RogidriveMultiArray;

// Struct for a sequence of rogidrive_msg__msg__RogidriveMultiArray.
typedef struct rogidrive_msg__msg__RogidriveMultiArray__Sequence
{
  rogidrive_msg__msg__RogidriveMultiArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rogidrive_msg__msg__RogidriveMultiArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROGIDRIVE_MSG__MSG__DETAIL__ROGIDRIVE_MULTI_ARRAY__STRUCT_H_
