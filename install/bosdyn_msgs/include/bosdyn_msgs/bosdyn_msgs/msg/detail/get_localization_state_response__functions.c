// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/GetLocalizationStateResponse.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/get_localization_state_response__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "bosdyn_msgs/msg/detail/response_header__functions.h"
// Member `localization`
#include "bosdyn_msgs/msg/detail/localization__functions.h"
// Member `robot_kinematics`
#include "bosdyn_msgs/msg/detail/kinematic_state__functions.h"
// Member `remote_cloud_status`
#include "bosdyn_msgs/msg/detail/remote_point_cloud_status__functions.h"
// Member `live_data`
#include "bosdyn_msgs/msg/detail/waypoint_snapshot__functions.h"
// Member `lost_detector_state`
#include "bosdyn_msgs/msg/detail/lost_detector_state__functions.h"

bool
bosdyn_msgs__msg__GetLocalizationStateResponse__init(bosdyn_msgs__msg__GetLocalizationStateResponse * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__ResponseHeader__init(&msg->header)) {
    bosdyn_msgs__msg__GetLocalizationStateResponse__fini(msg);
    return false;
  }
  // header_is_set
  // localization
  if (!bosdyn_msgs__msg__Localization__init(&msg->localization)) {
    bosdyn_msgs__msg__GetLocalizationStateResponse__fini(msg);
    return false;
  }
  // localization_is_set
  // robot_kinematics
  if (!bosdyn_msgs__msg__KinematicState__init(&msg->robot_kinematics)) {
    bosdyn_msgs__msg__GetLocalizationStateResponse__fini(msg);
    return false;
  }
  // robot_kinematics_is_set
  // remote_cloud_status
  if (!bosdyn_msgs__msg__RemotePointCloudStatus__Sequence__init(&msg->remote_cloud_status, 0)) {
    bosdyn_msgs__msg__GetLocalizationStateResponse__fini(msg);
    return false;
  }
  // live_data
  if (!bosdyn_msgs__msg__WaypointSnapshot__init(&msg->live_data)) {
    bosdyn_msgs__msg__GetLocalizationStateResponse__fini(msg);
    return false;
  }
  // live_data_is_set
  // lost_detector_state
  if (!bosdyn_msgs__msg__LostDetectorState__init(&msg->lost_detector_state)) {
    bosdyn_msgs__msg__GetLocalizationStateResponse__fini(msg);
    return false;
  }
  // lost_detector_state_is_set
  return true;
}

void
bosdyn_msgs__msg__GetLocalizationStateResponse__fini(bosdyn_msgs__msg__GetLocalizationStateResponse * msg)
{
  if (!msg) {
    return;
  }
  // header
  bosdyn_msgs__msg__ResponseHeader__fini(&msg->header);
  // header_is_set
  // localization
  bosdyn_msgs__msg__Localization__fini(&msg->localization);
  // localization_is_set
  // robot_kinematics
  bosdyn_msgs__msg__KinematicState__fini(&msg->robot_kinematics);
  // robot_kinematics_is_set
  // remote_cloud_status
  bosdyn_msgs__msg__RemotePointCloudStatus__Sequence__fini(&msg->remote_cloud_status);
  // live_data
  bosdyn_msgs__msg__WaypointSnapshot__fini(&msg->live_data);
  // live_data_is_set
  // lost_detector_state
  bosdyn_msgs__msg__LostDetectorState__fini(&msg->lost_detector_state);
  // lost_detector_state_is_set
}

bool
bosdyn_msgs__msg__GetLocalizationStateResponse__are_equal(const bosdyn_msgs__msg__GetLocalizationStateResponse * lhs, const bosdyn_msgs__msg__GetLocalizationStateResponse * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__ResponseHeader__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // header_is_set
  if (lhs->header_is_set != rhs->header_is_set) {
    return false;
  }
  // localization
  if (!bosdyn_msgs__msg__Localization__are_equal(
      &(lhs->localization), &(rhs->localization)))
  {
    return false;
  }
  // localization_is_set
  if (lhs->localization_is_set != rhs->localization_is_set) {
    return false;
  }
  // robot_kinematics
  if (!bosdyn_msgs__msg__KinematicState__are_equal(
      &(lhs->robot_kinematics), &(rhs->robot_kinematics)))
  {
    return false;
  }
  // robot_kinematics_is_set
  if (lhs->robot_kinematics_is_set != rhs->robot_kinematics_is_set) {
    return false;
  }
  // remote_cloud_status
  if (!bosdyn_msgs__msg__RemotePointCloudStatus__Sequence__are_equal(
      &(lhs->remote_cloud_status), &(rhs->remote_cloud_status)))
  {
    return false;
  }
  // live_data
  if (!bosdyn_msgs__msg__WaypointSnapshot__are_equal(
      &(lhs->live_data), &(rhs->live_data)))
  {
    return false;
  }
  // live_data_is_set
  if (lhs->live_data_is_set != rhs->live_data_is_set) {
    return false;
  }
  // lost_detector_state
  if (!bosdyn_msgs__msg__LostDetectorState__are_equal(
      &(lhs->lost_detector_state), &(rhs->lost_detector_state)))
  {
    return false;
  }
  // lost_detector_state_is_set
  if (lhs->lost_detector_state_is_set != rhs->lost_detector_state_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__GetLocalizationStateResponse__copy(
  const bosdyn_msgs__msg__GetLocalizationStateResponse * input,
  bosdyn_msgs__msg__GetLocalizationStateResponse * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__ResponseHeader__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // header_is_set
  output->header_is_set = input->header_is_set;
  // localization
  if (!bosdyn_msgs__msg__Localization__copy(
      &(input->localization), &(output->localization)))
  {
    return false;
  }
  // localization_is_set
  output->localization_is_set = input->localization_is_set;
  // robot_kinematics
  if (!bosdyn_msgs__msg__KinematicState__copy(
      &(input->robot_kinematics), &(output->robot_kinematics)))
  {
    return false;
  }
  // robot_kinematics_is_set
  output->robot_kinematics_is_set = input->robot_kinematics_is_set;
  // remote_cloud_status
  if (!bosdyn_msgs__msg__RemotePointCloudStatus__Sequence__copy(
      &(input->remote_cloud_status), &(output->remote_cloud_status)))
  {
    return false;
  }
  // live_data
  if (!bosdyn_msgs__msg__WaypointSnapshot__copy(
      &(input->live_data), &(output->live_data)))
  {
    return false;
  }
  // live_data_is_set
  output->live_data_is_set = input->live_data_is_set;
  // lost_detector_state
  if (!bosdyn_msgs__msg__LostDetectorState__copy(
      &(input->lost_detector_state), &(output->lost_detector_state)))
  {
    return false;
  }
  // lost_detector_state_is_set
  output->lost_detector_state_is_set = input->lost_detector_state_is_set;
  return true;
}

bosdyn_msgs__msg__GetLocalizationStateResponse *
bosdyn_msgs__msg__GetLocalizationStateResponse__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__GetLocalizationStateResponse * msg = (bosdyn_msgs__msg__GetLocalizationStateResponse *)allocator.allocate(sizeof(bosdyn_msgs__msg__GetLocalizationStateResponse), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__GetLocalizationStateResponse));
  bool success = bosdyn_msgs__msg__GetLocalizationStateResponse__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__GetLocalizationStateResponse__destroy(bosdyn_msgs__msg__GetLocalizationStateResponse * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__GetLocalizationStateResponse__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__GetLocalizationStateResponse__Sequence__init(bosdyn_msgs__msg__GetLocalizationStateResponse__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__GetLocalizationStateResponse * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__GetLocalizationStateResponse *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__GetLocalizationStateResponse), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__GetLocalizationStateResponse__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__GetLocalizationStateResponse__fini(&data[i - 1]);
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
bosdyn_msgs__msg__GetLocalizationStateResponse__Sequence__fini(bosdyn_msgs__msg__GetLocalizationStateResponse__Sequence * array)
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
      bosdyn_msgs__msg__GetLocalizationStateResponse__fini(&array->data[i]);
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

bosdyn_msgs__msg__GetLocalizationStateResponse__Sequence *
bosdyn_msgs__msg__GetLocalizationStateResponse__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__GetLocalizationStateResponse__Sequence * array = (bosdyn_msgs__msg__GetLocalizationStateResponse__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__GetLocalizationStateResponse__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__GetLocalizationStateResponse__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__GetLocalizationStateResponse__Sequence__destroy(bosdyn_msgs__msg__GetLocalizationStateResponse__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__GetLocalizationStateResponse__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__GetLocalizationStateResponse__Sequence__are_equal(const bosdyn_msgs__msg__GetLocalizationStateResponse__Sequence * lhs, const bosdyn_msgs__msg__GetLocalizationStateResponse__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__GetLocalizationStateResponse__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__GetLocalizationStateResponse__Sequence__copy(
  const bosdyn_msgs__msg__GetLocalizationStateResponse__Sequence * input,
  bosdyn_msgs__msg__GetLocalizationStateResponse__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__GetLocalizationStateResponse);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__GetLocalizationStateResponse * data =
      (bosdyn_msgs__msg__GetLocalizationStateResponse *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__GetLocalizationStateResponse__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__GetLocalizationStateResponse__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__GetLocalizationStateResponse__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
