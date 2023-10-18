// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/GetPtzVelocityRequest.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/get_ptz_velocity_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "bosdyn_msgs/msg/detail/request_header__functions.h"
// Member `ptz`
#include "bosdyn_msgs/msg/detail/ptz_description__functions.h"

bool
bosdyn_msgs__msg__GetPtzVelocityRequest__init(bosdyn_msgs__msg__GetPtzVelocityRequest * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__RequestHeader__init(&msg->header)) {
    bosdyn_msgs__msg__GetPtzVelocityRequest__fini(msg);
    return false;
  }
  // header_is_set
  // ptz
  if (!bosdyn_msgs__msg__PtzDescription__init(&msg->ptz)) {
    bosdyn_msgs__msg__GetPtzVelocityRequest__fini(msg);
    return false;
  }
  // ptz_is_set
  return true;
}

void
bosdyn_msgs__msg__GetPtzVelocityRequest__fini(bosdyn_msgs__msg__GetPtzVelocityRequest * msg)
{
  if (!msg) {
    return;
  }
  // header
  bosdyn_msgs__msg__RequestHeader__fini(&msg->header);
  // header_is_set
  // ptz
  bosdyn_msgs__msg__PtzDescription__fini(&msg->ptz);
  // ptz_is_set
}

bool
bosdyn_msgs__msg__GetPtzVelocityRequest__are_equal(const bosdyn_msgs__msg__GetPtzVelocityRequest * lhs, const bosdyn_msgs__msg__GetPtzVelocityRequest * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__RequestHeader__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // header_is_set
  if (lhs->header_is_set != rhs->header_is_set) {
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
  return true;
}

bool
bosdyn_msgs__msg__GetPtzVelocityRequest__copy(
  const bosdyn_msgs__msg__GetPtzVelocityRequest * input,
  bosdyn_msgs__msg__GetPtzVelocityRequest * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__RequestHeader__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // header_is_set
  output->header_is_set = input->header_is_set;
  // ptz
  if (!bosdyn_msgs__msg__PtzDescription__copy(
      &(input->ptz), &(output->ptz)))
  {
    return false;
  }
  // ptz_is_set
  output->ptz_is_set = input->ptz_is_set;
  return true;
}

bosdyn_msgs__msg__GetPtzVelocityRequest *
bosdyn_msgs__msg__GetPtzVelocityRequest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__GetPtzVelocityRequest * msg = (bosdyn_msgs__msg__GetPtzVelocityRequest *)allocator.allocate(sizeof(bosdyn_msgs__msg__GetPtzVelocityRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__GetPtzVelocityRequest));
  bool success = bosdyn_msgs__msg__GetPtzVelocityRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__GetPtzVelocityRequest__destroy(bosdyn_msgs__msg__GetPtzVelocityRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__GetPtzVelocityRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__GetPtzVelocityRequest__Sequence__init(bosdyn_msgs__msg__GetPtzVelocityRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__GetPtzVelocityRequest * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__GetPtzVelocityRequest *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__GetPtzVelocityRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__GetPtzVelocityRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__GetPtzVelocityRequest__fini(&data[i - 1]);
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
bosdyn_msgs__msg__GetPtzVelocityRequest__Sequence__fini(bosdyn_msgs__msg__GetPtzVelocityRequest__Sequence * array)
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
      bosdyn_msgs__msg__GetPtzVelocityRequest__fini(&array->data[i]);
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

bosdyn_msgs__msg__GetPtzVelocityRequest__Sequence *
bosdyn_msgs__msg__GetPtzVelocityRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__GetPtzVelocityRequest__Sequence * array = (bosdyn_msgs__msg__GetPtzVelocityRequest__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__GetPtzVelocityRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__GetPtzVelocityRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__GetPtzVelocityRequest__Sequence__destroy(bosdyn_msgs__msg__GetPtzVelocityRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__GetPtzVelocityRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__GetPtzVelocityRequest__Sequence__are_equal(const bosdyn_msgs__msg__GetPtzVelocityRequest__Sequence * lhs, const bosdyn_msgs__msg__GetPtzVelocityRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__GetPtzVelocityRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__GetPtzVelocityRequest__Sequence__copy(
  const bosdyn_msgs__msg__GetPtzVelocityRequest__Sequence * input,
  bosdyn_msgs__msg__GetPtzVelocityRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__GetPtzVelocityRequest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__GetPtzVelocityRequest * data =
      (bosdyn_msgs__msg__GetPtzVelocityRequest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__GetPtzVelocityRequest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__GetPtzVelocityRequest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__GetPtzVelocityRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
