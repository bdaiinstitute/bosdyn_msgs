// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/ResponseHeader.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/response_header__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `request_header`
#include "bosdyn_msgs/msg/detail/request_header__functions.h"
// Member `request_received_timestamp`
// Member `response_timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `error`
#include "bosdyn_msgs/msg/detail/common_error__functions.h"

bool
bosdyn_msgs__msg__ResponseHeader__init(bosdyn_msgs__msg__ResponseHeader * msg)
{
  if (!msg) {
    return false;
  }
  // request_header
  if (!bosdyn_msgs__msg__RequestHeader__init(&msg->request_header)) {
    bosdyn_msgs__msg__ResponseHeader__fini(msg);
    return false;
  }
  // request_header_is_set
  // request_received_timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->request_received_timestamp)) {
    bosdyn_msgs__msg__ResponseHeader__fini(msg);
    return false;
  }
  // request_received_timestamp_is_set
  // response_timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->response_timestamp)) {
    bosdyn_msgs__msg__ResponseHeader__fini(msg);
    return false;
  }
  // response_timestamp_is_set
  // error
  if (!bosdyn_msgs__msg__CommonError__init(&msg->error)) {
    bosdyn_msgs__msg__ResponseHeader__fini(msg);
    return false;
  }
  // error_is_set
  return true;
}

void
bosdyn_msgs__msg__ResponseHeader__fini(bosdyn_msgs__msg__ResponseHeader * msg)
{
  if (!msg) {
    return;
  }
  // request_header
  bosdyn_msgs__msg__RequestHeader__fini(&msg->request_header);
  // request_header_is_set
  // request_received_timestamp
  builtin_interfaces__msg__Time__fini(&msg->request_received_timestamp);
  // request_received_timestamp_is_set
  // response_timestamp
  builtin_interfaces__msg__Time__fini(&msg->response_timestamp);
  // response_timestamp_is_set
  // error
  bosdyn_msgs__msg__CommonError__fini(&msg->error);
  // error_is_set
}

bool
bosdyn_msgs__msg__ResponseHeader__are_equal(const bosdyn_msgs__msg__ResponseHeader * lhs, const bosdyn_msgs__msg__ResponseHeader * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // request_header
  if (!bosdyn_msgs__msg__RequestHeader__are_equal(
      &(lhs->request_header), &(rhs->request_header)))
  {
    return false;
  }
  // request_header_is_set
  if (lhs->request_header_is_set != rhs->request_header_is_set) {
    return false;
  }
  // request_received_timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->request_received_timestamp), &(rhs->request_received_timestamp)))
  {
    return false;
  }
  // request_received_timestamp_is_set
  if (lhs->request_received_timestamp_is_set != rhs->request_received_timestamp_is_set) {
    return false;
  }
  // response_timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->response_timestamp), &(rhs->response_timestamp)))
  {
    return false;
  }
  // response_timestamp_is_set
  if (lhs->response_timestamp_is_set != rhs->response_timestamp_is_set) {
    return false;
  }
  // error
  if (!bosdyn_msgs__msg__CommonError__are_equal(
      &(lhs->error), &(rhs->error)))
  {
    return false;
  }
  // error_is_set
  if (lhs->error_is_set != rhs->error_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__ResponseHeader__copy(
  const bosdyn_msgs__msg__ResponseHeader * input,
  bosdyn_msgs__msg__ResponseHeader * output)
{
  if (!input || !output) {
    return false;
  }
  // request_header
  if (!bosdyn_msgs__msg__RequestHeader__copy(
      &(input->request_header), &(output->request_header)))
  {
    return false;
  }
  // request_header_is_set
  output->request_header_is_set = input->request_header_is_set;
  // request_received_timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->request_received_timestamp), &(output->request_received_timestamp)))
  {
    return false;
  }
  // request_received_timestamp_is_set
  output->request_received_timestamp_is_set = input->request_received_timestamp_is_set;
  // response_timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->response_timestamp), &(output->response_timestamp)))
  {
    return false;
  }
  // response_timestamp_is_set
  output->response_timestamp_is_set = input->response_timestamp_is_set;
  // error
  if (!bosdyn_msgs__msg__CommonError__copy(
      &(input->error), &(output->error)))
  {
    return false;
  }
  // error_is_set
  output->error_is_set = input->error_is_set;
  return true;
}

bosdyn_msgs__msg__ResponseHeader *
bosdyn_msgs__msg__ResponseHeader__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ResponseHeader * msg = (bosdyn_msgs__msg__ResponseHeader *)allocator.allocate(sizeof(bosdyn_msgs__msg__ResponseHeader), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__ResponseHeader));
  bool success = bosdyn_msgs__msg__ResponseHeader__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__ResponseHeader__destroy(bosdyn_msgs__msg__ResponseHeader * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__ResponseHeader__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__ResponseHeader__Sequence__init(bosdyn_msgs__msg__ResponseHeader__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ResponseHeader * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__ResponseHeader *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__ResponseHeader), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__ResponseHeader__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__ResponseHeader__fini(&data[i - 1]);
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
bosdyn_msgs__msg__ResponseHeader__Sequence__fini(bosdyn_msgs__msg__ResponseHeader__Sequence * array)
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
      bosdyn_msgs__msg__ResponseHeader__fini(&array->data[i]);
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

bosdyn_msgs__msg__ResponseHeader__Sequence *
bosdyn_msgs__msg__ResponseHeader__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ResponseHeader__Sequence * array = (bosdyn_msgs__msg__ResponseHeader__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__ResponseHeader__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__ResponseHeader__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__ResponseHeader__Sequence__destroy(bosdyn_msgs__msg__ResponseHeader__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__ResponseHeader__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__ResponseHeader__Sequence__are_equal(const bosdyn_msgs__msg__ResponseHeader__Sequence * lhs, const bosdyn_msgs__msg__ResponseHeader__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__ResponseHeader__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__ResponseHeader__Sequence__copy(
  const bosdyn_msgs__msg__ResponseHeader__Sequence * input,
  bosdyn_msgs__msg__ResponseHeader__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__ResponseHeader);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__ResponseHeader * data =
      (bosdyn_msgs__msg__ResponseHeader *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__ResponseHeader__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__ResponseHeader__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__ResponseHeader__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
