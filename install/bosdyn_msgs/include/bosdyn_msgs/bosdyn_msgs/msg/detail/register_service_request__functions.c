// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/RegisterServiceRequest.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/register_service_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "bosdyn_msgs/msg/detail/request_header__functions.h"
// Member `endpoint`
#include "bosdyn_msgs/msg/detail/endpoint__functions.h"
// Member `service_entry`
#include "bosdyn_msgs/msg/detail/service_entry__functions.h"

bool
bosdyn_msgs__msg__RegisterServiceRequest__init(bosdyn_msgs__msg__RegisterServiceRequest * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__RequestHeader__init(&msg->header)) {
    bosdyn_msgs__msg__RegisterServiceRequest__fini(msg);
    return false;
  }
  // header_is_set
  // endpoint
  if (!bosdyn_msgs__msg__Endpoint__init(&msg->endpoint)) {
    bosdyn_msgs__msg__RegisterServiceRequest__fini(msg);
    return false;
  }
  // endpoint_is_set
  // service_entry
  if (!bosdyn_msgs__msg__ServiceEntry__init(&msg->service_entry)) {
    bosdyn_msgs__msg__RegisterServiceRequest__fini(msg);
    return false;
  }
  // service_entry_is_set
  return true;
}

void
bosdyn_msgs__msg__RegisterServiceRequest__fini(bosdyn_msgs__msg__RegisterServiceRequest * msg)
{
  if (!msg) {
    return;
  }
  // header
  bosdyn_msgs__msg__RequestHeader__fini(&msg->header);
  // header_is_set
  // endpoint
  bosdyn_msgs__msg__Endpoint__fini(&msg->endpoint);
  // endpoint_is_set
  // service_entry
  bosdyn_msgs__msg__ServiceEntry__fini(&msg->service_entry);
  // service_entry_is_set
}

bool
bosdyn_msgs__msg__RegisterServiceRequest__are_equal(const bosdyn_msgs__msg__RegisterServiceRequest * lhs, const bosdyn_msgs__msg__RegisterServiceRequest * rhs)
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
  if (!bosdyn_msgs__msg__Endpoint__are_equal(
      &(lhs->endpoint), &(rhs->endpoint)))
  {
    return false;
  }
  // endpoint_is_set
  if (lhs->endpoint_is_set != rhs->endpoint_is_set) {
    return false;
  }
  // service_entry
  if (!bosdyn_msgs__msg__ServiceEntry__are_equal(
      &(lhs->service_entry), &(rhs->service_entry)))
  {
    return false;
  }
  // service_entry_is_set
  if (lhs->service_entry_is_set != rhs->service_entry_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__RegisterServiceRequest__copy(
  const bosdyn_msgs__msg__RegisterServiceRequest * input,
  bosdyn_msgs__msg__RegisterServiceRequest * output)
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
  if (!bosdyn_msgs__msg__Endpoint__copy(
      &(input->endpoint), &(output->endpoint)))
  {
    return false;
  }
  // endpoint_is_set
  output->endpoint_is_set = input->endpoint_is_set;
  // service_entry
  if (!bosdyn_msgs__msg__ServiceEntry__copy(
      &(input->service_entry), &(output->service_entry)))
  {
    return false;
  }
  // service_entry_is_set
  output->service_entry_is_set = input->service_entry_is_set;
  return true;
}

bosdyn_msgs__msg__RegisterServiceRequest *
bosdyn_msgs__msg__RegisterServiceRequest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__RegisterServiceRequest * msg = (bosdyn_msgs__msg__RegisterServiceRequest *)allocator.allocate(sizeof(bosdyn_msgs__msg__RegisterServiceRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__RegisterServiceRequest));
  bool success = bosdyn_msgs__msg__RegisterServiceRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__RegisterServiceRequest__destroy(bosdyn_msgs__msg__RegisterServiceRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__RegisterServiceRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__RegisterServiceRequest__Sequence__init(bosdyn_msgs__msg__RegisterServiceRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__RegisterServiceRequest * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__RegisterServiceRequest *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__RegisterServiceRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__RegisterServiceRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__RegisterServiceRequest__fini(&data[i - 1]);
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
bosdyn_msgs__msg__RegisterServiceRequest__Sequence__fini(bosdyn_msgs__msg__RegisterServiceRequest__Sequence * array)
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
      bosdyn_msgs__msg__RegisterServiceRequest__fini(&array->data[i]);
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

bosdyn_msgs__msg__RegisterServiceRequest__Sequence *
bosdyn_msgs__msg__RegisterServiceRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__RegisterServiceRequest__Sequence * array = (bosdyn_msgs__msg__RegisterServiceRequest__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__RegisterServiceRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__RegisterServiceRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__RegisterServiceRequest__Sequence__destroy(bosdyn_msgs__msg__RegisterServiceRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__RegisterServiceRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__RegisterServiceRequest__Sequence__are_equal(const bosdyn_msgs__msg__RegisterServiceRequest__Sequence * lhs, const bosdyn_msgs__msg__RegisterServiceRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__RegisterServiceRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__RegisterServiceRequest__Sequence__copy(
  const bosdyn_msgs__msg__RegisterServiceRequest__Sequence * input,
  bosdyn_msgs__msg__RegisterServiceRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__RegisterServiceRequest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__RegisterServiceRequest * data =
      (bosdyn_msgs__msg__RegisterServiceRequest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__RegisterServiceRequest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__RegisterServiceRequest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__RegisterServiceRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
