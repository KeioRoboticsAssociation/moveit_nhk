// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from stm32_mavlink_msgs:msg/DCMotorCommand.idl
// generated code does not contain a copyright notice

#ifndef STM32_MAVLINK_MSGS__MSG__DETAIL__DC_MOTOR_COMMAND__FUNCTIONS_H_
#define STM32_MAVLINK_MSGS__MSG__DETAIL__DC_MOTOR_COMMAND__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "stm32_mavlink_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "stm32_mavlink_msgs/msg/detail/dc_motor_command__struct.h"

/// Initialize msg/DCMotorCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * stm32_mavlink_msgs__msg__DCMotorCommand
 * )) before or use
 * stm32_mavlink_msgs__msg__DCMotorCommand__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_stm32_mavlink_msgs
bool
stm32_mavlink_msgs__msg__DCMotorCommand__init(stm32_mavlink_msgs__msg__DCMotorCommand * msg);

/// Finalize msg/DCMotorCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stm32_mavlink_msgs
void
stm32_mavlink_msgs__msg__DCMotorCommand__fini(stm32_mavlink_msgs__msg__DCMotorCommand * msg);

/// Create msg/DCMotorCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * stm32_mavlink_msgs__msg__DCMotorCommand__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_stm32_mavlink_msgs
stm32_mavlink_msgs__msg__DCMotorCommand *
stm32_mavlink_msgs__msg__DCMotorCommand__create();

/// Destroy msg/DCMotorCommand message.
/**
 * It calls
 * stm32_mavlink_msgs__msg__DCMotorCommand__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stm32_mavlink_msgs
void
stm32_mavlink_msgs__msg__DCMotorCommand__destroy(stm32_mavlink_msgs__msg__DCMotorCommand * msg);

/// Check for msg/DCMotorCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_stm32_mavlink_msgs
bool
stm32_mavlink_msgs__msg__DCMotorCommand__are_equal(const stm32_mavlink_msgs__msg__DCMotorCommand * lhs, const stm32_mavlink_msgs__msg__DCMotorCommand * rhs);

/// Copy a msg/DCMotorCommand message.
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
stm32_mavlink_msgs__msg__DCMotorCommand__copy(
  const stm32_mavlink_msgs__msg__DCMotorCommand * input,
  stm32_mavlink_msgs__msg__DCMotorCommand * output);

/// Initialize array of msg/DCMotorCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * stm32_mavlink_msgs__msg__DCMotorCommand__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_stm32_mavlink_msgs
bool
stm32_mavlink_msgs__msg__DCMotorCommand__Sequence__init(stm32_mavlink_msgs__msg__DCMotorCommand__Sequence * array, size_t size);

/// Finalize array of msg/DCMotorCommand messages.
/**
 * It calls
 * stm32_mavlink_msgs__msg__DCMotorCommand__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stm32_mavlink_msgs
void
stm32_mavlink_msgs__msg__DCMotorCommand__Sequence__fini(stm32_mavlink_msgs__msg__DCMotorCommand__Sequence * array);

/// Create array of msg/DCMotorCommand messages.
/**
 * It allocates the memory for the array and calls
 * stm32_mavlink_msgs__msg__DCMotorCommand__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_stm32_mavlink_msgs
stm32_mavlink_msgs__msg__DCMotorCommand__Sequence *
stm32_mavlink_msgs__msg__DCMotorCommand__Sequence__create(size_t size);

/// Destroy array of msg/DCMotorCommand messages.
/**
 * It calls
 * stm32_mavlink_msgs__msg__DCMotorCommand__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stm32_mavlink_msgs
void
stm32_mavlink_msgs__msg__DCMotorCommand__Sequence__destroy(stm32_mavlink_msgs__msg__DCMotorCommand__Sequence * array);

/// Check for msg/DCMotorCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_stm32_mavlink_msgs
bool
stm32_mavlink_msgs__msg__DCMotorCommand__Sequence__are_equal(const stm32_mavlink_msgs__msg__DCMotorCommand__Sequence * lhs, const stm32_mavlink_msgs__msg__DCMotorCommand__Sequence * rhs);

/// Copy an array of msg/DCMotorCommand messages.
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
stm32_mavlink_msgs__msg__DCMotorCommand__Sequence__copy(
  const stm32_mavlink_msgs__msg__DCMotorCommand__Sequence * input,
  stm32_mavlink_msgs__msg__DCMotorCommand__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // STM32_MAVLINK_MSGS__MSG__DETAIL__DC_MOTOR_COMMAND__FUNCTIONS_H_
