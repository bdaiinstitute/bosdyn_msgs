// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/AreaCallbackError.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/area_callback_error__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `service_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `error`
#include "bosdyn_msgs/msg/detail/area_callback_error_call_error__functions.h"
// Member `response_error`
#include "bosdyn_msgs/msg/detail/area_callback_error_one_of_response_error__functions.h"

bool
bosdyn_msgs__msg__AreaCallbackError__init(bosdyn_msgs__msg__AreaCallbackError * msg)
{
  if (!msg) {
    return false;
  }
  // service_name
  if (!rosidl_runtime_c__String__init(&msg->service_name)) {
    bosdyn_msgs__msg__AreaCallbackError__fini(msg);
    return false;
  }
  // error
  if (!bosdyn_msgs__msg__AreaCallbackErrorCallError__init(&msg->error)) {
    bosdyn_msgs__msg__AreaCallbackError__fini(msg);
    return false;
  }
  // response_error
  if (!bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError__init(&msg->response_error)) {
    bosdyn_msgs__msg__AreaCallbackError__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__AreaCallbackError__fini(bosdyn_msgs__msg__AreaCallbackError * msg)
{
  if (!msg) {
    return;
  }
  // service_name
  rosidl_runtime_c__String__fini(&msg->service_name);
  // error
  bosdyn_msgs__msg__AreaCallbackErrorCallError__fini(&msg->error);
  // response_error
  bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError__fini(&msg->response_error);
}

bool
bosdyn_msgs__msg__AreaCallbackError__are_equal(const bosdyn_msgs__msg__AreaCallbackError * lhs, const bosdyn_msgs__msg__AreaCallbackError * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // service_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->service_name), &(rhs->service_name)))
  {
    return false;
  }
  // error
  if (!bosdyn_msgs__msg__AreaCallbackErrorCallError__are_equal(
      &(lhs->error), &(rhs->error)))
  {
    return false;
  }
  // response_error
  if (!bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError__are_equal(
      &(lhs->response_error), &(rhs->response_error)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__AreaCallbackError__copy(
  const bosdyn_msgs__msg__AreaCallbackError * input,
  bosdyn_msgs__msg__AreaCallbackError * output)
{
  if (!input || !output) {
    return false;
  }
  // service_name
  if (!rosidl_runtime_c__String__copy(
      &(input->service_name), &(output->service_name)))
  {
    return false;
  }
  // error
  if (!bosdyn_msgs__msg__AreaCallbackErrorCallError__copy(
      &(input->error), &(output->error)))
  {
    return false;
  }
  // response_error
  if (!bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError__copy(
      &(input->response_error), &(output->response_error)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__AreaCallbackError *
bosdyn_msgs__msg__AreaCallbackError__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__AreaCallbackError * msg = (bosdyn_msgs__msg__AreaCallbackError *)allocator.allocate(sizeof(bosdyn_msgs__msg__AreaCallbackError), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__AreaCallbackError));
  bool success = bosdyn_msgs__msg__AreaCallbackError__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__AreaCallbackError__destroy(bosdyn_msgs__msg__AreaCallbackError * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__AreaCallbackError__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__AreaCallbackError__Sequence__init(bosdyn_msgs__msg__AreaCallbackError__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__AreaCallbackError * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__AreaCallbackError *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__AreaCallbackError), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__AreaCallbackError__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__AreaCallbackError__fini(&data[i - 1]);
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
bosdyn_msgs__msg__AreaCallbackError__Sequence__fini(bosdyn_msgs__msg__AreaCallbackError__Sequence * array)
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
      bosdyn_msgs__msg__AreaCallbackError__fini(&array->data[i]);
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

bosdyn_msgs__msg__AreaCallbackError__Sequence *
bosdyn_msgs__msg__AreaCallbackError__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__AreaCallbackError__Sequence * array = (bosdyn_msgs__msg__AreaCallbackError__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__AreaCallbackError__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__AreaCallbackError__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__AreaCallbackError__Sequence__destroy(bosdyn_msgs__msg__AreaCallbackError__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__AreaCallbackError__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__AreaCallbackError__Sequence__are_equal(const bosdyn_msgs__msg__AreaCallbackError__Sequence * lhs, const bosdyn_msgs__msg__AreaCallbackError__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__AreaCallbackError__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__AreaCallbackError__Sequence__copy(
  const bosdyn_msgs__msg__AreaCallbackError__Sequence * input,
  bosdyn_msgs__msg__AreaCallbackError__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__AreaCallbackError);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__AreaCallbackError * data =
      (bosdyn_msgs__msg__AreaCallbackError *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__AreaCallbackError__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__AreaCallbackError__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__AreaCallbackError__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
