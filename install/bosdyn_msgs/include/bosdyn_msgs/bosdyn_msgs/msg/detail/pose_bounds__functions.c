// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/PoseBounds.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/pose_bounds__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
bosdyn_msgs__msg__PoseBounds__init(bosdyn_msgs__msg__PoseBounds * msg)
{
  if (!msg) {
    return false;
  }
  // x_bounds
  // y_bounds
  // z_bounds
  // yaw_bounds
  return true;
}

void
bosdyn_msgs__msg__PoseBounds__fini(bosdyn_msgs__msg__PoseBounds * msg)
{
  if (!msg) {
    return;
  }
  // x_bounds
  // y_bounds
  // z_bounds
  // yaw_bounds
}

bool
bosdyn_msgs__msg__PoseBounds__are_equal(const bosdyn_msgs__msg__PoseBounds * lhs, const bosdyn_msgs__msg__PoseBounds * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x_bounds
  if (lhs->x_bounds != rhs->x_bounds) {
    return false;
  }
  // y_bounds
  if (lhs->y_bounds != rhs->y_bounds) {
    return false;
  }
  // z_bounds
  if (lhs->z_bounds != rhs->z_bounds) {
    return false;
  }
  // yaw_bounds
  if (lhs->yaw_bounds != rhs->yaw_bounds) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__PoseBounds__copy(
  const bosdyn_msgs__msg__PoseBounds * input,
  bosdyn_msgs__msg__PoseBounds * output)
{
  if (!input || !output) {
    return false;
  }
  // x_bounds
  output->x_bounds = input->x_bounds;
  // y_bounds
  output->y_bounds = input->y_bounds;
  // z_bounds
  output->z_bounds = input->z_bounds;
  // yaw_bounds
  output->yaw_bounds = input->yaw_bounds;
  return true;
}

bosdyn_msgs__msg__PoseBounds *
bosdyn_msgs__msg__PoseBounds__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__PoseBounds * msg = (bosdyn_msgs__msg__PoseBounds *)allocator.allocate(sizeof(bosdyn_msgs__msg__PoseBounds), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__PoseBounds));
  bool success = bosdyn_msgs__msg__PoseBounds__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__PoseBounds__destroy(bosdyn_msgs__msg__PoseBounds * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__PoseBounds__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__PoseBounds__Sequence__init(bosdyn_msgs__msg__PoseBounds__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__PoseBounds * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__PoseBounds *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__PoseBounds), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__PoseBounds__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__PoseBounds__fini(&data[i - 1]);
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
bosdyn_msgs__msg__PoseBounds__Sequence__fini(bosdyn_msgs__msg__PoseBounds__Sequence * array)
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
      bosdyn_msgs__msg__PoseBounds__fini(&array->data[i]);
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

bosdyn_msgs__msg__PoseBounds__Sequence *
bosdyn_msgs__msg__PoseBounds__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__PoseBounds__Sequence * array = (bosdyn_msgs__msg__PoseBounds__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__PoseBounds__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__PoseBounds__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__PoseBounds__Sequence__destroy(bosdyn_msgs__msg__PoseBounds__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__PoseBounds__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__PoseBounds__Sequence__are_equal(const bosdyn_msgs__msg__PoseBounds__Sequence * lhs, const bosdyn_msgs__msg__PoseBounds__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__PoseBounds__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__PoseBounds__Sequence__copy(
  const bosdyn_msgs__msg__PoseBounds__Sequence * input,
  bosdyn_msgs__msg__PoseBounds__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__PoseBounds);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__PoseBounds * data =
      (bosdyn_msgs__msg__PoseBounds *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__PoseBounds__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__PoseBounds__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__PoseBounds__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
