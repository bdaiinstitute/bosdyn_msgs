// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/SimpleParallel.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/simple_parallel__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `primary`
// Member `secondary`
#include "bosdyn_msgs/msg/detail/node__functions.h"

bool
bosdyn_msgs__msg__SimpleParallel__init(bosdyn_msgs__msg__SimpleParallel * msg)
{
  if (!msg) {
    return false;
  }
  // primary
  if (!bosdyn_msgs__msg__Node__init(&msg->primary)) {
    bosdyn_msgs__msg__SimpleParallel__fini(msg);
    return false;
  }
  // primary_is_set
  // secondary
  if (!bosdyn_msgs__msg__Node__init(&msg->secondary)) {
    bosdyn_msgs__msg__SimpleParallel__fini(msg);
    return false;
  }
  // secondary_is_set
  // run_secondary_node_once
  return true;
}

void
bosdyn_msgs__msg__SimpleParallel__fini(bosdyn_msgs__msg__SimpleParallel * msg)
{
  if (!msg) {
    return;
  }
  // primary
  bosdyn_msgs__msg__Node__fini(&msg->primary);
  // primary_is_set
  // secondary
  bosdyn_msgs__msg__Node__fini(&msg->secondary);
  // secondary_is_set
  // run_secondary_node_once
}

bool
bosdyn_msgs__msg__SimpleParallel__are_equal(const bosdyn_msgs__msg__SimpleParallel * lhs, const bosdyn_msgs__msg__SimpleParallel * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // primary
  if (!bosdyn_msgs__msg__Node__are_equal(
      &(lhs->primary), &(rhs->primary)))
  {
    return false;
  }
  // primary_is_set
  if (lhs->primary_is_set != rhs->primary_is_set) {
    return false;
  }
  // secondary
  if (!bosdyn_msgs__msg__Node__are_equal(
      &(lhs->secondary), &(rhs->secondary)))
  {
    return false;
  }
  // secondary_is_set
  if (lhs->secondary_is_set != rhs->secondary_is_set) {
    return false;
  }
  // run_secondary_node_once
  if (lhs->run_secondary_node_once != rhs->run_secondary_node_once) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__SimpleParallel__copy(
  const bosdyn_msgs__msg__SimpleParallel * input,
  bosdyn_msgs__msg__SimpleParallel * output)
{
  if (!input || !output) {
    return false;
  }
  // primary
  if (!bosdyn_msgs__msg__Node__copy(
      &(input->primary), &(output->primary)))
  {
    return false;
  }
  // primary_is_set
  output->primary_is_set = input->primary_is_set;
  // secondary
  if (!bosdyn_msgs__msg__Node__copy(
      &(input->secondary), &(output->secondary)))
  {
    return false;
  }
  // secondary_is_set
  output->secondary_is_set = input->secondary_is_set;
  // run_secondary_node_once
  output->run_secondary_node_once = input->run_secondary_node_once;
  return true;
}

bosdyn_msgs__msg__SimpleParallel *
bosdyn_msgs__msg__SimpleParallel__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__SimpleParallel * msg = (bosdyn_msgs__msg__SimpleParallel *)allocator.allocate(sizeof(bosdyn_msgs__msg__SimpleParallel), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__SimpleParallel));
  bool success = bosdyn_msgs__msg__SimpleParallel__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__SimpleParallel__destroy(bosdyn_msgs__msg__SimpleParallel * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__SimpleParallel__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__SimpleParallel__Sequence__init(bosdyn_msgs__msg__SimpleParallel__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__SimpleParallel * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__SimpleParallel *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__SimpleParallel), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__SimpleParallel__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__SimpleParallel__fini(&data[i - 1]);
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
bosdyn_msgs__msg__SimpleParallel__Sequence__fini(bosdyn_msgs__msg__SimpleParallel__Sequence * array)
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
      bosdyn_msgs__msg__SimpleParallel__fini(&array->data[i]);
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

bosdyn_msgs__msg__SimpleParallel__Sequence *
bosdyn_msgs__msg__SimpleParallel__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__SimpleParallel__Sequence * array = (bosdyn_msgs__msg__SimpleParallel__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__SimpleParallel__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__SimpleParallel__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__SimpleParallel__Sequence__destroy(bosdyn_msgs__msg__SimpleParallel__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__SimpleParallel__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__SimpleParallel__Sequence__are_equal(const bosdyn_msgs__msg__SimpleParallel__Sequence * lhs, const bosdyn_msgs__msg__SimpleParallel__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__SimpleParallel__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__SimpleParallel__Sequence__copy(
  const bosdyn_msgs__msg__SimpleParallel__Sequence * input,
  bosdyn_msgs__msg__SimpleParallel__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__SimpleParallel);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__SimpleParallel * data =
      (bosdyn_msgs__msg__SimpleParallel *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__SimpleParallel__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__SimpleParallel__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__SimpleParallel__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
