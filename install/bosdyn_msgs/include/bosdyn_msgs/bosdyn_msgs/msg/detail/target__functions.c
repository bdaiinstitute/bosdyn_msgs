// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/Target.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/target__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `target`
#include "bosdyn_msgs/msg/detail/target_one_of_target__functions.h"
// Member `relocalize`
#include "bosdyn_msgs/msg/detail/target_relocalize__functions.h"

bool
bosdyn_msgs__msg__Target__init(bosdyn_msgs__msg__Target * msg)
{
  if (!msg) {
    return false;
  }
  // target
  if (!bosdyn_msgs__msg__TargetOneOfTarget__init(&msg->target)) {
    bosdyn_msgs__msg__Target__fini(msg);
    return false;
  }
  // relocalize
  if (!bosdyn_msgs__msg__TargetRelocalize__init(&msg->relocalize)) {
    bosdyn_msgs__msg__Target__fini(msg);
    return false;
  }
  // relocalize_is_set
  return true;
}

void
bosdyn_msgs__msg__Target__fini(bosdyn_msgs__msg__Target * msg)
{
  if (!msg) {
    return;
  }
  // target
  bosdyn_msgs__msg__TargetOneOfTarget__fini(&msg->target);
  // relocalize
  bosdyn_msgs__msg__TargetRelocalize__fini(&msg->relocalize);
  // relocalize_is_set
}

bool
bosdyn_msgs__msg__Target__are_equal(const bosdyn_msgs__msg__Target * lhs, const bosdyn_msgs__msg__Target * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // target
  if (!bosdyn_msgs__msg__TargetOneOfTarget__are_equal(
      &(lhs->target), &(rhs->target)))
  {
    return false;
  }
  // relocalize
  if (!bosdyn_msgs__msg__TargetRelocalize__are_equal(
      &(lhs->relocalize), &(rhs->relocalize)))
  {
    return false;
  }
  // relocalize_is_set
  if (lhs->relocalize_is_set != rhs->relocalize_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__Target__copy(
  const bosdyn_msgs__msg__Target * input,
  bosdyn_msgs__msg__Target * output)
{
  if (!input || !output) {
    return false;
  }
  // target
  if (!bosdyn_msgs__msg__TargetOneOfTarget__copy(
      &(input->target), &(output->target)))
  {
    return false;
  }
  // relocalize
  if (!bosdyn_msgs__msg__TargetRelocalize__copy(
      &(input->relocalize), &(output->relocalize)))
  {
    return false;
  }
  // relocalize_is_set
  output->relocalize_is_set = input->relocalize_is_set;
  return true;
}

bosdyn_msgs__msg__Target *
bosdyn_msgs__msg__Target__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Target * msg = (bosdyn_msgs__msg__Target *)allocator.allocate(sizeof(bosdyn_msgs__msg__Target), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__Target));
  bool success = bosdyn_msgs__msg__Target__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__Target__destroy(bosdyn_msgs__msg__Target * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__Target__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__Target__Sequence__init(bosdyn_msgs__msg__Target__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Target * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__Target *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__Target), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__Target__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__Target__fini(&data[i - 1]);
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
bosdyn_msgs__msg__Target__Sequence__fini(bosdyn_msgs__msg__Target__Sequence * array)
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
      bosdyn_msgs__msg__Target__fini(&array->data[i]);
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

bosdyn_msgs__msg__Target__Sequence *
bosdyn_msgs__msg__Target__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Target__Sequence * array = (bosdyn_msgs__msg__Target__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__Target__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__Target__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__Target__Sequence__destroy(bosdyn_msgs__msg__Target__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__Target__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__Target__Sequence__are_equal(const bosdyn_msgs__msg__Target__Sequence * lhs, const bosdyn_msgs__msg__Target__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__Target__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__Target__Sequence__copy(
  const bosdyn_msgs__msg__Target__Sequence * input,
  bosdyn_msgs__msg__Target__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__Target);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__Target * data =
      (bosdyn_msgs__msg__Target *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__Target__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__Target__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__Target__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
