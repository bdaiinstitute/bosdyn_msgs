// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/EventsComments.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/events_comments__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `time_range`
#include "bosdyn_msgs/msg/detail/time_range__functions.h"
// Member `events`
#include "bosdyn_msgs/msg/detail/event__functions.h"
// Member `operator_comments`
#include "bosdyn_msgs/msg/detail/operator_comment__functions.h"

bool
bosdyn_msgs__msg__EventsComments__init(bosdyn_msgs__msg__EventsComments * msg)
{
  if (!msg) {
    return false;
  }
  // time_range
  if (!bosdyn_msgs__msg__TimeRange__init(&msg->time_range)) {
    bosdyn_msgs__msg__EventsComments__fini(msg);
    return false;
  }
  // time_range_is_set
  // events
  if (!bosdyn_msgs__msg__Event__Sequence__init(&msg->events, 0)) {
    bosdyn_msgs__msg__EventsComments__fini(msg);
    return false;
  }
  // operator_comments
  if (!bosdyn_msgs__msg__OperatorComment__Sequence__init(&msg->operator_comments, 0)) {
    bosdyn_msgs__msg__EventsComments__fini(msg);
    return false;
  }
  // events_limited
  // operator_comments_limited
  return true;
}

void
bosdyn_msgs__msg__EventsComments__fini(bosdyn_msgs__msg__EventsComments * msg)
{
  if (!msg) {
    return;
  }
  // time_range
  bosdyn_msgs__msg__TimeRange__fini(&msg->time_range);
  // time_range_is_set
  // events
  bosdyn_msgs__msg__Event__Sequence__fini(&msg->events);
  // operator_comments
  bosdyn_msgs__msg__OperatorComment__Sequence__fini(&msg->operator_comments);
  // events_limited
  // operator_comments_limited
}

bool
bosdyn_msgs__msg__EventsComments__are_equal(const bosdyn_msgs__msg__EventsComments * lhs, const bosdyn_msgs__msg__EventsComments * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // time_range
  if (!bosdyn_msgs__msg__TimeRange__are_equal(
      &(lhs->time_range), &(rhs->time_range)))
  {
    return false;
  }
  // time_range_is_set
  if (lhs->time_range_is_set != rhs->time_range_is_set) {
    return false;
  }
  // events
  if (!bosdyn_msgs__msg__Event__Sequence__are_equal(
      &(lhs->events), &(rhs->events)))
  {
    return false;
  }
  // operator_comments
  if (!bosdyn_msgs__msg__OperatorComment__Sequence__are_equal(
      &(lhs->operator_comments), &(rhs->operator_comments)))
  {
    return false;
  }
  // events_limited
  if (lhs->events_limited != rhs->events_limited) {
    return false;
  }
  // operator_comments_limited
  if (lhs->operator_comments_limited != rhs->operator_comments_limited) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__EventsComments__copy(
  const bosdyn_msgs__msg__EventsComments * input,
  bosdyn_msgs__msg__EventsComments * output)
{
  if (!input || !output) {
    return false;
  }
  // time_range
  if (!bosdyn_msgs__msg__TimeRange__copy(
      &(input->time_range), &(output->time_range)))
  {
    return false;
  }
  // time_range_is_set
  output->time_range_is_set = input->time_range_is_set;
  // events
  if (!bosdyn_msgs__msg__Event__Sequence__copy(
      &(input->events), &(output->events)))
  {
    return false;
  }
  // operator_comments
  if (!bosdyn_msgs__msg__OperatorComment__Sequence__copy(
      &(input->operator_comments), &(output->operator_comments)))
  {
    return false;
  }
  // events_limited
  output->events_limited = input->events_limited;
  // operator_comments_limited
  output->operator_comments_limited = input->operator_comments_limited;
  return true;
}

bosdyn_msgs__msg__EventsComments *
bosdyn_msgs__msg__EventsComments__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__EventsComments * msg = (bosdyn_msgs__msg__EventsComments *)allocator.allocate(sizeof(bosdyn_msgs__msg__EventsComments), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__EventsComments));
  bool success = bosdyn_msgs__msg__EventsComments__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__EventsComments__destroy(bosdyn_msgs__msg__EventsComments * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__EventsComments__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__EventsComments__Sequence__init(bosdyn_msgs__msg__EventsComments__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__EventsComments * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__EventsComments *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__EventsComments), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__EventsComments__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__EventsComments__fini(&data[i - 1]);
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
bosdyn_msgs__msg__EventsComments__Sequence__fini(bosdyn_msgs__msg__EventsComments__Sequence * array)
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
      bosdyn_msgs__msg__EventsComments__fini(&array->data[i]);
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

bosdyn_msgs__msg__EventsComments__Sequence *
bosdyn_msgs__msg__EventsComments__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__EventsComments__Sequence * array = (bosdyn_msgs__msg__EventsComments__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__EventsComments__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__EventsComments__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__EventsComments__Sequence__destroy(bosdyn_msgs__msg__EventsComments__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__EventsComments__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__EventsComments__Sequence__are_equal(const bosdyn_msgs__msg__EventsComments__Sequence * lhs, const bosdyn_msgs__msg__EventsComments__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__EventsComments__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__EventsComments__Sequence__copy(
  const bosdyn_msgs__msg__EventsComments__Sequence * input,
  bosdyn_msgs__msg__EventsComments__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__EventsComments);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__EventsComments * data =
      (bosdyn_msgs__msg__EventsComments *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__EventsComments__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__EventsComments__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__EventsComments__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
