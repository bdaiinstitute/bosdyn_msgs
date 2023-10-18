// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/StaircaseWithLandings.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/staircase_with_landings__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `bottom_landing`
// Member `top_landing`
#include "bosdyn_msgs/msg/detail/staircase_landing__functions.h"
// Member `staircase`
#include "bosdyn_msgs/msg/detail/staircase__functions.h"

bool
bosdyn_msgs__msg__StaircaseWithLandings__init(bosdyn_msgs__msg__StaircaseWithLandings * msg)
{
  if (!msg) {
    return false;
  }
  // bottom_landing
  if (!bosdyn_msgs__msg__StaircaseLanding__init(&msg->bottom_landing)) {
    bosdyn_msgs__msg__StaircaseWithLandings__fini(msg);
    return false;
  }
  // bottom_landing_is_set
  // staircase
  if (!bosdyn_msgs__msg__Staircase__init(&msg->staircase)) {
    bosdyn_msgs__msg__StaircaseWithLandings__fini(msg);
    return false;
  }
  // staircase_is_set
  // top_landing
  if (!bosdyn_msgs__msg__StaircaseLanding__init(&msg->top_landing)) {
    bosdyn_msgs__msg__StaircaseWithLandings__fini(msg);
    return false;
  }
  // top_landing_is_set
  return true;
}

void
bosdyn_msgs__msg__StaircaseWithLandings__fini(bosdyn_msgs__msg__StaircaseWithLandings * msg)
{
  if (!msg) {
    return;
  }
  // bottom_landing
  bosdyn_msgs__msg__StaircaseLanding__fini(&msg->bottom_landing);
  // bottom_landing_is_set
  // staircase
  bosdyn_msgs__msg__Staircase__fini(&msg->staircase);
  // staircase_is_set
  // top_landing
  bosdyn_msgs__msg__StaircaseLanding__fini(&msg->top_landing);
  // top_landing_is_set
}

bool
bosdyn_msgs__msg__StaircaseWithLandings__are_equal(const bosdyn_msgs__msg__StaircaseWithLandings * lhs, const bosdyn_msgs__msg__StaircaseWithLandings * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // bottom_landing
  if (!bosdyn_msgs__msg__StaircaseLanding__are_equal(
      &(lhs->bottom_landing), &(rhs->bottom_landing)))
  {
    return false;
  }
  // bottom_landing_is_set
  if (lhs->bottom_landing_is_set != rhs->bottom_landing_is_set) {
    return false;
  }
  // staircase
  if (!bosdyn_msgs__msg__Staircase__are_equal(
      &(lhs->staircase), &(rhs->staircase)))
  {
    return false;
  }
  // staircase_is_set
  if (lhs->staircase_is_set != rhs->staircase_is_set) {
    return false;
  }
  // top_landing
  if (!bosdyn_msgs__msg__StaircaseLanding__are_equal(
      &(lhs->top_landing), &(rhs->top_landing)))
  {
    return false;
  }
  // top_landing_is_set
  if (lhs->top_landing_is_set != rhs->top_landing_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__StaircaseWithLandings__copy(
  const bosdyn_msgs__msg__StaircaseWithLandings * input,
  bosdyn_msgs__msg__StaircaseWithLandings * output)
{
  if (!input || !output) {
    return false;
  }
  // bottom_landing
  if (!bosdyn_msgs__msg__StaircaseLanding__copy(
      &(input->bottom_landing), &(output->bottom_landing)))
  {
    return false;
  }
  // bottom_landing_is_set
  output->bottom_landing_is_set = input->bottom_landing_is_set;
  // staircase
  if (!bosdyn_msgs__msg__Staircase__copy(
      &(input->staircase), &(output->staircase)))
  {
    return false;
  }
  // staircase_is_set
  output->staircase_is_set = input->staircase_is_set;
  // top_landing
  if (!bosdyn_msgs__msg__StaircaseLanding__copy(
      &(input->top_landing), &(output->top_landing)))
  {
    return false;
  }
  // top_landing_is_set
  output->top_landing_is_set = input->top_landing_is_set;
  return true;
}

bosdyn_msgs__msg__StaircaseWithLandings *
bosdyn_msgs__msg__StaircaseWithLandings__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__StaircaseWithLandings * msg = (bosdyn_msgs__msg__StaircaseWithLandings *)allocator.allocate(sizeof(bosdyn_msgs__msg__StaircaseWithLandings), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__StaircaseWithLandings));
  bool success = bosdyn_msgs__msg__StaircaseWithLandings__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__StaircaseWithLandings__destroy(bosdyn_msgs__msg__StaircaseWithLandings * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__StaircaseWithLandings__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__StaircaseWithLandings__Sequence__init(bosdyn_msgs__msg__StaircaseWithLandings__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__StaircaseWithLandings * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__StaircaseWithLandings *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__StaircaseWithLandings), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__StaircaseWithLandings__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__StaircaseWithLandings__fini(&data[i - 1]);
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
bosdyn_msgs__msg__StaircaseWithLandings__Sequence__fini(bosdyn_msgs__msg__StaircaseWithLandings__Sequence * array)
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
      bosdyn_msgs__msg__StaircaseWithLandings__fini(&array->data[i]);
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

bosdyn_msgs__msg__StaircaseWithLandings__Sequence *
bosdyn_msgs__msg__StaircaseWithLandings__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__StaircaseWithLandings__Sequence * array = (bosdyn_msgs__msg__StaircaseWithLandings__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__StaircaseWithLandings__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__StaircaseWithLandings__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__StaircaseWithLandings__Sequence__destroy(bosdyn_msgs__msg__StaircaseWithLandings__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__StaircaseWithLandings__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__StaircaseWithLandings__Sequence__are_equal(const bosdyn_msgs__msg__StaircaseWithLandings__Sequence * lhs, const bosdyn_msgs__msg__StaircaseWithLandings__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__StaircaseWithLandings__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__StaircaseWithLandings__Sequence__copy(
  const bosdyn_msgs__msg__StaircaseWithLandings__Sequence * input,
  bosdyn_msgs__msg__StaircaseWithLandings__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__StaircaseWithLandings);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__StaircaseWithLandings * data =
      (bosdyn_msgs__msg__StaircaseWithLandings *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__StaircaseWithLandings__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__StaircaseWithLandings__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__StaircaseWithLandings__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
