// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/EdgeSnapshotStance.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/edge_snapshot_stance__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `foot_states`
#include "bosdyn_msgs/msg/detail/foot_state__functions.h"
// Member `ko_tform_body`
// Member `vision_tform_body`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
bosdyn_msgs__msg__EdgeSnapshotStance__init(bosdyn_msgs__msg__EdgeSnapshotStance * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    bosdyn_msgs__msg__EdgeSnapshotStance__fini(msg);
    return false;
  }
  // timestamp_is_set
  // foot_states
  if (!bosdyn_msgs__msg__FootState__Sequence__init(&msg->foot_states, 0)) {
    bosdyn_msgs__msg__EdgeSnapshotStance__fini(msg);
    return false;
  }
  // ko_tform_body
  if (!geometry_msgs__msg__Pose__init(&msg->ko_tform_body)) {
    bosdyn_msgs__msg__EdgeSnapshotStance__fini(msg);
    return false;
  }
  // ko_tform_body_is_set
  // vision_tform_body
  if (!geometry_msgs__msg__Pose__init(&msg->vision_tform_body)) {
    bosdyn_msgs__msg__EdgeSnapshotStance__fini(msg);
    return false;
  }
  // vision_tform_body_is_set
  // planar_ground
  // planar_ground_is_set
  return true;
}

void
bosdyn_msgs__msg__EdgeSnapshotStance__fini(bosdyn_msgs__msg__EdgeSnapshotStance * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  builtin_interfaces__msg__Time__fini(&msg->timestamp);
  // timestamp_is_set
  // foot_states
  bosdyn_msgs__msg__FootState__Sequence__fini(&msg->foot_states);
  // ko_tform_body
  geometry_msgs__msg__Pose__fini(&msg->ko_tform_body);
  // ko_tform_body_is_set
  // vision_tform_body
  geometry_msgs__msg__Pose__fini(&msg->vision_tform_body);
  // vision_tform_body_is_set
  // planar_ground
  // planar_ground_is_set
}

bool
bosdyn_msgs__msg__EdgeSnapshotStance__are_equal(const bosdyn_msgs__msg__EdgeSnapshotStance * lhs, const bosdyn_msgs__msg__EdgeSnapshotStance * rhs)
{
  if (!lhs || !rhs) {
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
  // foot_states
  if (!bosdyn_msgs__msg__FootState__Sequence__are_equal(
      &(lhs->foot_states), &(rhs->foot_states)))
  {
    return false;
  }
  // ko_tform_body
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->ko_tform_body), &(rhs->ko_tform_body)))
  {
    return false;
  }
  // ko_tform_body_is_set
  if (lhs->ko_tform_body_is_set != rhs->ko_tform_body_is_set) {
    return false;
  }
  // vision_tform_body
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->vision_tform_body), &(rhs->vision_tform_body)))
  {
    return false;
  }
  // vision_tform_body_is_set
  if (lhs->vision_tform_body_is_set != rhs->vision_tform_body_is_set) {
    return false;
  }
  // planar_ground
  if (lhs->planar_ground != rhs->planar_ground) {
    return false;
  }
  // planar_ground_is_set
  if (lhs->planar_ground_is_set != rhs->planar_ground_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__EdgeSnapshotStance__copy(
  const bosdyn_msgs__msg__EdgeSnapshotStance * input,
  bosdyn_msgs__msg__EdgeSnapshotStance * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->timestamp), &(output->timestamp)))
  {
    return false;
  }
  // timestamp_is_set
  output->timestamp_is_set = input->timestamp_is_set;
  // foot_states
  if (!bosdyn_msgs__msg__FootState__Sequence__copy(
      &(input->foot_states), &(output->foot_states)))
  {
    return false;
  }
  // ko_tform_body
  if (!geometry_msgs__msg__Pose__copy(
      &(input->ko_tform_body), &(output->ko_tform_body)))
  {
    return false;
  }
  // ko_tform_body_is_set
  output->ko_tform_body_is_set = input->ko_tform_body_is_set;
  // vision_tform_body
  if (!geometry_msgs__msg__Pose__copy(
      &(input->vision_tform_body), &(output->vision_tform_body)))
  {
    return false;
  }
  // vision_tform_body_is_set
  output->vision_tform_body_is_set = input->vision_tform_body_is_set;
  // planar_ground
  output->planar_ground = input->planar_ground;
  // planar_ground_is_set
  output->planar_ground_is_set = input->planar_ground_is_set;
  return true;
}

bosdyn_msgs__msg__EdgeSnapshotStance *
bosdyn_msgs__msg__EdgeSnapshotStance__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__EdgeSnapshotStance * msg = (bosdyn_msgs__msg__EdgeSnapshotStance *)allocator.allocate(sizeof(bosdyn_msgs__msg__EdgeSnapshotStance), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__EdgeSnapshotStance));
  bool success = bosdyn_msgs__msg__EdgeSnapshotStance__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__EdgeSnapshotStance__destroy(bosdyn_msgs__msg__EdgeSnapshotStance * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__EdgeSnapshotStance__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__EdgeSnapshotStance__Sequence__init(bosdyn_msgs__msg__EdgeSnapshotStance__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__EdgeSnapshotStance * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__EdgeSnapshotStance *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__EdgeSnapshotStance), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__EdgeSnapshotStance__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__EdgeSnapshotStance__fini(&data[i - 1]);
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
bosdyn_msgs__msg__EdgeSnapshotStance__Sequence__fini(bosdyn_msgs__msg__EdgeSnapshotStance__Sequence * array)
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
      bosdyn_msgs__msg__EdgeSnapshotStance__fini(&array->data[i]);
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

bosdyn_msgs__msg__EdgeSnapshotStance__Sequence *
bosdyn_msgs__msg__EdgeSnapshotStance__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__EdgeSnapshotStance__Sequence * array = (bosdyn_msgs__msg__EdgeSnapshotStance__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__EdgeSnapshotStance__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__EdgeSnapshotStance__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__EdgeSnapshotStance__Sequence__destroy(bosdyn_msgs__msg__EdgeSnapshotStance__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__EdgeSnapshotStance__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__EdgeSnapshotStance__Sequence__are_equal(const bosdyn_msgs__msg__EdgeSnapshotStance__Sequence * lhs, const bosdyn_msgs__msg__EdgeSnapshotStance__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__EdgeSnapshotStance__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__EdgeSnapshotStance__Sequence__copy(
  const bosdyn_msgs__msg__EdgeSnapshotStance__Sequence * input,
  bosdyn_msgs__msg__EdgeSnapshotStance__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__EdgeSnapshotStance);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__EdgeSnapshotStance * data =
      (bosdyn_msgs__msg__EdgeSnapshotStance *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__EdgeSnapshotStance__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__EdgeSnapshotStance__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__EdgeSnapshotStance__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
