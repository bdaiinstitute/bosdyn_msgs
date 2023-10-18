// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/RectangleI.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/rectangle_i__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
bosdyn_msgs__msg__RectangleI__init(bosdyn_msgs__msg__RectangleI * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // cols
  // rows
  return true;
}

void
bosdyn_msgs__msg__RectangleI__fini(bosdyn_msgs__msg__RectangleI * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // cols
  // rows
}

bool
bosdyn_msgs__msg__RectangleI__are_equal(const bosdyn_msgs__msg__RectangleI * lhs, const bosdyn_msgs__msg__RectangleI * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // cols
  if (lhs->cols != rhs->cols) {
    return false;
  }
  // rows
  if (lhs->rows != rhs->rows) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__RectangleI__copy(
  const bosdyn_msgs__msg__RectangleI * input,
  bosdyn_msgs__msg__RectangleI * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // cols
  output->cols = input->cols;
  // rows
  output->rows = input->rows;
  return true;
}

bosdyn_msgs__msg__RectangleI *
bosdyn_msgs__msg__RectangleI__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__RectangleI * msg = (bosdyn_msgs__msg__RectangleI *)allocator.allocate(sizeof(bosdyn_msgs__msg__RectangleI), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__RectangleI));
  bool success = bosdyn_msgs__msg__RectangleI__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__RectangleI__destroy(bosdyn_msgs__msg__RectangleI * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__RectangleI__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__RectangleI__Sequence__init(bosdyn_msgs__msg__RectangleI__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__RectangleI * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__RectangleI *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__RectangleI), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__RectangleI__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__RectangleI__fini(&data[i - 1]);
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
bosdyn_msgs__msg__RectangleI__Sequence__fini(bosdyn_msgs__msg__RectangleI__Sequence * array)
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
      bosdyn_msgs__msg__RectangleI__fini(&array->data[i]);
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

bosdyn_msgs__msg__RectangleI__Sequence *
bosdyn_msgs__msg__RectangleI__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__RectangleI__Sequence * array = (bosdyn_msgs__msg__RectangleI__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__RectangleI__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__RectangleI__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__RectangleI__Sequence__destroy(bosdyn_msgs__msg__RectangleI__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__RectangleI__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__RectangleI__Sequence__are_equal(const bosdyn_msgs__msg__RectangleI__Sequence * lhs, const bosdyn_msgs__msg__RectangleI__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__RectangleI__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__RectangleI__Sequence__copy(
  const bosdyn_msgs__msg__RectangleI__Sequence * input,
  bosdyn_msgs__msg__RectangleI__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__RectangleI);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__RectangleI * data =
      (bosdyn_msgs__msg__RectangleI *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__RectangleI__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__RectangleI__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__RectangleI__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
