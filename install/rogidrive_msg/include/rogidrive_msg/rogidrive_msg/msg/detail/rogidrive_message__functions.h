// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rogidrive_msg:msg/RogidriveMessage.idl
// generated code does not contain a copyright notice

#ifndef ROGIDRIVE_MSG__MSG__DETAIL__ROGIDRIVE_MESSAGE__FUNCTIONS_H_
#define ROGIDRIVE_MSG__MSG__DETAIL__ROGIDRIVE_MESSAGE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rogidrive_msg/msg/rosidl_generator_c__visibility_control.h"

#include "rogidrive_msg/msg/detail/rogidrive_message__struct.h"

/// Initialize msg/RogidriveMessage message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rogidrive_msg__msg__RogidriveMessage
 * )) before or use
 * rogidrive_msg__msg__RogidriveMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rogidrive_msg
bool
rogidrive_msg__msg__RogidriveMessage__init(rogidrive_msg__msg__RogidriveMessage * msg);

/// Finalize msg/RogidriveMessage message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rogidrive_msg
void
rogidrive_msg__msg__RogidriveMessage__fini(rogidrive_msg__msg__RogidriveMessage * msg);

/// Create msg/RogidriveMessage message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rogidrive_msg__msg__RogidriveMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rogidrive_msg
rogidrive_msg__msg__RogidriveMessage *
rogidrive_msg__msg__RogidriveMessage__create();

/// Destroy msg/RogidriveMessage message.
/**
 * It calls
 * rogidrive_msg__msg__RogidriveMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rogidrive_msg
void
rogidrive_msg__msg__RogidriveMessage__destroy(rogidrive_msg__msg__RogidriveMessage * msg);

/// Check for msg/RogidriveMessage message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rogidrive_msg
bool
rogidrive_msg__msg__RogidriveMessage__are_equal(const rogidrive_msg__msg__RogidriveMessage * lhs, const rogidrive_msg__msg__RogidriveMessage * rhs);

/// Copy a msg/RogidriveMessage message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rogidrive_msg
bool
rogidrive_msg__msg__RogidriveMessage__copy(
  const rogidrive_msg__msg__RogidriveMessage * input,
  rogidrive_msg__msg__RogidriveMessage * output);

/// Initialize array of msg/RogidriveMessage messages.
/**
 * It allocates the memory for the number of elements and calls
 * rogidrive_msg__msg__RogidriveMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rogidrive_msg
bool
rogidrive_msg__msg__RogidriveMessage__Sequence__init(rogidrive_msg__msg__RogidriveMessage__Sequence * array, size_t size);

/// Finalize array of msg/RogidriveMessage messages.
/**
 * It calls
 * rogidrive_msg__msg__RogidriveMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rogidrive_msg
void
rogidrive_msg__msg__RogidriveMessage__Sequence__fini(rogidrive_msg__msg__RogidriveMessage__Sequence * array);

/// Create array of msg/RogidriveMessage messages.
/**
 * It allocates the memory for the array and calls
 * rogidrive_msg__msg__RogidriveMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rogidrive_msg
rogidrive_msg__msg__RogidriveMessage__Sequence *
rogidrive_msg__msg__RogidriveMessage__Sequence__create(size_t size);

/// Destroy array of msg/RogidriveMessage messages.
/**
 * It calls
 * rogidrive_msg__msg__RogidriveMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rogidrive_msg
void
rogidrive_msg__msg__RogidriveMessage__Sequence__destroy(rogidrive_msg__msg__RogidriveMessage__Sequence * array);

/// Check for msg/RogidriveMessage message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rogidrive_msg
bool
rogidrive_msg__msg__RogidriveMessage__Sequence__are_equal(const rogidrive_msg__msg__RogidriveMessage__Sequence * lhs, const rogidrive_msg__msg__RogidriveMessage__Sequence * rhs);

/// Copy an array of msg/RogidriveMessage messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rogidrive_msg
bool
rogidrive_msg__msg__RogidriveMessage__Sequence__copy(
  const rogidrive_msg__msg__RogidriveMessage__Sequence * input,
  rogidrive_msg__msg__RogidriveMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROGIDRIVE_MSG__MSG__DETAIL__ROGIDRIVE_MESSAGE__FUNCTIONS_H_
