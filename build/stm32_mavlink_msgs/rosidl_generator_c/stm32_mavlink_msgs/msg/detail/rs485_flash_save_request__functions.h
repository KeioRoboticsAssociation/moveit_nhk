// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from stm32_mavlink_msgs:msg/RS485FlashSaveRequest.idl
// generated code does not contain a copyright notice

#ifndef STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_FLASH_SAVE_REQUEST__FUNCTIONS_H_
#define STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_FLASH_SAVE_REQUEST__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "stm32_mavlink_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "stm32_mavlink_msgs/msg/detail/rs485_flash_save_request__struct.h"

/// Initialize msg/RS485FlashSaveRequest message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * stm32_mavlink_msgs__msg__RS485FlashSaveRequest
 * )) before or use
 * stm32_mavlink_msgs__msg__RS485FlashSaveRequest__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_stm32_mavlink_msgs
bool
stm32_mavlink_msgs__msg__RS485FlashSaveRequest__init(stm32_mavlink_msgs__msg__RS485FlashSaveRequest * msg);

/// Finalize msg/RS485FlashSaveRequest message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stm32_mavlink_msgs
void
stm32_mavlink_msgs__msg__RS485FlashSaveRequest__fini(stm32_mavlink_msgs__msg__RS485FlashSaveRequest * msg);

/// Create msg/RS485FlashSaveRequest message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * stm32_mavlink_msgs__msg__RS485FlashSaveRequest__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_stm32_mavlink_msgs
stm32_mavlink_msgs__msg__RS485FlashSaveRequest *
stm32_mavlink_msgs__msg__RS485FlashSaveRequest__create();

/// Destroy msg/RS485FlashSaveRequest message.
/**
 * It calls
 * stm32_mavlink_msgs__msg__RS485FlashSaveRequest__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stm32_mavlink_msgs
void
stm32_mavlink_msgs__msg__RS485FlashSaveRequest__destroy(stm32_mavlink_msgs__msg__RS485FlashSaveRequest * msg);

/// Check for msg/RS485FlashSaveRequest message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_stm32_mavlink_msgs
bool
stm32_mavlink_msgs__msg__RS485FlashSaveRequest__are_equal(const stm32_mavlink_msgs__msg__RS485FlashSaveRequest * lhs, const stm32_mavlink_msgs__msg__RS485FlashSaveRequest * rhs);

/// Copy a msg/RS485FlashSaveRequest message.
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
stm32_mavlink_msgs__msg__RS485FlashSaveRequest__copy(
  const stm32_mavlink_msgs__msg__RS485FlashSaveRequest * input,
  stm32_mavlink_msgs__msg__RS485FlashSaveRequest * output);

/// Initialize array of msg/RS485FlashSaveRequest messages.
/**
 * It allocates the memory for the number of elements and calls
 * stm32_mavlink_msgs__msg__RS485FlashSaveRequest__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_stm32_mavlink_msgs
bool
stm32_mavlink_msgs__msg__RS485FlashSaveRequest__Sequence__init(stm32_mavlink_msgs__msg__RS485FlashSaveRequest__Sequence * array, size_t size);

/// Finalize array of msg/RS485FlashSaveRequest messages.
/**
 * It calls
 * stm32_mavlink_msgs__msg__RS485FlashSaveRequest__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stm32_mavlink_msgs
void
stm32_mavlink_msgs__msg__RS485FlashSaveRequest__Sequence__fini(stm32_mavlink_msgs__msg__RS485FlashSaveRequest__Sequence * array);

/// Create array of msg/RS485FlashSaveRequest messages.
/**
 * It allocates the memory for the array and calls
 * stm32_mavlink_msgs__msg__RS485FlashSaveRequest__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_stm32_mavlink_msgs
stm32_mavlink_msgs__msg__RS485FlashSaveRequest__Sequence *
stm32_mavlink_msgs__msg__RS485FlashSaveRequest__Sequence__create(size_t size);

/// Destroy array of msg/RS485FlashSaveRequest messages.
/**
 * It calls
 * stm32_mavlink_msgs__msg__RS485FlashSaveRequest__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stm32_mavlink_msgs
void
stm32_mavlink_msgs__msg__RS485FlashSaveRequest__Sequence__destroy(stm32_mavlink_msgs__msg__RS485FlashSaveRequest__Sequence * array);

/// Check for msg/RS485FlashSaveRequest message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_stm32_mavlink_msgs
bool
stm32_mavlink_msgs__msg__RS485FlashSaveRequest__Sequence__are_equal(const stm32_mavlink_msgs__msg__RS485FlashSaveRequest__Sequence * lhs, const stm32_mavlink_msgs__msg__RS485FlashSaveRequest__Sequence * rhs);

/// Copy an array of msg/RS485FlashSaveRequest messages.
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
stm32_mavlink_msgs__msg__RS485FlashSaveRequest__Sequence__copy(
  const stm32_mavlink_msgs__msg__RS485FlashSaveRequest__Sequence * input,
  stm32_mavlink_msgs__msg__RS485FlashSaveRequest__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // STM32_MAVLINK_MSGS__MSG__DETAIL__RS485_FLASH_SAVE_REQUEST__FUNCTIONS_H_
