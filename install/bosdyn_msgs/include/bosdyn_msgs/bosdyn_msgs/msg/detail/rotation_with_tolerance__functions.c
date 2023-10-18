// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/RotationWithTolerance.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/rotation_with_tolerance__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `rotation_ewrt_frame`
#include "geometry_msgs/msg/detail/quaternion__functions.h"

bool
bosdyn_msgs__msg__RotationWithTolerance__init(bosdyn_msgs__msg__RotationWithTolerance * msg)
{
  if (!msg) {
    return false;
  }
  // rotation_ewrt_frame
  if (!geometry_msgs__msg__Quaternion__init(&msg->rotation_ewrt_frame)) {
    bosdyn_msgs__msg__RotationWithTolerance__fini(msg);
    return false;
  }
  // rotation_ewrt_frame_is_set
  // threshold_radians
  return true;
}

void
bosdyn_msgs__msg__RotationWithTolerance__fini(bosdyn_msgs__msg__RotationWithTolerance * msg)
{
  if (!msg) {
    return;
  }
  // rotation_ewrt_frame
  geometry_msgs__msg__Quaternion__fini(&msg->rotation_ewrt_frame);
  // rotation_ewrt_frame_is_set
  // threshold_radians
}

bool
bosdyn_msgs__msg__RotationWithTolerance__are_equal(const bosdyn_msgs__msg__RotationWithTolerance * lhs, const bosdyn_msgs__msg__RotationWithTolerance * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // rotation_ewrt_frame
  if (!geometry_msgs__msg__Quaternion__are_equal(
      &(lhs->rotation_ewrt_frame), &(rhs->rotation_ewrt_frame)))
  {
    return false;
  }
  // rotation_ewrt_frame_is_set
  if (lhs->rotation_ewrt_frame_is_set != rhs->rotation_ewrt_frame_is_set) {
    return false;
  }
  // threshold_radians
  if (lhs->threshold_radians != rhs->threshold_radians) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__RotationWithTolerance__copy(
  const bosdyn_msgs__msg__RotationWithTolerance * input,
  bosdyn_msgs__msg__RotationWithTolerance * output)
{
  if (!input || !output) {
    return false;
  }
  // rotation_ewrt_frame
  if (!geometry_msgs__msg__Quaternion__copy(
      &(input->rotation_ewrt_frame), &(output->rotation_ewrt_frame)))
  {
    return false;
  }
  // rotation_ewrt_frame_is_set
  output->rotation_ewrt_frame_is_set = input->rotation_ewrt_frame_is_set;
  // threshold_radians
  output->threshold_radians = input->threshold_radians;
  return true;
}

bosdyn_msgs__msg__RotationWithTolerance *
bosdyn_msgs__msg__RotationWithTolerance__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__RotationWithTolerance * msg = (bosdyn_msgs__msg__RotationWithTolerance *)allocator.allocate(sizeof(bosdyn_msgs__msg__RotationWithTolerance), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__RotationWithTolerance));
  bool success = bosdyn_msgs__msg__RotationWithTolerance__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__RotationWithTolerance__destroy(bosdyn_msgs__msg__RotationWithTolerance * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__RotationWithTolerance__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__RotationWithTolerance__Sequence__init(bosdyn_msgs__msg__RotationWithTolerance__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__RotationWithTolerance * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__RotationWithTolerance *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__RotationWithTolerance), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__RotationWithTolerance__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__RotationWithTolerance__fini(&data[i - 1]);
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
bosdyn_msgs__msg__RotationWithTolerance__Sequence__fini(bosdyn_msgs__msg__RotationWithTolerance__Sequence * array)
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
      bosdyn_msgs__msg__RotationWithTolerance__fini(&array->data[i]);
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

bosdyn_msgs__msg__RotationWithTolerance__Sequence *
bosdyn_msgs__msg__RotationWithTolerance__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__RotationWithTolerance__Sequence * array = (bosdyn_msgs__msg__RotationWithTolerance__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__RotationWithTolerance__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__RotationWithTolerance__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__RotationWithTolerance__Sequence__destroy(bosdyn_msgs__msg__RotationWithTolerance__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__RotationWithTolerance__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__RotationWithTolerance__Sequence__are_equal(const bosdyn_msgs__msg__RotationWithTolerance__Sequence * lhs, const bosdyn_msgs__msg__RotationWithTolerance__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__RotationWithTolerance__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__RotationWithTolerance__Sequence__copy(
  const bosdyn_msgs__msg__RotationWithTolerance__Sequence * input,
  bosdyn_msgs__msg__RotationWithTolerance__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__RotationWithTolerance);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__RotationWithTolerance * data =
      (bosdyn_msgs__msg__RotationWithTolerance *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__RotationWithTolerance__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__RotationWithTolerance__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__RotationWithTolerance__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
