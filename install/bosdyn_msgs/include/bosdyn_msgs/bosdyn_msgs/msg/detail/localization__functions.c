// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/Localization.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/localization__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `waypoint_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `waypoint_tform_body`
// Member `seed_tform_body`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
bosdyn_msgs__msg__Localization__init(bosdyn_msgs__msg__Localization * msg)
{
  if (!msg) {
    return false;
  }
  // waypoint_id
  if (!rosidl_runtime_c__String__init(&msg->waypoint_id)) {
    bosdyn_msgs__msg__Localization__fini(msg);
    return false;
  }
  // waypoint_tform_body
  if (!geometry_msgs__msg__Pose__init(&msg->waypoint_tform_body)) {
    bosdyn_msgs__msg__Localization__fini(msg);
    return false;
  }
  // waypoint_tform_body_is_set
  // seed_tform_body
  if (!geometry_msgs__msg__Pose__init(&msg->seed_tform_body)) {
    bosdyn_msgs__msg__Localization__fini(msg);
    return false;
  }
  // seed_tform_body_is_set
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    bosdyn_msgs__msg__Localization__fini(msg);
    return false;
  }
  // timestamp_is_set
  return true;
}

void
bosdyn_msgs__msg__Localization__fini(bosdyn_msgs__msg__Localization * msg)
{
  if (!msg) {
    return;
  }
  // waypoint_id
  rosidl_runtime_c__String__fini(&msg->waypoint_id);
  // waypoint_tform_body
  geometry_msgs__msg__Pose__fini(&msg->waypoint_tform_body);
  // waypoint_tform_body_is_set
  // seed_tform_body
  geometry_msgs__msg__Pose__fini(&msg->seed_tform_body);
  // seed_tform_body_is_set
  // timestamp
  builtin_interfaces__msg__Time__fini(&msg->timestamp);
  // timestamp_is_set
}

bool
bosdyn_msgs__msg__Localization__are_equal(const bosdyn_msgs__msg__Localization * lhs, const bosdyn_msgs__msg__Localization * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // waypoint_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->waypoint_id), &(rhs->waypoint_id)))
  {
    return false;
  }
  // waypoint_tform_body
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->waypoint_tform_body), &(rhs->waypoint_tform_body)))
  {
    return false;
  }
  // waypoint_tform_body_is_set
  if (lhs->waypoint_tform_body_is_set != rhs->waypoint_tform_body_is_set) {
    return false;
  }
  // seed_tform_body
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->seed_tform_body), &(rhs->seed_tform_body)))
  {
    return false;
  }
  // seed_tform_body_is_set
  if (lhs->seed_tform_body_is_set != rhs->seed_tform_body_is_set) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->timestamp), &(rhs->timestamp)))
  {
    return false;
  }
  // timestamp_is_set
  if (lhs->timestamp_is_set != rhs->timestamp_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__Localization__copy(
  const bosdyn_msgs__msg__Localization * input,
  bosdyn_msgs__msg__Localization * output)
{
  if (!input || !output) {
    return false;
  }
  // waypoint_id
  if (!rosidl_runtime_c__String__copy(
      &(input->waypoint_id), &(output->waypoint_id)))
  {
    return false;
  }
  // waypoint_tform_body
  if (!geometry_msgs__msg__Pose__copy(
      &(input->waypoint_tform_body), &(output->waypoint_tform_body)))
  {
    return false;
  }
  // waypoint_tform_body_is_set
  output->waypoint_tform_body_is_set = input->waypoint_tform_body_is_set;
  // seed_tform_body
  if (!geometry_msgs__msg__Pose__copy(
      &(input->seed_tform_body), &(output->seed_tform_body)))
  {
    return false;
  }
  // seed_tform_body_is_set
  output->seed_tform_body_is_set = input->seed_tform_body_is_set;
  // timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->timestamp), &(output->timestamp)))
  {
    return false;
  }
  // timestamp_is_set
  output->timestamp_is_set = input->timestamp_is_set;
  return true;
}

bosdyn_msgs__msg__Localization *
bosdyn_msgs__msg__Localization__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Localization * msg = (bosdyn_msgs__msg__Localization *)allocator.allocate(sizeof(bosdyn_msgs__msg__Localization), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__Localization));
  bool success = bosdyn_msgs__msg__Localization__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__Localization__destroy(bosdyn_msgs__msg__Localization * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__Localization__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__Localization__Sequence__init(bosdyn_msgs__msg__Localization__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Localization * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__Localization *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__Localization), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__Localization__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__Localization__fini(&data[i - 1]);
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
bosdyn_msgs__msg__Localization__Sequence__fini(bosdyn_msgs__msg__Localization__Sequence * array)
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
      bosdyn_msgs__msg__Localization__fini(&array->data[i]);
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

bosdyn_msgs__msg__Localization__Sequence *
bosdyn_msgs__msg__Localization__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Localization__Sequence * array = (bosdyn_msgs__msg__Localization__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__Localization__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__Localization__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__Localization__Sequence__destroy(bosdyn_msgs__msg__Localization__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__Localization__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__Localization__Sequence__are_equal(const bosdyn_msgs__msg__Localization__Sequence * lhs, const bosdyn_msgs__msg__Localization__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__Localization__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__Localization__Sequence__copy(
  const bosdyn_msgs__msg__Localization__Sequence * input,
  bosdyn_msgs__msg__Localization__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__Localization);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__Localization * data =
      (bosdyn_msgs__msg__Localization *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__Localization__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__Localization__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__Localization__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
