// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/PtzVelocity.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/ptz_velocity__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `ptz`
#include "bosdyn_msgs/msg/detail/ptz_description__functions.h"

bool
bosdyn_msgs__msg__PtzVelocity__init(bosdyn_msgs__msg__PtzVelocity * msg)
{
  if (!msg) {
    return false;
  }
  // ptz
  if (!bosdyn_msgs__msg__PtzDescription__init(&msg->ptz)) {
    bosdyn_msgs__msg__PtzVelocity__fini(msg);
    return false;
  }
  // ptz_is_set
  // pan
  // pan_is_set
  // tilt
  // tilt_is_set
  // zoom
  // zoom_is_set
  return true;
}

void
bosdyn_msgs__msg__PtzVelocity__fini(bosdyn_msgs__msg__PtzVelocity * msg)
{
  if (!msg) {
    return;
  }
  // ptz
  bosdyn_msgs__msg__PtzDescription__fini(&msg->ptz);
  // ptz_is_set
  // pan
  // pan_is_set
  // tilt
  // tilt_is_set
  // zoom
  // zoom_is_set
}

bool
bosdyn_msgs__msg__PtzVelocity__are_equal(const bosdyn_msgs__msg__PtzVelocity * lhs, const bosdyn_msgs__msg__PtzVelocity * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ptz
  if (!bosdyn_msgs__msg__PtzDescription__are_equal(
      &(lhs->ptz), &(rhs->ptz)))
  {
    return false;
  }
  // ptz_is_set
  if (lhs->ptz_is_set != rhs->ptz_is_set) {
    return false;
  }
  // pan
  if (lhs->pan != rhs->pan) {
    return false;
  }
  // pan_is_set
  if (lhs->pan_is_set != rhs->pan_is_set) {
    return false;
  }
  // tilt
  if (lhs->tilt != rhs->tilt) {
    return false;
  }
  // tilt_is_set
  if (lhs->tilt_is_set != rhs->tilt_is_set) {
    return false;
  }
  // zoom
  if (lhs->zoom != rhs->zoom) {
    return false;
  }
  // zoom_is_set
  if (lhs->zoom_is_set != rhs->zoom_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__PtzVelocity__copy(
  const bosdyn_msgs__msg__PtzVelocity * input,
  bosdyn_msgs__msg__PtzVelocity * output)
{
  if (!input || !output) {
    return false;
  }
  // ptz
  if (!bosdyn_msgs__msg__PtzDescription__copy(
      &(input->ptz), &(output->ptz)))
  {
    return false;
  }
  // ptz_is_set
  output->ptz_is_set = input->ptz_is_set;
  // pan
  output->pan = input->pan;
  // pan_is_set
  output->pan_is_set = input->pan_is_set;
  // tilt
  output->tilt = input->tilt;
  // tilt_is_set
  output->tilt_is_set = input->tilt_is_set;
  // zoom
  output->zoom = input->zoom;
  // zoom_is_set
  output->zoom_is_set = input->zoom_is_set;
  return true;
}

bosdyn_msgs__msg__PtzVelocity *
bosdyn_msgs__msg__PtzVelocity__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__PtzVelocity * msg = (bosdyn_msgs__msg__PtzVelocity *)allocator.allocate(sizeof(bosdyn_msgs__msg__PtzVelocity), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__PtzVelocity));
  bool success = bosdyn_msgs__msg__PtzVelocity__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__PtzVelocity__destroy(bosdyn_msgs__msg__PtzVelocity * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__PtzVelocity__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__PtzVelocity__Sequence__init(bosdyn_msgs__msg__PtzVelocity__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__PtzVelocity * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__PtzVelocity *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__PtzVelocity), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__PtzVelocity__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__PtzVelocity__fini(&data[i - 1]);
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
bosdyn_msgs__msg__PtzVelocity__Sequence__fini(bosdyn_msgs__msg__PtzVelocity__Sequence * array)
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
      bosdyn_msgs__msg__PtzVelocity__fini(&array->data[i]);
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

bosdyn_msgs__msg__PtzVelocity__Sequence *
bosdyn_msgs__msg__PtzVelocity__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__PtzVelocity__Sequence * array = (bosdyn_msgs__msg__PtzVelocity__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__PtzVelocity__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__PtzVelocity__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__PtzVelocity__Sequence__destroy(bosdyn_msgs__msg__PtzVelocity__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__PtzVelocity__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__PtzVelocity__Sequence__are_equal(const bosdyn_msgs__msg__PtzVelocity__Sequence * lhs, const bosdyn_msgs__msg__PtzVelocity__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__PtzVelocity__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__PtzVelocity__Sequence__copy(
  const bosdyn_msgs__msg__PtzVelocity__Sequence * input,
  bosdyn_msgs__msg__PtzVelocity__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__PtzVelocity);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__PtzVelocity * data =
      (bosdyn_msgs__msg__PtzVelocity *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__PtzVelocity__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__PtzVelocity__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__PtzVelocity__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
