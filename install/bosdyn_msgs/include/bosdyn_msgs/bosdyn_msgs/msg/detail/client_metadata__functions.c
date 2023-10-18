// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/ClientMetadata.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/client_metadata__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `session_name`
// Member `client_username`
// Member `client_software_version`
// Member `client_id`
// Member `client_type`
#include "rosidl_runtime_c/string_functions.h"

bool
bosdyn_msgs__msg__ClientMetadata__init(bosdyn_msgs__msg__ClientMetadata * msg)
{
  if (!msg) {
    return false;
  }
  // session_name
  if (!rosidl_runtime_c__String__init(&msg->session_name)) {
    bosdyn_msgs__msg__ClientMetadata__fini(msg);
    return false;
  }
  // client_username
  if (!rosidl_runtime_c__String__init(&msg->client_username)) {
    bosdyn_msgs__msg__ClientMetadata__fini(msg);
    return false;
  }
  // client_software_version
  if (!rosidl_runtime_c__String__init(&msg->client_software_version)) {
    bosdyn_msgs__msg__ClientMetadata__fini(msg);
    return false;
  }
  // client_id
  if (!rosidl_runtime_c__String__init(&msg->client_id)) {
    bosdyn_msgs__msg__ClientMetadata__fini(msg);
    return false;
  }
  // client_type
  if (!rosidl_runtime_c__String__init(&msg->client_type)) {
    bosdyn_msgs__msg__ClientMetadata__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__ClientMetadata__fini(bosdyn_msgs__msg__ClientMetadata * msg)
{
  if (!msg) {
    return;
  }
  // session_name
  rosidl_runtime_c__String__fini(&msg->session_name);
  // client_username
  rosidl_runtime_c__String__fini(&msg->client_username);
  // client_software_version
  rosidl_runtime_c__String__fini(&msg->client_software_version);
  // client_id
  rosidl_runtime_c__String__fini(&msg->client_id);
  // client_type
  rosidl_runtime_c__String__fini(&msg->client_type);
}

bool
bosdyn_msgs__msg__ClientMetadata__are_equal(const bosdyn_msgs__msg__ClientMetadata * lhs, const bosdyn_msgs__msg__ClientMetadata * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // session_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->session_name), &(rhs->session_name)))
  {
    return false;
  }
  // client_username
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->client_username), &(rhs->client_username)))
  {
    return false;
  }
  // client_software_version
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->client_software_version), &(rhs->client_software_version)))
  {
    return false;
  }
  // client_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->client_id), &(rhs->client_id)))
  {
    return false;
  }
  // client_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->client_type), &(rhs->client_type)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__ClientMetadata__copy(
  const bosdyn_msgs__msg__ClientMetadata * input,
  bosdyn_msgs__msg__ClientMetadata * output)
{
  if (!input || !output) {
    return false;
  }
  // session_name
  if (!rosidl_runtime_c__String__copy(
      &(input->session_name), &(output->session_name)))
  {
    return false;
  }
  // client_username
  if (!rosidl_runtime_c__String__copy(
      &(input->client_username), &(output->client_username)))
  {
    return false;
  }
  // client_software_version
  if (!rosidl_runtime_c__String__copy(
      &(input->client_software_version), &(output->client_software_version)))
  {
    return false;
  }
  // client_id
  if (!rosidl_runtime_c__String__copy(
      &(input->client_id), &(output->client_id)))
  {
    return false;
  }
  // client_type
  if (!rosidl_runtime_c__String__copy(
      &(input->client_type), &(output->client_type)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__ClientMetadata *
bosdyn_msgs__msg__ClientMetadata__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ClientMetadata * msg = (bosdyn_msgs__msg__ClientMetadata *)allocator.allocate(sizeof(bosdyn_msgs__msg__ClientMetadata), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__ClientMetadata));
  bool success = bosdyn_msgs__msg__ClientMetadata__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__ClientMetadata__destroy(bosdyn_msgs__msg__ClientMetadata * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__ClientMetadata__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__ClientMetadata__Sequence__init(bosdyn_msgs__msg__ClientMetadata__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ClientMetadata * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__ClientMetadata *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__ClientMetadata), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__ClientMetadata__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__ClientMetadata__fini(&data[i - 1]);
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
bosdyn_msgs__msg__ClientMetadata__Sequence__fini(bosdyn_msgs__msg__ClientMetadata__Sequence * array)
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
      bosdyn_msgs__msg__ClientMetadata__fini(&array->data[i]);
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

bosdyn_msgs__msg__ClientMetadata__Sequence *
bosdyn_msgs__msg__ClientMetadata__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ClientMetadata__Sequence * array = (bosdyn_msgs__msg__ClientMetadata__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__ClientMetadata__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__ClientMetadata__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__ClientMetadata__Sequence__destroy(bosdyn_msgs__msg__ClientMetadata__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__ClientMetadata__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__ClientMetadata__Sequence__are_equal(const bosdyn_msgs__msg__ClientMetadata__Sequence * lhs, const bosdyn_msgs__msg__ClientMetadata__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__ClientMetadata__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__ClientMetadata__Sequence__copy(
  const bosdyn_msgs__msg__ClientMetadata__Sequence * input,
  bosdyn_msgs__msg__ClientMetadata__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__ClientMetadata);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__ClientMetadata * data =
      (bosdyn_msgs__msg__ClientMetadata *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__ClientMetadata__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__ClientMetadata__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__ClientMetadata__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
