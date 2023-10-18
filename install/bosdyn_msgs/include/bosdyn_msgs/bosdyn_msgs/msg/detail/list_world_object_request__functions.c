// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/ListWorldObjectRequest.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/list_world_object_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "bosdyn_msgs/msg/detail/request_header__functions.h"
// Member `object_type`
#include "bosdyn_msgs/msg/detail/world_object_type__functions.h"
// Member `timestamp_filter`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
bosdyn_msgs__msg__ListWorldObjectRequest__init(bosdyn_msgs__msg__ListWorldObjectRequest * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__RequestHeader__init(&msg->header)) {
    bosdyn_msgs__msg__ListWorldObjectRequest__fini(msg);
    return false;
  }
  // header_is_set
  // object_type
  if (!bosdyn_msgs__msg__WorldObjectType__Sequence__init(&msg->object_type, 0)) {
    bosdyn_msgs__msg__ListWorldObjectRequest__fini(msg);
    return false;
  }
  // timestamp_filter
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp_filter)) {
    bosdyn_msgs__msg__ListWorldObjectRequest__fini(msg);
    return false;
  }
  // timestamp_filter_is_set
  return true;
}

void
bosdyn_msgs__msg__ListWorldObjectRequest__fini(bosdyn_msgs__msg__ListWorldObjectRequest * msg)
{
  if (!msg) {
    return;
  }
  // header
  bosdyn_msgs__msg__RequestHeader__fini(&msg->header);
  // header_is_set
  // object_type
  bosdyn_msgs__msg__WorldObjectType__Sequence__fini(&msg->object_type);
  // timestamp_filter
  builtin_interfaces__msg__Time__fini(&msg->timestamp_filter);
  // timestamp_filter_is_set
}

bool
bosdyn_msgs__msg__ListWorldObjectRequest__are_equal(const bosdyn_msgs__msg__ListWorldObjectRequest * lhs, const bosdyn_msgs__msg__ListWorldObjectRequest * rhs)
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
  // object_type
  if (!bosdyn_msgs__msg__WorldObjectType__Sequence__are_equal(
      &(lhs->object_type), &(rhs->object_type)))
  {
    return false;
  }
  // timestamp_filter
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->timestamp_filter), &(rhs->timestamp_filter)))
  {
    return false;
  }
  // timestamp_filter_is_set
  if (lhs->timestamp_filter_is_set != rhs->timestamp_filter_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__ListWorldObjectRequest__copy(
  const bosdyn_msgs__msg__ListWorldObjectRequest * input,
  bosdyn_msgs__msg__ListWorldObjectRequest * output)
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
  // object_type
  if (!bosdyn_msgs__msg__WorldObjectType__Sequence__copy(
      &(input->object_type), &(output->object_type)))
  {
    return false;
  }
  // timestamp_filter
  if (!builtin_interfaces__msg__Time__copy(
      &(input->timestamp_filter), &(output->timestamp_filter)))
  {
    return false;
  }
  // timestamp_filter_is_set
  output->timestamp_filter_is_set = input->timestamp_filter_is_set;
  return true;
}

bosdyn_msgs__msg__ListWorldObjectRequest *
bosdyn_msgs__msg__ListWorldObjectRequest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ListWorldObjectRequest * msg = (bosdyn_msgs__msg__ListWorldObjectRequest *)allocator.allocate(sizeof(bosdyn_msgs__msg__ListWorldObjectRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__ListWorldObjectRequest));
  bool success = bosdyn_msgs__msg__ListWorldObjectRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__ListWorldObjectRequest__destroy(bosdyn_msgs__msg__ListWorldObjectRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__ListWorldObjectRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__ListWorldObjectRequest__Sequence__init(bosdyn_msgs__msg__ListWorldObjectRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ListWorldObjectRequest * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__ListWorldObjectRequest *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__ListWorldObjectRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__ListWorldObjectRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__ListWorldObjectRequest__fini(&data[i - 1]);
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
bosdyn_msgs__msg__ListWorldObjectRequest__Sequence__fini(bosdyn_msgs__msg__ListWorldObjectRequest__Sequence * array)
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
      bosdyn_msgs__msg__ListWorldObjectRequest__fini(&array->data[i]);
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

bosdyn_msgs__msg__ListWorldObjectRequest__Sequence *
bosdyn_msgs__msg__ListWorldObjectRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ListWorldObjectRequest__Sequence * array = (bosdyn_msgs__msg__ListWorldObjectRequest__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__ListWorldObjectRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__ListWorldObjectRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__ListWorldObjectRequest__Sequence__destroy(bosdyn_msgs__msg__ListWorldObjectRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__ListWorldObjectRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__ListWorldObjectRequest__Sequence__are_equal(const bosdyn_msgs__msg__ListWorldObjectRequest__Sequence * lhs, const bosdyn_msgs__msg__ListWorldObjectRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__ListWorldObjectRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__ListWorldObjectRequest__Sequence__copy(
  const bosdyn_msgs__msg__ListWorldObjectRequest__Sequence * input,
  bosdyn_msgs__msg__ListWorldObjectRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__ListWorldObjectRequest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__ListWorldObjectRequest * data =
      (bosdyn_msgs__msg__ListWorldObjectRequest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__ListWorldObjectRequest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__ListWorldObjectRequest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__ListWorldObjectRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
