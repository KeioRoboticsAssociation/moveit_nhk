// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from stm32_mavlink_msgs:msg/SolenoidStatus.idl
// generated code does not contain a copyright notice

#ifndef STM32_MAVLINK_MSGS__MSG__DETAIL__SOLENOID_STATUS__FUNCTIONS_H_
#define STM32_MAVLINK_MSGS__MSG__DETAIL__SOLENOID_STATUS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "stm32_mavlink_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "stm32_mavlink_msgs/msg/detail/solenoid_status__struct.h"

/// Initialize msg/SolenoidStatus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * stm32_mavlink_msgs__msg__SolenoidStatus
 * )) before or use
 * stm32_mavlink_msgs__msg__SolenoidStatus__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_stm32_mavlink_msgs
bool
stm32_mavlink_msgs__msg__SolenoidStatus__init(stm32_mavlink_msgs__msg__SolenoidStatus * msg);

/// Finalize msg/SolenoidStatus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stm32_mavlink_msgs
void
stm32_mavlink_msgs__msg__SolenoidStatus__fini(stm32_mavlink_msgs__msg__SolenoidStatus * msg);

/// Create msg/SolenoidStatus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * stm32_mavlink_msgs__msg__SolenoidStatus__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_stm32_mavlink_msgs
stm32_mavlink_msgs__msg__SolenoidStatus *
stm32_mavlink_msgs__msg__SolenoidStatus__create();

/// Destroy msg/SolenoidStatus message.
/**
 * It calls
 * stm32_mavlink_msgs__msg__SolenoidStatus__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stm32_mavlink_msgs
void
stm32_mavlink_msgs__msg__SolenoidStatus__destroy(stm32_mavlink_msgs__msg__SolenoidStatus * msg);

/// Check for msg/SolenoidStatus message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_stm32_mavlink_msgs
bool
stm32_mavlink_msgs__msg__SolenoidStatus__are_equal(const stm32_mavlink_msgs__msg__SolenoidStatus * lhs, const stm32_mavlink_msgs__msg__SolenoidStatus * rhs);

/// Copy a msg/SolenoidStatus message.
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
ROSIDL_GENERATOR_C_PUBLIC_stm32_mavlink_msgs
bool
stm32_mavlink_msgs__msg__SolenoidStatus__copy(
  const stm32_mavlink_msgs__msg__SolenoidStatus * input,
  stm32_mavlink_msgs__msg__SolenoidStatus * output);

/// Initialize array of msg/SolenoidStatus messages.
/**
 * It allocates the memory for the number of elements and calls
 * stm32_mavlink_msgs__msg__SolenoidStatus__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_stm32_mavlink_msgs
bool
stm32_mavlink_msgs__msg__SolenoidStatus__Sequence__init(stm32_mavlink_msgs__msg__SolenoidStatus__Sequence * array, size_t size);

/// Finalize array of msg/SolenoidStatus messages.
/**
 * It calls
 * stm32_mavlink_msgs__msg__SolenoidStatus__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stm32_mavlink_msgs
void
stm32_mavlink_msgs__msg__SolenoidStatus__Sequence__fini(stm32_mavlink_msgs__msg__SolenoidStatus__Sequence * array);

/// Create array of msg/SolenoidStatus messages.
/**
 * It allocates the memory for the array and calls
 * stm32_mavlink_msgs__msg__SolenoidStatus__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_stm32_mavlink_msgs
stm32_mavlink_msgs__msg__SolenoidStatus__Sequence *
stm32_mavlink_msgs__msg__SolenoidStatus__Sequence__create(size_t size);

/// Destroy array of msg/SolenoidStatus messages.
/**
 * It calls
 * stm32_mavlink_msgs__msg__SolenoidStatus__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stm32_mavlink_msgs
void
stm32_mavlink_msgs__msg__SolenoidStatus__Sequence__destroy(stm32_mavlink_msgs__msg__SolenoidStatus__Sequence * array);

/// Check for msg/SolenoidStatus message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_stm32_mavlink_msgs
bool
stm32_mavlink_msgs__msg__SolenoidStatus__Sequence__are_equal(const stm32_mavlink_msgs__msg__SolenoidStatus__Sequence * lhs, const stm32_mavlink_msgs__msg__SolenoidStatus__Sequence * rhs);

/// Copy an array of msg/SolenoidStatus messages.
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
ROSIDL_GENERATOR_C_PUBLIC_stm32_mavlink_msgs
bool
stm32_mavlink_msgs__msg__SolenoidStatus__Sequence__copy(
  const stm32_mavlink_msgs__msg__SolenoidStatus__Sequence * input,
  stm32_mavlink_msgs__msg__SolenoidStatus__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // STM32_MAVLINK_MSGS__MSG__DETAIL__SOLENOID_STATUS__FUNCTIONS_H_
