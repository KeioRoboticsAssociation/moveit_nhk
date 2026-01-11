// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from stm32_mavlink_msgs:msg/WTT12LStatus.idl
// generated code does not contain a copyright notice
#include "stm32_mavlink_msgs/msg/detail/wtt12_l_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
stm32_mavlink_msgs__msg__WTT12LStatus__init(stm32_mavlink_msgs__msg__WTT12LStatus * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    stm32_mavlink_msgs__msg__WTT12LStatus__fini(msg);
    return false;
  }
  // device_count
  // device_states
  // timestamp_ms
  return true;
}

void
stm32_mavlink_msgs__msg__WTT12LStatus__fini(stm32_mavlink_msgs__msg__WTT12LStatus * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // device_count
  // device_states
  // timestamp_ms
}

bool
stm32_mavlink_msgs__msg__WTT12LStatus__are_equal(const stm32_mavlink_msgs__msg__WTT12LStatus * lhs, const stm32_mavlink_msgs__msg__WTT12LStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // device_count
  if (lhs->device_count != rhs->device_count) {
    return false;
  }
  // device_states
  for (size_t i = 0; i < 8; ++i) {
    if (lhs->device_states[i] != rhs->device_states[i]) {
      return false;
    }
  }
  // timestamp_ms
  if (lhs->timestamp_ms != rhs->timestamp_ms) {
    return false;
  }
  return true;
}

bool
stm32_mavlink_msgs__msg__WTT12LStatus__copy(
  const stm32_mavlink_msgs__msg__WTT12LStatus * input,
  stm32_mavlink_msgs__msg__WTT12LStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // device_count
  output->device_count = input->device_count;
  // device_states
  for (size_t i = 0; i < 8; ++i) {
    output->device_states[i] = input->device_states[i];
  }
  // timestamp_ms
  output->timestamp_ms = input->timestamp_ms;
  return true;
}

stm32_mavlink_msgs__msg__WTT12LStatus *
stm32_mavlink_msgs__msg__WTT12LStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stm32_mavlink_msgs__msg__WTT12LStatus * msg = (stm32_mavlink_msgs__msg__WTT12LStatus *)allocator.allocate(sizeof(stm32_mavlink_msgs__msg__WTT12LStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(stm32_mavlink_msgs__msg__WTT12LStatus));
  bool success = stm32_mavlink_msgs__msg__WTT12LStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
stm32_mavlink_msgs__msg__WTT12LStatus__destroy(stm32_mavlink_msgs__msg__WTT12LStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    stm32_mavlink_msgs__msg__WTT12LStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
stm32_mavlink_msgs__msg__WTT12LStatus__Sequence__init(stm32_mavlink_msgs__msg__WTT12LStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stm32_mavlink_msgs__msg__WTT12LStatus * data = NULL;

  if (size) {
    data = (stm32_mavlink_msgs__msg__WTT12LStatus *)allocator.zero_allocate(size, sizeof(stm32_mavlink_msgs__msg__WTT12LStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = stm32_mavlink_msgs__msg__WTT12LStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        stm32_mavlink_msgs__msg__WTT12LStatus__fini(&data[i - 1]);
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
stm32_mavlink_msgs__msg__WTT12LStatus__Sequence__fini(stm32_mavlink_msgs__msg__WTT12LStatus__Sequence * array)
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
      stm32_mavlink_msgs__msg__WTT12LStatus__fini(&array->data[i]);
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

stm32_mavlink_msgs__msg__WTT12LStatus__Sequence *
stm32_mavlink_msgs__msg__WTT12LStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stm32_mavlink_msgs__msg__WTT12LStatus__Sequence * array = (stm32_mavlink_msgs__msg__WTT12LStatus__Sequence *)allocator.allocate(sizeof(stm32_mavlink_msgs__msg__WTT12LStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = stm32_mavlink_msgs__msg__WTT12LStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
stm32_mavlink_msgs__msg__WTT12LStatus__Sequence__destroy(stm32_mavlink_msgs__msg__WTT12LStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    stm32_mavlink_msgs__msg__WTT12LStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
stm32_mavlink_msgs__msg__WTT12LStatus__Sequence__are_equal(const stm32_mavlink_msgs__msg__WTT12LStatus__Sequence * lhs, const stm32_mavlink_msgs__msg__WTT12LStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!stm32_mavlink_msgs__msg__WTT12LStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
stm32_mavlink_msgs__msg__WTT12LStatus__Sequence__copy(
  const stm32_mavlink_msgs__msg__WTT12LStatus__Sequence * input,
  stm32_mavlink_msgs__msg__WTT12LStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(stm32_mavlink_msgs__msg__WTT12LStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    stm32_mavlink_msgs__msg__WTT12LStatus * data =
      (stm32_mavlink_msgs__msg__WTT12LStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!stm32_mavlink_msgs__msg__WTT12LStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          stm32_mavlink_msgs__msg__WTT12LStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!stm32_mavlink_msgs__msg__WTT12LStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
