// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/RecordingEnvironment.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/recording_environment__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name_prefix`
#include "rosidl_runtime_c/string_functions.h"
// Member `waypoint_environment`
#include "bosdyn_msgs/msg/detail/waypoint_annotations__functions.h"
// Member `edge_environment`
#include "bosdyn_msgs/msg/detail/edge_annotations__functions.h"

bool
bosdyn_msgs__msg__RecordingEnvironment__init(bosdyn_msgs__msg__RecordingEnvironment * msg)
{
  if (!msg) {
    return false;
  }
  // name_prefix
  if (!rosidl_runtime_c__String__init(&msg->name_prefix)) {
    bosdyn_msgs__msg__RecordingEnvironment__fini(msg);
    return false;
  }
  // waypoint_environment
  if (!bosdyn_msgs__msg__WaypointAnnotations__init(&msg->waypoint_environment)) {
    bosdyn_msgs__msg__RecordingEnvironment__fini(msg);
    return false;
  }
  // waypoint_environment_is_set
  // edge_environment
  if (!bosdyn_msgs__msg__EdgeAnnotations__init(&msg->edge_environment)) {
    bosdyn_msgs__msg__RecordingEnvironment__fini(msg);
    return false;
  }
  // edge_environment_is_set
  return true;
}

void
bosdyn_msgs__msg__RecordingEnvironment__fini(bosdyn_msgs__msg__RecordingEnvironment * msg)
{
  if (!msg) {
    return;
  }
  // name_prefix
  rosidl_runtime_c__String__fini(&msg->name_prefix);
  // waypoint_environment
  bosdyn_msgs__msg__WaypointAnnotations__fini(&msg->waypoint_environment);
  // waypoint_environment_is_set
  // edge_environment
  bosdyn_msgs__msg__EdgeAnnotations__fini(&msg->edge_environment);
  // edge_environment_is_set
}

bool
bosdyn_msgs__msg__RecordingEnvironment__are_equal(const bosdyn_msgs__msg__RecordingEnvironment * lhs, const bosdyn_msgs__msg__RecordingEnvironment * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name_prefix
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name_prefix), &(rhs->name_prefix)))
  {
    return false;
  }
  // waypoint_environment
  if (!bosdyn_msgs__msg__WaypointAnnotations__are_equal(
      &(lhs->waypoint_environment), &(rhs->waypoint_environment)))
  {
    return false;
  }
  // waypoint_environment_is_set
  if (lhs->waypoint_environment_is_set != rhs->waypoint_environment_is_set) {
    return false;
  }
  // edge_environment
  if (!bosdyn_msgs__msg__EdgeAnnotations__are_equal(
      &(lhs->edge_environment), &(rhs->edge_environment)))
  {
    return false;
  }
  // edge_environment_is_set
  if (lhs->edge_environment_is_set != rhs->edge_environment_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__RecordingEnvironment__copy(
  const bosdyn_msgs__msg__RecordingEnvironment * input,
  bosdyn_msgs__msg__RecordingEnvironment * output)
{
  if (!input || !output) {
    return false;
  }
  // name_prefix
  if (!rosidl_runtime_c__String__copy(
      &(input->name_prefix), &(output->name_prefix)))
  {
    return false;
  }
  // waypoint_environment
  if (!bosdyn_msgs__msg__WaypointAnnotations__copy(
      &(input->waypoint_environment), &(output->waypoint_environment)))
  {
    return false;
  }
  // waypoint_environment_is_set
  output->waypoint_environment_is_set = input->waypoint_environment_is_set;
  // edge_environment
  if (!bosdyn_msgs__msg__EdgeAnnotations__copy(
      &(input->edge_environment), &(output->edge_environment)))
  {
    return false;
  }
  // edge_environment_is_set
  output->edge_environment_is_set = input->edge_environment_is_set;
  return true;
}

bosdyn_msgs__msg__RecordingEnvironment *
bosdyn_msgs__msg__RecordingEnvironment__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__RecordingEnvironment * msg = (bosdyn_msgs__msg__RecordingEnvironment *)allocator.allocate(sizeof(bosdyn_msgs__msg__RecordingEnvironment), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__RecordingEnvironment));
  bool success = bosdyn_msgs__msg__RecordingEnvironment__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__RecordingEnvironment__destroy(bosdyn_msgs__msg__RecordingEnvironment * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__RecordingEnvironment__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__RecordingEnvironment__Sequence__init(bosdyn_msgs__msg__RecordingEnvironment__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__RecordingEnvironment * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__RecordingEnvironment *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__RecordingEnvironment), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__RecordingEnvironment__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__RecordingEnvironment__fini(&data[i - 1]);
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
bosdyn_msgs__msg__RecordingEnvironment__Sequence__fini(bosdyn_msgs__msg__RecordingEnvironment__Sequence * array)
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
      bosdyn_msgs__msg__RecordingEnvironment__fini(&array->data[i]);
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

bosdyn_msgs__msg__RecordingEnvironment__Sequence *
bosdyn_msgs__msg__RecordingEnvironment__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__RecordingEnvironment__Sequence * array = (bosdyn_msgs__msg__RecordingEnvironment__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__RecordingEnvironment__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__RecordingEnvironment__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__RecordingEnvironment__Sequence__destroy(bosdyn_msgs__msg__RecordingEnvironment__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__RecordingEnvironment__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__RecordingEnvironment__Sequence__are_equal(const bosdyn_msgs__msg__RecordingEnvironment__Sequence * lhs, const bosdyn_msgs__msg__RecordingEnvironment__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__RecordingEnvironment__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__RecordingEnvironment__Sequence__copy(
  const bosdyn_msgs__msg__RecordingEnvironment__Sequence * input,
  bosdyn_msgs__msg__RecordingEnvironment__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__RecordingEnvironment);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__RecordingEnvironment * data =
      (bosdyn_msgs__msg__RecordingEnvironment *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__RecordingEnvironment__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__RecordingEnvironment__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__RecordingEnvironment__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
