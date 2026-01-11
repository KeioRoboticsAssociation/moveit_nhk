// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from stm32_mavlink_msgs:msg/DCMotorCommand.idl
// generated code does not contain a copyright notice
#include "stm32_mavlink_msgs/msg/detail/dc_motor_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
stm32_mavlink_msgs__msg__DCMotorCommand__init(stm32_mavlink_msgs__msg__DCMotorCommand * msg)
{
  if (!msg) {
    return false;
  }
  // motor_id
  // control_mode
  // target_value
  // target_position_rad
  // enabled
  return true;
}

void
stm32_mavlink_msgs__msg__DCMotorCommand__fini(stm32_mavlink_msgs__msg__DCMotorCommand * msg)
{
  if (!msg) {
    return;
  }
  // motor_id
  // control_mode
  // target_value
  // target_position_rad
  // enabled
}

bool
stm32_mavlink_msgs__msg__DCMotorCommand__are_equal(const stm32_mavlink_msgs__msg__DCMotorCommand * lhs, const stm32_mavlink_msgs__msg__DCMotorCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // motor_id
  if (lhs->motor_id != rhs->motor_id) {
    return false;
  }
  // control_mode
  if (lhs->control_mode != rhs->control_mode) {
    return false;
  }
  // target_value
  if (lhs->target_value != rhs->target_value) {
    return false;
  }
  // target_position_rad
  if (lhs->target_position_rad != rhs->target_position_rad) {
    return false;
  }
  // enabled
  if (lhs->enabled != rhs->enabled) {
    return false;
  }
  return true;
}

bool
stm32_mavlink_msgs__msg__DCMotorCommand__copy(
  const stm32_mavlink_msgs__msg__DCMotorCommand * input,
  stm32_mavlink_msgs__msg__DCMotorCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // motor_id
  output->motor_id = input->motor_id;
  // control_mode
  output->control_mode = input->control_mode;
  // target_value
  output->target_value = input->target_value;
  // target_position_rad
  output->target_position_rad = input->target_position_rad;
  // enabled
  output->enabled = input->enabled;
  return true;
}

stm32_mavlink_msgs__msg__DCMotorCommand *
stm32_mavlink_msgs__msg__DCMotorCommand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stm32_mavlink_msgs__msg__DCMotorCommand * msg = (stm32_mavlink_msgs__msg__DCMotorCommand *)allocator.allocate(sizeof(stm32_mavlink_msgs__msg__DCMotorCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(stm32_mavlink_msgs__msg__DCMotorCommand));
  bool success = stm32_mavlink_msgs__msg__DCMotorCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
stm32_mavlink_msgs__msg__DCMotorCommand__destroy(stm32_mavlink_msgs__msg__DCMotorCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    stm32_mavlink_msgs__msg__DCMotorCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
stm32_mavlink_msgs__msg__DCMotorCommand__Sequence__init(stm32_mavlink_msgs__msg__DCMotorCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stm32_mavlink_msgs__msg__DCMotorCommand * data = NULL;

  if (size) {
    data = (stm32_mavlink_msgs__msg__DCMotorCommand *)allocator.zero_allocate(size, sizeof(stm32_mavlink_msgs__msg__DCMotorCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = stm32_mavlink_msgs__msg__DCMotorCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        stm32_mavlink_msgs__msg__DCMotorCommand__fini(&data[i - 1]);
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
stm32_mavlink_msgs__msg__DCMotorCommand__Sequence__fini(stm32_mavlink_msgs__msg__DCMotorCommand__Sequence * array)
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
      stm32_mavlink_msgs__msg__DCMotorCommand__fini(&array->data[i]);
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

stm32_mavlink_msgs__msg__DCMotorCommand__Sequence *
stm32_mavlink_msgs__msg__DCMotorCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stm32_mavlink_msgs__msg__DCMotorCommand__Sequence * array = (stm32_mavlink_msgs__msg__DCMotorCommand__Sequence *)allocator.allocate(sizeof(stm32_mavlink_msgs__msg__DCMotorCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = stm32_mavlink_msgs__msg__DCMotorCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
stm32_mavlink_msgs__msg__DCMotorCommand__Sequence__destroy(stm32_mavlink_msgs__msg__DCMotorCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    stm32_mavlink_msgs__msg__DCMotorCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
stm32_mavlink_msgs__msg__DCMotorCommand__Sequence__are_equal(const stm32_mavlink_msgs__msg__DCMotorCommand__Sequence * lhs, const stm32_mavlink_msgs__msg__DCMotorCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!stm32_mavlink_msgs__msg__DCMotorCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
stm32_mavlink_msgs__msg__DCMotorCommand__Sequence__copy(
  const stm32_mavlink_msgs__msg__DCMotorCommand__Sequence * input,
  stm32_mavlink_msgs__msg__DCMotorCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(stm32_mavlink_msgs__msg__DCMotorCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    stm32_mavlink_msgs__msg__DCMotorCommand * data =
      (stm32_mavlink_msgs__msg__DCMotorCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!stm32_mavlink_msgs__msg__DCMotorCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          stm32_mavlink_msgs__msg__DCMotorCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!stm32_mavlink_msgs__msg__DCMotorCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
