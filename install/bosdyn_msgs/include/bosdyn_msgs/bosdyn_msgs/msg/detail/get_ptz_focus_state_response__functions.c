// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/GetPtzFocusStateResponse.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/get_ptz_focus_state_response__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "bosdyn_msgs/msg/detail/response_header__functions.h"
// Member `focus_state`
#include "bosdyn_msgs/msg/detail/ptz_focus_state__functions.h"

bool
bosdyn_msgs__msg__GetPtzFocusStateResponse__init(bosdyn_msgs__msg__GetPtzFocusStateResponse * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__ResponseHeader__init(&msg->header)) {
    bosdyn_msgs__msg__GetPtzFocusStateResponse__fini(msg);
    return false;
  }
  // header_is_set
  // focus_state
  if (!bosdyn_msgs__msg__PtzFocusState__init(&msg->focus_state)) {
    bosdyn_msgs__msg__GetPtzFocusStateResponse__fini(msg);
    return false;
  }
  // focus_state_is_set
  return true;
}

void
bosdyn_msgs__msg__GetPtzFocusStateResponse__fini(bosdyn_msgs__msg__GetPtzFocusStateResponse * msg)
{
  if (!msg) {
    return;
  }
  // header
  bosdyn_msgs__msg__ResponseHeader__fini(&msg->header);
  // header_is_set
  // focus_state
  bosdyn_msgs__msg__PtzFocusState__fini(&msg->focus_state);
  // focus_state_is_set
}

bool
bosdyn_msgs__msg__GetPtzFocusStateResponse__are_equal(const bosdyn_msgs__msg__GetPtzFocusStateResponse * lhs, const bosdyn_msgs__msg__GetPtzFocusStateResponse * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__ResponseHeader__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // header_is_set
  if (lhs->header_is_set != rhs->header_is_set) {
    return false;
  }
  // focus_state
  if (!bosdyn_msgs__msg__PtzFocusState__are_equal(
      &(lhs->focus_state), &(rhs->focus_state)))
  {
    return false;
  }
  // focus_state_is_set
  if (lhs->focus_state_is_set != rhs->focus_state_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__GetPtzFocusStateResponse__copy(
  const bosdyn_msgs__msg__GetPtzFocusStateResponse * input,
  bosdyn_msgs__msg__GetPtzFocusStateResponse * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__ResponseHeader__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // header_is_set
  output->header_is_set = input->header_is_set;
  // focus_state
  if (!bosdyn_msgs__msg__PtzFocusState__copy(
      &(input->focus_state), &(output->focus_state)))
  {
    return false;
  }
  // focus_state_is_set
  output->focus_state_is_set = input->focus_state_is_set;
  return true;
}

bosdyn_msgs__msg__GetPtzFocusStateResponse *
bosdyn_msgs__msg__GetPtzFocusStateResponse__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__GetPtzFocusStateResponse * msg = (bosdyn_msgs__msg__GetPtzFocusStateResponse *)allocator.allocate(sizeof(bosdyn_msgs__msg__GetPtzFocusStateResponse), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__GetPtzFocusStateResponse));
  bool success = bosdyn_msgs__msg__GetPtzFocusStateResponse__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__GetPtzFocusStateResponse__destroy(bosdyn_msgs__msg__GetPtzFocusStateResponse * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__GetPtzFocusStateResponse__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__GetPtzFocusStateResponse__Sequence__init(bosdyn_msgs__msg__GetPtzFocusStateResponse__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__GetPtzFocusStateResponse * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__GetPtzFocusStateResponse *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__GetPtzFocusStateResponse), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__GetPtzFocusStateResponse__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__GetPtzFocusStateResponse__fini(&data[i - 1]);
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
bosdyn_msgs__msg__GetPtzFocusStateResponse__Sequence__fini(bosdyn_msgs__msg__GetPtzFocusStateResponse__Sequence * array)
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
      bosdyn_msgs__msg__GetPtzFocusStateResponse__fini(&array->data[i]);
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

bosdyn_msgs__msg__GetPtzFocusStateResponse__Sequence *
bosdyn_msgs__msg__GetPtzFocusStateResponse__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__GetPtzFocusStateResponse__Sequence * array = (bosdyn_msgs__msg__GetPtzFocusStateResponse__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__GetPtzFocusStateResponse__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__GetPtzFocusStateResponse__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__GetPtzFocusStateResponse__Sequence__destroy(bosdyn_msgs__msg__GetPtzFocusStateResponse__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__GetPtzFocusStateResponse__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__GetPtzFocusStateResponse__Sequence__are_equal(const bosdyn_msgs__msg__GetPtzFocusStateResponse__Sequence * lhs, const bosdyn_msgs__msg__GetPtzFocusStateResponse__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__GetPtzFocusStateResponse__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__GetPtzFocusStateResponse__Sequence__copy(
  const bosdyn_msgs__msg__GetPtzFocusStateResponse__Sequence * input,
  bosdyn_msgs__msg__GetPtzFocusStateResponse__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__GetPtzFocusStateResponse);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__GetPtzFocusStateResponse * data =
      (bosdyn_msgs__msg__GetPtzFocusStateResponse *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__GetPtzFocusStateResponse__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__GetPtzFocusStateResponse__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__GetPtzFocusStateResponse__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
