// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/PtzDescriptionLimits.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/ptz_description_limits__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
bosdyn_msgs__msg__PtzDescriptionLimits__init(bosdyn_msgs__msg__PtzDescriptionLimits * msg)
{
  if (!msg) {
    return false;
  }
  // min
  // min_is_set
  // max
  // max_is_set
  return true;
}

void
bosdyn_msgs__msg__PtzDescriptionLimits__fini(bosdyn_msgs__msg__PtzDescriptionLimits * msg)
{
  if (!msg) {
    return;
  }
  // min
  // min_is_set
  // max
  // max_is_set
}

bool
bosdyn_msgs__msg__PtzDescriptionLimits__are_equal(const bosdyn_msgs__msg__PtzDescriptionLimits * lhs, const bosdyn_msgs__msg__PtzDescriptionLimits * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // min
  if (lhs->min != rhs->min) {
    return false;
  }
  // min_is_set
  if (lhs->min_is_set != rhs->min_is_set) {
    return false;
  }
  // max
  if (lhs->max != rhs->max) {
    return false;
  }
  // max_is_set
  if (lhs->max_is_set != rhs->max_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__PtzDescriptionLimits__copy(
  const bosdyn_msgs__msg__PtzDescriptionLimits * input,
  bosdyn_msgs__msg__PtzDescriptionLimits * output)
{
  if (!input || !output) {
    return false;
  }
  // min
  output->min = input->min;
  // min_is_set
  output->min_is_set = input->min_is_set;
  // max
  output->max = input->max;
  // max_is_set
  output->max_is_set = input->max_is_set;
  return true;
}

bosdyn_msgs__msg__PtzDescriptionLimits *
bosdyn_msgs__msg__PtzDescriptionLimits__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__PtzDescriptionLimits * msg = (bosdyn_msgs__msg__PtzDescriptionLimits *)allocator.allocate(sizeof(bosdyn_msgs__msg__PtzDescriptionLimits), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__PtzDescriptionLimits));
  bool success = bosdyn_msgs__msg__PtzDescriptionLimits__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__PtzDescriptionLimits__destroy(bosdyn_msgs__msg__PtzDescriptionLimits * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__PtzDescriptionLimits__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__PtzDescriptionLimits__Sequence__init(bosdyn_msgs__msg__PtzDescriptionLimits__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__PtzDescriptionLimits * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__PtzDescriptionLimits *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__PtzDescriptionLimits), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__PtzDescriptionLimits__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__PtzDescriptionLimits__fini(&data[i - 1]);
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
bosdyn_msgs__msg__PtzDescriptionLimits__Sequence__fini(bosdyn_msgs__msg__PtzDescriptionLimits__Sequence * array)
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
      bosdyn_msgs__msg__PtzDescriptionLimits__fini(&array->data[i]);
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

bosdyn_msgs__msg__PtzDescriptionLimits__Sequence *
bosdyn_msgs__msg__PtzDescriptionLimits__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__PtzDescriptionLimits__Sequence * array = (bosdyn_msgs__msg__PtzDescriptionLimits__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__PtzDescriptionLimits__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__PtzDescriptionLimits__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__PtzDescriptionLimits__Sequence__destroy(bosdyn_msgs__msg__PtzDescriptionLimits__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__PtzDescriptionLimits__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__PtzDescriptionLimits__Sequence__are_equal(const bosdyn_msgs__msg__PtzDescriptionLimits__Sequence * lhs, const bosdyn_msgs__msg__PtzDescriptionLimits__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__PtzDescriptionLimits__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__PtzDescriptionLimits__Sequence__copy(
  const bosdyn_msgs__msg__PtzDescriptionLimits__Sequence * input,
  bosdyn_msgs__msg__PtzDescriptionLimits__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__PtzDescriptionLimits);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__PtzDescriptionLimits * data =
      (bosdyn_msgs__msg__PtzDescriptionLimits *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__PtzDescriptionLimits__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__PtzDescriptionLimits__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__PtzDescriptionLimits__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
