// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/TickRequest.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/tick_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "bosdyn_msgs/msg/detail/request_header__functions.h"
// Member `session_id`
// Member `group_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `leases`
#include "bosdyn_msgs/msg/detail/lease__functions.h"
// Member `inputs`
#include "bosdyn_msgs/msg/detail/key_value__functions.h"
// Member `params`
#include "bosdyn_msgs/msg/detail/dict_param__functions.h"

bool
bosdyn_msgs__msg__TickRequest__init(bosdyn_msgs__msg__TickRequest * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__RequestHeader__init(&msg->header)) {
    bosdyn_msgs__msg__TickRequest__fini(msg);
    return false;
  }
  // header_is_set
  // session_id
  if (!rosidl_runtime_c__String__init(&msg->session_id)) {
    bosdyn_msgs__msg__TickRequest__fini(msg);
    return false;
  }
  // leases
  if (!bosdyn_msgs__msg__Lease__Sequence__init(&msg->leases, 0)) {
    bosdyn_msgs__msg__TickRequest__fini(msg);
    return false;
  }
  // inputs
  if (!bosdyn_msgs__msg__KeyValue__Sequence__init(&msg->inputs, 0)) {
    bosdyn_msgs__msg__TickRequest__fini(msg);
    return false;
  }
  // params
  if (!bosdyn_msgs__msg__DictParam__init(&msg->params)) {
    bosdyn_msgs__msg__TickRequest__fini(msg);
    return false;
  }
  // params_is_set
  // group_name
  if (!rosidl_runtime_c__String__init(&msg->group_name)) {
    bosdyn_msgs__msg__TickRequest__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__TickRequest__fini(bosdyn_msgs__msg__TickRequest * msg)
{
  if (!msg) {
    return;
  }
  // header
  bosdyn_msgs__msg__RequestHeader__fini(&msg->header);
  // header_is_set
  // session_id
  rosidl_runtime_c__String__fini(&msg->session_id);
  // leases
  bosdyn_msgs__msg__Lease__Sequence__fini(&msg->leases);
  // inputs
  bosdyn_msgs__msg__KeyValue__Sequence__fini(&msg->inputs);
  // params
  bosdyn_msgs__msg__DictParam__fini(&msg->params);
  // params_is_set
  // group_name
  rosidl_runtime_c__String__fini(&msg->group_name);
}

bool
bosdyn_msgs__msg__TickRequest__are_equal(const bosdyn_msgs__msg__TickRequest * lhs, const bosdyn_msgs__msg__TickRequest * rhs)
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
  // session_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->session_id), &(rhs->session_id)))
  {
    return false;
  }
  // leases
  if (!bosdyn_msgs__msg__Lease__Sequence__are_equal(
      &(lhs->leases), &(rhs->leases)))
  {
    return false;
  }
  // inputs
  if (!bosdyn_msgs__msg__KeyValue__Sequence__are_equal(
      &(lhs->inputs), &(rhs->inputs)))
  {
    return false;
  }
  // params
  if (!bosdyn_msgs__msg__DictParam__are_equal(
      &(lhs->params), &(rhs->params)))
  {
    return false;
  }
  // params_is_set
  if (lhs->params_is_set != rhs->params_is_set) {
    return false;
  }
  // group_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->group_name), &(rhs->group_name)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__TickRequest__copy(
  const bosdyn_msgs__msg__TickRequest * input,
  bosdyn_msgs__msg__TickRequest * output)
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
  // session_id
  if (!rosidl_runtime_c__String__copy(
      &(input->session_id), &(output->session_id)))
  {
    return false;
  }
  // leases
  if (!bosdyn_msgs__msg__Lease__Sequence__copy(
      &(input->leases), &(output->leases)))
  {
    return false;
  }
  // inputs
  if (!bosdyn_msgs__msg__KeyValue__Sequence__copy(
      &(input->inputs), &(output->inputs)))
  {
    return false;
  }
  // params
  if (!bosdyn_msgs__msg__DictParam__copy(
      &(input->params), &(output->params)))
  {
    return false;
  }
  // params_is_set
  output->params_is_set = input->params_is_set;
  // group_name
  if (!rosidl_runtime_c__String__copy(
      &(input->group_name), &(output->group_name)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__TickRequest *
bosdyn_msgs__msg__TickRequest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__TickRequest * msg = (bosdyn_msgs__msg__TickRequest *)allocator.allocate(sizeof(bosdyn_msgs__msg__TickRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__TickRequest));
  bool success = bosdyn_msgs__msg__TickRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__TickRequest__destroy(bosdyn_msgs__msg__TickRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__TickRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__TickRequest__Sequence__init(bosdyn_msgs__msg__TickRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__TickRequest * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__TickRequest *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__TickRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__TickRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__TickRequest__fini(&data[i - 1]);
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
bosdyn_msgs__msg__TickRequest__Sequence__fini(bosdyn_msgs__msg__TickRequest__Sequence * array)
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
      bosdyn_msgs__msg__TickRequest__fini(&array->data[i]);
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

bosdyn_msgs__msg__TickRequest__Sequence *
bosdyn_msgs__msg__TickRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__TickRequest__Sequence * array = (bosdyn_msgs__msg__TickRequest__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__TickRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__TickRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__TickRequest__Sequence__destroy(bosdyn_msgs__msg__TickRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__TickRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__TickRequest__Sequence__are_equal(const bosdyn_msgs__msg__TickRequest__Sequence * lhs, const bosdyn_msgs__msg__TickRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__TickRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__TickRequest__Sequence__copy(
  const bosdyn_msgs__msg__TickRequest__Sequence * input,
  bosdyn_msgs__msg__TickRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__TickRequest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__TickRequest * data =
      (bosdyn_msgs__msg__TickRequest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__TickRequest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__TickRequest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__TickRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
