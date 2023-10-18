// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/NodeInfo.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/node_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `user_data`
#include "bosdyn_msgs/msg/detail/user_data__functions.h"
// Member `children`
#include "bosdyn_msgs/msg/detail/serialized_message__functions.h"

bool
bosdyn_msgs__msg__NodeInfo__init(bosdyn_msgs__msg__NodeInfo * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    bosdyn_msgs__msg__NodeInfo__fini(msg);
    return false;
  }
  // user_data
  if (!bosdyn_msgs__msg__UserData__init(&msg->user_data)) {
    bosdyn_msgs__msg__NodeInfo__fini(msg);
    return false;
  }
  // user_data_is_set
  // children
  if (!bosdyn_msgs__msg__SerializedMessage__Sequence__init(&msg->children, 0)) {
    bosdyn_msgs__msg__NodeInfo__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__NodeInfo__fini(bosdyn_msgs__msg__NodeInfo * msg)
{
  if (!msg) {
    return;
  }
  // id
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // user_data
  bosdyn_msgs__msg__UserData__fini(&msg->user_data);
  // user_data_is_set
  // children
  bosdyn_msgs__msg__SerializedMessage__Sequence__fini(&msg->children);
}

bool
bosdyn_msgs__msg__NodeInfo__are_equal(const bosdyn_msgs__msg__NodeInfo * lhs, const bosdyn_msgs__msg__NodeInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // user_data
  if (!bosdyn_msgs__msg__UserData__are_equal(
      &(lhs->user_data), &(rhs->user_data)))
  {
    return false;
  }
  // user_data_is_set
  if (lhs->user_data_is_set != rhs->user_data_is_set) {
    return false;
  }
  // children
  if (!bosdyn_msgs__msg__SerializedMessage__Sequence__are_equal(
      &(lhs->children), &(rhs->children)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__NodeInfo__copy(
  const bosdyn_msgs__msg__NodeInfo * input,
  bosdyn_msgs__msg__NodeInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // user_data
  if (!bosdyn_msgs__msg__UserData__copy(
      &(input->user_data), &(output->user_data)))
  {
    return false;
  }
  // user_data_is_set
  output->user_data_is_set = input->user_data_is_set;
  // children
  if (!bosdyn_msgs__msg__SerializedMessage__Sequence__copy(
      &(input->children), &(output->children)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__NodeInfo *
bosdyn_msgs__msg__NodeInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__NodeInfo * msg = (bosdyn_msgs__msg__NodeInfo *)allocator.allocate(sizeof(bosdyn_msgs__msg__NodeInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__NodeInfo));
  bool success = bosdyn_msgs__msg__NodeInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__NodeInfo__destroy(bosdyn_msgs__msg__NodeInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__NodeInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__NodeInfo__Sequence__init(bosdyn_msgs__msg__NodeInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__NodeInfo * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__NodeInfo *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__NodeInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__NodeInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__NodeInfo__fini(&data[i - 1]);
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
bosdyn_msgs__msg__NodeInfo__Sequence__fini(bosdyn_msgs__msg__NodeInfo__Sequence * array)
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
      bosdyn_msgs__msg__NodeInfo__fini(&array->data[i]);
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

bosdyn_msgs__msg__NodeInfo__Sequence *
bosdyn_msgs__msg__NodeInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__NodeInfo__Sequence * array = (bosdyn_msgs__msg__NodeInfo__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__NodeInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__NodeInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__NodeInfo__Sequence__destroy(bosdyn_msgs__msg__NodeInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__NodeInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__NodeInfo__Sequence__are_equal(const bosdyn_msgs__msg__NodeInfo__Sequence * lhs, const bosdyn_msgs__msg__NodeInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__NodeInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__NodeInfo__Sequence__copy(
  const bosdyn_msgs__msg__NodeInfo__Sequence * input,
  bosdyn_msgs__msg__NodeInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__NodeInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__NodeInfo * data =
      (bosdyn_msgs__msg__NodeInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__NodeInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__NodeInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__NodeInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
