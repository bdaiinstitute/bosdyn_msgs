// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/PtzFocusState.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/ptz_focus_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `mode`
#include "bosdyn_msgs/msg/detail/ptz_focus_state_ptz_focus_mode__functions.h"

bool
bosdyn_msgs__msg__PtzFocusState__init(bosdyn_msgs__msg__PtzFocusState * msg)
{
  if (!msg) {
    return false;
  }
  // mode
  if (!bosdyn_msgs__msg__PtzFocusStatePtzFocusMode__init(&msg->mode)) {
    bosdyn_msgs__msg__PtzFocusState__fini(msg);
    return false;
  }
  // focus_position
  // focus_position_is_set
  // approx_distance
  // approx_distance_is_set
  return true;
}

void
bosdyn_msgs__msg__PtzFocusState__fini(bosdyn_msgs__msg__PtzFocusState * msg)
{
  if (!msg) {
    return;
  }
  // mode
  bosdyn_msgs__msg__PtzFocusStatePtzFocusMode__fini(&msg->mode);
  // focus_position
  // focus_position_is_set
  // approx_distance
  // approx_distance_is_set
}

bool
bosdyn_msgs__msg__PtzFocusState__are_equal(const bosdyn_msgs__msg__PtzFocusState * lhs, const bosdyn_msgs__msg__PtzFocusState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // mode
  if (!bosdyn_msgs__msg__PtzFocusStatePtzFocusMode__are_equal(
      &(lhs->mode), &(rhs->mode)))
  {
    return false;
  }
  // focus_position
  if (lhs->focus_position != rhs->focus_position) {
    return false;
  }
  // focus_position_is_set
  if (lhs->focus_position_is_set != rhs->focus_position_is_set) {
    return false;
  }
  // approx_distance
  if (lhs->approx_distance != rhs->approx_distance) {
    return false;
  }
  // approx_distance_is_set
  if (lhs->approx_distance_is_set != rhs->approx_distance_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__PtzFocusState__copy(
  const bosdyn_msgs__msg__PtzFocusState * input,
  bosdyn_msgs__msg__PtzFocusState * output)
{
  if (!input || !output) {
    return false;
  }
  // mode
  if (!bosdyn_msgs__msg__PtzFocusStatePtzFocusMode__copy(
      &(input->mode), &(output->mode)))
  {
    return false;
  }
  // focus_position
  output->focus_position = input->focus_position;
  // focus_position_is_set
  output->focus_position_is_set = input->focus_position_is_set;
  // approx_distance
  output->approx_distance = input->approx_distance;
  // approx_distance_is_set
  output->approx_distance_is_set = input->approx_distance_is_set;
  return true;
}

bosdyn_msgs__msg__PtzFocusState *
bosdyn_msgs__msg__PtzFocusState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__PtzFocusState * msg = (bosdyn_msgs__msg__PtzFocusState *)allocator.allocate(sizeof(bosdyn_msgs__msg__PtzFocusState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__PtzFocusState));
  bool success = bosdyn_msgs__msg__PtzFocusState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__PtzFocusState__destroy(bosdyn_msgs__msg__PtzFocusState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__PtzFocusState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__PtzFocusState__Sequence__init(bosdyn_msgs__msg__PtzFocusState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__PtzFocusState * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__PtzFocusState *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__PtzFocusState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__PtzFocusState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__PtzFocusState__fini(&data[i - 1]);
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
bosdyn_msgs__msg__PtzFocusState__Sequence__fini(bosdyn_msgs__msg__PtzFocusState__Sequence * array)
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
      bosdyn_msgs__msg__PtzFocusState__fini(&array->data[i]);
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

bosdyn_msgs__msg__PtzFocusState__Sequence *
bosdyn_msgs__msg__PtzFocusState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__PtzFocusState__Sequence * array = (bosdyn_msgs__msg__PtzFocusState__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__PtzFocusState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__PtzFocusState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__PtzFocusState__Sequence__destroy(bosdyn_msgs__msg__PtzFocusState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__PtzFocusState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__PtzFocusState__Sequence__are_equal(const bosdyn_msgs__msg__PtzFocusState__Sequence * lhs, const bosdyn_msgs__msg__PtzFocusState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__PtzFocusState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__PtzFocusState__Sequence__copy(
  const bosdyn_msgs__msg__PtzFocusState__Sequence * input,
  bosdyn_msgs__msg__PtzFocusState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__PtzFocusState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__PtzFocusState * data =
      (bosdyn_msgs__msg__PtzFocusState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__PtzFocusState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__PtzFocusState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__PtzFocusState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
