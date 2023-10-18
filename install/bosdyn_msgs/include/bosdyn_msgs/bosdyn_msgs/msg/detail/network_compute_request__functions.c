// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/NetworkComputeRequest.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/network_compute_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "bosdyn_msgs/msg/detail/request_header__functions.h"
// Member `input`
#include "bosdyn_msgs/msg/detail/network_compute_request_one_of_input__functions.h"
// Member `server_config`
#include "bosdyn_msgs/msg/detail/network_compute_server_configuration__functions.h"

bool
bosdyn_msgs__msg__NetworkComputeRequest__init(bosdyn_msgs__msg__NetworkComputeRequest * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__RequestHeader__init(&msg->header)) {
    bosdyn_msgs__msg__NetworkComputeRequest__fini(msg);
    return false;
  }
  // header_is_set
  // input
  if (!bosdyn_msgs__msg__NetworkComputeRequestOneOfInput__init(&msg->input)) {
    bosdyn_msgs__msg__NetworkComputeRequest__fini(msg);
    return false;
  }
  // server_config
  if (!bosdyn_msgs__msg__NetworkComputeServerConfiguration__init(&msg->server_config)) {
    bosdyn_msgs__msg__NetworkComputeRequest__fini(msg);
    return false;
  }
  // server_config_is_set
  return true;
}

void
bosdyn_msgs__msg__NetworkComputeRequest__fini(bosdyn_msgs__msg__NetworkComputeRequest * msg)
{
  if (!msg) {
    return;
  }
  // header
  bosdyn_msgs__msg__RequestHeader__fini(&msg->header);
  // header_is_set
  // input
  bosdyn_msgs__msg__NetworkComputeRequestOneOfInput__fini(&msg->input);
  // server_config
  bosdyn_msgs__msg__NetworkComputeServerConfiguration__fini(&msg->server_config);
  // server_config_is_set
}

bool
bosdyn_msgs__msg__NetworkComputeRequest__are_equal(const bosdyn_msgs__msg__NetworkComputeRequest * lhs, const bosdyn_msgs__msg__NetworkComputeRequest * rhs)
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
  // input
  if (!bosdyn_msgs__msg__NetworkComputeRequestOneOfInput__are_equal(
      &(lhs->input), &(rhs->input)))
  {
    return false;
  }
  // server_config
  if (!bosdyn_msgs__msg__NetworkComputeServerConfiguration__are_equal(
      &(lhs->server_config), &(rhs->server_config)))
  {
    return false;
  }
  // server_config_is_set
  if (lhs->server_config_is_set != rhs->server_config_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__NetworkComputeRequest__copy(
  const bosdyn_msgs__msg__NetworkComputeRequest * input,
  bosdyn_msgs__msg__NetworkComputeRequest * output)
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
  // input
  if (!bosdyn_msgs__msg__NetworkComputeRequestOneOfInput__copy(
      &(input->input), &(output->input)))
  {
    return false;
  }
  // server_config
  if (!bosdyn_msgs__msg__NetworkComputeServerConfiguration__copy(
      &(input->server_config), &(output->server_config)))
  {
    return false;
  }
  // server_config_is_set
  output->server_config_is_set = input->server_config_is_set;
  return true;
}

bosdyn_msgs__msg__NetworkComputeRequest *
bosdyn_msgs__msg__NetworkComputeRequest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__NetworkComputeRequest * msg = (bosdyn_msgs__msg__NetworkComputeRequest *)allocator.allocate(sizeof(bosdyn_msgs__msg__NetworkComputeRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__NetworkComputeRequest));
  bool success = bosdyn_msgs__msg__NetworkComputeRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__NetworkComputeRequest__destroy(bosdyn_msgs__msg__NetworkComputeRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__NetworkComputeRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__NetworkComputeRequest__Sequence__init(bosdyn_msgs__msg__NetworkComputeRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__NetworkComputeRequest * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__NetworkComputeRequest *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__NetworkComputeRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__NetworkComputeRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__NetworkComputeRequest__fini(&data[i - 1]);
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
bosdyn_msgs__msg__NetworkComputeRequest__Sequence__fini(bosdyn_msgs__msg__NetworkComputeRequest__Sequence * array)
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
      bosdyn_msgs__msg__NetworkComputeRequest__fini(&array->data[i]);
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

bosdyn_msgs__msg__NetworkComputeRequest__Sequence *
bosdyn_msgs__msg__NetworkComputeRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__NetworkComputeRequest__Sequence * array = (bosdyn_msgs__msg__NetworkComputeRequest__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__NetworkComputeRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__NetworkComputeRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__NetworkComputeRequest__Sequence__destroy(bosdyn_msgs__msg__NetworkComputeRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__NetworkComputeRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__NetworkComputeRequest__Sequence__are_equal(const bosdyn_msgs__msg__NetworkComputeRequest__Sequence * lhs, const bosdyn_msgs__msg__NetworkComputeRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__NetworkComputeRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__NetworkComputeRequest__Sequence__copy(
  const bosdyn_msgs__msg__NetworkComputeRequest__Sequence * input,
  bosdyn_msgs__msg__NetworkComputeRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__NetworkComputeRequest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__NetworkComputeRequest * data =
      (bosdyn_msgs__msg__NetworkComputeRequest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__NetworkComputeRequest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__NetworkComputeRequest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__NetworkComputeRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
