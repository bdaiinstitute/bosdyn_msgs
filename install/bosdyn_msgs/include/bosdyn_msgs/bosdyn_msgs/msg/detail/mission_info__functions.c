// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/MissionInfo.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/mission_info__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `root`
#include "bosdyn_msgs/msg/detail/node_info__functions.h"

bool
bosdyn_msgs__msg__MissionInfo__init(bosdyn_msgs__msg__MissionInfo * msg)
{
  if (!msg) {
    return false;
  }
  // id
  // root
  if (!bosdyn_msgs__msg__NodeInfo__init(&msg->root)) {
    bosdyn_msgs__msg__MissionInfo__fini(msg);
    return false;
  }
  // root_is_set
  return true;
}

void
bosdyn_msgs__msg__MissionInfo__fini(bosdyn_msgs__msg__MissionInfo * msg)
{
  if (!msg) {
    return;
  }
  // id
  // root
  bosdyn_msgs__msg__NodeInfo__fini(&msg->root);
  // root_is_set
}

bool
bosdyn_msgs__msg__MissionInfo__are_equal(const bosdyn_msgs__msg__MissionInfo * lhs, const bosdyn_msgs__msg__MissionInfo * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (lhs->id != rhs->id) {
    return false;
  }
  // root
  if (!bosdyn_msgs__msg__NodeInfo__are_equal(
      &(lhs->root), &(rhs->root)))
  {
    return false;
  }
  // root_is_set
  if (lhs->root_is_set != rhs->root_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__MissionInfo__copy(
  const bosdyn_msgs__msg__MissionInfo * input,
  bosdyn_msgs__msg__MissionInfo * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  output->id = input->id;
  // root
  if (!bosdyn_msgs__msg__NodeInfo__copy(
      &(input->root), &(output->root)))
  {
    return false;
  }
  // root_is_set
  output->root_is_set = input->root_is_set;
  return true;
}

bosdyn_msgs__msg__MissionInfo *
bosdyn_msgs__msg__MissionInfo__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__MissionInfo * msg = (bosdyn_msgs__msg__MissionInfo *)allocator.allocate(sizeof(bosdyn_msgs__msg__MissionInfo), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__MissionInfo));
  bool success = bosdyn_msgs__msg__MissionInfo__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__MissionInfo__destroy(bosdyn_msgs__msg__MissionInfo * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__MissionInfo__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__MissionInfo__Sequence__init(bosdyn_msgs__msg__MissionInfo__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__MissionInfo * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__MissionInfo *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__MissionInfo), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__MissionInfo__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__MissionInfo__fini(&data[i - 1]);
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
bosdyn_msgs__msg__MissionInfo__Sequence__fini(bosdyn_msgs__msg__MissionInfo__Sequence * array)
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
      bosdyn_msgs__msg__MissionInfo__fini(&array->data[i]);
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

bosdyn_msgs__msg__MissionInfo__Sequence *
bosdyn_msgs__msg__MissionInfo__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__MissionInfo__Sequence * array = (bosdyn_msgs__msg__MissionInfo__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__MissionInfo__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__MissionInfo__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__MissionInfo__Sequence__destroy(bosdyn_msgs__msg__MissionInfo__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__MissionInfo__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__MissionInfo__Sequence__are_equal(const bosdyn_msgs__msg__MissionInfo__Sequence * lhs, const bosdyn_msgs__msg__MissionInfo__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__MissionInfo__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__MissionInfo__Sequence__copy(
  const bosdyn_msgs__msg__MissionInfo__Sequence * input,
  bosdyn_msgs__msg__MissionInfo__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__MissionInfo);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__MissionInfo * data =
      (bosdyn_msgs__msg__MissionInfo *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__MissionInfo__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__MissionInfo__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__MissionInfo__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
