// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/ActionWrapperSpotCamAlignment.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/action_wrapper_spot_cam_alignment__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `alignments`
#include "bosdyn_msgs/msg/detail/action_wrapper_spot_cam_alignment_alignment__functions.h"
// Member `target_tform_sensor`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `target_sensor_ids`
#include "rosidl_runtime_c/string_functions.h"

bool
bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__init(bosdyn_msgs__msg__ActionWrapperSpotCamAlignment * msg)
{
  if (!msg) {
    return false;
  }
  // alignments
  if (!bosdyn_msgs__msg__ActionWrapperSpotCamAlignmentAlignment__Sequence__init(&msg->alignments, 0)) {
    bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__fini(msg);
    return false;
  }
  // target_tform_sensor
  if (!geometry_msgs__msg__Pose__init(&msg->target_tform_sensor)) {
    bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__fini(msg);
    return false;
  }
  // target_tform_sensor_is_set
  // final_zoom
  // target_sensor_ids
  if (!rosidl_runtime_c__String__Sequence__init(&msg->target_sensor_ids, 0)) {
    bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__fini(bosdyn_msgs__msg__ActionWrapperSpotCamAlignment * msg)
{
  if (!msg) {
    return;
  }
  // alignments
  bosdyn_msgs__msg__ActionWrapperSpotCamAlignmentAlignment__Sequence__fini(&msg->alignments);
  // target_tform_sensor
  geometry_msgs__msg__Pose__fini(&msg->target_tform_sensor);
  // target_tform_sensor_is_set
  // final_zoom
  // target_sensor_ids
  rosidl_runtime_c__String__Sequence__fini(&msg->target_sensor_ids);
}

bool
bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__are_equal(const bosdyn_msgs__msg__ActionWrapperSpotCamAlignment * lhs, const bosdyn_msgs__msg__ActionWrapperSpotCamAlignment * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // alignments
  if (!bosdyn_msgs__msg__ActionWrapperSpotCamAlignmentAlignment__Sequence__are_equal(
      &(lhs->alignments), &(rhs->alignments)))
  {
    return false;
  }
  // target_tform_sensor
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->target_tform_sensor), &(rhs->target_tform_sensor)))
  {
    return false;
  }
  // target_tform_sensor_is_set
  if (lhs->target_tform_sensor_is_set != rhs->target_tform_sensor_is_set) {
    return false;
  }
  // final_zoom
  if (lhs->final_zoom != rhs->final_zoom) {
    return false;
  }
  // target_sensor_ids
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->target_sensor_ids), &(rhs->target_sensor_ids)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__copy(
  const bosdyn_msgs__msg__ActionWrapperSpotCamAlignment * input,
  bosdyn_msgs__msg__ActionWrapperSpotCamAlignment * output)
{
  if (!input || !output) {
    return false;
  }
  // alignments
  if (!bosdyn_msgs__msg__ActionWrapperSpotCamAlignmentAlignment__Sequence__copy(
      &(input->alignments), &(output->alignments)))
  {
    return false;
  }
  // target_tform_sensor
  if (!geometry_msgs__msg__Pose__copy(
      &(input->target_tform_sensor), &(output->target_tform_sensor)))
  {
    return false;
  }
  // target_tform_sensor_is_set
  output->target_tform_sensor_is_set = input->target_tform_sensor_is_set;
  // final_zoom
  output->final_zoom = input->final_zoom;
  // target_sensor_ids
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->target_sensor_ids), &(output->target_sensor_ids)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__ActionWrapperSpotCamAlignment *
bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ActionWrapperSpotCamAlignment * msg = (bosdyn_msgs__msg__ActionWrapperSpotCamAlignment *)allocator.allocate(sizeof(bosdyn_msgs__msg__ActionWrapperSpotCamAlignment), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__ActionWrapperSpotCamAlignment));
  bool success = bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__destroy(bosdyn_msgs__msg__ActionWrapperSpotCamAlignment * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__Sequence__init(bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ActionWrapperSpotCamAlignment * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__ActionWrapperSpotCamAlignment *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__ActionWrapperSpotCamAlignment), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__fini(&data[i - 1]);
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
bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__Sequence__fini(bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__Sequence * array)
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
      bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__fini(&array->data[i]);
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

bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__Sequence *
bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__Sequence * array = (bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__Sequence__destroy(bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__Sequence__are_equal(const bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__Sequence * lhs, const bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__Sequence__copy(
  const bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__Sequence * input,
  bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__ActionWrapperSpotCamAlignment);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__ActionWrapperSpotCamAlignment * data =
      (bosdyn_msgs__msg__ActionWrapperSpotCamAlignment *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
