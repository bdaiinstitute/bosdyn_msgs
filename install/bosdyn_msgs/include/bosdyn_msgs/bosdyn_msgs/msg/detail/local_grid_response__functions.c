// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/LocalGridResponse.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/local_grid_response__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `local_grid_type_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `status`
#include "bosdyn_msgs/msg/detail/local_grid_response_status__functions.h"
// Member `local_grid`
#include "bosdyn_msgs/msg/detail/local_grid__functions.h"

bool
bosdyn_msgs__msg__LocalGridResponse__init(bosdyn_msgs__msg__LocalGridResponse * msg)
{
  if (!msg) {
    return false;
  }
  // local_grid_type_name
  if (!rosidl_runtime_c__String__init(&msg->local_grid_type_name)) {
    bosdyn_msgs__msg__LocalGridResponse__fini(msg);
    return false;
  }
  // status
  if (!bosdyn_msgs__msg__LocalGridResponseStatus__init(&msg->status)) {
    bosdyn_msgs__msg__LocalGridResponse__fini(msg);
    return false;
  }
  // local_grid
  if (!bosdyn_msgs__msg__LocalGrid__init(&msg->local_grid)) {
    bosdyn_msgs__msg__LocalGridResponse__fini(msg);
    return false;
  }
  // local_grid_is_set
  return true;
}

void
bosdyn_msgs__msg__LocalGridResponse__fini(bosdyn_msgs__msg__LocalGridResponse * msg)
{
  if (!msg) {
    return;
  }
  // local_grid_type_name
  rosidl_runtime_c__String__fini(&msg->local_grid_type_name);
  // status
  bosdyn_msgs__msg__LocalGridResponseStatus__fini(&msg->status);
  // local_grid
  bosdyn_msgs__msg__LocalGrid__fini(&msg->local_grid);
  // local_grid_is_set
}

bool
bosdyn_msgs__msg__LocalGridResponse__are_equal(const bosdyn_msgs__msg__LocalGridResponse * lhs, const bosdyn_msgs__msg__LocalGridResponse * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // local_grid_type_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->local_grid_type_name), &(rhs->local_grid_type_name)))
  {
    return false;
  }
  // status
  if (!bosdyn_msgs__msg__LocalGridResponseStatus__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  // local_grid
  if (!bosdyn_msgs__msg__LocalGrid__are_equal(
      &(lhs->local_grid), &(rhs->local_grid)))
  {
    return false;
  }
  // local_grid_is_set
  if (lhs->local_grid_is_set != rhs->local_grid_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__LocalGridResponse__copy(
  const bosdyn_msgs__msg__LocalGridResponse * input,
  bosdyn_msgs__msg__LocalGridResponse * output)
{
  if (!input || !output) {
    return false;
  }
  // local_grid_type_name
  if (!rosidl_runtime_c__String__copy(
      &(input->local_grid_type_name), &(output->local_grid_type_name)))
  {
    return false;
  }
  // status
  if (!bosdyn_msgs__msg__LocalGridResponseStatus__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  // local_grid
  if (!bosdyn_msgs__msg__LocalGrid__copy(
      &(input->local_grid), &(output->local_grid)))
  {
    return false;
  }
  // local_grid_is_set
  output->local_grid_is_set = input->local_grid_is_set;
  return true;
}

bosdyn_msgs__msg__LocalGridResponse *
bosdyn_msgs__msg__LocalGridResponse__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__LocalGridResponse * msg = (bosdyn_msgs__msg__LocalGridResponse *)allocator.allocate(sizeof(bosdyn_msgs__msg__LocalGridResponse), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__LocalGridResponse));
  bool success = bosdyn_msgs__msg__LocalGridResponse__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__LocalGridResponse__destroy(bosdyn_msgs__msg__LocalGridResponse * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__LocalGridResponse__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__LocalGridResponse__Sequence__init(bosdyn_msgs__msg__LocalGridResponse__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__LocalGridResponse * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__LocalGridResponse *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__LocalGridResponse), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__LocalGridResponse__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__LocalGridResponse__fini(&data[i - 1]);
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
bosdyn_msgs__msg__LocalGridResponse__Sequence__fini(bosdyn_msgs__msg__LocalGridResponse__Sequence * array)
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
      bosdyn_msgs__msg__LocalGridResponse__fini(&array->data[i]);
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

bosdyn_msgs__msg__LocalGridResponse__Sequence *
bosdyn_msgs__msg__LocalGridResponse__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__LocalGridResponse__Sequence * array = (bosdyn_msgs__msg__LocalGridResponse__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__LocalGridResponse__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__LocalGridResponse__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__LocalGridResponse__Sequence__destroy(bosdyn_msgs__msg__LocalGridResponse__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__LocalGridResponse__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__LocalGridResponse__Sequence__are_equal(const bosdyn_msgs__msg__LocalGridResponse__Sequence * lhs, const bosdyn_msgs__msg__LocalGridResponse__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__LocalGridResponse__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__LocalGridResponse__Sequence__copy(
  const bosdyn_msgs__msg__LocalGridResponse__Sequence * input,
  bosdyn_msgs__msg__LocalGridResponse__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__LocalGridResponse);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__LocalGridResponse * data =
      (bosdyn_msgs__msg__LocalGridResponse *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__LocalGridResponse__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__LocalGridResponse__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__LocalGridResponse__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
