// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/AreaCallbackErrorOneOfResponseError.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/area_callback_error_one_of_response_error__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `begin_callback`
#include "bosdyn_msgs/msg/detail/begin_callback_response__functions.h"
// Member `begin_control`
#include "bosdyn_msgs/msg/detail/begin_control_response__functions.h"
// Member `update_callback`
#include "bosdyn_msgs/msg/detail/update_callback_response__functions.h"
// Member `end_callback`
#include "bosdyn_msgs/msg/detail/end_callback_response__functions.h"

bool
bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError__init(bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError * msg)
{
  if (!msg) {
    return false;
  }
  // begin_callback
  if (!bosdyn_msgs__msg__BeginCallbackResponse__init(&msg->begin_callback)) {
    bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError__fini(msg);
    return false;
  }
  // begin_control
  if (!bosdyn_msgs__msg__BeginControlResponse__init(&msg->begin_control)) {
    bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError__fini(msg);
    return false;
  }
  // update_callback
  if (!bosdyn_msgs__msg__UpdateCallbackResponse__init(&msg->update_callback)) {
    bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError__fini(msg);
    return false;
  }
  // end_callback
  if (!bosdyn_msgs__msg__EndCallbackResponse__init(&msg->end_callback)) {
    bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError__fini(msg);
    return false;
  }
  // response_error_choice
  return true;
}

void
bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError__fini(bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError * msg)
{
  if (!msg) {
    return;
  }
  // begin_callback
  bosdyn_msgs__msg__BeginCallbackResponse__fini(&msg->begin_callback);
  // begin_control
  bosdyn_msgs__msg__BeginControlResponse__fini(&msg->begin_control);
  // update_callback
  bosdyn_msgs__msg__UpdateCallbackResponse__fini(&msg->update_callback);
  // end_callback
  bosdyn_msgs__msg__EndCallbackResponse__fini(&msg->end_callback);
  // response_error_choice
}

bool
bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError__are_equal(const bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError * lhs, const bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // begin_callback
  if (!bosdyn_msgs__msg__BeginCallbackResponse__are_equal(
      &(lhs->begin_callback), &(rhs->begin_callback)))
  {
    return false;
  }
  // begin_control
  if (!bosdyn_msgs__msg__BeginControlResponse__are_equal(
      &(lhs->begin_control), &(rhs->begin_control)))
  {
    return false;
  }
  // update_callback
  if (!bosdyn_msgs__msg__UpdateCallbackResponse__are_equal(
      &(lhs->update_callback), &(rhs->update_callback)))
  {
    return false;
  }
  // end_callback
  if (!bosdyn_msgs__msg__EndCallbackResponse__are_equal(
      &(lhs->end_callback), &(rhs->end_callback)))
  {
    return false;
  }
  // response_error_choice
  if (lhs->response_error_choice != rhs->response_error_choice) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError__copy(
  const bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError * input,
  bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError * output)
{
  if (!input || !output) {
    return false;
  }
  // begin_callback
  if (!bosdyn_msgs__msg__BeginCallbackResponse__copy(
      &(input->begin_callback), &(output->begin_callback)))
  {
    return false;
  }
  // begin_control
  if (!bosdyn_msgs__msg__BeginControlResponse__copy(
      &(input->begin_control), &(output->begin_control)))
  {
    return false;
  }
  // update_callback
  if (!bosdyn_msgs__msg__UpdateCallbackResponse__copy(
      &(input->update_callback), &(output->update_callback)))
  {
    return false;
  }
  // end_callback
  if (!bosdyn_msgs__msg__EndCallbackResponse__copy(
      &(input->end_callback), &(output->end_callback)))
  {
    return false;
  }
  // response_error_choice
  output->response_error_choice = input->response_error_choice;
  return true;
}

bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError *
bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError * msg = (bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError *)allocator.allocate(sizeof(bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError));
  bool success = bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError__destroy(bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError__Sequence__init(bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError__fini(&data[i - 1]);
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
bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError__Sequence__fini(bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError__Sequence * array)
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
      bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError__fini(&array->data[i]);
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

bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError__Sequence *
bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError__Sequence * array = (bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError__Sequence__destroy(bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError__Sequence__are_equal(const bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError__Sequence * lhs, const bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError__Sequence__copy(
  const bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError__Sequence * input,
  bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError * data =
      (bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
