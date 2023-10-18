// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/RequestHeader.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/request_header__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `request_timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `client_name`
#include "rosidl_runtime_c/string_functions.h"

bool
bosdyn_msgs__msg__RequestHeader__init(bosdyn_msgs__msg__RequestHeader * msg)
{
  if (!msg) {
    return false;
  }
  // request_timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->request_timestamp)) {
    bosdyn_msgs__msg__RequestHeader__fini(msg);
    return false;
  }
  // request_timestamp_is_set
  // client_name
  if (!rosidl_runtime_c__String__init(&msg->client_name)) {
    bosdyn_msgs__msg__RequestHeader__fini(msg);
    return false;
  }
  // disable_rpc_logging
  return true;
}

void
bosdyn_msgs__msg__RequestHeader__fini(bosdyn_msgs__msg__RequestHeader * msg)
{
  if (!msg) {
    return;
  }
  // request_timestamp
  builtin_interfaces__msg__Time__fini(&msg->request_timestamp);
  // request_timestamp_is_set
  // client_name
  rosidl_runtime_c__String__fini(&msg->client_name);
  // disable_rpc_logging
}

bool
bosdyn_msgs__msg__RequestHeader__are_equal(const bosdyn_msgs__msg__RequestHeader * lhs, const bosdyn_msgs__msg__RequestHeader * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // request_timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->request_timestamp), &(rhs->request_timestamp)))
  {
    return false;
  }
  // request_timestamp_is_set
  if (lhs->request_timestamp_is_set != rhs->request_timestamp_is_set) {
    return false;
  }
  // client_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->client_name), &(rhs->client_name)))
  {
    return false;
  }
  // disable_rpc_logging
  if (lhs->disable_rpc_logging != rhs->disable_rpc_logging) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__RequestHeader__copy(
  const bosdyn_msgs__msg__RequestHeader * input,
  bosdyn_msgs__msg__RequestHeader * output)
{
  if (!input || !output) {
    return false;
  }
  // request_timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->request_timestamp), &(output->request_timestamp)))
  {
    return false;
  }
  // request_timestamp_is_set
  output->request_timestamp_is_set = input->request_timestamp_is_set;
  // client_name
  if (!rosidl_runtime_c__String__copy(
      &(input->client_name), &(output->client_name)))
  {
    return false;
  }
  // disable_rpc_logging
  output->disable_rpc_logging = input->disable_rpc_logging;
  return true;
}

bosdyn_msgs__msg__RequestHeader *
bosdyn_msgs__msg__RequestHeader__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__RequestHeader * msg = (bosdyn_msgs__msg__RequestHeader *)allocator.allocate(sizeof(bosdyn_msgs__msg__RequestHeader), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__RequestHeader));
  bool success = bosdyn_msgs__msg__RequestHeader__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__RequestHeader__destroy(bosdyn_msgs__msg__RequestHeader * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__RequestHeader__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__RequestHeader__Sequence__init(bosdyn_msgs__msg__RequestHeader__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__RequestHeader * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__RequestHeader *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__RequestHeader), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__RequestHeader__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__RequestHeader__fini(&data[i - 1]);
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
bosdyn_msgs__msg__RequestHeader__Sequence__fini(bosdyn_msgs__msg__RequestHeader__Sequence * array)
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
      bosdyn_msgs__msg__RequestHeader__fini(&array->data[i]);
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

bosdyn_msgs__msg__RequestHeader__Sequence *
bosdyn_msgs__msg__RequestHeader__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__RequestHeader__Sequence * array = (bosdyn_msgs__msg__RequestHeader__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__RequestHeader__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__RequestHeader__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__RequestHeader__Sequence__destroy(bosdyn_msgs__msg__RequestHeader__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__RequestHeader__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__RequestHeader__Sequence__are_equal(const bosdyn_msgs__msg__RequestHeader__Sequence * lhs, const bosdyn_msgs__msg__RequestHeader__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__RequestHeader__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__RequestHeader__Sequence__copy(
  const bosdyn_msgs__msg__RequestHeader__Sequence * input,
  bosdyn_msgs__msg__RequestHeader__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__RequestHeader);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__RequestHeader * data =
      (bosdyn_msgs__msg__RequestHeader *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__RequestHeader__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__RequestHeader__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__RequestHeader__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
