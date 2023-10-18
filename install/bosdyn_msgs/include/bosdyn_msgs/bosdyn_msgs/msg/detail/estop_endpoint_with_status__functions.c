// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/EstopEndpointWithStatus.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/estop_endpoint_with_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `endpoint`
#include "bosdyn_msgs/msg/detail/estop_endpoint__functions.h"
// Member `stop_level`
#include "bosdyn_msgs/msg/detail/estop_stop_level__functions.h"
// Member `time_since_valid_response`
#include "builtin_interfaces/msg/detail/duration__functions.h"

bool
bosdyn_msgs__msg__EstopEndpointWithStatus__init(bosdyn_msgs__msg__EstopEndpointWithStatus * msg)
{
  if (!msg) {
    return false;
  }
  // endpoint
  if (!bosdyn_msgs__msg__EstopEndpoint__init(&msg->endpoint)) {
    bosdyn_msgs__msg__EstopEndpointWithStatus__fini(msg);
    return false;
  }
  // endpoint_is_set
  // stop_level
  if (!bosdyn_msgs__msg__EstopStopLevel__init(&msg->stop_level)) {
    bosdyn_msgs__msg__EstopEndpointWithStatus__fini(msg);
    return false;
  }
  // time_since_valid_response
  if (!builtin_interfaces__msg__Duration__init(&msg->time_since_valid_response)) {
    bosdyn_msgs__msg__EstopEndpointWithStatus__fini(msg);
    return false;
  }
  // time_since_valid_response_is_set
  return true;
}

void
bosdyn_msgs__msg__EstopEndpointWithStatus__fini(bosdyn_msgs__msg__EstopEndpointWithStatus * msg)
{
  if (!msg) {
    return;
  }
  // endpoint
  bosdyn_msgs__msg__EstopEndpoint__fini(&msg->endpoint);
  // endpoint_is_set
  // stop_level
  bosdyn_msgs__msg__EstopStopLevel__fini(&msg->stop_level);
  // time_since_valid_response
  builtin_interfaces__msg__Duration__fini(&msg->time_since_valid_response);
  // time_since_valid_response_is_set
}

bool
bosdyn_msgs__msg__EstopEndpointWithStatus__are_equal(const bosdyn_msgs__msg__EstopEndpointWithStatus * lhs, const bosdyn_msgs__msg__EstopEndpointWithStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // endpoint
  if (!bosdyn_msgs__msg__EstopEndpoint__are_equal(
      &(lhs->endpoint), &(rhs->endpoint)))
  {
    return false;
  }
  // endpoint_is_set
  if (lhs->endpoint_is_set != rhs->endpoint_is_set) {
    return false;
  }
  // stop_level
  if (!bosdyn_msgs__msg__EstopStopLevel__are_equal(
      &(lhs->stop_level), &(rhs->stop_level)))
  {
    return false;
  }
  // time_since_valid_response
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->time_since_valid_response), &(rhs->time_since_valid_response)))
  {
    return false;
  }
  // time_since_valid_response_is_set
  if (lhs->time_since_valid_response_is_set != rhs->time_since_valid_response_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__EstopEndpointWithStatus__copy(
  const bosdyn_msgs__msg__EstopEndpointWithStatus * input,
  bosdyn_msgs__msg__EstopEndpointWithStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // endpoint
  if (!bosdyn_msgs__msg__EstopEndpoint__copy(
      &(input->endpoint), &(output->endpoint)))
  {
    return false;
  }
  // endpoint_is_set
  output->endpoint_is_set = input->endpoint_is_set;
  // stop_level
  if (!bosdyn_msgs__msg__EstopStopLevel__copy(
      &(input->stop_level), &(output->stop_level)))
  {
    return false;
  }
  // time_since_valid_response
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->time_since_valid_response), &(output->time_since_valid_response)))
  {
    return false;
  }
  // time_since_valid_response_is_set
  output->time_since_valid_response_is_set = input->time_since_valid_response_is_set;
  return true;
}

bosdyn_msgs__msg__EstopEndpointWithStatus *
bosdyn_msgs__msg__EstopEndpointWithStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__EstopEndpointWithStatus * msg = (bosdyn_msgs__msg__EstopEndpointWithStatus *)allocator.allocate(sizeof(bosdyn_msgs__msg__EstopEndpointWithStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__EstopEndpointWithStatus));
  bool success = bosdyn_msgs__msg__EstopEndpointWithStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__EstopEndpointWithStatus__destroy(bosdyn_msgs__msg__EstopEndpointWithStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__EstopEndpointWithStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__EstopEndpointWithStatus__Sequence__init(bosdyn_msgs__msg__EstopEndpointWithStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__EstopEndpointWithStatus * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__EstopEndpointWithStatus *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__EstopEndpointWithStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__EstopEndpointWithStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__EstopEndpointWithStatus__fini(&data[i - 1]);
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
bosdyn_msgs__msg__EstopEndpointWithStatus__Sequence__fini(bosdyn_msgs__msg__EstopEndpointWithStatus__Sequence * array)
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
      bosdyn_msgs__msg__EstopEndpointWithStatus__fini(&array->data[i]);
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

bosdyn_msgs__msg__EstopEndpointWithStatus__Sequence *
bosdyn_msgs__msg__EstopEndpointWithStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__EstopEndpointWithStatus__Sequence * array = (bosdyn_msgs__msg__EstopEndpointWithStatus__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__EstopEndpointWithStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__EstopEndpointWithStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__EstopEndpointWithStatus__Sequence__destroy(bosdyn_msgs__msg__EstopEndpointWithStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__EstopEndpointWithStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__EstopEndpointWithStatus__Sequence__are_equal(const bosdyn_msgs__msg__EstopEndpointWithStatus__Sequence * lhs, const bosdyn_msgs__msg__EstopEndpointWithStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__EstopEndpointWithStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__EstopEndpointWithStatus__Sequence__copy(
  const bosdyn_msgs__msg__EstopEndpointWithStatus__Sequence * input,
  bosdyn_msgs__msg__EstopEndpointWithStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__EstopEndpointWithStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__EstopEndpointWithStatus * data =
      (bosdyn_msgs__msg__EstopEndpointWithStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__EstopEndpointWithStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__EstopEndpointWithStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__EstopEndpointWithStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
