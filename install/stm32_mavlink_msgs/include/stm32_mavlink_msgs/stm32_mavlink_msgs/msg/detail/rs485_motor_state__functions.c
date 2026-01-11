// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from stm32_mavlink_msgs:msg/RS485MotorState.idl
// generated code does not contain a copyright notice
#include "stm32_mavlink_msgs/msg/detail/rs485_motor_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
stm32_mavlink_msgs__msg__RS485MotorState__init(stm32_mavlink_msgs__msg__RS485MotorState * msg)
{
  if (!msg) {
    return false;
  }
  // motor_id
  // device_id
  // motor_index
  // control_mode
  // status
  // error_code
  // current_position_rotations
  // current_velocity_rps
  // target_velocity_rps
  // acceleration_rps2
  // timestamp_ms
  return true;
}

void
stm32_mavlink_msgs__msg__RS485MotorState__fini(stm32_mavlink_msgs__msg__RS485MotorState * msg)
{
  if (!msg) {
    return;
  }
  // motor_id
  // device_id
  // motor_index
  // control_mode
  // status
  // error_code
  // current_position_rotations
  // current_velocity_rps
  // target_velocity_rps
  // acceleration_rps2
  // timestamp_ms
}

bool
stm32_mavlink_msgs__msg__RS485MotorState__are_equal(const stm32_mavlink_msgs__msg__RS485MotorState * lhs, const stm32_mavlink_msgs__msg__RS485MotorState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // motor_id
  if (lhs->motor_id != rhs->motor_id) {
    return false;
  }
  // device_id
  if (lhs->device_id != rhs->device_id) {
    return false;
  }
  // motor_index
  if (lhs->motor_index != rhs->motor_index) {
    return false;
  }
  // control_mode
  if (lhs->control_mode != rhs->control_mode) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // error_code
  if (lhs->error_code != rhs->error_code) {
    return false;
  }
  // current_position_rotations
  if (lhs->current_position_rotations != rhs->current_position_rotations) {
    return false;
  }
  // current_velocity_rps
  if (lhs->current_velocity_rps != rhs->current_velocity_rps) {
    return false;
  }
  // target_velocity_rps
  if (lhs->target_velocity_rps != rhs->target_velocity_rps) {
    return false;
  }
  // acceleration_rps2
  if (lhs->acceleration_rps2 != rhs->acceleration_rps2) {
    return false;
  }
  // timestamp_ms
  if (lhs->timestamp_ms != rhs->timestamp_ms) {
    return false;
  }
  return true;
}

bool
stm32_mavlink_msgs__msg__RS485MotorState__copy(
  const stm32_mavlink_msgs__msg__RS485MotorState * input,
  stm32_mavlink_msgs__msg__RS485MotorState * output)
{
  if (!input || !output) {
    return false;
  }
  // motor_id
  output->motor_id = input->motor_id;
  // device_id
  output->device_id = input->device_id;
  // motor_index
  output->motor_index = input->motor_index;
  // control_mode
  output->control_mode = input->control_mode;
  // status
  output->status = input->status;
  // error_code
  output->error_code = input->error_code;
  // current_position_rotations
  output->current_position_rotations = input->current_position_rotations;
  // current_velocity_rps
  output->current_velocity_rps = input->current_velocity_rps;
  // target_velocity_rps
  output->target_velocity_rps = input->target_velocity_rps;
  // acceleration_rps2
  output->acceleration_rps2 = input->acceleration_rps2;
  // timestamp_ms
  output->timestamp_ms = input->timestamp_ms;
  return true;
}

stm32_mavlink_msgs__msg__RS485MotorState *
stm32_mavlink_msgs__msg__RS485MotorState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stm32_mavlink_msgs__msg__RS485MotorState * msg = (stm32_mavlink_msgs__msg__RS485MotorState *)allocator.allocate(sizeof(stm32_mavlink_msgs__msg__RS485MotorState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(stm32_mavlink_msgs__msg__RS485MotorState));
  bool success = stm32_mavlink_msgs__msg__RS485MotorState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
stm32_mavlink_msgs__msg__RS485MotorState__destroy(stm32_mavlink_msgs__msg__RS485MotorState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    stm32_mavlink_msgs__msg__RS485MotorState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
stm32_mavlink_msgs__msg__RS485MotorState__Sequence__init(stm32_mavlink_msgs__msg__RS485MotorState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stm32_mavlink_msgs__msg__RS485MotorState * data = NULL;

  if (size) {
    data = (stm32_mavlink_msgs__msg__RS485MotorState *)allocator.zero_allocate(size, sizeof(stm32_mavlink_msgs__msg__RS485MotorState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = stm32_mavlink_msgs__msg__RS485MotorState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        stm32_mavlink_msgs__msg__RS485MotorState__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
stm32_mavlink_msgs__msg__RS485MotorState__Sequence__fini(stm32_mavlink_msgs__msg__RS485MotorState__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      stm32_mavlink_msgs__msg__RS485MotorState__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

stm32_mavlink_msgs__msg__RS485MotorState__Sequence *
stm32_mavlink_msgs__msg__RS485MotorState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stm32_mavlink_msgs__msg__RS485MotorState__Sequence * array = (stm32_mavlink_msgs__msg__RS485MotorState__Sequence *)allocator.allocate(sizeof(stm32_mavlink_msgs__msg__RS485MotorState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = stm32_mavlink_msgs__msg__RS485MotorState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
stm32_mavlink_msgs__msg__RS485MotorState__Sequence__destroy(stm32_mavlink_msgs__msg__RS485MotorState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    stm32_mavlink_msgs__msg__RS485MotorState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
stm32_mavlink_msgs__msg__RS485MotorState__Sequence__are_equal(const stm32_mavlink_msgs__msg__RS485MotorState__Sequence * lhs, const stm32_mavlink_msgs__msg__RS485MotorState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!stm32_mavlink_msgs__msg__RS485MotorState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
stm32_mavlink_msgs__msg__RS485MotorState__Sequence__copy(
  const stm32_mavlink_msgs__msg__RS485MotorState__Sequence * input,
  stm32_mavlink_msgs__msg__RS485MotorState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(stm32_mavlink_msgs__msg__RS485MotorState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    stm32_mavlink_msgs__msg__RS485MotorState * data =
      (stm32_mavlink_msgs__msg__RS485MotorState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!stm32_mavlink_msgs__msg__RS485MotorState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          stm32_mavlink_msgs__msg__RS485MotorState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!stm32_mavlink_msgs__msg__RS485MotorState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
