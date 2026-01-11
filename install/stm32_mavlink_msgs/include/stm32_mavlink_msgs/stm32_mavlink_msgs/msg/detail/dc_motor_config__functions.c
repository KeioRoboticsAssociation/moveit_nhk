// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from stm32_mavlink_msgs:msg/DCMotorConfig.idl
// generated code does not contain a copyright notice
#include "stm32_mavlink_msgs/msg/detail/dc_motor_config__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
stm32_mavlink_msgs__msg__DCMotorConfig__init(stm32_mavlink_msgs__msg__DCMotorConfig * msg)
{
  if (!msg) {
    return false;
  }
  // motor_id
  // mode
  // speed_kp
  // speed_ki
  // speed_kd
  // speed_max_integral
  // speed_max_output
  // position_kp
  // position_ki
  // position_kd
  // position_max_integral
  // position_max_output
  // max_speed_rad_s
  // max_acceleration_rad_s2
  // use_position_limits
  // position_limit_min_rad
  // position_limit_max_rad
  // watchdog_timeout_ms
  // control_period_ms
  return true;
}

void
stm32_mavlink_msgs__msg__DCMotorConfig__fini(stm32_mavlink_msgs__msg__DCMotorConfig * msg)
{
  if (!msg) {
    return;
  }
  // motor_id
  // mode
  // speed_kp
  // speed_ki
  // speed_kd
  // speed_max_integral
  // speed_max_output
  // position_kp
  // position_ki
  // position_kd
  // position_max_integral
  // position_max_output
  // max_speed_rad_s
  // max_acceleration_rad_s2
  // use_position_limits
  // position_limit_min_rad
  // position_limit_max_rad
  // watchdog_timeout_ms
  // control_period_ms
}

bool
stm32_mavlink_msgs__msg__DCMotorConfig__are_equal(const stm32_mavlink_msgs__msg__DCMotorConfig * lhs, const stm32_mavlink_msgs__msg__DCMotorConfig * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // motor_id
  if (lhs->motor_id != rhs->motor_id) {
    return false;
  }
  // mode
  if (lhs->mode != rhs->mode) {
    return false;
  }
  // speed_kp
  if (lhs->speed_kp != rhs->speed_kp) {
    return false;
  }
  // speed_ki
  if (lhs->speed_ki != rhs->speed_ki) {
    return false;
  }
  // speed_kd
  if (lhs->speed_kd != rhs->speed_kd) {
    return false;
  }
  // speed_max_integral
  if (lhs->speed_max_integral != rhs->speed_max_integral) {
    return false;
  }
  // speed_max_output
  if (lhs->speed_max_output != rhs->speed_max_output) {
    return false;
  }
  // position_kp
  if (lhs->position_kp != rhs->position_kp) {
    return false;
  }
  // position_ki
  if (lhs->position_ki != rhs->position_ki) {
    return false;
  }
  // position_kd
  if (lhs->position_kd != rhs->position_kd) {
    return false;
  }
  // position_max_integral
  if (lhs->position_max_integral != rhs->position_max_integral) {
    return false;
  }
  // position_max_output
  if (lhs->position_max_output != rhs->position_max_output) {
    return false;
  }
  // max_speed_rad_s
  if (lhs->max_speed_rad_s != rhs->max_speed_rad_s) {
    return false;
  }
  // max_acceleration_rad_s2
  if (lhs->max_acceleration_rad_s2 != rhs->max_acceleration_rad_s2) {
    return false;
  }
  // use_position_limits
  if (lhs->use_position_limits != rhs->use_position_limits) {
    return false;
  }
  // position_limit_min_rad
  if (lhs->position_limit_min_rad != rhs->position_limit_min_rad) {
    return false;
  }
  // position_limit_max_rad
  if (lhs->position_limit_max_rad != rhs->position_limit_max_rad) {
    return false;
  }
  // watchdog_timeout_ms
  if (lhs->watchdog_timeout_ms != rhs->watchdog_timeout_ms) {
    return false;
  }
  // control_period_ms
  if (lhs->control_period_ms != rhs->control_period_ms) {
    return false;
  }
  return true;
}

bool
stm32_mavlink_msgs__msg__DCMotorConfig__copy(
  const stm32_mavlink_msgs__msg__DCMotorConfig * input,
  stm32_mavlink_msgs__msg__DCMotorConfig * output)
{
  if (!input || !output) {
    return false;
  }
  // motor_id
  output->motor_id = input->motor_id;
  // mode
  output->mode = input->mode;
  // speed_kp
  output->speed_kp = input->speed_kp;
  // speed_ki
  output->speed_ki = input->speed_ki;
  // speed_kd
  output->speed_kd = input->speed_kd;
  // speed_max_integral
  output->speed_max_integral = input->speed_max_integral;
  // speed_max_output
  output->speed_max_output = input->speed_max_output;
  // position_kp
  output->position_kp = input->position_kp;
  // position_ki
  output->position_ki = input->position_ki;
  // position_kd
  output->position_kd = input->position_kd;
  // position_max_integral
  output->position_max_integral = input->position_max_integral;
  // position_max_output
  output->position_max_output = input->position_max_output;
  // max_speed_rad_s
  output->max_speed_rad_s = input->max_speed_rad_s;
  // max_acceleration_rad_s2
  output->max_acceleration_rad_s2 = input->max_acceleration_rad_s2;
  // use_position_limits
  output->use_position_limits = input->use_position_limits;
  // position_limit_min_rad
  output->position_limit_min_rad = input->position_limit_min_rad;
  // position_limit_max_rad
  output->position_limit_max_rad = input->position_limit_max_rad;
  // watchdog_timeout_ms
  output->watchdog_timeout_ms = input->watchdog_timeout_ms;
  // control_period_ms
  output->control_period_ms = input->control_period_ms;
  return true;
}

stm32_mavlink_msgs__msg__DCMotorConfig *
stm32_mavlink_msgs__msg__DCMotorConfig__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stm32_mavlink_msgs__msg__DCMotorConfig * msg = (stm32_mavlink_msgs__msg__DCMotorConfig *)allocator.allocate(sizeof(stm32_mavlink_msgs__msg__DCMotorConfig), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(stm32_mavlink_msgs__msg__DCMotorConfig));
  bool success = stm32_mavlink_msgs__msg__DCMotorConfig__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
stm32_mavlink_msgs__msg__DCMotorConfig__destroy(stm32_mavlink_msgs__msg__DCMotorConfig * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    stm32_mavlink_msgs__msg__DCMotorConfig__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
stm32_mavlink_msgs__msg__DCMotorConfig__Sequence__init(stm32_mavlink_msgs__msg__DCMotorConfig__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stm32_mavlink_msgs__msg__DCMotorConfig * data = NULL;

  if (size) {
    data = (stm32_mavlink_msgs__msg__DCMotorConfig *)allocator.zero_allocate(size, sizeof(stm32_mavlink_msgs__msg__DCMotorConfig), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = stm32_mavlink_msgs__msg__DCMotorConfig__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        stm32_mavlink_msgs__msg__DCMotorConfig__fini(&data[i - 1]);
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
stm32_mavlink_msgs__msg__DCMotorConfig__Sequence__fini(stm32_mavlink_msgs__msg__DCMotorConfig__Sequence * array)
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
      stm32_mavlink_msgs__msg__DCMotorConfig__fini(&array->data[i]);
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

stm32_mavlink_msgs__msg__DCMotorConfig__Sequence *
stm32_mavlink_msgs__msg__DCMotorConfig__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stm32_mavlink_msgs__msg__DCMotorConfig__Sequence * array = (stm32_mavlink_msgs__msg__DCMotorConfig__Sequence *)allocator.allocate(sizeof(stm32_mavlink_msgs__msg__DCMotorConfig__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = stm32_mavlink_msgs__msg__DCMotorConfig__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
stm32_mavlink_msgs__msg__DCMotorConfig__Sequence__destroy(stm32_mavlink_msgs__msg__DCMotorConfig__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    stm32_mavlink_msgs__msg__DCMotorConfig__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
stm32_mavlink_msgs__msg__DCMotorConfig__Sequence__are_equal(const stm32_mavlink_msgs__msg__DCMotorConfig__Sequence * lhs, const stm32_mavlink_msgs__msg__DCMotorConfig__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!stm32_mavlink_msgs__msg__DCMotorConfig__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
stm32_mavlink_msgs__msg__DCMotorConfig__Sequence__copy(
  const stm32_mavlink_msgs__msg__DCMotorConfig__Sequence * input,
  stm32_mavlink_msgs__msg__DCMotorConfig__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(stm32_mavlink_msgs__msg__DCMotorConfig);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    stm32_mavlink_msgs__msg__DCMotorConfig * data =
      (stm32_mavlink_msgs__msg__DCMotorConfig *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!stm32_mavlink_msgs__msg__DCMotorConfig__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          stm32_mavlink_msgs__msg__DCMotorConfig__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!stm32_mavlink_msgs__msg__DCMotorConfig__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
