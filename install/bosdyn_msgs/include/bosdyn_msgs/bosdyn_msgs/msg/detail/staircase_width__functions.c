// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/StaircaseWidth.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/staircase_width__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `bounded_width`
#include "bosdyn_msgs/msg/detail/staircase_width_bounded_width__functions.h"

bool
bosdyn_msgs__msg__StaircaseWidth__init(bosdyn_msgs__msg__StaircaseWidth * msg)
{
  if (!msg) {
    return false;
  }
  // width
  // bounded_width
  if (!bosdyn_msgs__msg__StaircaseWidthBoundedWidth__init(&msg->bounded_width)) {
    bosdyn_msgs__msg__StaircaseWidth__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__StaircaseWidth__fini(bosdyn_msgs__msg__StaircaseWidth * msg)
{
  if (!msg) {
    return;
  }
  // width
  // bounded_width
  bosdyn_msgs__msg__StaircaseWidthBoundedWidth__fini(&msg->bounded_width);
}

bool
bosdyn_msgs__msg__StaircaseWidth__are_equal(const bosdyn_msgs__msg__StaircaseWidth * lhs, const bosdyn_msgs__msg__StaircaseWidth * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  // bounded_width
  if (!bosdyn_msgs__msg__StaircaseWidthBoundedWidth__are_equal(
      &(lhs->bounded_width), &(rhs->bounded_width)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__StaircaseWidth__copy(
  const bosdyn_msgs__msg__StaircaseWidth * input,
  bosdyn_msgs__msg__StaircaseWidth * output)
{
  if (!input || !output) {
    return false;
  }
  // width
  output->width = input->width;
  // bounded_width
  if (!bosdyn_msgs__msg__StaircaseWidthBoundedWidth__copy(
      &(input->bounded_width), &(output->bounded_width)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__StaircaseWidth *
bosdyn_msgs__msg__StaircaseWidth__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__StaircaseWidth * msg = (bosdyn_msgs__msg__StaircaseWidth *)allocator.allocate(sizeof(bosdyn_msgs__msg__StaircaseWidth), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__StaircaseWidth));
  bool success = bosdyn_msgs__msg__StaircaseWidth__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__StaircaseWidth__destroy(bosdyn_msgs__msg__StaircaseWidth * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__StaircaseWidth__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__StaircaseWidth__Sequence__init(bosdyn_msgs__msg__StaircaseWidth__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__StaircaseWidth * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__StaircaseWidth *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__StaircaseWidth), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__StaircaseWidth__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__StaircaseWidth__fini(&data[i - 1]);
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
bosdyn_msgs__msg__StaircaseWidth__Sequence__fini(bosdyn_msgs__msg__StaircaseWidth__Sequence * array)
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
      bosdyn_msgs__msg__StaircaseWidth__fini(&array->data[i]);
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

bosdyn_msgs__msg__StaircaseWidth__Sequence *
bosdyn_msgs__msg__StaircaseWidth__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__StaircaseWidth__Sequence * array = (bosdyn_msgs__msg__StaircaseWidth__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__StaircaseWidth__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__StaircaseWidth__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__StaircaseWidth__Sequence__destroy(bosdyn_msgs__msg__StaircaseWidth__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__StaircaseWidth__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__StaircaseWidth__Sequence__are_equal(const bosdyn_msgs__msg__StaircaseWidth__Sequence * lhs, const bosdyn_msgs__msg__StaircaseWidth__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__StaircaseWidth__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__StaircaseWidth__Sequence__copy(
  const bosdyn_msgs__msg__StaircaseWidth__Sequence * input,
  bosdyn_msgs__msg__StaircaseWidth__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__StaircaseWidth);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__StaircaseWidth * data =
      (bosdyn_msgs__msg__StaircaseWidth *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__StaircaseWidth__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__StaircaseWidth__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__StaircaseWidth__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
