// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from stm32_mavlink_msgs:srv/ReadRS485Param.idl
// generated code does not contain a copyright notice

#ifndef STM32_MAVLINK_MSGS__SRV__DETAIL__READ_RS485_PARAM__FUNCTIONS_H_
#define STM32_MAVLINK_MSGS__SRV__DETAIL__READ_RS485_PARAM__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "stm32_mavlink_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "stm32_mavlink_msgs/srv/detail/read_rs485_param__struct.h"

/// Initialize srv/ReadRS485Param message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * stm32_mavlink_msgs__srv__ReadRS485Param_Request
 * )) before or use
 * stm32_mavlink_msgs__srv__ReadRS485Param_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_stm32_mavlink_msgs
bool
stm32_mavlink_msgs__srv__ReadRS485Param_Request__init(stm32_mavlink_msgs__srv__ReadRS485Param_Request * msg);

/// Finalize srv/ReadRS485Param message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stm32_mavlink_msgs
void
stm32_mavlink_msgs__srv__ReadRS485Param_Request__fini(stm32_mavlink_msgs__srv__ReadRS485Param_Request * msg);

/// Create srv/ReadRS485Param message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * stm32_mavlink_msgs__srv__ReadRS485Param_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_stm32_mavlink_msgs
stm32_mavlink_msgs__srv__ReadRS485Param_Request *
stm32_mavlink_msgs__srv__ReadRS485Param_Request__create();

/// Destroy srv/ReadRS485Param message.
/**
 * It calls
 * stm32_mavlink_msgs__srv__ReadRS485Param_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stm32_mavlink_msgs
void
stm32_mavlink_msgs__srv__ReadRS485Param_Request__destroy(stm32_mavlink_msgs__srv__ReadRS485Param_Request * msg);

/// Check for srv/ReadRS485Param message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_stm32_mavlink_msgs
bool
stm32_mavlink_msgs__srv__ReadRS485Param_Request__are_equal(const stm32_mavlink_msgs__srv__ReadRS485Param_Request * lhs, const stm32_mavlink_msgs__srv__ReadRS485Param_Request * rhs);

/// Copy a srv/ReadRS485Param message.
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
stm32_mavlink_msgs__srv__ReadRS485Param_Request__copy(
  const stm32_mavlink_msgs__srv__ReadRS485Param_Request * input,
  stm32_mavlink_msgs__srv__ReadRS485Param_Request * output);

/// Initialize array of srv/ReadRS485Param messages.
/**
 * It allocates the memory for the number of elements and calls
 * stm32_mavlink_msgs__srv__ReadRS485Param_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_stm32_mavlink_msgs
bool
stm32_mavlink_msgs__srv__ReadRS485Param_Request__Sequence__init(stm32_mavlink_msgs__srv__ReadRS485Param_Request__Sequence * array, size_t size);

/// Finalize array of srv/ReadRS485Param messages.
/**
 * It calls
 * stm32_mavlink_msgs__srv__ReadRS485Param_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stm32_mavlink_msgs
void
stm32_mavlink_msgs__srv__ReadRS485Param_Request__Sequence__fini(stm32_mavlink_msgs__srv__ReadRS485Param_Request__Sequence * array);

/// Create array of srv/ReadRS485Param messages.
/**
 * It allocates the memory for the array and calls
 * stm32_mavlink_msgs__srv__ReadRS485Param_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_stm32_mavlink_msgs
stm32_mavlink_msgs__srv__ReadRS485Param_Request__Sequence *
stm32_mavlink_msgs__srv__ReadRS485Param_Request__Sequence__create(size_t size);

/// Destroy array of srv/ReadRS485Param messages.
/**
 * It calls
 * stm32_mavlink_msgs__srv__ReadRS485Param_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stm32_mavlink_msgs
void
stm32_mavlink_msgs__srv__ReadRS485Param_Request__Sequence__destroy(stm32_mavlink_msgs__srv__ReadRS485Param_Request__Sequence * array);

/// Check for srv/ReadRS485Param message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_stm32_mavlink_msgs
bool
stm32_mavlink_msgs__srv__ReadRS485Param_Request__Sequence__are_equal(const stm32_mavlink_msgs__srv__ReadRS485Param_Request__Sequence * lhs, const stm32_mavlink_msgs__srv__ReadRS485Param_Request__Sequence * rhs);

/// Copy an array of srv/ReadRS485Param messages.
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
stm32_mavlink_msgs__srv__ReadRS485Param_Request__Sequence__copy(
  const stm32_mavlink_msgs__srv__ReadRS485Param_Request__Sequence * input,
  stm32_mavlink_msgs__srv__ReadRS485Param_Request__Sequence * output);

/// Initialize srv/ReadRS485Param message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * stm32_mavlink_msgs__srv__ReadRS485Param_Response
 * )) before or use
 * stm32_mavlink_msgs__srv__ReadRS485Param_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_stm32_mavlink_msgs
bool
stm32_mavlink_msgs__srv__ReadRS485Param_Response__init(stm32_mavlink_msgs__srv__ReadRS485Param_Response * msg);

/// Finalize srv/ReadRS485Param message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stm32_mavlink_msgs
void
stm32_mavlink_msgs__srv__ReadRS485Param_Response__fini(stm32_mavlink_msgs__srv__ReadRS485Param_Response * msg);

/// Create srv/ReadRS485Param message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * stm32_mavlink_msgs__srv__ReadRS485Param_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_stm32_mavlink_msgs
stm32_mavlink_msgs__srv__ReadRS485Param_Response *
stm32_mavlink_msgs__srv__ReadRS485Param_Response__create();

/// Destroy srv/ReadRS485Param message.
/**
 * It calls
 * stm32_mavlink_msgs__srv__ReadRS485Param_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stm32_mavlink_msgs
void
stm32_mavlink_msgs__srv__ReadRS485Param_Response__destroy(stm32_mavlink_msgs__srv__ReadRS485Param_Response * msg);

/// Check for srv/ReadRS485Param message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_stm32_mavlink_msgs
bool
stm32_mavlink_msgs__srv__ReadRS485Param_Response__are_equal(const stm32_mavlink_msgs__srv__ReadRS485Param_Response * lhs, const stm32_mavlink_msgs__srv__ReadRS485Param_Response * rhs);

/// Copy a srv/ReadRS485Param message.
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
stm32_mavlink_msgs__srv__ReadRS485Param_Response__copy(
  const stm32_mavlink_msgs__srv__ReadRS485Param_Response * input,
  stm32_mavlink_msgs__srv__ReadRS485Param_Response * output);

/// Initialize array of srv/ReadRS485Param messages.
/**
 * It allocates the memory for the number of elements and calls
 * stm32_mavlink_msgs__srv__ReadRS485Param_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_stm32_mavlink_msgs
bool
stm32_mavlink_msgs__srv__ReadRS485Param_Response__Sequence__init(stm32_mavlink_msgs__srv__ReadRS485Param_Response__Sequence * array, size_t size);

/// Finalize array of srv/ReadRS485Param messages.
/**
 * It calls
 * stm32_mavlink_msgs__srv__ReadRS485Param_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stm32_mavlink_msgs
void
stm32_mavlink_msgs__srv__ReadRS485Param_Response__Sequence__fini(stm32_mavlink_msgs__srv__ReadRS485Param_Response__Sequence * array);

/// Create array of srv/ReadRS485Param messages.
/**
 * It allocates the memory for the array and calls
 * stm32_mavlink_msgs__srv__ReadRS485Param_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_stm32_mavlink_msgs
stm32_mavlink_msgs__srv__ReadRS485Param_Response__Sequence *
stm32_mavlink_msgs__srv__ReadRS485Param_Response__Sequence__create(size_t size);

/// Destroy array of srv/ReadRS485Param messages.
/**
 * It calls
 * stm32_mavlink_msgs__srv__ReadRS485Param_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_stm32_mavlink_msgs
void
stm32_mavlink_msgs__srv__ReadRS485Param_Response__Sequence__destroy(stm32_mavlink_msgs__srv__ReadRS485Param_Response__Sequence * array);

/// Check for srv/ReadRS485Param message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_stm32_mavlink_msgs
bool
stm32_mavlink_msgs__srv__ReadRS485Param_Response__Sequence__are_equal(const stm32_mavlink_msgs__srv__ReadRS485Param_Response__Sequence * lhs, const stm32_mavlink_msgs__srv__ReadRS485Param_Response__Sequence * rhs);

/// Copy an array of srv/ReadRS485Param messages.
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
stm32_mavlink_msgs__srv__ReadRS485Param_Response__Sequence__copy(
  const stm32_mavlink_msgs__srv__ReadRS485Param_Response__Sequence * input,
  stm32_mavlink_msgs__srv__ReadRS485Param_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // STM32_MAVLINK_MSGS__SRV__DETAIL__READ_RS485_PARAM__FUNCTIONS_H_
