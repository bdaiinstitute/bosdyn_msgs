// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/RemoteGrpc.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/remote_grpc__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `host`
// Member `service_name`
// Member `lease_resources`
// Member `group_name_format`
#include "rosidl_runtime_c/string_functions.h"
// Member `inputs`
#include "bosdyn_msgs/msg/detail/key_value__functions.h"
// Member `params`
#include "bosdyn_msgs/msg/detail/dict_param__functions.h"

bool
bosdyn_msgs__msg__RemoteGrpc__init(bosdyn_msgs__msg__RemoteGrpc * msg)
{
  if (!msg) {
    return false;
  }
  // host
  if (!rosidl_runtime_c__String__init(&msg->host)) {
    bosdyn_msgs__msg__RemoteGrpc__fini(msg);
    return false;
  }
  // service_name
  if (!rosidl_runtime_c__String__init(&msg->service_name)) {
    bosdyn_msgs__msg__RemoteGrpc__fini(msg);
    return false;
  }
  // timeout
  // lease_resources
  if (!rosidl_runtime_c__String__Sequence__init(&msg->lease_resources, 0)) {
    bosdyn_msgs__msg__RemoteGrpc__fini(msg);
    return false;
  }
  // inputs
  if (!bosdyn_msgs__msg__KeyValue__Sequence__init(&msg->inputs, 0)) {
    bosdyn_msgs__msg__RemoteGrpc__fini(msg);
    return false;
  }
  // group_name_format
  if (!rosidl_runtime_c__String__init(&msg->group_name_format)) {
    bosdyn_msgs__msg__RemoteGrpc__fini(msg);
    return false;
  }
  // params
  if (!bosdyn_msgs__msg__DictParam__init(&msg->params)) {
    bosdyn_msgs__msg__RemoteGrpc__fini(msg);
    return false;
  }
  // params_is_set
  return true;
}

void
bosdyn_msgs__msg__RemoteGrpc__fini(bosdyn_msgs__msg__RemoteGrpc * msg)
{
  if (!msg) {
    return;
  }
  // host
  rosidl_runtime_c__String__fini(&msg->host);
  // service_name
  rosidl_runtime_c__String__fini(&msg->service_name);
  // timeout
  // lease_resources
  rosidl_runtime_c__String__Sequence__fini(&msg->lease_resources);
  // inputs
  bosdyn_msgs__msg__KeyValue__Sequence__fini(&msg->inputs);
  // group_name_format
  rosidl_runtime_c__String__fini(&msg->group_name_format);
  // params
  bosdyn_msgs__msg__DictParam__fini(&msg->params);
  // params_is_set
}

bool
bosdyn_msgs__msg__RemoteGrpc__are_equal(const bosdyn_msgs__msg__RemoteGrpc * lhs, const bosdyn_msgs__msg__RemoteGrpc * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // host
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->host), &(rhs->host)))
  {
    return false;
  }
  // service_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->service_name), &(rhs->service_name)))
  {
    return false;
  }
  // timeout
  if (lhs->timeout != rhs->timeout) {
    return false;
  }
  // lease_resources
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->lease_resources), &(rhs->lease_resources)))
  {
    return false;
  }
  // inputs
  if (!bosdyn_msgs__msg__KeyValue__Sequence__are_equal(
      &(lhs->inputs), &(rhs->inputs)))
  {
    return false;
  }
  // group_name_format
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->group_name_format), &(rhs->group_name_format)))
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
  return true;
}

bool
bosdyn_msgs__msg__RemoteGrpc__copy(
  const bosdyn_msgs__msg__RemoteGrpc * input,
  bosdyn_msgs__msg__RemoteGrpc * output)
{
  if (!input || !output) {
    return false;
  }
  // host
  if (!rosidl_runtime_c__String__copy(
      &(input->host), &(output->host)))
  {
    return false;
  }
  // service_name
  if (!rosidl_runtime_c__String__copy(
      &(input->service_name), &(output->service_name)))
  {
    return false;
  }
  // timeout
  output->timeout = input->timeout;
  // lease_resources
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->lease_resources), &(output->lease_resources)))
  {
    return false;
  }
  // inputs
  if (!bosdyn_msgs__msg__KeyValue__Sequence__copy(
      &(input->inputs), &(output->inputs)))
  {
    return false;
  }
  // group_name_format
  if (!rosidl_runtime_c__String__copy(
      &(input->group_name_format), &(output->group_name_format)))
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
  return true;
}

bosdyn_msgs__msg__RemoteGrpc *
bosdyn_msgs__msg__RemoteGrpc__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__RemoteGrpc * msg = (bosdyn_msgs__msg__RemoteGrpc *)allocator.allocate(sizeof(bosdyn_msgs__msg__RemoteGrpc), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__RemoteGrpc));
  bool success = bosdyn_msgs__msg__RemoteGrpc__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__RemoteGrpc__destroy(bosdyn_msgs__msg__RemoteGrpc * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__RemoteGrpc__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__RemoteGrpc__Sequence__init(bosdyn_msgs__msg__RemoteGrpc__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__RemoteGrpc * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__RemoteGrpc *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__RemoteGrpc), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__RemoteGrpc__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__RemoteGrpc__fini(&data[i - 1]);
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
bosdyn_msgs__msg__RemoteGrpc__Sequence__fini(bosdyn_msgs__msg__RemoteGrpc__Sequence * array)
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
      bosdyn_msgs__msg__RemoteGrpc__fini(&array->data[i]);
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

bosdyn_msgs__msg__RemoteGrpc__Sequence *
bosdyn_msgs__msg__RemoteGrpc__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__RemoteGrpc__Sequence * array = (bosdyn_msgs__msg__RemoteGrpc__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__RemoteGrpc__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__RemoteGrpc__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__RemoteGrpc__Sequence__destroy(bosdyn_msgs__msg__RemoteGrpc__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__RemoteGrpc__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__RemoteGrpc__Sequence__are_equal(const bosdyn_msgs__msg__RemoteGrpc__Sequence * lhs, const bosdyn_msgs__msg__RemoteGrpc__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__RemoteGrpc__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__RemoteGrpc__Sequence__copy(
  const bosdyn_msgs__msg__RemoteGrpc__Sequence * input,
  bosdyn_msgs__msg__RemoteGrpc__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__RemoteGrpc);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__RemoteGrpc * data =
      (bosdyn_msgs__msg__RemoteGrpc *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__RemoteGrpc__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__RemoteGrpc__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__RemoteGrpc__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
