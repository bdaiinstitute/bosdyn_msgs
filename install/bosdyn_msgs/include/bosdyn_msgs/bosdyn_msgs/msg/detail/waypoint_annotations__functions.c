// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/WaypointAnnotations.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/waypoint_annotations__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `creation_time`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `icp_variance`
#include "bosdyn_msgs/msg/detail/se3_covariance__functions.h"
// Member `scan_match_region`
#include "bosdyn_msgs/msg/detail/waypoint_annotations_localize_region__functions.h"
// Member `waypoint_source`
#include "bosdyn_msgs/msg/detail/waypoint_waypoint_source__functions.h"
// Member `client_metadata`
#include "bosdyn_msgs/msg/detail/client_metadata__functions.h"
// Member `loop_closure_settings`
#include "bosdyn_msgs/msg/detail/waypoint_annotations_loop_closure_settings__functions.h"

bool
bosdyn_msgs__msg__WaypointAnnotations__init(bosdyn_msgs__msg__WaypointAnnotations * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    bosdyn_msgs__msg__WaypointAnnotations__fini(msg);
    return false;
  }
  // creation_time
  if (!builtin_interfaces__msg__Time__init(&msg->creation_time)) {
    bosdyn_msgs__msg__WaypointAnnotations__fini(msg);
    return false;
  }
  // creation_time_is_set
  // icp_variance
  if (!bosdyn_msgs__msg__SE3Covariance__init(&msg->icp_variance)) {
    bosdyn_msgs__msg__WaypointAnnotations__fini(msg);
    return false;
  }
  // icp_variance_is_set
  // scan_match_region
  if (!bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegion__init(&msg->scan_match_region)) {
    bosdyn_msgs__msg__WaypointAnnotations__fini(msg);
    return false;
  }
  // scan_match_region_is_set
  // waypoint_source
  if (!bosdyn_msgs__msg__WaypointWaypointSource__init(&msg->waypoint_source)) {
    bosdyn_msgs__msg__WaypointAnnotations__fini(msg);
    return false;
  }
  // client_metadata
  if (!bosdyn_msgs__msg__ClientMetadata__init(&msg->client_metadata)) {
    bosdyn_msgs__msg__WaypointAnnotations__fini(msg);
    return false;
  }
  // client_metadata_is_set
  // loop_closure_settings
  if (!bosdyn_msgs__msg__WaypointAnnotationsLoopClosureSettings__init(&msg->loop_closure_settings)) {
    bosdyn_msgs__msg__WaypointAnnotations__fini(msg);
    return false;
  }
  // loop_closure_settings_is_set
  return true;
}

void
bosdyn_msgs__msg__WaypointAnnotations__fini(bosdyn_msgs__msg__WaypointAnnotations * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // creation_time
  builtin_interfaces__msg__Time__fini(&msg->creation_time);
  // creation_time_is_set
  // icp_variance
  bosdyn_msgs__msg__SE3Covariance__fini(&msg->icp_variance);
  // icp_variance_is_set
  // scan_match_region
  bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegion__fini(&msg->scan_match_region);
  // scan_match_region_is_set
  // waypoint_source
  bosdyn_msgs__msg__WaypointWaypointSource__fini(&msg->waypoint_source);
  // client_metadata
  bosdyn_msgs__msg__ClientMetadata__fini(&msg->client_metadata);
  // client_metadata_is_set
  // loop_closure_settings
  bosdyn_msgs__msg__WaypointAnnotationsLoopClosureSettings__fini(&msg->loop_closure_settings);
  // loop_closure_settings_is_set
}

bool
bosdyn_msgs__msg__WaypointAnnotations__are_equal(const bosdyn_msgs__msg__WaypointAnnotations * lhs, const bosdyn_msgs__msg__WaypointAnnotations * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // creation_time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->creation_time), &(rhs->creation_time)))
  {
    return false;
  }
  // creation_time_is_set
  if (lhs->creation_time_is_set != rhs->creation_time_is_set) {
    return false;
  }
  // icp_variance
  if (!bosdyn_msgs__msg__SE3Covariance__are_equal(
      &(lhs->icp_variance), &(rhs->icp_variance)))
  {
    return false;
  }
  // icp_variance_is_set
  if (lhs->icp_variance_is_set != rhs->icp_variance_is_set) {
    return false;
  }
  // scan_match_region
  if (!bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegion__are_equal(
      &(lhs->scan_match_region), &(rhs->scan_match_region)))
  {
    return false;
  }
  // scan_match_region_is_set
  if (lhs->scan_match_region_is_set != rhs->scan_match_region_is_set) {
    return false;
  }
  // waypoint_source
  if (!bosdyn_msgs__msg__WaypointWaypointSource__are_equal(
      &(lhs->waypoint_source), &(rhs->waypoint_source)))
  {
    return false;
  }
  // client_metadata
  if (!bosdyn_msgs__msg__ClientMetadata__are_equal(
      &(lhs->client_metadata), &(rhs->client_metadata)))
  {
    return false;
  }
  // client_metadata_is_set
  if (lhs->client_metadata_is_set != rhs->client_metadata_is_set) {
    return false;
  }
  // loop_closure_settings
  if (!bosdyn_msgs__msg__WaypointAnnotationsLoopClosureSettings__are_equal(
      &(lhs->loop_closure_settings), &(rhs->loop_closure_settings)))
  {
    return false;
  }
  // loop_closure_settings_is_set
  if (lhs->loop_closure_settings_is_set != rhs->loop_closure_settings_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__WaypointAnnotations__copy(
  const bosdyn_msgs__msg__WaypointAnnotations * input,
  bosdyn_msgs__msg__WaypointAnnotations * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // creation_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->creation_time), &(output->creation_time)))
  {
    return false;
  }
  // creation_time_is_set
  output->creation_time_is_set = input->creation_time_is_set;
  // icp_variance
  if (!bosdyn_msgs__msg__SE3Covariance__copy(
      &(input->icp_variance), &(output->icp_variance)))
  {
    return false;
  }
  // icp_variance_is_set
  output->icp_variance_is_set = input->icp_variance_is_set;
  // scan_match_region
  if (!bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegion__copy(
      &(input->scan_match_region), &(output->scan_match_region)))
  {
    return false;
  }
  // scan_match_region_is_set
  output->scan_match_region_is_set = input->scan_match_region_is_set;
  // waypoint_source
  if (!bosdyn_msgs__msg__WaypointWaypointSource__copy(
      &(input->waypoint_source), &(output->waypoint_source)))
  {
    return false;
  }
  // client_metadata
  if (!bosdyn_msgs__msg__ClientMetadata__copy(
      &(input->client_metadata), &(output->client_metadata)))
  {
    return false;
  }
  // client_metadata_is_set
  output->client_metadata_is_set = input->client_metadata_is_set;
  // loop_closure_settings
  if (!bosdyn_msgs__msg__WaypointAnnotationsLoopClosureSettings__copy(
      &(input->loop_closure_settings), &(output->loop_closure_settings)))
  {
    return false;
  }
  // loop_closure_settings_is_set
  output->loop_closure_settings_is_set = input->loop_closure_settings_is_set;
  return true;
}

bosdyn_msgs__msg__WaypointAnnotations *
bosdyn_msgs__msg__WaypointAnnotations__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__WaypointAnnotations * msg = (bosdyn_msgs__msg__WaypointAnnotations *)allocator.allocate(sizeof(bosdyn_msgs__msg__WaypointAnnotations), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__WaypointAnnotations));
  bool success = bosdyn_msgs__msg__WaypointAnnotations__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__WaypointAnnotations__destroy(bosdyn_msgs__msg__WaypointAnnotations * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__WaypointAnnotations__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__WaypointAnnotations__Sequence__init(bosdyn_msgs__msg__WaypointAnnotations__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__WaypointAnnotations * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__WaypointAnnotations *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__WaypointAnnotations), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__WaypointAnnotations__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__WaypointAnnotations__fini(&data[i - 1]);
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
bosdyn_msgs__msg__WaypointAnnotations__Sequence__fini(bosdyn_msgs__msg__WaypointAnnotations__Sequence * array)
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
      bosdyn_msgs__msg__WaypointAnnotations__fini(&array->data[i]);
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

bosdyn_msgs__msg__WaypointAnnotations__Sequence *
bosdyn_msgs__msg__WaypointAnnotations__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__WaypointAnnotations__Sequence * array = (bosdyn_msgs__msg__WaypointAnnotations__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__WaypointAnnotations__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__WaypointAnnotations__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__WaypointAnnotations__Sequence__destroy(bosdyn_msgs__msg__WaypointAnnotations__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__WaypointAnnotations__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__WaypointAnnotations__Sequence__are_equal(const bosdyn_msgs__msg__WaypointAnnotations__Sequence * lhs, const bosdyn_msgs__msg__WaypointAnnotations__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__WaypointAnnotations__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__WaypointAnnotations__Sequence__copy(
  const bosdyn_msgs__msg__WaypointAnnotations__Sequence * input,
  bosdyn_msgs__msg__WaypointAnnotations__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__WaypointAnnotations);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__WaypointAnnotations * data =
      (bosdyn_msgs__msg__WaypointAnnotations *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__WaypointAnnotations__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__WaypointAnnotations__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__WaypointAnnotations__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
