// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from stm32_mavlink_msgs:msg/RS485FlashSaveRequest.idl
// generated code does not contain a copyright notice
#include "stm32_mavlink_msgs/msg/detail/rs485_flash_save_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
stm32_mavlink_msgs__msg__RS485FlashSaveRequest__init(stm32_mavlink_msgs__msg__RS485FlashSaveRequest * msg)
{
  if (!msg) {
    return false;
  }
  // motor_id
  return true;
}

void
stm32_mavlink_msgs__msg__RS485FlashSaveRequest__fini(stm32_mavlink_msgs__msg__RS485FlashSaveRequest * msg)
{
  if (!msg) {
    return;
  }
  // motor_id
}

bool
stm32_mavlink_msgs__msg__RS485FlashSaveRequest__are_equal(const stm32_mavlink_msgs__msg__RS485FlashSaveRequest * lhs, const stm32_mavlink_msgs__msg__RS485FlashSaveRequest * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // motor_id
  if (lhs->motor_id != rhs->motor_id) {
    return false;
  }
  return true;
}

bool
stm32_mavlink_msgs__msg__RS485FlashSaveRequest__copy(
  const stm32_mavlink_msgs__msg__RS485FlashSaveRequest * input,
  stm32_mavlink_msgs__msg__RS485FlashSaveRequest * output)
{
  if (!input || !output) {
    return false;
  }
  // motor_id
  output->motor_id = input->motor_id;
  return true;
}

stm32_mavlink_msgs__msg__RS485FlashSaveRequest *
stm32_mavlink_msgs__msg__RS485FlashSaveRequest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stm32_mavlink_msgs__msg__RS485FlashSaveRequest * msg = (stm32_mavlink_msgs__msg__RS485FlashSaveRequest *)allocator.allocate(sizeof(stm32_mavlink_msgs__msg__RS485FlashSaveRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(stm32_mavlink_msgs__msg__RS485FlashSaveRequest));
  bool success = stm32_mavlink_msgs__msg__RS485FlashSaveRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
stm32_mavlink_msgs__msg__RS485FlashSaveRequest__destroy(stm32_mavlink_msgs__msg__RS485FlashSaveRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    stm32_mavlink_msgs__msg__RS485FlashSaveRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
stm32_mavlink_msgs__msg__RS485FlashSaveRequest__Sequence__init(stm32_mavlink_msgs__msg__RS485FlashSaveRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stm32_mavlink_msgs__msg__RS485FlashSaveRequest * data = NULL;

  if (size) {
    data = (stm32_mavlink_msgs__msg__RS485FlashSaveRequest *)allocator.zero_allocate(size, sizeof(stm32_mavlink_msgs__msg__RS485FlashSaveRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = stm32_mavlink_msgs__msg__RS485FlashSaveRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        stm32_mavlink_msgs__msg__RS485FlashSaveRequest__fini(&data[i - 1]);
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
stm32_mavlink_msgs__msg__RS485FlashSaveRequest__Sequence__fini(stm32_mavlink_msgs__msg__RS485FlashSaveRequest__Sequence * array)
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
      stm32_mavlink_msgs__msg__RS485FlashSaveRequest__fini(&array->data[i]);
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

stm32_mavlink_msgs__msg__RS485FlashSaveRequest__Sequence *
stm32_mavlink_msgs__msg__RS485FlashSaveRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  stm32_mavlink_msgs__msg__RS485FlashSaveRequest__Sequence * array = (stm32_mavlink_msgs__msg__RS485FlashSaveRequest__Sequence *)allocator.allocate(sizeof(stm32_mavlink_msgs__msg__RS485FlashSaveRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = stm32_mavlink_msgs__msg__RS485FlashSaveRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
stm32_mavlink_msgs__msg__RS485FlashSaveRequest__Sequence__destroy(stm32_mavlink_msgs__msg__RS485FlashSaveRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    stm32_mavlink_msgs__msg__RS485FlashSaveRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
stm32_mavlink_msgs__msg__RS485FlashSaveRequest__Sequence__are_equal(const stm32_mavlink_msgs__msg__RS485FlashSaveRequest__Sequence * lhs, const stm32_mavlink_msgs__msg__RS485FlashSaveRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!stm32_mavlink_msgs__msg__RS485FlashSaveRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
stm32_mavlink_msgs__msg__RS485FlashSaveRequest__Sequence__copy(
  const stm32_mavlink_msgs__msg__RS485FlashSaveRequest__Sequence * input,
  stm32_mavlink_msgs__msg__RS485FlashSaveRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(stm32_mavlink_msgs__msg__RS485FlashSaveRequest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    stm32_mavlink_msgs__msg__RS485FlashSaveRequest * data =
      (stm32_mavlink_msgs__msg__RS485FlashSaveRequest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!stm32_mavlink_msgs__msg__RS485FlashSaveRequest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          stm32_mavlink_msgs__msg__RS485FlashSaveRequest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!stm32_mavlink_msgs__msg__RS485FlashSaveRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
