// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/Lease.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/lease__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `resource`
// Member `epoch`
// Member `client_names`
#include "rosidl_runtime_c/string_functions.h"
// Member `sequence`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
bosdyn_msgs__msg__Lease__init(bosdyn_msgs__msg__Lease * msg)
{
  if (!msg) {
    return false;
  }
  // resource
  if (!rosidl_runtime_c__String__init(&msg->resource)) {
    bosdyn_msgs__msg__Lease__fini(msg);
    return false;
  }
  // epoch
  if (!rosidl_runtime_c__String__init(&msg->epoch)) {
    bosdyn_msgs__msg__Lease__fini(msg);
    return false;
  }
  // sequence
  if (!rosidl_runtime_c__uint32__Sequence__init(&msg->sequence, 0)) {
    bosdyn_msgs__msg__Lease__fini(msg);
    return false;
  }
  // client_names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->client_names, 0)) {
    bosdyn_msgs__msg__Lease__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__Lease__fini(bosdyn_msgs__msg__Lease * msg)
{
  if (!msg) {
    return;
  }
  // resource
  rosidl_runtime_c__String__fini(&msg->resource);
  // epoch
  rosidl_runtime_c__String__fini(&msg->epoch);
  // sequence
  rosidl_runtime_c__uint32__Sequence__fini(&msg->sequence);
  // client_names
  rosidl_runtime_c__String__Sequence__fini(&msg->client_names);
}

bool
bosdyn_msgs__msg__Lease__are_equal(const bosdyn_msgs__msg__Lease * lhs, const bosdyn_msgs__msg__Lease * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // resource
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->resource), &(rhs->resource)))
  {
    return false;
  }
  // epoch
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->epoch), &(rhs->epoch)))
  {
    return false;
  }
  // sequence
  if (!rosidl_runtime_c__uint32__Sequence__are_equal(
      &(lhs->sequence), &(rhs->sequence)))
  {
    return false;
  }
  // client_names
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->client_names), &(rhs->client_names)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__Lease__copy(
  const bosdyn_msgs__msg__Lease * input,
  bosdyn_msgs__msg__Lease * output)
{
  if (!input || !output) {
    return false;
  }
  // resource
  if (!rosidl_runtime_c__String__copy(
      &(input->resource), &(output->resource)))
  {
    return false;
  }
  // epoch
  if (!rosidl_runtime_c__String__copy(
      &(input->epoch), &(output->epoch)))
  {
    return false;
  }
  // sequence
  if (!rosidl_runtime_c__uint32__Sequence__copy(
      &(input->sequence), &(output->sequence)))
  {
    return false;
  }
  // client_names
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->client_names), &(output->client_names)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__Lease *
bosdyn_msgs__msg__Lease__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Lease * msg = (bosdyn_msgs__msg__Lease *)allocator.allocate(sizeof(bosdyn_msgs__msg__Lease), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__Lease));
  bool success = bosdyn_msgs__msg__Lease__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__Lease__destroy(bosdyn_msgs__msg__Lease * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__Lease__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__Lease__Sequence__init(bosdyn_msgs__msg__Lease__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Lease * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__Lease *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__Lease), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__Lease__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__Lease__fini(&data[i - 1]);
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
bosdyn_msgs__msg__Lease__Sequence__fini(bosdyn_msgs__msg__Lease__Sequence * array)
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
      bosdyn_msgs__msg__Lease__fini(&array->data[i]);
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

bosdyn_msgs__msg__Lease__Sequence *
bosdyn_msgs__msg__Lease__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Lease__Sequence * array = (bosdyn_msgs__msg__Lease__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__Lease__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__Lease__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__Lease__Sequence__destroy(bosdyn_msgs__msg__Lease__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__Lease__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__Lease__Sequence__are_equal(const bosdyn_msgs__msg__Lease__Sequence * lhs, const bosdyn_msgs__msg__Lease__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__Lease__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__Lease__Sequence__copy(
  const bosdyn_msgs__msg__Lease__Sequence * input,
  bosdyn_msgs__msg__Lease__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__Lease);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__Lease * data =
      (bosdyn_msgs__msg__Lease *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__Lease__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__Lease__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__Lease__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
