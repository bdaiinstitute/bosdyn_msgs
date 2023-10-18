// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/CaptureActionId.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/capture_action_id__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `action_name`
// Member `group_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
bosdyn_msgs__msg__CaptureActionId__init(bosdyn_msgs__msg__CaptureActionId * msg)
{
  if (!msg) {
    return false;
  }
  // action_name
  if (!rosidl_runtime_c__String__init(&msg->action_name)) {
    bosdyn_msgs__msg__CaptureActionId__fini(msg);
    return false;
  }
  // group_name
  if (!rosidl_runtime_c__String__init(&msg->group_name)) {
    bosdyn_msgs__msg__CaptureActionId__fini(msg);
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    bosdyn_msgs__msg__CaptureActionId__fini(msg);
    return false;
  }
  // timestamp_is_set
  return true;
}

void
bosdyn_msgs__msg__CaptureActionId__fini(bosdyn_msgs__msg__CaptureActionId * msg)
{
  if (!msg) {
    return;
  }
  // action_name
  rosidl_runtime_c__String__fini(&msg->action_name);
  // group_name
  rosidl_runtime_c__String__fini(&msg->group_name);
  // timestamp
  builtin_interfaces__msg__Time__fini(&msg->timestamp);
  // timestamp_is_set
}

bool
bosdyn_msgs__msg__CaptureActionId__are_equal(const bosdyn_msgs__msg__CaptureActionId * lhs, const bosdyn_msgs__msg__CaptureActionId * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // action_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->action_name), &(rhs->action_name)))
  {
    return false;
  }
  // group_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->group_name), &(rhs->group_name)))
  {
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
  return true;
}

bool
bosdyn_msgs__msg__CaptureActionId__copy(
  const bosdyn_msgs__msg__CaptureActionId * input,
  bosdyn_msgs__msg__CaptureActionId * output)
{
  if (!input || !output) {
    return false;
  }
  // action_name
  if (!rosidl_runtime_c__String__copy(
      &(input->action_name), &(output->action_name)))
  {
    return false;
  }
  // group_name
  if (!rosidl_runtime_c__String__copy(
      &(input->group_name), &(output->group_name)))
  {
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
  return true;
}

bosdyn_msgs__msg__CaptureActionId *
bosdyn_msgs__msg__CaptureActionId__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__CaptureActionId * msg = (bosdyn_msgs__msg__CaptureActionId *)allocator.allocate(sizeof(bosdyn_msgs__msg__CaptureActionId), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__CaptureActionId));
  bool success = bosdyn_msgs__msg__CaptureActionId__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__CaptureActionId__destroy(bosdyn_msgs__msg__CaptureActionId * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__CaptureActionId__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__CaptureActionId__Sequence__init(bosdyn_msgs__msg__CaptureActionId__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__CaptureActionId * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__CaptureActionId *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__CaptureActionId), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__CaptureActionId__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__CaptureActionId__fini(&data[i - 1]);
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
bosdyn_msgs__msg__CaptureActionId__Sequence__fini(bosdyn_msgs__msg__CaptureActionId__Sequence * array)
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
      bosdyn_msgs__msg__CaptureActionId__fini(&array->data[i]);
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

bosdyn_msgs__msg__CaptureActionId__Sequence *
bosdyn_msgs__msg__CaptureActionId__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__CaptureActionId__Sequence * array = (bosdyn_msgs__msg__CaptureActionId__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__CaptureActionId__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__CaptureActionId__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__CaptureActionId__Sequence__destroy(bosdyn_msgs__msg__CaptureActionId__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__CaptureActionId__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__CaptureActionId__Sequence__are_equal(const bosdyn_msgs__msg__CaptureActionId__Sequence * lhs, const bosdyn_msgs__msg__CaptureActionId__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__CaptureActionId__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__CaptureActionId__Sequence__copy(
  const bosdyn_msgs__msg__CaptureActionId__Sequence * input,
  bosdyn_msgs__msg__CaptureActionId__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__CaptureActionId);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__CaptureActionId * data =
      (bosdyn_msgs__msg__CaptureActionId *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__CaptureActionId__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__CaptureActionId__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__CaptureActionId__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
