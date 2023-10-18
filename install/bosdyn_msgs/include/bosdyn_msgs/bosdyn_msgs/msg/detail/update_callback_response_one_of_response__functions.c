// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/UpdateCallbackResponseOneOfResponse.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/update_callback_response_one_of_response__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `policy`
#include "bosdyn_msgs/msg/detail/update_callback_response_nav_policy__functions.h"
// Member `error`
#include "bosdyn_msgs/msg/detail/update_callback_response_error__functions.h"
// Member `complete`
#include "bosdyn_msgs/msg/detail/update_callback_response_complete__functions.h"

bool
bosdyn_msgs__msg__UpdateCallbackResponseOneOfResponse__init(bosdyn_msgs__msg__UpdateCallbackResponseOneOfResponse * msg)
{
  if (!msg) {
    return false;
  }
  // policy
  if (!bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy__init(&msg->policy)) {
    bosdyn_msgs__msg__UpdateCallbackResponseOneOfResponse__fini(msg);
    return false;
  }
  // error
  if (!bosdyn_msgs__msg__UpdateCallbackResponseError__init(&msg->error)) {
    bosdyn_msgs__msg__UpdateCallbackResponseOneOfResponse__fini(msg);
    return false;
  }
  // complete
  if (!bosdyn_msgs__msg__UpdateCallbackResponseComplete__init(&msg->complete)) {
    bosdyn_msgs__msg__UpdateCallbackResponseOneOfResponse__fini(msg);
    return false;
  }
  // response_choice
  return true;
}

void
bosdyn_msgs__msg__UpdateCallbackResponseOneOfResponse__fini(bosdyn_msgs__msg__UpdateCallbackResponseOneOfResponse * msg)
{
  if (!msg) {
    return;
  }
  // policy
  bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy__fini(&msg->policy);
  // error
  bosdyn_msgs__msg__UpdateCallbackResponseError__fini(&msg->error);
  // complete
  bosdyn_msgs__msg__UpdateCallbackResponseComplete__fini(&msg->complete);
  // response_choice
}

bool
bosdyn_msgs__msg__UpdateCallbackResponseOneOfResponse__are_equal(const bosdyn_msgs__msg__UpdateCallbackResponseOneOfResponse * lhs, const bosdyn_msgs__msg__UpdateCallbackResponseOneOfResponse * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // policy
  if (!bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy__are_equal(
      &(lhs->policy), &(rhs->policy)))
  {
    return false;
  }
  // error
  if (!bosdyn_msgs__msg__UpdateCallbackResponseError__are_equal(
      &(lhs->error), &(rhs->error)))
  {
    return false;
  }
  // complete
  if (!bosdyn_msgs__msg__UpdateCallbackResponseComplete__are_equal(
      &(lhs->complete), &(rhs->complete)))
  {
    return false;
  }
  // response_choice
  if (lhs->response_choice != rhs->response_choice) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__UpdateCallbackResponseOneOfResponse__copy(
  const bosdyn_msgs__msg__UpdateCallbackResponseOneOfResponse * input,
  bosdyn_msgs__msg__UpdateCallbackResponseOneOfResponse * output)
{
  if (!input || !output) {
    return false;
  }
  // policy
  if (!bosdyn_msgs__msg__UpdateCallbackResponseNavPolicy__copy(
      &(input->policy), &(output->policy)))
  {
    return false;
  }
  // error
  if (!bosdyn_msgs__msg__UpdateCallbackResponseError__copy(
      &(input->error), &(output->error)))
  {
    return false;
  }
  // complete
  if (!bosdyn_msgs__msg__UpdateCallbackResponseComplete__copy(
      &(input->complete), &(output->complete)))
  {
    return false;
  }
  // response_choice
  output->response_choice = input->response_choice;
  return true;
}

bosdyn_msgs__msg__UpdateCallbackResponseOneOfResponse *
bosdyn_msgs__msg__UpdateCallbackResponseOneOfResponse__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__UpdateCallbackResponseOneOfResponse * msg = (bosdyn_msgs__msg__UpdateCallbackResponseOneOfResponse *)allocator.allocate(sizeof(bosdyn_msgs__msg__UpdateCallbackResponseOneOfResponse), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__UpdateCallbackResponseOneOfResponse));
  bool success = bosdyn_msgs__msg__UpdateCallbackResponseOneOfResponse__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__UpdateCallbackResponseOneOfResponse__destroy(bosdyn_msgs__msg__UpdateCallbackResponseOneOfResponse * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__UpdateCallbackResponseOneOfResponse__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__UpdateCallbackResponseOneOfResponse__Sequence__init(bosdyn_msgs__msg__UpdateCallbackResponseOneOfResponse__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__UpdateCallbackResponseOneOfResponse * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__UpdateCallbackResponseOneOfResponse *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__UpdateCallbackResponseOneOfResponse), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__UpdateCallbackResponseOneOfResponse__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__UpdateCallbackResponseOneOfResponse__fini(&data[i - 1]);
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
bosdyn_msgs__msg__UpdateCallbackResponseOneOfResponse__Sequence__fini(bosdyn_msgs__msg__UpdateCallbackResponseOneOfResponse__Sequence * array)
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
      bosdyn_msgs__msg__UpdateCallbackResponseOneOfResponse__fini(&array->data[i]);
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

bosdyn_msgs__msg__UpdateCallbackResponseOneOfResponse__Sequence *
bosdyn_msgs__msg__UpdateCallbackResponseOneOfResponse__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__UpdateCallbackResponseOneOfResponse__Sequence * array = (bosdyn_msgs__msg__UpdateCallbackResponseOneOfResponse__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__UpdateCallbackResponseOneOfResponse__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__UpdateCallbackResponseOneOfResponse__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__UpdateCallbackResponseOneOfResponse__Sequence__destroy(bosdyn_msgs__msg__UpdateCallbackResponseOneOfResponse__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__UpdateCallbackResponseOneOfResponse__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__UpdateCallbackResponseOneOfResponse__Sequence__are_equal(const bosdyn_msgs__msg__UpdateCallbackResponseOneOfResponse__Sequence * lhs, const bosdyn_msgs__msg__UpdateCallbackResponseOneOfResponse__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__UpdateCallbackResponseOneOfResponse__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__UpdateCallbackResponseOneOfResponse__Sequence__copy(
  const bosdyn_msgs__msg__UpdateCallbackResponseOneOfResponse__Sequence * input,
  bosdyn_msgs__msg__UpdateCallbackResponseOneOfResponse__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__UpdateCallbackResponseOneOfResponse);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__UpdateCallbackResponseOneOfResponse * data =
      (bosdyn_msgs__msg__UpdateCallbackResponseOneOfResponse *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__UpdateCallbackResponseOneOfResponse__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__UpdateCallbackResponseOneOfResponse__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__UpdateCallbackResponseOneOfResponse__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
