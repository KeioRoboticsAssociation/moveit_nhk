// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from stm32_mavlink_msgs:msg/RS485MotorCommand.idl
// generated code does not contain a copyright notice
#include "stm32_mavlink_msgs/msg/detail/rs485_motor_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
stm32_mavlink_msgs__msg__RS485MotorCommand__init(stm32_mavlink_msgs__msg__RS485MotorCommand * msg)
{
  if (!msg) {
    return false;
  }
  // device_id
  // motor_index
  // control_mode
  // target_velocity
  // target_position
  // target_duty
  // acceleration
  // enabled
  return true;
}

void
stm32_mavlink_msgs__msg__RS485MotorCommand__fini(stm32_mavlink_msgs__msg__RS485MotorCommand * msg)
{
  if (!msg) {
    return;
  }
  // device_id
  // motor_index
  // control_mode
  // target_velocity
  // target_position
  // target_duty
  // acceleration
  // enabled
}

bool
stm32_mavlink_msgs__msg__RS485MotorCommand__are_equal(const stm32_mavlink_msgs__msg__RS485MotorCommand * lhs, const stm32_mavlink_msgs__msg__RS485MotorCommand * rhs)
{
  if (!lhs || !rhs) {
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
  // target_velocity
  if (lhs->target_velocity != rhs->target_velocity) {
    return false;
  }
  // target_position
  if (lhs->target_position != rhs->target_position) {
    return false;
  }
  // target_duty
  if (lhs->target_duty != rhs->target_duty) {
    return false;
  }
  // acceleration
  if (lhs->acceleration != rhs->acceleration) {
    return false;
  }
  // enabled
  if (lhs->enabled != rhs->enabled) {
    return false;
  }
  return true;
}

bool
stm32_mavlink_msgs__msg__RS485MotorCommand__copy(
  const stm32_mavlink_msgs__msg__RS485MotorCommand * input,
  stm32_mavlink_msgs__msg__RS485MotorCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // device_id
  output->device_id = input->device_id;
  // motor_index
  output->motor_index = input->motor_index;
  // control_mode
  output->control_mode = input->control_mode;
  // target_velocity
  output->target_velocity = input->target_velocity;
  // target_position
  output->target_position = input->target_position;
  // target_duty
  output->target_duty = input->target_duty;
  // acceleration
  output->acceleration = input->acceleration;
  // enabled
  output->enabled = input->enabled;
  return true;
}

stm32_mavlink_msgs__msg__RS485MotorCommand *
stm32_mavlink_msgs__msg__RS485MotorCommand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stm32_mavlink_msgs__msg__RS485MotorCommand * msg = (stm32_mavlink_msgs__msg__RS485MotorCommand *)allocator.allocate(sizeof(stm32_mavlink_msgs__msg__RS485MotorCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(stm32_mavlink_msgs__msg__RS485MotorCommand));
  bool success = stm32_mavlink_msgs__msg__RS485MotorCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
stm32_mavlink_msgs__msg__RS485MotorCommand__destroy(stm32_mavlink_msgs__msg__RS485MotorCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    stm32_mavlink_msgs__msg__RS485MotorCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
stm32_mavlink_msgs__msg__RS485MotorCommand__Sequence__init(stm32_mavlink_msgs__msg__RS485MotorCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stm32_mavlink_msgs__msg__RS485MotorCommand * data = NULL;

  if (size) {
    data = (stm32_mavlink_msgs__msg__RS485MotorCommand *)allocator.zero_allocate(size, sizeof(stm32_mavlink_msgs__msg__RS485MotorCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = stm32_mavlink_msgs__msg__RS485MotorCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        stm32_mavlink_msgs__msg__RS485MotorCommand__fini(&data[i - 1]);
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
stm32_mavlink_msgs__msg__RS485MotorCommand__Sequence__fini(stm32_mavlink_msgs__msg__RS485MotorCommand__Sequence * array)
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
      stm32_mavlink_msgs__msg__RS485MotorCommand__fini(&array->data[i]);
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

stm32_mavlink_msgs__msg__RS485MotorCommand__Sequence *
stm32_mavlink_msgs__msg__RS485MotorCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stm32_mavlink_msgs__msg__RS485MotorCommand__Sequence * array = (stm32_mavlink_msgs__msg__RS485MotorCommand__Sequence *)allocator.allocate(sizeof(stm32_mavlink_msgs__msg__RS485MotorCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = stm32_mavlink_msgs__msg__RS485MotorCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
stm32_mavlink_msgs__msg__RS485MotorCommand__Sequence__destroy(stm32_mavlink_msgs__msg__RS485MotorCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    stm32_mavlink_msgs__msg__RS485MotorCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
stm32_mavlink_msgs__msg__RS485MotorCommand__Sequence__are_equal(const stm32_mavlink_msgs__msg__RS485MotorCommand__Sequence * lhs, const stm32_mavlink_msgs__msg__RS485MotorCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!stm32_mavlink_msgs__msg__RS485MotorCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
stm32_mavlink_msgs__msg__RS485MotorCommand__Sequence__copy(
  const stm32_mavlink_msgs__msg__RS485MotorCommand__Sequence * input,
  stm32_mavlink_msgs__msg__RS485MotorCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(stm32_mavlink_msgs__msg__RS485MotorCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    stm32_mavlink_msgs__msg__RS485MotorCommand * data =
      (stm32_mavlink_msgs__msg__RS485MotorCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!stm32_mavlink_msgs__msg__RS485MotorCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          stm32_mavlink_msgs__msg__RS485MotorCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!stm32_mavlink_msgs__msg__RS485MotorCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
