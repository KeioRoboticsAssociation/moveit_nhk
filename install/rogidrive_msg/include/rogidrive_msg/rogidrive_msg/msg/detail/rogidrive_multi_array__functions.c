// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rogidrive_msg:msg/RogidriveMultiArray.idl
// generated code does not contain a copyright notice
#include "rogidrive_msg/msg/detail/rogidrive_multi_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `data`
#include "rogidrive_msg/msg/detail/rogidrive_message__functions.h"

bool
rogidrive_msg__msg__RogidriveMultiArray__init(rogidrive_msg__msg__RogidriveMultiArray * msg)
{
  if (!msg) {
    return false;
  }
  // data
  if (!rogidrive_msg__msg__RogidriveMessage__Sequence__init(&msg->data, 0)) {
    rogidrive_msg__msg__RogidriveMultiArray__fini(msg);
    return false;
  }
  return true;
}

void
rogidrive_msg__msg__RogidriveMultiArray__fini(rogidrive_msg__msg__RogidriveMultiArray * msg)
{
  if (!msg) {
    return;
  }
  // data
  rogidrive_msg__msg__RogidriveMessage__Sequence__fini(&msg->data);
}

bool
rogidrive_msg__msg__RogidriveMultiArray__are_equal(const rogidrive_msg__msg__RogidriveMultiArray * lhs, const rogidrive_msg__msg__RogidriveMultiArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // data
  if (!rogidrive_msg__msg__RogidriveMessage__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
rogidrive_msg__msg__RogidriveMultiArray__copy(
  const rogidrive_msg__msg__RogidriveMultiArray * input,
  rogidrive_msg__msg__RogidriveMultiArray * output)
{
  if (!input || !output) {
    return false;
  }
  // data
  if (!rogidrive_msg__msg__RogidriveMessage__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

rogidrive_msg__msg__RogidriveMultiArray *
rogidrive_msg__msg__RogidriveMultiArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rogidrive_msg__msg__RogidriveMultiArray * msg = (rogidrive_msg__msg__RogidriveMultiArray *)allocator.allocate(sizeof(rogidrive_msg__msg__RogidriveMultiArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rogidrive_msg__msg__RogidriveMultiArray));
  bool success = rogidrive_msg__msg__RogidriveMultiArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rogidrive_msg__msg__RogidriveMultiArray__destroy(rogidrive_msg__msg__RogidriveMultiArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rogidrive_msg__msg__RogidriveMultiArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rogidrive_msg__msg__RogidriveMultiArray__Sequence__init(rogidrive_msg__msg__RogidriveMultiArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rogidrive_msg__msg__RogidriveMultiArray * data = NULL;

  if (size) {
    data = (rogidrive_msg__msg__RogidriveMultiArray *)allocator.zero_allocate(size, sizeof(rogidrive_msg__msg__RogidriveMultiArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rogidrive_msg__msg__RogidriveMultiArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rogidrive_msg__msg__RogidriveMultiArray__fini(&data[i - 1]);
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
rogidrive_msg__msg__RogidriveMultiArray__Sequence__fini(rogidrive_msg__msg__RogidriveMultiArray__Sequence * array)
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
      rogidrive_msg__msg__RogidriveMultiArray__fini(&array->data[i]);
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

rogidrive_msg__msg__RogidriveMultiArray__Sequence *
rogidrive_msg__msg__RogidriveMultiArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rogidrive_msg__msg__RogidriveMultiArray__Sequence * array = (rogidrive_msg__msg__RogidriveMultiArray__Sequence *)allocator.allocate(sizeof(rogidrive_msg__msg__RogidriveMultiArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rogidrive_msg__msg__RogidriveMultiArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rogidrive_msg__msg__RogidriveMultiArray__Sequence__destroy(rogidrive_msg__msg__RogidriveMultiArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rogidrive_msg__msg__RogidriveMultiArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rogidrive_msg__msg__RogidriveMultiArray__Sequence__are_equal(const rogidrive_msg__msg__RogidriveMultiArray__Sequence * lhs, const rogidrive_msg__msg__RogidriveMultiArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rogidrive_msg__msg__RogidriveMultiArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rogidrive_msg__msg__RogidriveMultiArray__Sequence__copy(
  const rogidrive_msg__msg__RogidriveMultiArray__Sequence * input,
  rogidrive_msg__msg__RogidriveMultiArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rogidrive_msg__msg__RogidriveMultiArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rogidrive_msg__msg__RogidriveMultiArray * data =
      (rogidrive_msg__msg__RogidriveMultiArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rogidrive_msg__msg__RogidriveMultiArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rogidrive_msg__msg__RogidriveMultiArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rogidrive_msg__msg__RogidriveMultiArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
