// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/StoreRequest.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/store_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "bosdyn_msgs/msg/detail/request_header__functions.h"
// Member `camera`
#include "bosdyn_msgs/msg/detail/camera__functions.h"
// Member `type`
#include "bosdyn_msgs/msg/detail/logpoint_record_type__functions.h"
// Member `tag`
#include "rosidl_runtime_c/string_functions.h"

bool
bosdyn_msgs__msg__StoreRequest__init(bosdyn_msgs__msg__StoreRequest * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__RequestHeader__init(&msg->header)) {
    bosdyn_msgs__msg__StoreRequest__fini(msg);
    return false;
  }
  // header_is_set
  // camera
  if (!bosdyn_msgs__msg__Camera__init(&msg->camera)) {
    bosdyn_msgs__msg__StoreRequest__fini(msg);
    return false;
  }
  // camera_is_set
  // type
  if (!bosdyn_msgs__msg__LogpointRecordType__init(&msg->type)) {
    bosdyn_msgs__msg__StoreRequest__fini(msg);
    return false;
  }
  // tag
  if (!rosidl_runtime_c__String__init(&msg->tag)) {
    bosdyn_msgs__msg__StoreRequest__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__StoreRequest__fini(bosdyn_msgs__msg__StoreRequest * msg)
{
  if (!msg) {
    return;
  }
  // header
  bosdyn_msgs__msg__RequestHeader__fini(&msg->header);
  // header_is_set
  // camera
  bosdyn_msgs__msg__Camera__fini(&msg->camera);
  // camera_is_set
  // type
  bosdyn_msgs__msg__LogpointRecordType__fini(&msg->type);
  // tag
  rosidl_runtime_c__String__fini(&msg->tag);
}

bool
bosdyn_msgs__msg__StoreRequest__are_equal(const bosdyn_msgs__msg__StoreRequest * lhs, const bosdyn_msgs__msg__StoreRequest * rhs)
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
  // camera
  if (!bosdyn_msgs__msg__Camera__are_equal(
      &(lhs->camera), &(rhs->camera)))
  {
    return false;
  }
  // camera_is_set
  if (lhs->camera_is_set != rhs->camera_is_set) {
    return false;
  }
  // type
  if (!bosdyn_msgs__msg__LogpointRecordType__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  // tag
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->tag), &(rhs->tag)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__StoreRequest__copy(
  const bosdyn_msgs__msg__StoreRequest * input,
  bosdyn_msgs__msg__StoreRequest * output)
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
  // camera
  if (!bosdyn_msgs__msg__Camera__copy(
      &(input->camera), &(output->camera)))
  {
    return false;
  }
  // camera_is_set
  output->camera_is_set = input->camera_is_set;
  // type
  if (!bosdyn_msgs__msg__LogpointRecordType__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  // tag
  if (!rosidl_runtime_c__String__copy(
      &(input->tag), &(output->tag)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__StoreRequest *
bosdyn_msgs__msg__StoreRequest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__StoreRequest * msg = (bosdyn_msgs__msg__StoreRequest *)allocator.allocate(sizeof(bosdyn_msgs__msg__StoreRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__StoreRequest));
  bool success = bosdyn_msgs__msg__StoreRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__StoreRequest__destroy(bosdyn_msgs__msg__StoreRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__StoreRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__StoreRequest__Sequence__init(bosdyn_msgs__msg__StoreRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__StoreRequest * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__StoreRequest *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__StoreRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__StoreRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__StoreRequest__fini(&data[i - 1]);
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
bosdyn_msgs__msg__StoreRequest__Sequence__fini(bosdyn_msgs__msg__StoreRequest__Sequence * array)
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
      bosdyn_msgs__msg__StoreRequest__fini(&array->data[i]);
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

bosdyn_msgs__msg__StoreRequest__Sequence *
bosdyn_msgs__msg__StoreRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__StoreRequest__Sequence * array = (bosdyn_msgs__msg__StoreRequest__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__StoreRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__StoreRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__StoreRequest__Sequence__destroy(bosdyn_msgs__msg__StoreRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__StoreRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__StoreRequest__Sequence__are_equal(const bosdyn_msgs__msg__StoreRequest__Sequence * lhs, const bosdyn_msgs__msg__StoreRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__StoreRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__StoreRequest__Sequence__copy(
  const bosdyn_msgs__msg__StoreRequest__Sequence * input,
  bosdyn_msgs__msg__StoreRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__StoreRequest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__StoreRequest * data =
      (bosdyn_msgs__msg__StoreRequest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__StoreRequest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__StoreRequest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__StoreRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
