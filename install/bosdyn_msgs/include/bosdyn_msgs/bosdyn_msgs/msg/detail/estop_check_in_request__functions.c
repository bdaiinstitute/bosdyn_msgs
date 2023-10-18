// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/EstopCheckInRequest.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/estop_check_in_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "bosdyn_msgs/msg/detail/request_header__functions.h"
// Member `endpoint`
#include "bosdyn_msgs/msg/detail/estop_endpoint__functions.h"
// Member `stop_level`
#include "bosdyn_msgs/msg/detail/estop_stop_level__functions.h"

bool
bosdyn_msgs__msg__EstopCheckInRequest__init(bosdyn_msgs__msg__EstopCheckInRequest * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__RequestHeader__init(&msg->header)) {
    bosdyn_msgs__msg__EstopCheckInRequest__fini(msg);
    return false;
  }
  // header_is_set
  // endpoint
  if (!bosdyn_msgs__msg__EstopEndpoint__init(&msg->endpoint)) {
    bosdyn_msgs__msg__EstopCheckInRequest__fini(msg);
    return false;
  }
  // endpoint_is_set
  // challenge
  // response
  // stop_level
  if (!bosdyn_msgs__msg__EstopStopLevel__init(&msg->stop_level)) {
    bosdyn_msgs__msg__EstopCheckInRequest__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__EstopCheckInRequest__fini(bosdyn_msgs__msg__EstopCheckInRequest * msg)
{
  if (!msg) {
    return;
  }
  // header
  bosdyn_msgs__msg__RequestHeader__fini(&msg->header);
  // header_is_set
  // endpoint
  bosdyn_msgs__msg__EstopEndpoint__fini(&msg->endpoint);
  // endpoint_is_set
  // challenge
  // response
  // stop_level
  bosdyn_msgs__msg__EstopStopLevel__fini(&msg->stop_level);
}

bool
bosdyn_msgs__msg__EstopCheckInRequest__are_equal(const bosdyn_msgs__msg__EstopCheckInRequest * lhs, const bosdyn_msgs__msg__EstopCheckInRequest * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__RequestHeader__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // header_is_set
  if (lhs->header_is_set != rhs->header_is_set) {
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
  // challenge
  if (lhs->challenge != rhs->challenge) {
    return false;
  }
  // response
  if (lhs->response != rhs->response) {
    return false;
  }
  // stop_level
  if (!bosdyn_msgs__msg__EstopStopLevel__are_equal(
      &(lhs->stop_level), &(rhs->stop_level)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__EstopCheckInRequest__copy(
  const bosdyn_msgs__msg__EstopCheckInRequest * input,
  bosdyn_msgs__msg__EstopCheckInRequest * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__RequestHeader__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // header_is_set
  output->header_is_set = input->header_is_set;
  // endpoint
  if (!bosdyn_msgs__msg__EstopEndpoint__copy(
      &(input->endpoint), &(output->endpoint)))
  {
    return false;
  }
  // endpoint_is_set
  output->endpoint_is_set = input->endpoint_is_set;
  // challenge
  output->challenge = input->challenge;
  // response
  output->response = input->response;
  // stop_level
  if (!bosdyn_msgs__msg__EstopStopLevel__copy(
      &(input->stop_level), &(output->stop_level)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__EstopCheckInRequest *
bosdyn_msgs__msg__EstopCheckInRequest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__EstopCheckInRequest * msg = (bosdyn_msgs__msg__EstopCheckInRequest *)allocator.allocate(sizeof(bosdyn_msgs__msg__EstopCheckInRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__EstopCheckInRequest));
  bool success = bosdyn_msgs__msg__EstopCheckInRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__EstopCheckInRequest__destroy(bosdyn_msgs__msg__EstopCheckInRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__EstopCheckInRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__EstopCheckInRequest__Sequence__init(bosdyn_msgs__msg__EstopCheckInRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__EstopCheckInRequest * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__EstopCheckInRequest *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__EstopCheckInRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__EstopCheckInRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__EstopCheckInRequest__fini(&data[i - 1]);
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
bosdyn_msgs__msg__EstopCheckInRequest__Sequence__fini(bosdyn_msgs__msg__EstopCheckInRequest__Sequence * array)
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
      bosdyn_msgs__msg__EstopCheckInRequest__fini(&array->data[i]);
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

bosdyn_msgs__msg__EstopCheckInRequest__Sequence *
bosdyn_msgs__msg__EstopCheckInRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__EstopCheckInRequest__Sequence * array = (bosdyn_msgs__msg__EstopCheckInRequest__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__EstopCheckInRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__EstopCheckInRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__EstopCheckInRequest__Sequence__destroy(bosdyn_msgs__msg__EstopCheckInRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__EstopCheckInRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__EstopCheckInRequest__Sequence__are_equal(const bosdyn_msgs__msg__EstopCheckInRequest__Sequence * lhs, const bosdyn_msgs__msg__EstopCheckInRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__EstopCheckInRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__EstopCheckInRequest__Sequence__copy(
  const bosdyn_msgs__msg__EstopCheckInRequest__Sequence * input,
  bosdyn_msgs__msg__EstopCheckInRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__EstopCheckInRequest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__EstopCheckInRequest * data =
      (bosdyn_msgs__msg__EstopCheckInRequest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__EstopCheckInRequest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__EstopCheckInRequest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__EstopCheckInRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
