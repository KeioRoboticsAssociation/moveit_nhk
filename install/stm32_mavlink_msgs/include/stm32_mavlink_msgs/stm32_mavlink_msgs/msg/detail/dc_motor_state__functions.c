// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from stm32_mavlink_msgs:msg/DCMotorState.idl
// generated code does not contain a copyright notice
#include "stm32_mavlink_msgs/msg/detail/dc_motor_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
stm32_mavlink_msgs__msg__DCMotorState__init(stm32_mavlink_msgs__msg__DCMotorState * msg)
{
  if (!msg) {
    return false;
  }
  // motor_id
  // position_rad
  // velocity_rad_s
  // current_a
  // temperature_c
  // status
  // enabled
  // control_mode
  // current_duty_cycle
  // target_duty_cycle
  // target_velocity_rad_s
  // timestamp
  return true;
}

void
stm32_mavlink_msgs__msg__DCMotorState__fini(stm32_mavlink_msgs__msg__DCMotorState * msg)
{
  if (!msg) {
    return;
  }
  // motor_id
  // position_rad
  // velocity_rad_s
  // current_a
  // temperature_c
  // status
  // enabled
  // control_mode
  // current_duty_cycle
  // target_duty_cycle
  // target_velocity_rad_s
  // timestamp
}

bool
stm32_mavlink_msgs__msg__DCMotorState__are_equal(const stm32_mavlink_msgs__msg__DCMotorState * lhs, const stm32_mavlink_msgs__msg__DCMotorState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // motor_id
  if (lhs->motor_id != rhs->motor_id) {
    return false;
  }
  // position_rad
  if (lhs->position_rad != rhs->position_rad) {
    return false;
  }
  // velocity_rad_s
  if (lhs->velocity_rad_s != rhs->velocity_rad_s) {
    return false;
  }
  // current_a
  if (lhs->current_a != rhs->current_a) {
    return false;
  }
  // temperature_c
  if (lhs->temperature_c != rhs->temperature_c) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // enabled
  if (lhs->enabled != rhs->enabled) {
    return false;
  }
  // control_mode
  if (lhs->control_mode != rhs->control_mode) {
    return false;
  }
  // current_duty_cycle
  if (lhs->current_duty_cycle != rhs->current_duty_cycle) {
    return false;
  }
  // target_duty_cycle
  if (lhs->target_duty_cycle != rhs->target_duty_cycle) {
    return false;
  }
  // target_velocity_rad_s
  if (lhs->target_velocity_rad_s != rhs->target_velocity_rad_s) {
    return false;
  }
  // timestamp
  if (lhs->timestamp != rhs->timestamp) {
    return false;
  }
  return true;
}

bool
stm32_mavlink_msgs__msg__DCMotorState__copy(
  const stm32_mavlink_msgs__msg__DCMotorState * input,
  stm32_mavlink_msgs__msg__DCMotorState * output)
{
  if (!input || !output) {
    return false;
  }
  // motor_id
  output->motor_id = input->motor_id;
  // position_rad
  output->position_rad = input->position_rad;
  // velocity_rad_s
  output->velocity_rad_s = input->velocity_rad_s;
  // current_a
  output->current_a = input->current_a;
  // temperature_c
  output->temperature_c = input->temperature_c;
  // status
  output->status = input->status;
  // enabled
  output->enabled = input->enabled;
  // control_mode
  output->control_mode = input->control_mode;
  // current_duty_cycle
  output->current_duty_cycle = input->current_duty_cycle;
  // target_duty_cycle
  output->target_duty_cycle = input->target_duty_cycle;
  // target_velocity_rad_s
  output->target_velocity_rad_s = input->target_velocity_rad_s;
  // timestamp
  output->timestamp = input->timestamp;
  return true;
}

stm32_mavlink_msgs__msg__DCMotorState *
stm32_mavlink_msgs__msg__DCMotorState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stm32_mavlink_msgs__msg__DCMotorState * msg = (stm32_mavlink_msgs__msg__DCMotorState *)allocator.allocate(sizeof(stm32_mavlink_msgs__msg__DCMotorState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(stm32_mavlink_msgs__msg__DCMotorState));
  bool success = stm32_mavlink_msgs__msg__DCMotorState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
stm32_mavlink_msgs__msg__DCMotorState__destroy(stm32_mavlink_msgs__msg__DCMotorState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    stm32_mavlink_msgs__msg__DCMotorState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
stm32_mavlink_msgs__msg__DCMotorState__Sequence__init(stm32_mavlink_msgs__msg__DCMotorState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stm32_mavlink_msgs__msg__DCMotorState * data = NULL;

  if (size) {
    data = (stm32_mavlink_msgs__msg__DCMotorState *)allocator.zero_allocate(size, sizeof(stm32_mavlink_msgs__msg__DCMotorState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = stm32_mavlink_msgs__msg__DCMotorState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        stm32_mavlink_msgs__msg__DCMotorState__fini(&data[i - 1]);
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
stm32_mavlink_msgs__msg__DCMotorState__Sequence__fini(stm32_mavlink_msgs__msg__DCMotorState__Sequence * array)
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
      stm32_mavlink_msgs__msg__DCMotorState__fini(&array->data[i]);
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

stm32_mavlink_msgs__msg__DCMotorState__Sequence *
stm32_mavlink_msgs__msg__DCMotorState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stm32_mavlink_msgs__msg__DCMotorState__Sequence * array = (stm32_mavlink_msgs__msg__DCMotorState__Sequence *)allocator.allocate(sizeof(stm32_mavlink_msgs__msg__DCMotorState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = stm32_mavlink_msgs__msg__DCMotorState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
stm32_mavlink_msgs__msg__DCMotorState__Sequence__destroy(stm32_mavlink_msgs__msg__DCMotorState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    stm32_mavlink_msgs__msg__DCMotorState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
stm32_mavlink_msgs__msg__DCMotorState__Sequence__are_equal(const stm32_mavlink_msgs__msg__DCMotorState__Sequence * lhs, const stm32_mavlink_msgs__msg__DCMotorState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!stm32_mavlink_msgs__msg__DCMotorState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
stm32_mavlink_msgs__msg__DCMotorState__Sequence__copy(
  const stm32_mavlink_msgs__msg__DCMotorState__Sequence * input,
  stm32_mavlink_msgs__msg__DCMotorState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(stm32_mavlink_msgs__msg__DCMotorState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    stm32_mavlink_msgs__msg__DCMotorState * data =
      (stm32_mavlink_msgs__msg__DCMotorState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!stm32_mavlink_msgs__msg__DCMotorState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          stm32_mavlink_msgs__msg__DCMotorState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!stm32_mavlink_msgs__msg__DCMotorState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
