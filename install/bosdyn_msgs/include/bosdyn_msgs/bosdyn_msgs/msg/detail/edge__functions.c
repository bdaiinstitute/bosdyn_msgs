// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/Edge.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/edge__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `id`
#include "bosdyn_msgs/msg/detail/edge_id__functions.h"
// Member `snapshot_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `from_tform_to`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `annotations`
#include "bosdyn_msgs/msg/detail/edge_annotations__functions.h"

bool
bosdyn_msgs__msg__Edge__init(bosdyn_msgs__msg__Edge * msg)
{
  if (!msg) {
    return false;
  }
  // id
  if (!bosdyn_msgs__msg__EdgeId__init(&msg->id)) {
    bosdyn_msgs__msg__Edge__fini(msg);
    return false;
  }
  // id_is_set
  // snapshot_id
  if (!rosidl_runtime_c__String__init(&msg->snapshot_id)) {
    bosdyn_msgs__msg__Edge__fini(msg);
    return false;
  }
  // from_tform_to
  if (!geometry_msgs__msg__Pose__init(&msg->from_tform_to)) {
    bosdyn_msgs__msg__Edge__fini(msg);
    return false;
  }
  // from_tform_to_is_set
  // annotations
  if (!bosdyn_msgs__msg__EdgeAnnotations__init(&msg->annotations)) {
    bosdyn_msgs__msg__Edge__fini(msg);
    return false;
  }
  // annotations_is_set
  return true;
}

void
bosdyn_msgs__msg__Edge__fini(bosdyn_msgs__msg__Edge * msg)
{
  if (!msg) {
    return;
  }
  // id
  bosdyn_msgs__msg__EdgeId__fini(&msg->id);
  // id_is_set
  // snapshot_id
  rosidl_runtime_c__String__fini(&msg->snapshot_id);
  // from_tform_to
  geometry_msgs__msg__Pose__fini(&msg->from_tform_to);
  // from_tform_to_is_set
  // annotations
  bosdyn_msgs__msg__EdgeAnnotations__fini(&msg->annotations);
  // annotations_is_set
}

bool
bosdyn_msgs__msg__Edge__are_equal(const bosdyn_msgs__msg__Edge * lhs, const bosdyn_msgs__msg__Edge * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (!bosdyn_msgs__msg__EdgeId__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // id_is_set
  if (lhs->id_is_set != rhs->id_is_set) {
    return false;
  }
  // snapshot_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->snapshot_id), &(rhs->snapshot_id)))
  {
    return false;
  }
  // from_tform_to
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->from_tform_to), &(rhs->from_tform_to)))
  {
    return false;
  }
  // from_tform_to_is_set
  if (lhs->from_tform_to_is_set != rhs->from_tform_to_is_set) {
    return false;
  }
  // annotations
  if (!bosdyn_msgs__msg__EdgeAnnotations__are_equal(
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
bosdyn_msgs__msg__Edge__copy(
  const bosdyn_msgs__msg__Edge * input,
  bosdyn_msgs__msg__Edge * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  if (!bosdyn_msgs__msg__EdgeId__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // id_is_set
  output->id_is_set = input->id_is_set;
  // snapshot_id
  if (!rosidl_runtime_c__String__copy(
      &(input->snapshot_id), &(output->snapshot_id)))
  {
    return false;
  }
  // from_tform_to
  if (!geometry_msgs__msg__Pose__copy(
      &(input->from_tform_to), &(output->from_tform_to)))
  {
    return false;
  }
  // from_tform_to_is_set
  output->from_tform_to_is_set = input->from_tform_to_is_set;
  // annotations
  if (!bosdyn_msgs__msg__EdgeAnnotations__copy(
      &(input->annotations), &(output->annotations)))
  {
    return false;
  }
  // annotations_is_set
  output->annotations_is_set = input->annotations_is_set;
  return true;
}

bosdyn_msgs__msg__Edge *
bosdyn_msgs__msg__Edge__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Edge * msg = (bosdyn_msgs__msg__Edge *)allocator.allocate(sizeof(bosdyn_msgs__msg__Edge), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__Edge));
  bool success = bosdyn_msgs__msg__Edge__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__Edge__destroy(bosdyn_msgs__msg__Edge * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__Edge__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__Edge__Sequence__init(bosdyn_msgs__msg__Edge__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Edge * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__Edge *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__Edge), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__Edge__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__Edge__fini(&data[i - 1]);
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
bosdyn_msgs__msg__Edge__Sequence__fini(bosdyn_msgs__msg__Edge__Sequence * array)
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
      bosdyn_msgs__msg__Edge__fini(&array->data[i]);
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

bosdyn_msgs__msg__Edge__Sequence *
bosdyn_msgs__msg__Edge__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Edge__Sequence * array = (bosdyn_msgs__msg__Edge__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__Edge__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__Edge__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__Edge__Sequence__destroy(bosdyn_msgs__msg__Edge__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__Edge__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__Edge__Sequence__are_equal(const bosdyn_msgs__msg__Edge__Sequence * lhs, const bosdyn_msgs__msg__Edge__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__Edge__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__Edge__Sequence__copy(
  const bosdyn_msgs__msg__Edge__Sequence * input,
  bosdyn_msgs__msg__Edge__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__Edge);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__Edge * data =
      (bosdyn_msgs__msg__Edge *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__Edge__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__Edge__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__Edge__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
