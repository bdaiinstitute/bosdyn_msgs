// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/UpdateCallbackResponseError.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/update_callback_response_error__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `error`
#include "bosdyn_msgs/msg/detail/update_callback_response_error_error_type__functions.h"
// Member `lease_use_results`
#include "bosdyn_msgs/msg/detail/lease_use_result__functions.h"

bool
bosdyn_msgs__msg__UpdateCallbackResponseError__init(bosdyn_msgs__msg__UpdateCallbackResponseError * msg)
{
  if (!msg) {
    return false;
  }
  // error
  if (!bosdyn_msgs__msg__UpdateCallbackResponseErrorErrorType__init(&msg->error)) {
    bosdyn_msgs__msg__UpdateCallbackResponseError__fini(msg);
    return false;
  }
  // lease_use_results
  if (!bosdyn_msgs__msg__LeaseUseResult__Sequence__init(&msg->lease_use_results, 0)) {
    bosdyn_msgs__msg__UpdateCallbackResponseError__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__UpdateCallbackResponseError__fini(bosdyn_msgs__msg__UpdateCallbackResponseError * msg)
{
  if (!msg) {
    return;
  }
  // error
  bosdyn_msgs__msg__UpdateCallbackResponseErrorErrorType__fini(&msg->error);
  // lease_use_results
  bosdyn_msgs__msg__LeaseUseResult__Sequence__fini(&msg->lease_use_results);
}

bool
bosdyn_msgs__msg__UpdateCallbackResponseError__are_equal(const bosdyn_msgs__msg__UpdateCallbackResponseError * lhs, const bosdyn_msgs__msg__UpdateCallbackResponseError * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // error
  if (!bosdyn_msgs__msg__UpdateCallbackResponseErrorErrorType__are_equal(
      &(lhs->error), &(rhs->error)))
  {
    return false;
  }
  // lease_use_results
  if (!bosdyn_msgs__msg__LeaseUseResult__Sequence__are_equal(
      &(lhs->lease_use_results), &(rhs->lease_use_results)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__UpdateCallbackResponseError__copy(
  const bosdyn_msgs__msg__UpdateCallbackResponseError * input,
  bosdyn_msgs__msg__UpdateCallbackResponseError * output)
{
  if (!input || !output) {
    return false;
  }
  // error
  if (!bosdyn_msgs__msg__UpdateCallbackResponseErrorErrorType__copy(
      &(input->error), &(output->error)))
  {
    return false;
  }
  // lease_use_results
  if (!bosdyn_msgs__msg__LeaseUseResult__Sequence__copy(
      &(input->lease_use_results), &(output->lease_use_results)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__UpdateCallbackResponseError *
bosdyn_msgs__msg__UpdateCallbackResponseError__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__UpdateCallbackResponseError * msg = (bosdyn_msgs__msg__UpdateCallbackResponseError *)allocator.allocate(sizeof(bosdyn_msgs__msg__UpdateCallbackResponseError), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__UpdateCallbackResponseError));
  bool success = bosdyn_msgs__msg__UpdateCallbackResponseError__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__UpdateCallbackResponseError__destroy(bosdyn_msgs__msg__UpdateCallbackResponseError * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__UpdateCallbackResponseError__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__UpdateCallbackResponseError__Sequence__init(bosdyn_msgs__msg__UpdateCallbackResponseError__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__UpdateCallbackResponseError * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__UpdateCallbackResponseError *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__UpdateCallbackResponseError), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__UpdateCallbackResponseError__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__UpdateCallbackResponseError__fini(&data[i - 1]);
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
bosdyn_msgs__msg__UpdateCallbackResponseError__Sequence__fini(bosdyn_msgs__msg__UpdateCallbackResponseError__Sequence * array)
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
      bosdyn_msgs__msg__UpdateCallbackResponseError__fini(&array->data[i]);
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

bosdyn_msgs__msg__UpdateCallbackResponseError__Sequence *
bosdyn_msgs__msg__UpdateCallbackResponseError__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__UpdateCallbackResponseError__Sequence * array = (bosdyn_msgs__msg__UpdateCallbackResponseError__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__UpdateCallbackResponseError__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__UpdateCallbackResponseError__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__UpdateCallbackResponseError__Sequence__destroy(bosdyn_msgs__msg__UpdateCallbackResponseError__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__UpdateCallbackResponseError__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__UpdateCallbackResponseError__Sequence__are_equal(const bosdyn_msgs__msg__UpdateCallbackResponseError__Sequence * lhs, const bosdyn_msgs__msg__UpdateCallbackResponseError__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__UpdateCallbackResponseError__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__UpdateCallbackResponseError__Sequence__copy(
  const bosdyn_msgs__msg__UpdateCallbackResponseError__Sequence * input,
  bosdyn_msgs__msg__UpdateCallbackResponseError__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__UpdateCallbackResponseError);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__UpdateCallbackResponseError * data =
      (bosdyn_msgs__msg__UpdateCallbackResponseError *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__UpdateCallbackResponseError__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__UpdateCallbackResponseError__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__UpdateCallbackResponseError__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
