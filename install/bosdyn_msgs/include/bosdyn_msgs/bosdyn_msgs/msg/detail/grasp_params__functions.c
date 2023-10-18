// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/GraspParams.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/grasp_params__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `grasp_params_frame_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `allowable_orientation`
#include "bosdyn_msgs/msg/detail/allowable_orientation__functions.h"
// Member `position_constraint`
#include "bosdyn_msgs/msg/detail/grasp_position_constraint__functions.h"
// Member `manipulation_camera_source`
#include "bosdyn_msgs/msg/detail/manipulation_camera_source__functions.h"

bool
bosdyn_msgs__msg__GraspParams__init(bosdyn_msgs__msg__GraspParams * msg)
{
  if (!msg) {
    return false;
  }
  // grasp_palm_to_fingertip
  // grasp_params_frame_name
  if (!rosidl_runtime_c__String__init(&msg->grasp_params_frame_name)) {
    bosdyn_msgs__msg__GraspParams__fini(msg);
    return false;
  }
  // allowable_orientation
  if (!bosdyn_msgs__msg__AllowableOrientation__Sequence__init(&msg->allowable_orientation, 0)) {
    bosdyn_msgs__msg__GraspParams__fini(msg);
    return false;
  }
  // position_constraint
  if (!bosdyn_msgs__msg__GraspPositionConstraint__init(&msg->position_constraint)) {
    bosdyn_msgs__msg__GraspParams__fini(msg);
    return false;
  }
  // manipulation_camera_source
  if (!bosdyn_msgs__msg__ManipulationCameraSource__init(&msg->manipulation_camera_source)) {
    bosdyn_msgs__msg__GraspParams__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__GraspParams__fini(bosdyn_msgs__msg__GraspParams * msg)
{
  if (!msg) {
    return;
  }
  // grasp_palm_to_fingertip
  // grasp_params_frame_name
  rosidl_runtime_c__String__fini(&msg->grasp_params_frame_name);
  // allowable_orientation
  bosdyn_msgs__msg__AllowableOrientation__Sequence__fini(&msg->allowable_orientation);
  // position_constraint
  bosdyn_msgs__msg__GraspPositionConstraint__fini(&msg->position_constraint);
  // manipulation_camera_source
  bosdyn_msgs__msg__ManipulationCameraSource__fini(&msg->manipulation_camera_source);
}

bool
bosdyn_msgs__msg__GraspParams__are_equal(const bosdyn_msgs__msg__GraspParams * lhs, const bosdyn_msgs__msg__GraspParams * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // grasp_palm_to_fingertip
  if (lhs->grasp_palm_to_fingertip != rhs->grasp_palm_to_fingertip) {
    return false;
  }
  // grasp_params_frame_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->grasp_params_frame_name), &(rhs->grasp_params_frame_name)))
  {
    return false;
  }
  // allowable_orientation
  if (!bosdyn_msgs__msg__AllowableOrientation__Sequence__are_equal(
      &(lhs->allowable_orientation), &(rhs->allowable_orientation)))
  {
    return false;
  }
  // position_constraint
  if (!bosdyn_msgs__msg__GraspPositionConstraint__are_equal(
      &(lhs->position_constraint), &(rhs->position_constraint)))
  {
    return false;
  }
  // manipulation_camera_source
  if (!bosdyn_msgs__msg__ManipulationCameraSource__are_equal(
      &(lhs->manipulation_camera_source), &(rhs->manipulation_camera_source)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__GraspParams__copy(
  const bosdyn_msgs__msg__GraspParams * input,
  bosdyn_msgs__msg__GraspParams * output)
{
  if (!input || !output) {
    return false;
  }
  // grasp_palm_to_fingertip
  output->grasp_palm_to_fingertip = input->grasp_palm_to_fingertip;
  // grasp_params_frame_name
  if (!rosidl_runtime_c__String__copy(
      &(input->grasp_params_frame_name), &(output->grasp_params_frame_name)))
  {
    return false;
  }
  // allowable_orientation
  if (!bosdyn_msgs__msg__AllowableOrientation__Sequence__copy(
      &(input->allowable_orientation), &(output->allowable_orientation)))
  {
    return false;
  }
  // position_constraint
  if (!bosdyn_msgs__msg__GraspPositionConstraint__copy(
      &(input->position_constraint), &(output->position_constraint)))
  {
    return false;
  }
  // manipulation_camera_source
  if (!bosdyn_msgs__msg__ManipulationCameraSource__copy(
      &(input->manipulation_camera_source), &(output->manipulation_camera_source)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__GraspParams *
bosdyn_msgs__msg__GraspParams__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__GraspParams * msg = (bosdyn_msgs__msg__GraspParams *)allocator.allocate(sizeof(bosdyn_msgs__msg__GraspParams), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__GraspParams));
  bool success = bosdyn_msgs__msg__GraspParams__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__GraspParams__destroy(bosdyn_msgs__msg__GraspParams * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__GraspParams__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__GraspParams__Sequence__init(bosdyn_msgs__msg__GraspParams__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__GraspParams * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__GraspParams *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__GraspParams), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__GraspParams__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__GraspParams__fini(&data[i - 1]);
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
bosdyn_msgs__msg__GraspParams__Sequence__fini(bosdyn_msgs__msg__GraspParams__Sequence * array)
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
      bosdyn_msgs__msg__GraspParams__fini(&array->data[i]);
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

bosdyn_msgs__msg__GraspParams__Sequence *
bosdyn_msgs__msg__GraspParams__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__GraspParams__Sequence * array = (bosdyn_msgs__msg__GraspParams__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__GraspParams__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__GraspParams__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__GraspParams__Sequence__destroy(bosdyn_msgs__msg__GraspParams__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__GraspParams__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__GraspParams__Sequence__are_equal(const bosdyn_msgs__msg__GraspParams__Sequence * lhs, const bosdyn_msgs__msg__GraspParams__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__GraspParams__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__GraspParams__Sequence__copy(
  const bosdyn_msgs__msg__GraspParams__Sequence * input,
  bosdyn_msgs__msg__GraspParams__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__GraspParams);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__GraspParams * data =
      (bosdyn_msgs__msg__GraspParams *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__GraspParams__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__GraspParams__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__GraspParams__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
