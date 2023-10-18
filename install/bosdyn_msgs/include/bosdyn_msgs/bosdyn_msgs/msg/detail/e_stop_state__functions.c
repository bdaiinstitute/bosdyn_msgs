// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/EStopState.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/e_stop_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `name`
// Member `state_description`
#include "rosidl_runtime_c/string_functions.h"
// Member `type`
#include "bosdyn_msgs/msg/detail/e_stop_state_type__functions.h"
// Member `state`
#include "bosdyn_msgs/msg/detail/e_stop_state_state__functions.h"

bool
bosdyn_msgs__msg__EStopState__init(bosdyn_msgs__msg__EStopState * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    bosdyn_msgs__msg__EStopState__fini(msg);
    return false;
  }
  // timestamp_is_set
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    bosdyn_msgs__msg__EStopState__fini(msg);
    return false;
  }
  // type
  if (!bosdyn_msgs__msg__EStopStateType__init(&msg->type)) {
    bosdyn_msgs__msg__EStopState__fini(msg);
    return false;
  }
  // state
  if (!bosdyn_msgs__msg__EStopStateState__init(&msg->state)) {
    bosdyn_msgs__msg__EStopState__fini(msg);
    return false;
  }
  // state_description
  if (!rosidl_runtime_c__String__init(&msg->state_description)) {
    bosdyn_msgs__msg__EStopState__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__EStopState__fini(bosdyn_msgs__msg__EStopState * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  builtin_interfaces__msg__Time__fini(&msg->timestamp);
  // timestamp_is_set
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // type
  bosdyn_msgs__msg__EStopStateType__fini(&msg->type);
  // state
  bosdyn_msgs__msg__EStopStateState__fini(&msg->state);
  // state_description
  rosidl_runtime_c__String__fini(&msg->state_description);
}

bool
bosdyn_msgs__msg__EStopState__are_equal(const bosdyn_msgs__msg__EStopState * lhs, const bosdyn_msgs__msg__EStopState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->timestamp), &(rhs->timestamp)))
  {
    return false;
  }
  // timestamp_is_set
  if (lhs->timestamp_is_set != rhs->timestamp_is_set) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // type
  if (!bosdyn_msgs__msg__EStopStateType__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  // state
  if (!bosdyn_msgs__msg__EStopStateState__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  // state_description
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->state_description), &(rhs->state_description)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__EStopState__copy(
  const bosdyn_msgs__msg__EStopState * input,
  bosdyn_msgs__msg__EStopState * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->timestamp), &(output->timestamp)))
  {
    return false;
  }
  // timestamp_is_set
  output->timestamp_is_set = input->timestamp_is_set;
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // type
  if (!bosdyn_msgs__msg__EStopStateType__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  // state
  if (!bosdyn_msgs__msg__EStopStateState__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  // state_description
  if (!rosidl_runtime_c__String__copy(
      &(input->state_description), &(output->state_description)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__EStopState *
bosdyn_msgs__msg__EStopState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__EStopState * msg = (bosdyn_msgs__msg__EStopState *)allocator.allocate(sizeof(bosdyn_msgs__msg__EStopState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__EStopState));
  bool success = bosdyn_msgs__msg__EStopState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__EStopState__destroy(bosdyn_msgs__msg__EStopState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__EStopState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__EStopState__Sequence__init(bosdyn_msgs__msg__EStopState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__EStopState * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__EStopState *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__EStopState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__EStopState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__EStopState__fini(&data[i - 1]);
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
bosdyn_msgs__msg__EStopState__Sequence__fini(bosdyn_msgs__msg__EStopState__Sequence * array)
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
      bosdyn_msgs__msg__EStopState__fini(&array->data[i]);
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

bosdyn_msgs__msg__EStopState__Sequence *
bosdyn_msgs__msg__EStopState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__EStopState__Sequence * array = (bosdyn_msgs__msg__EStopState__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__EStopState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__EStopState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__EStopState__Sequence__destroy(bosdyn_msgs__msg__EStopState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__EStopState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__EStopState__Sequence__are_equal(const bosdyn_msgs__msg__EStopState__Sequence * lhs, const bosdyn_msgs__msg__EStopState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__EStopState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__EStopState__Sequence__copy(
  const bosdyn_msgs__msg__EStopState__Sequence * input,
  bosdyn_msgs__msg__EStopState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__EStopState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__EStopState * data =
      (bosdyn_msgs__msg__EStopState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__EStopState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__EStopState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__EStopState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
