// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rogidrive_msg:msg/RogidriveMultiArray.idl
// generated code does not contain a copyright notice

#ifndef ROGIDRIVE_MSG__MSG__DETAIL__ROGIDRIVE_MULTI_ARRAY__FUNCTIONS_H_
#define ROGIDRIVE_MSG__MSG__DETAIL__ROGIDRIVE_MULTI_ARRAY__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rogidrive_msg/msg/rosidl_generator_c__visibility_control.h"

#include "rogidrive_msg/msg/detail/rogidrive_multi_array__struct.h"

/// Initialize msg/RogidriveMultiArray message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rogidrive_msg__msg__RogidriveMultiArray
 * )) before or use
 * rogidrive_msg__msg__RogidriveMultiArray__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rogidrive_msg
bool
rogidrive_msg__msg__RogidriveMultiArray__init(rogidrive_msg__msg__RogidriveMultiArray * msg);

/// Finalize msg/RogidriveMultiArray message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rogidrive_msg
void
rogidrive_msg__msg__RogidriveMultiArray__fini(rogidrive_msg__msg__RogidriveMultiArray * msg);

/// Create msg/RogidriveMultiArray message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rogidrive_msg__msg__RogidriveMultiArray__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rogidrive_msg
rogidrive_msg__msg__RogidriveMultiArray *
rogidrive_msg__msg__RogidriveMultiArray__create();

/// Destroy msg/RogidriveMultiArray message.
/**
 * It calls
 * rogidrive_msg__msg__RogidriveMultiArray__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rogidrive_msg
void
rogidrive_msg__msg__RogidriveMultiArray__destroy(rogidrive_msg__msg__RogidriveMultiArray * msg);

/// Check for msg/RogidriveMultiArray message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rogidrive_msg
bool
rogidrive_msg__msg__RogidriveMultiArray__are_equal(const rogidrive_msg__msg__RogidriveMultiArray * lhs, const rogidrive_msg__msg__RogidriveMultiArray * rhs);

/// Copy a msg/RogidriveMultiArray message.
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
rogidrive_msg__msg__RogidriveMultiArray__copy(
  const rogidrive_msg__msg__RogidriveMultiArray * input,
  rogidrive_msg__msg__RogidriveMultiArray * output);

/// Initialize array of msg/RogidriveMultiArray messages.
/**
 * It allocates the memory for the number of elements and calls
 * rogidrive_msg__msg__RogidriveMultiArray__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rogidrive_msg
bool
rogidrive_msg__msg__RogidriveMultiArray__Sequence__init(rogidrive_msg__msg__RogidriveMultiArray__Sequence * array, size_t size);

/// Finalize array of msg/RogidriveMultiArray messages.
/**
 * It calls
 * rogidrive_msg__msg__RogidriveMultiArray__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rogidrive_msg
void
rogidrive_msg__msg__RogidriveMultiArray__Sequence__fini(rogidrive_msg__msg__RogidriveMultiArray__Sequence * array);

/// Create array of msg/RogidriveMultiArray messages.
/**
 * It allocates the memory for the array and calls
 * rogidrive_msg__msg__RogidriveMultiArray__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rogidrive_msg
rogidrive_msg__msg__RogidriveMultiArray__Sequence *
rogidrive_msg__msg__RogidriveMultiArray__Sequence__create(size_t size);

/// Destroy array of msg/RogidriveMultiArray messages.
/**
 * It calls
 * rogidrive_msg__msg__RogidriveMultiArray__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rogidrive_msg
void
rogidrive_msg__msg__RogidriveMultiArray__Sequence__destroy(rogidrive_msg__msg__RogidriveMultiArray__Sequence * array);

/// Check for msg/RogidriveMultiArray message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rogidrive_msg
bool
rogidrive_msg__msg__RogidriveMultiArray__Sequence__are_equal(const rogidrive_msg__msg__RogidriveMultiArray__Sequence * lhs, const rogidrive_msg__msg__RogidriveMultiArray__Sequence * rhs);

/// Copy an array of msg/RogidriveMultiArray messages.
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
rogidrive_msg__msg__RogidriveMultiArray__Sequence__copy(
  const rogidrive_msg__msg__RogidriveMultiArray__Sequence * input,
  rogidrive_msg__msg__RogidriveMultiArray__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ROGIDRIVE_MSG__MSG__DETAIL__ROGIDRIVE_MULTI_ARRAY__FUNCTIONS_H_
