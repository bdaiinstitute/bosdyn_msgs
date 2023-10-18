// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/EventsCommentsSpec.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/events_comments_spec__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `time_range`
#include "bosdyn_msgs/msg/detail/time_range__functions.h"
// Member `events`
#include "bosdyn_msgs/msg/detail/event_spec__functions.h"

bool
bosdyn_msgs__msg__EventsCommentsSpec__init(bosdyn_msgs__msg__EventsCommentsSpec * msg)
{
  if (!msg) {
    return false;
  }
  // time_range
  if (!bosdyn_msgs__msg__TimeRange__init(&msg->time_range)) {
    bosdyn_msgs__msg__EventsCommentsSpec__fini(msg);
    return false;
  }
  // time_range_is_set
  // events
  if (!bosdyn_msgs__msg__EventSpec__Sequence__init(&msg->events, 0)) {
    bosdyn_msgs__msg__EventsCommentsSpec__fini(msg);
    return false;
  }
  // comments
  // max_events
  // max_comments
  return true;
}

void
bosdyn_msgs__msg__EventsCommentsSpec__fini(bosdyn_msgs__msg__EventsCommentsSpec * msg)
{
  if (!msg) {
    return;
  }
  // time_range
  bosdyn_msgs__msg__TimeRange__fini(&msg->time_range);
  // time_range_is_set
  // events
  bosdyn_msgs__msg__EventSpec__Sequence__fini(&msg->events);
  // comments
  // max_events
  // max_comments
}

bool
bosdyn_msgs__msg__EventsCommentsSpec__are_equal(const bosdyn_msgs__msg__EventsCommentsSpec * lhs, const bosdyn_msgs__msg__EventsCommentsSpec * rhs)
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
  if (!bosdyn_msgs__msg__EventSpec__Sequence__are_equal(
      &(lhs->events), &(rhs->events)))
  {
    return false;
  }
  // comments
  if (lhs->comments != rhs->comments) {
    return false;
  }
  // max_events
  if (lhs->max_events != rhs->max_events) {
    return false;
  }
  // max_comments
  if (lhs->max_comments != rhs->max_comments) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__EventsCommentsSpec__copy(
  const bosdyn_msgs__msg__EventsCommentsSpec * input,
  bosdyn_msgs__msg__EventsCommentsSpec * output)
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
  if (!bosdyn_msgs__msg__EventSpec__Sequence__copy(
      &(input->events), &(output->events)))
  {
    return false;
  }
  // comments
  output->comments = input->comments;
  // max_events
  output->max_events = input->max_events;
  // max_comments
  output->max_comments = input->max_comments;
  return true;
}

bosdyn_msgs__msg__EventsCommentsSpec *
bosdyn_msgs__msg__EventsCommentsSpec__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__EventsCommentsSpec * msg = (bosdyn_msgs__msg__EventsCommentsSpec *)allocator.allocate(sizeof(bosdyn_msgs__msg__EventsCommentsSpec), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__EventsCommentsSpec));
  bool success = bosdyn_msgs__msg__EventsCommentsSpec__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__EventsCommentsSpec__destroy(bosdyn_msgs__msg__EventsCommentsSpec * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__EventsCommentsSpec__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__EventsCommentsSpec__Sequence__init(bosdyn_msgs__msg__EventsCommentsSpec__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__EventsCommentsSpec * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__EventsCommentsSpec *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__EventsCommentsSpec), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__EventsCommentsSpec__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__EventsCommentsSpec__fini(&data[i - 1]);
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
bosdyn_msgs__msg__EventsCommentsSpec__Sequence__fini(bosdyn_msgs__msg__EventsCommentsSpec__Sequence * array)
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
      bosdyn_msgs__msg__EventsCommentsSpec__fini(&array->data[i]);
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

bosdyn_msgs__msg__EventsCommentsSpec__Sequence *
bosdyn_msgs__msg__EventsCommentsSpec__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__EventsCommentsSpec__Sequence * array = (bosdyn_msgs__msg__EventsCommentsSpec__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__EventsCommentsSpec__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__EventsCommentsSpec__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__EventsCommentsSpec__Sequence__destroy(bosdyn_msgs__msg__EventsCommentsSpec__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__EventsCommentsSpec__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__EventsCommentsSpec__Sequence__are_equal(const bosdyn_msgs__msg__EventsCommentsSpec__Sequence * lhs, const bosdyn_msgs__msg__EventsCommentsSpec__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__EventsCommentsSpec__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__EventsCommentsSpec__Sequence__copy(
  const bosdyn_msgs__msg__EventsCommentsSpec__Sequence * input,
  bosdyn_msgs__msg__EventsCommentsSpec__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__EventsCommentsSpec);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__EventsCommentsSpec * data =
      (bosdyn_msgs__msg__EventsCommentsSpec *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__EventsCommentsSpec__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__EventsCommentsSpec__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__EventsCommentsSpec__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
