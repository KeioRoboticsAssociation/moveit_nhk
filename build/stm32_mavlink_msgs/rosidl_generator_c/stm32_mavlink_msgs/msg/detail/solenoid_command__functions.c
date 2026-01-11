// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from stm32_mavlink_msgs:msg/SolenoidCommand.idl
// generated code does not contain a copyright notice
#include "stm32_mavlink_msgs/msg/detail/solenoid_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
stm32_mavlink_msgs__msg__SolenoidCommand__init(stm32_mavlink_msgs__msg__SolenoidCommand * msg)
{
  if (!msg) {
    return false;
  }
  // solenoid_id
  // state
  return true;
}

void
stm32_mavlink_msgs__msg__SolenoidCommand__fini(stm32_mavlink_msgs__msg__SolenoidCommand * msg)
{
  if (!msg) {
    return;
  }
  // solenoid_id
  // state
}

bool
stm32_mavlink_msgs__msg__SolenoidCommand__are_equal(const stm32_mavlink_msgs__msg__SolenoidCommand * lhs, const stm32_mavlink_msgs__msg__SolenoidCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // solenoid_id
  if (lhs->solenoid_id != rhs->solenoid_id) {
    return false;
  }
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  return true;
}

bool
stm32_mavlink_msgs__msg__SolenoidCommand__copy(
  const stm32_mavlink_msgs__msg__SolenoidCommand * input,
  stm32_mavlink_msgs__msg__SolenoidCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // solenoid_id
  output->solenoid_id = input->solenoid_id;
  // state
  output->state = input->state;
  return true;
}

stm32_mavlink_msgs__msg__SolenoidCommand *
stm32_mavlink_msgs__msg__SolenoidCommand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stm32_mavlink_msgs__msg__SolenoidCommand * msg = (stm32_mavlink_msgs__msg__SolenoidCommand *)allocator.allocate(sizeof(stm32_mavlink_msgs__msg__SolenoidCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(stm32_mavlink_msgs__msg__SolenoidCommand));
  bool success = stm32_mavlink_msgs__msg__SolenoidCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
stm32_mavlink_msgs__msg__SolenoidCommand__destroy(stm32_mavlink_msgs__msg__SolenoidCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    stm32_mavlink_msgs__msg__SolenoidCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
stm32_mavlink_msgs__msg__SolenoidCommand__Sequence__init(stm32_mavlink_msgs__msg__SolenoidCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stm32_mavlink_msgs__msg__SolenoidCommand * data = NULL;

  if (size) {
    data = (stm32_mavlink_msgs__msg__SolenoidCommand *)allocator.zero_allocate(size, sizeof(stm32_mavlink_msgs__msg__SolenoidCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = stm32_mavlink_msgs__msg__SolenoidCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        stm32_mavlink_msgs__msg__SolenoidCommand__fini(&data[i - 1]);
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
stm32_mavlink_msgs__msg__SolenoidCommand__Sequence__fini(stm32_mavlink_msgs__msg__SolenoidCommand__Sequence * array)
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
      stm32_mavlink_msgs__msg__SolenoidCommand__fini(&array->data[i]);
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

stm32_mavlink_msgs__msg__SolenoidCommand__Sequence *
stm32_mavlink_msgs__msg__SolenoidCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stm32_mavlink_msgs__msg__SolenoidCommand__Sequence * array = (stm32_mavlink_msgs__msg__SolenoidCommand__Sequence *)allocator.allocate(sizeof(stm32_mavlink_msgs__msg__SolenoidCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = stm32_mavlink_msgs__msg__SolenoidCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
stm32_mavlink_msgs__msg__SolenoidCommand__Sequence__destroy(stm32_mavlink_msgs__msg__SolenoidCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    stm32_mavlink_msgs__msg__SolenoidCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
stm32_mavlink_msgs__msg__SolenoidCommand__Sequence__are_equal(const stm32_mavlink_msgs__msg__SolenoidCommand__Sequence * lhs, const stm32_mavlink_msgs__msg__SolenoidCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!stm32_mavlink_msgs__msg__SolenoidCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
stm32_mavlink_msgs__msg__SolenoidCommand__Sequence__copy(
  const stm32_mavlink_msgs__msg__SolenoidCommand__Sequence * input,
  stm32_mavlink_msgs__msg__SolenoidCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(stm32_mavlink_msgs__msg__SolenoidCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    stm32_mavlink_msgs__msg__SolenoidCommand * data =
      (stm32_mavlink_msgs__msg__SolenoidCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!stm32_mavlink_msgs__msg__SolenoidCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          stm32_mavlink_msgs__msg__SolenoidCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!stm32_mavlink_msgs__msg__SolenoidCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
