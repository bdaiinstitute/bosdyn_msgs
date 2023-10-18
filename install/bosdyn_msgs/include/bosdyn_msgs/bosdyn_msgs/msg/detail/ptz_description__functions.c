// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/PtzDescription.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/ptz_description__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `pan_limit`
// Member `tilt_limit`
// Member `zoom_limit`
#include "bosdyn_msgs/msg/detail/ptz_description_limits__functions.h"

bool
bosdyn_msgs__msg__PtzDescription__init(bosdyn_msgs__msg__PtzDescription * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    bosdyn_msgs__msg__PtzDescription__fini(msg);
    return false;
  }
  // pan_limit
  if (!bosdyn_msgs__msg__PtzDescriptionLimits__init(&msg->pan_limit)) {
    bosdyn_msgs__msg__PtzDescription__fini(msg);
    return false;
  }
  // pan_limit_is_set
  // tilt_limit
  if (!bosdyn_msgs__msg__PtzDescriptionLimits__init(&msg->tilt_limit)) {
    bosdyn_msgs__msg__PtzDescription__fini(msg);
    return false;
  }
  // tilt_limit_is_set
  // zoom_limit
  if (!bosdyn_msgs__msg__PtzDescriptionLimits__init(&msg->zoom_limit)) {
    bosdyn_msgs__msg__PtzDescription__fini(msg);
    return false;
  }
  // zoom_limit_is_set
  return true;
}

void
bosdyn_msgs__msg__PtzDescription__fini(bosdyn_msgs__msg__PtzDescription * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // pan_limit
  bosdyn_msgs__msg__PtzDescriptionLimits__fini(&msg->pan_limit);
  // pan_limit_is_set
  // tilt_limit
  bosdyn_msgs__msg__PtzDescriptionLimits__fini(&msg->tilt_limit);
  // tilt_limit_is_set
  // zoom_limit
  bosdyn_msgs__msg__PtzDescriptionLimits__fini(&msg->zoom_limit);
  // zoom_limit_is_set
}

bool
bosdyn_msgs__msg__PtzDescription__are_equal(const bosdyn_msgs__msg__PtzDescription * lhs, const bosdyn_msgs__msg__PtzDescription * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // pan_limit
  if (!bosdyn_msgs__msg__PtzDescriptionLimits__are_equal(
      &(lhs->pan_limit), &(rhs->pan_limit)))
  {
    return false;
  }
  // pan_limit_is_set
  if (lhs->pan_limit_is_set != rhs->pan_limit_is_set) {
    return false;
  }
  // tilt_limit
  if (!bosdyn_msgs__msg__PtzDescriptionLimits__are_equal(
      &(lhs->tilt_limit), &(rhs->tilt_limit)))
  {
    return false;
  }
  // tilt_limit_is_set
  if (lhs->tilt_limit_is_set != rhs->tilt_limit_is_set) {
    return false;
  }
  // zoom_limit
  if (!bosdyn_msgs__msg__PtzDescriptionLimits__are_equal(
      &(lhs->zoom_limit), &(rhs->zoom_limit)))
  {
    return false;
  }
  // zoom_limit_is_set
  if (lhs->zoom_limit_is_set != rhs->zoom_limit_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__PtzDescription__copy(
  const bosdyn_msgs__msg__PtzDescription * input,
  bosdyn_msgs__msg__PtzDescription * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // pan_limit
  if (!bosdyn_msgs__msg__PtzDescriptionLimits__copy(
      &(input->pan_limit), &(output->pan_limit)))
  {
    return false;
  }
  // pan_limit_is_set
  output->pan_limit_is_set = input->pan_limit_is_set;
  // tilt_limit
  if (!bosdyn_msgs__msg__PtzDescriptionLimits__copy(
      &(input->tilt_limit), &(output->tilt_limit)))
  {
    return false;
  }
  // tilt_limit_is_set
  output->tilt_limit_is_set = input->tilt_limit_is_set;
  // zoom_limit
  if (!bosdyn_msgs__msg__PtzDescriptionLimits__copy(
      &(input->zoom_limit), &(output->zoom_limit)))
  {
    return false;
  }
  // zoom_limit_is_set
  output->zoom_limit_is_set = input->zoom_limit_is_set;
  return true;
}

bosdyn_msgs__msg__PtzDescription *
bosdyn_msgs__msg__PtzDescription__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__PtzDescription * msg = (bosdyn_msgs__msg__PtzDescription *)allocator.allocate(sizeof(bosdyn_msgs__msg__PtzDescription), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__PtzDescription));
  bool success = bosdyn_msgs__msg__PtzDescription__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__PtzDescription__destroy(bosdyn_msgs__msg__PtzDescription * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__PtzDescription__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__PtzDescription__Sequence__init(bosdyn_msgs__msg__PtzDescription__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__PtzDescription * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__PtzDescription *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__PtzDescription), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__PtzDescription__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__PtzDescription__fini(&data[i - 1]);
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
bosdyn_msgs__msg__PtzDescription__Sequence__fini(bosdyn_msgs__msg__PtzDescription__Sequence * array)
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
      bosdyn_msgs__msg__PtzDescription__fini(&array->data[i]);
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

bosdyn_msgs__msg__PtzDescription__Sequence *
bosdyn_msgs__msg__PtzDescription__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__PtzDescription__Sequence * array = (bosdyn_msgs__msg__PtzDescription__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__PtzDescription__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__PtzDescription__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__PtzDescription__Sequence__destroy(bosdyn_msgs__msg__PtzDescription__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__PtzDescription__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__PtzDescription__Sequence__are_equal(const bosdyn_msgs__msg__PtzDescription__Sequence * lhs, const bosdyn_msgs__msg__PtzDescription__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__PtzDescription__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__PtzDescription__Sequence__copy(
  const bosdyn_msgs__msg__PtzDescription__Sequence * input,
  bosdyn_msgs__msg__PtzDescription__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__PtzDescription);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__PtzDescription * data =
      (bosdyn_msgs__msg__PtzDescription *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__PtzDescription__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__PtzDescription__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__PtzDescription__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
