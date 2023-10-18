// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/DataIdentifier.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/data_identifier__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `action_id`
#include "bosdyn_msgs/msg/detail/capture_action_id__functions.h"
// Member `channel`
// Member `data_name`
#include "rosidl_runtime_c/string_functions.h"

bool
bosdyn_msgs__msg__DataIdentifier__init(bosdyn_msgs__msg__DataIdentifier * msg)
{
  if (!msg) {
    return false;
  }
  // action_id
  if (!bosdyn_msgs__msg__CaptureActionId__init(&msg->action_id)) {
    bosdyn_msgs__msg__DataIdentifier__fini(msg);
    return false;
  }
  // action_id_is_set
  // channel
  if (!rosidl_runtime_c__String__init(&msg->channel)) {
    bosdyn_msgs__msg__DataIdentifier__fini(msg);
    return false;
  }
  // data_name
  if (!rosidl_runtime_c__String__init(&msg->data_name)) {
    bosdyn_msgs__msg__DataIdentifier__fini(msg);
    return false;
  }
  // id
  return true;
}

void
bosdyn_msgs__msg__DataIdentifier__fini(bosdyn_msgs__msg__DataIdentifier * msg)
{
  if (!msg) {
    return;
  }
  // action_id
  bosdyn_msgs__msg__CaptureActionId__fini(&msg->action_id);
  // action_id_is_set
  // channel
  rosidl_runtime_c__String__fini(&msg->channel);
  // data_name
  rosidl_runtime_c__String__fini(&msg->data_name);
  // id
}

bool
bosdyn_msgs__msg__DataIdentifier__are_equal(const bosdyn_msgs__msg__DataIdentifier * lhs, const bosdyn_msgs__msg__DataIdentifier * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // action_id
  if (!bosdyn_msgs__msg__CaptureActionId__are_equal(
      &(lhs->action_id), &(rhs->action_id)))
  {
    return false;
  }
  // action_id_is_set
  if (lhs->action_id_is_set != rhs->action_id_is_set) {
    return false;
  }
  // channel
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->channel), &(rhs->channel)))
  {
    return false;
  }
  // data_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->data_name), &(rhs->data_name)))
  {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__DataIdentifier__copy(
  const bosdyn_msgs__msg__DataIdentifier * input,
  bosdyn_msgs__msg__DataIdentifier * output)
{
  if (!input || !output) {
    return false;
  }
  // action_id
  if (!bosdyn_msgs__msg__CaptureActionId__copy(
      &(input->action_id), &(output->action_id)))
  {
    return false;
  }
  // action_id_is_set
  output->action_id_is_set = input->action_id_is_set;
  // channel
  if (!rosidl_runtime_c__String__copy(
      &(input->channel), &(output->channel)))
  {
    return false;
  }
  // data_name
  if (!rosidl_runtime_c__String__copy(
      &(input->data_name), &(output->data_name)))
  {
    return false;
  }
  // id
  output->id = input->id;
  return true;
}

bosdyn_msgs__msg__DataIdentifier *
bosdyn_msgs__msg__DataIdentifier__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__DataIdentifier * msg = (bosdyn_msgs__msg__DataIdentifier *)allocator.allocate(sizeof(bosdyn_msgs__msg__DataIdentifier), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__DataIdentifier));
  bool success = bosdyn_msgs__msg__DataIdentifier__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__DataIdentifier__destroy(bosdyn_msgs__msg__DataIdentifier * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__DataIdentifier__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__DataIdentifier__Sequence__init(bosdyn_msgs__msg__DataIdentifier__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__DataIdentifier * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__DataIdentifier *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__DataIdentifier), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__DataIdentifier__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__DataIdentifier__fini(&data[i - 1]);
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
bosdyn_msgs__msg__DataIdentifier__Sequence__fini(bosdyn_msgs__msg__DataIdentifier__Sequence * array)
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
      bosdyn_msgs__msg__DataIdentifier__fini(&array->data[i]);
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

bosdyn_msgs__msg__DataIdentifier__Sequence *
bosdyn_msgs__msg__DataIdentifier__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__DataIdentifier__Sequence * array = (bosdyn_msgs__msg__DataIdentifier__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__DataIdentifier__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__DataIdentifier__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__DataIdentifier__Sequence__destroy(bosdyn_msgs__msg__DataIdentifier__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__DataIdentifier__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__DataIdentifier__Sequence__are_equal(const bosdyn_msgs__msg__DataIdentifier__Sequence * lhs, const bosdyn_msgs__msg__DataIdentifier__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__DataIdentifier__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__DataIdentifier__Sequence__copy(
  const bosdyn_msgs__msg__DataIdentifier__Sequence * input,
  bosdyn_msgs__msg__DataIdentifier__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__DataIdentifier);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__DataIdentifier * data =
      (bosdyn_msgs__msg__DataIdentifier *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__DataIdentifier__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__DataIdentifier__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__DataIdentifier__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
