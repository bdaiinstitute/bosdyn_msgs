// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/EstopSystemStatus.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/estop_system_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `endpoints`
#include "bosdyn_msgs/msg/detail/estop_endpoint_with_status__functions.h"
// Member `stop_level`
#include "bosdyn_msgs/msg/detail/estop_stop_level__functions.h"
// Member `stop_level_details`
#include "rosidl_runtime_c/string_functions.h"

bool
bosdyn_msgs__msg__EstopSystemStatus__init(bosdyn_msgs__msg__EstopSystemStatus * msg)
{
  if (!msg) {
    return false;
  }
  // endpoints
  if (!bosdyn_msgs__msg__EstopEndpointWithStatus__Sequence__init(&msg->endpoints, 0)) {
    bosdyn_msgs__msg__EstopSystemStatus__fini(msg);
    return false;
  }
  // stop_level
  if (!bosdyn_msgs__msg__EstopStopLevel__init(&msg->stop_level)) {
    bosdyn_msgs__msg__EstopSystemStatus__fini(msg);
    return false;
  }
  // stop_level_details
  if (!rosidl_runtime_c__String__init(&msg->stop_level_details)) {
    bosdyn_msgs__msg__EstopSystemStatus__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__EstopSystemStatus__fini(bosdyn_msgs__msg__EstopSystemStatus * msg)
{
  if (!msg) {
    return;
  }
  // endpoints
  bosdyn_msgs__msg__EstopEndpointWithStatus__Sequence__fini(&msg->endpoints);
  // stop_level
  bosdyn_msgs__msg__EstopStopLevel__fini(&msg->stop_level);
  // stop_level_details
  rosidl_runtime_c__String__fini(&msg->stop_level_details);
}

bool
bosdyn_msgs__msg__EstopSystemStatus__are_equal(const bosdyn_msgs__msg__EstopSystemStatus * lhs, const bosdyn_msgs__msg__EstopSystemStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // endpoints
  if (!bosdyn_msgs__msg__EstopEndpointWithStatus__Sequence__are_equal(
      &(lhs->endpoints), &(rhs->endpoints)))
  {
    return false;
  }
  // stop_level
  if (!bosdyn_msgs__msg__EstopStopLevel__are_equal(
      &(lhs->stop_level), &(rhs->stop_level)))
  {
    return false;
  }
  // stop_level_details
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->stop_level_details), &(rhs->stop_level_details)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__EstopSystemStatus__copy(
  const bosdyn_msgs__msg__EstopSystemStatus * input,
  bosdyn_msgs__msg__EstopSystemStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // endpoints
  if (!bosdyn_msgs__msg__EstopEndpointWithStatus__Sequence__copy(
      &(input->endpoints), &(output->endpoints)))
  {
    return false;
  }
  // stop_level
  if (!bosdyn_msgs__msg__EstopStopLevel__copy(
      &(input->stop_level), &(output->stop_level)))
  {
    return false;
  }
  // stop_level_details
  if (!rosidl_runtime_c__String__copy(
      &(input->stop_level_details), &(output->stop_level_details)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__EstopSystemStatus *
bosdyn_msgs__msg__EstopSystemStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__EstopSystemStatus * msg = (bosdyn_msgs__msg__EstopSystemStatus *)allocator.allocate(sizeof(bosdyn_msgs__msg__EstopSystemStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__EstopSystemStatus));
  bool success = bosdyn_msgs__msg__EstopSystemStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__EstopSystemStatus__destroy(bosdyn_msgs__msg__EstopSystemStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__EstopSystemStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__EstopSystemStatus__Sequence__init(bosdyn_msgs__msg__EstopSystemStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__EstopSystemStatus * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__EstopSystemStatus *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__EstopSystemStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__EstopSystemStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__EstopSystemStatus__fini(&data[i - 1]);
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
bosdyn_msgs__msg__EstopSystemStatus__Sequence__fini(bosdyn_msgs__msg__EstopSystemStatus__Sequence * array)
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
      bosdyn_msgs__msg__EstopSystemStatus__fini(&array->data[i]);
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

bosdyn_msgs__msg__EstopSystemStatus__Sequence *
bosdyn_msgs__msg__EstopSystemStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__EstopSystemStatus__Sequence * array = (bosdyn_msgs__msg__EstopSystemStatus__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__EstopSystemStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__EstopSystemStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__EstopSystemStatus__Sequence__destroy(bosdyn_msgs__msg__EstopSystemStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__EstopSystemStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__EstopSystemStatus__Sequence__are_equal(const bosdyn_msgs__msg__EstopSystemStatus__Sequence * lhs, const bosdyn_msgs__msg__EstopSystemStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__EstopSystemStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__EstopSystemStatus__Sequence__copy(
  const bosdyn_msgs__msg__EstopSystemStatus__Sequence * input,
  bosdyn_msgs__msg__EstopSystemStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__EstopSystemStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__EstopSystemStatus * data =
      (bosdyn_msgs__msg__EstopSystemStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__EstopSystemStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__EstopSystemStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__EstopSystemStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
