// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/Waypoint.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/waypoint__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `id`
// Member `snapshot_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `waypoint_tform_ko`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `annotations`
#include "bosdyn_msgs/msg/detail/waypoint_annotations__functions.h"

bool
bosdyn_msgs__msg__Waypoint__init(bosdyn_msgs__msg__Waypoint * msg)
{
  if (!msg) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    bosdyn_msgs__msg__Waypoint__fini(msg);
    return false;
  }
  // snapshot_id
  if (!rosidl_runtime_c__String__init(&msg->snapshot_id)) {
    bosdyn_msgs__msg__Waypoint__fini(msg);
    return false;
  }
  // waypoint_tform_ko
  if (!geometry_msgs__msg__Pose__init(&msg->waypoint_tform_ko)) {
    bosdyn_msgs__msg__Waypoint__fini(msg);
    return false;
  }
  // waypoint_tform_ko_is_set
  // annotations
  if (!bosdyn_msgs__msg__WaypointAnnotations__init(&msg->annotations)) {
    bosdyn_msgs__msg__Waypoint__fini(msg);
    return false;
  }
  // annotations_is_set
  return true;
}

void
bosdyn_msgs__msg__Waypoint__fini(bosdyn_msgs__msg__Waypoint * msg)
{
  if (!msg) {
    return;
  }
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // snapshot_id
  rosidl_runtime_c__String__fini(&msg->snapshot_id);
  // waypoint_tform_ko
  geometry_msgs__msg__Pose__fini(&msg->waypoint_tform_ko);
  // waypoint_tform_ko_is_set
  // annotations
  bosdyn_msgs__msg__WaypointAnnotations__fini(&msg->annotations);
  // annotations_is_set
}

bool
bosdyn_msgs__msg__Waypoint__are_equal(const bosdyn_msgs__msg__Waypoint * lhs, const bosdyn_msgs__msg__Waypoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // snapshot_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->snapshot_id), &(rhs->snapshot_id)))
  {
    return false;
  }
  // waypoint_tform_ko
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->waypoint_tform_ko), &(rhs->waypoint_tform_ko)))
  {
    return false;
  }
  // waypoint_tform_ko_is_set
  if (lhs->waypoint_tform_ko_is_set != rhs->waypoint_tform_ko_is_set) {
    return false;
  }
  // annotations
  if (!bosdyn_msgs__msg__WaypointAnnotations__are_equal(
      &(lhs->annotations), &(rhs->annotations)))
  {
    return false;
  }
  // annotations_is_set
  if (lhs->annotations_is_set != rhs->annotations_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__Waypoint__copy(
  const bosdyn_msgs__msg__Waypoint * input,
  bosdyn_msgs__msg__Waypoint * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // snapshot_id
  if (!rosidl_runtime_c__String__copy(
      &(input->snapshot_id), &(output->snapshot_id)))
  {
    return false;
  }
  // waypoint_tform_ko
  if (!geometry_msgs__msg__Pose__copy(
      &(input->waypoint_tform_ko), &(output->waypoint_tform_ko)))
  {
    return false;
  }
  // waypoint_tform_ko_is_set
  output->waypoint_tform_ko_is_set = input->waypoint_tform_ko_is_set;
  // annotations
  if (!bosdyn_msgs__msg__WaypointAnnotations__copy(
      &(input->annotations), &(output->annotations)))
  {
    return false;
  }
  // annotations_is_set
  output->annotations_is_set = input->annotations_is_set;
  return true;
}

bosdyn_msgs__msg__Waypoint *
bosdyn_msgs__msg__Waypoint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Waypoint * msg = (bosdyn_msgs__msg__Waypoint *)allocator.allocate(sizeof(bosdyn_msgs__msg__Waypoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__Waypoint));
  bool success = bosdyn_msgs__msg__Waypoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__Waypoint__destroy(bosdyn_msgs__msg__Waypoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__Waypoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__Waypoint__Sequence__init(bosdyn_msgs__msg__Waypoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Waypoint * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__Waypoint *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__Waypoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__Waypoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__Waypoint__fini(&data[i - 1]);
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
bosdyn_msgs__msg__Waypoint__Sequence__fini(bosdyn_msgs__msg__Waypoint__Sequence * array)
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
      bosdyn_msgs__msg__Waypoint__fini(&array->data[i]);
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

bosdyn_msgs__msg__Waypoint__Sequence *
bosdyn_msgs__msg__Waypoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Waypoint__Sequence * array = (bosdyn_msgs__msg__Waypoint__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__Waypoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__Waypoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__Waypoint__Sequence__destroy(bosdyn_msgs__msg__Waypoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__Waypoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__Waypoint__Sequence__are_equal(const bosdyn_msgs__msg__Waypoint__Sequence * lhs, const bosdyn_msgs__msg__Waypoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__Waypoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__Waypoint__Sequence__copy(
  const bosdyn_msgs__msg__Waypoint__Sequence * input,
  bosdyn_msgs__msg__Waypoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__Waypoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__Waypoint * data =
      (bosdyn_msgs__msg__Waypoint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__Waypoint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__Waypoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__Waypoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
