// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/SetLocalizationRequest.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/set_localization_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "bosdyn_msgs/msg/detail/request_header__functions.h"
// Member `initial_guess`
#include "bosdyn_msgs/msg/detail/localization__functions.h"
// Member `ko_tform_body`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `fiducial_init`
#include "bosdyn_msgs/msg/detail/set_localization_request_fiducial_init__functions.h"
// Member `refinement`
#include "bosdyn_msgs/msg/detail/set_localization_request_one_of_refinement__functions.h"

bool
bosdyn_msgs__msg__SetLocalizationRequest__init(bosdyn_msgs__msg__SetLocalizationRequest * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__RequestHeader__init(&msg->header)) {
    bosdyn_msgs__msg__SetLocalizationRequest__fini(msg);
    return false;
  }
  // header_is_set
  // initial_guess
  if (!bosdyn_msgs__msg__Localization__init(&msg->initial_guess)) {
    bosdyn_msgs__msg__SetLocalizationRequest__fini(msg);
    return false;
  }
  // initial_guess_is_set
  // ko_tform_body
  if (!geometry_msgs__msg__Pose__init(&msg->ko_tform_body)) {
    bosdyn_msgs__msg__SetLocalizationRequest__fini(msg);
    return false;
  }
  // ko_tform_body_is_set
  // max_distance
  // max_yaw
  // fiducial_init
  if (!bosdyn_msgs__msg__SetLocalizationRequestFiducialInit__init(&msg->fiducial_init)) {
    bosdyn_msgs__msg__SetLocalizationRequest__fini(msg);
    return false;
  }
  // use_fiducial_id
  // do_ambiguity_check
  // restrict_fiducial_detections_to_target_waypoint
  // refinement
  if (!bosdyn_msgs__msg__SetLocalizationRequestOneOfRefinement__init(&msg->refinement)) {
    bosdyn_msgs__msg__SetLocalizationRequest__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__SetLocalizationRequest__fini(bosdyn_msgs__msg__SetLocalizationRequest * msg)
{
  if (!msg) {
    return;
  }
  // header
  bosdyn_msgs__msg__RequestHeader__fini(&msg->header);
  // header_is_set
  // initial_guess
  bosdyn_msgs__msg__Localization__fini(&msg->initial_guess);
  // initial_guess_is_set
  // ko_tform_body
  geometry_msgs__msg__Pose__fini(&msg->ko_tform_body);
  // ko_tform_body_is_set
  // max_distance
  // max_yaw
  // fiducial_init
  bosdyn_msgs__msg__SetLocalizationRequestFiducialInit__fini(&msg->fiducial_init);
  // use_fiducial_id
  // do_ambiguity_check
  // restrict_fiducial_detections_to_target_waypoint
  // refinement
  bosdyn_msgs__msg__SetLocalizationRequestOneOfRefinement__fini(&msg->refinement);
}

bool
bosdyn_msgs__msg__SetLocalizationRequest__are_equal(const bosdyn_msgs__msg__SetLocalizationRequest * lhs, const bosdyn_msgs__msg__SetLocalizationRequest * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__RequestHeader__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // header_is_set
  if (lhs->header_is_set != rhs->header_is_set) {
    return false;
  }
  // initial_guess
  if (!bosdyn_msgs__msg__Localization__are_equal(
      &(lhs->initial_guess), &(rhs->initial_guess)))
  {
    return false;
  }
  // initial_guess_is_set
  if (lhs->initial_guess_is_set != rhs->initial_guess_is_set) {
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
  // max_distance
  if (lhs->max_distance != rhs->max_distance) {
    return false;
  }
  // max_yaw
  if (lhs->max_yaw != rhs->max_yaw) {
    return false;
  }
  // fiducial_init
  if (!bosdyn_msgs__msg__SetLocalizationRequestFiducialInit__are_equal(
      &(lhs->fiducial_init), &(rhs->fiducial_init)))
  {
    return false;
  }
  // use_fiducial_id
  if (lhs->use_fiducial_id != rhs->use_fiducial_id) {
    return false;
  }
  // do_ambiguity_check
  if (lhs->do_ambiguity_check != rhs->do_ambiguity_check) {
    return false;
  }
  // restrict_fiducial_detections_to_target_waypoint
  if (lhs->restrict_fiducial_detections_to_target_waypoint != rhs->restrict_fiducial_detections_to_target_waypoint) {
    return false;
  }
  // refinement
  if (!bosdyn_msgs__msg__SetLocalizationRequestOneOfRefinement__are_equal(
      &(lhs->refinement), &(rhs->refinement)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__SetLocalizationRequest__copy(
  const bosdyn_msgs__msg__SetLocalizationRequest * input,
  bosdyn_msgs__msg__SetLocalizationRequest * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__RequestHeader__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // header_is_set
  output->header_is_set = input->header_is_set;
  // initial_guess
  if (!bosdyn_msgs__msg__Localization__copy(
      &(input->initial_guess), &(output->initial_guess)))
  {
    return false;
  }
  // initial_guess_is_set
  output->initial_guess_is_set = input->initial_guess_is_set;
  // ko_tform_body
  if (!geometry_msgs__msg__Pose__copy(
      &(input->ko_tform_body), &(output->ko_tform_body)))
  {
    return false;
  }
  // ko_tform_body_is_set
  output->ko_tform_body_is_set = input->ko_tform_body_is_set;
  // max_distance
  output->max_distance = input->max_distance;
  // max_yaw
  output->max_yaw = input->max_yaw;
  // fiducial_init
  if (!bosdyn_msgs__msg__SetLocalizationRequestFiducialInit__copy(
      &(input->fiducial_init), &(output->fiducial_init)))
  {
    return false;
  }
  // use_fiducial_id
  output->use_fiducial_id = input->use_fiducial_id;
  // do_ambiguity_check
  output->do_ambiguity_check = input->do_ambiguity_check;
  // restrict_fiducial_detections_to_target_waypoint
  output->restrict_fiducial_detections_to_target_waypoint = input->restrict_fiducial_detections_to_target_waypoint;
  // refinement
  if (!bosdyn_msgs__msg__SetLocalizationRequestOneOfRefinement__copy(
      &(input->refinement), &(output->refinement)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__SetLocalizationRequest *
bosdyn_msgs__msg__SetLocalizationRequest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__SetLocalizationRequest * msg = (bosdyn_msgs__msg__SetLocalizationRequest *)allocator.allocate(sizeof(bosdyn_msgs__msg__SetLocalizationRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__SetLocalizationRequest));
  bool success = bosdyn_msgs__msg__SetLocalizationRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__SetLocalizationRequest__destroy(bosdyn_msgs__msg__SetLocalizationRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__SetLocalizationRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__SetLocalizationRequest__Sequence__init(bosdyn_msgs__msg__SetLocalizationRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__SetLocalizationRequest * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__SetLocalizationRequest *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__SetLocalizationRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__SetLocalizationRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__SetLocalizationRequest__fini(&data[i - 1]);
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
bosdyn_msgs__msg__SetLocalizationRequest__Sequence__fini(bosdyn_msgs__msg__SetLocalizationRequest__Sequence * array)
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
      bosdyn_msgs__msg__SetLocalizationRequest__fini(&array->data[i]);
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

bosdyn_msgs__msg__SetLocalizationRequest__Sequence *
bosdyn_msgs__msg__SetLocalizationRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__SetLocalizationRequest__Sequence * array = (bosdyn_msgs__msg__SetLocalizationRequest__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__SetLocalizationRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__SetLocalizationRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__SetLocalizationRequest__Sequence__destroy(bosdyn_msgs__msg__SetLocalizationRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__SetLocalizationRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__SetLocalizationRequest__Sequence__are_equal(const bosdyn_msgs__msg__SetLocalizationRequest__Sequence * lhs, const bosdyn_msgs__msg__SetLocalizationRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__SetLocalizationRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__SetLocalizationRequest__Sequence__copy(
  const bosdyn_msgs__msg__SetLocalizationRequest__Sequence * input,
  bosdyn_msgs__msg__SetLocalizationRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__SetLocalizationRequest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__SetLocalizationRequest * data =
      (bosdyn_msgs__msg__SetLocalizationRequest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__SetLocalizationRequest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__SetLocalizationRequest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__SetLocalizationRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
