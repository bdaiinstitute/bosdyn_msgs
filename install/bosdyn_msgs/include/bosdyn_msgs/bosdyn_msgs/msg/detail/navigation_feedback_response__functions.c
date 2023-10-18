// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/NavigationFeedbackResponse.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/navigation_feedback_response__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "bosdyn_msgs/msg/detail/response_header__functions.h"
// Member `status`
#include "bosdyn_msgs/msg/detail/navigation_feedback_response_status__functions.h"
// Member `impaired_state`
#include "bosdyn_msgs/msg/detail/robot_impaired_state__functions.h"
// Member `area_callback_errors`
#include "bosdyn_msgs/msg/detail/key_string_value_bosdyn_msgs_area_callback_error__functions.h"
// Member `remaining_route`
#include "bosdyn_msgs/msg/detail/route__functions.h"
// Member `last_ko_tform_goal`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `body_movement_status`
#include "bosdyn_msgs/msg/detail/se2_trajectory_command_feedback_body_movement_status__functions.h"
// Member `path_following_mode`
#include "bosdyn_msgs/msg/detail/edge_annotations_path_following_mode__functions.h"
// Member `active_region_information`
#include "bosdyn_msgs/msg/detail/key_string_value_bosdyn_msgs_navigation_feedback_response_active_region_information__functions.h"
// Member `route_following_status`
#include "bosdyn_msgs/msg/detail/navigation_feedback_response_route_following_status__functions.h"
// Member `blockage_status`
#include "bosdyn_msgs/msg/detail/navigation_feedback_response_blockage_status__functions.h"
// Member `stuck_reason`
#include "bosdyn_msgs/msg/detail/navigation_feedback_response_stuck_reason__functions.h"

bool
bosdyn_msgs__msg__NavigationFeedbackResponse__init(bosdyn_msgs__msg__NavigationFeedbackResponse * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__ResponseHeader__init(&msg->header)) {
    bosdyn_msgs__msg__NavigationFeedbackResponse__fini(msg);
    return false;
  }
  // header_is_set
  // status
  if (!bosdyn_msgs__msg__NavigationFeedbackResponseStatus__init(&msg->status)) {
    bosdyn_msgs__msg__NavigationFeedbackResponse__fini(msg);
    return false;
  }
  // impaired_state
  if (!bosdyn_msgs__msg__RobotImpairedState__init(&msg->impaired_state)) {
    bosdyn_msgs__msg__NavigationFeedbackResponse__fini(msg);
    return false;
  }
  // impaired_state_is_set
  // area_callback_errors
  if (!bosdyn_msgs__msg__KeyStringValueBosdynMsgsAreaCallbackError__Sequence__init(&msg->area_callback_errors, 0)) {
    bosdyn_msgs__msg__NavigationFeedbackResponse__fini(msg);
    return false;
  }
  // remaining_route
  if (!bosdyn_msgs__msg__Route__init(&msg->remaining_route)) {
    bosdyn_msgs__msg__NavigationFeedbackResponse__fini(msg);
    return false;
  }
  // remaining_route_is_set
  // command_id
  // last_ko_tform_goal
  if (!geometry_msgs__msg__Pose__init(&msg->last_ko_tform_goal)) {
    bosdyn_msgs__msg__NavigationFeedbackResponse__fini(msg);
    return false;
  }
  // last_ko_tform_goal_is_set
  // body_movement_status
  if (!bosdyn_msgs__msg__SE2TrajectoryCommandFeedbackBodyMovementStatus__init(&msg->body_movement_status)) {
    bosdyn_msgs__msg__NavigationFeedbackResponse__fini(msg);
    return false;
  }
  // path_following_mode
  if (!bosdyn_msgs__msg__EdgeAnnotationsPathFollowingMode__init(&msg->path_following_mode)) {
    bosdyn_msgs__msg__NavigationFeedbackResponse__fini(msg);
    return false;
  }
  // active_region_information
  if (!bosdyn_msgs__msg__KeyStringValueBosdynMsgsNavigationFeedbackResponseActiveRegionInformation__Sequence__init(&msg->active_region_information, 0)) {
    bosdyn_msgs__msg__NavigationFeedbackResponse__fini(msg);
    return false;
  }
  // route_following_status
  if (!bosdyn_msgs__msg__NavigationFeedbackResponseRouteFollowingStatus__init(&msg->route_following_status)) {
    bosdyn_msgs__msg__NavigationFeedbackResponse__fini(msg);
    return false;
  }
  // blockage_status
  if (!bosdyn_msgs__msg__NavigationFeedbackResponseBlockageStatus__init(&msg->blockage_status)) {
    bosdyn_msgs__msg__NavigationFeedbackResponse__fini(msg);
    return false;
  }
  // stuck_reason
  if (!bosdyn_msgs__msg__NavigationFeedbackResponseStuckReason__init(&msg->stuck_reason)) {
    bosdyn_msgs__msg__NavigationFeedbackResponse__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__NavigationFeedbackResponse__fini(bosdyn_msgs__msg__NavigationFeedbackResponse * msg)
{
  if (!msg) {
    return;
  }
  // header
  bosdyn_msgs__msg__ResponseHeader__fini(&msg->header);
  // header_is_set
  // status
  bosdyn_msgs__msg__NavigationFeedbackResponseStatus__fini(&msg->status);
  // impaired_state
  bosdyn_msgs__msg__RobotImpairedState__fini(&msg->impaired_state);
  // impaired_state_is_set
  // area_callback_errors
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsAreaCallbackError__Sequence__fini(&msg->area_callback_errors);
  // remaining_route
  bosdyn_msgs__msg__Route__fini(&msg->remaining_route);
  // remaining_route_is_set
  // command_id
  // last_ko_tform_goal
  geometry_msgs__msg__Pose__fini(&msg->last_ko_tform_goal);
  // last_ko_tform_goal_is_set
  // body_movement_status
  bosdyn_msgs__msg__SE2TrajectoryCommandFeedbackBodyMovementStatus__fini(&msg->body_movement_status);
  // path_following_mode
  bosdyn_msgs__msg__EdgeAnnotationsPathFollowingMode__fini(&msg->path_following_mode);
  // active_region_information
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsNavigationFeedbackResponseActiveRegionInformation__Sequence__fini(&msg->active_region_information);
  // route_following_status
  bosdyn_msgs__msg__NavigationFeedbackResponseRouteFollowingStatus__fini(&msg->route_following_status);
  // blockage_status
  bosdyn_msgs__msg__NavigationFeedbackResponseBlockageStatus__fini(&msg->blockage_status);
  // stuck_reason
  bosdyn_msgs__msg__NavigationFeedbackResponseStuckReason__fini(&msg->stuck_reason);
}

bool
bosdyn_msgs__msg__NavigationFeedbackResponse__are_equal(const bosdyn_msgs__msg__NavigationFeedbackResponse * lhs, const bosdyn_msgs__msg__NavigationFeedbackResponse * rhs)
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
  // status
  if (!bosdyn_msgs__msg__NavigationFeedbackResponseStatus__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  // impaired_state
  if (!bosdyn_msgs__msg__RobotImpairedState__are_equal(
      &(lhs->impaired_state), &(rhs->impaired_state)))
  {
    return false;
  }
  // impaired_state_is_set
  if (lhs->impaired_state_is_set != rhs->impaired_state_is_set) {
    return false;
  }
  // area_callback_errors
  if (!bosdyn_msgs__msg__KeyStringValueBosdynMsgsAreaCallbackError__Sequence__are_equal(
      &(lhs->area_callback_errors), &(rhs->area_callback_errors)))
  {
    return false;
  }
  // remaining_route
  if (!bosdyn_msgs__msg__Route__are_equal(
      &(lhs->remaining_route), &(rhs->remaining_route)))
  {
    return false;
  }
  // remaining_route_is_set
  if (lhs->remaining_route_is_set != rhs->remaining_route_is_set) {
    return false;
  }
  // command_id
  if (lhs->command_id != rhs->command_id) {
    return false;
  }
  // last_ko_tform_goal
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->last_ko_tform_goal), &(rhs->last_ko_tform_goal)))
  {
    return false;
  }
  // last_ko_tform_goal_is_set
  if (lhs->last_ko_tform_goal_is_set != rhs->last_ko_tform_goal_is_set) {
    return false;
  }
  // body_movement_status
  if (!bosdyn_msgs__msg__SE2TrajectoryCommandFeedbackBodyMovementStatus__are_equal(
      &(lhs->body_movement_status), &(rhs->body_movement_status)))
  {
    return false;
  }
  // path_following_mode
  if (!bosdyn_msgs__msg__EdgeAnnotationsPathFollowingMode__are_equal(
      &(lhs->path_following_mode), &(rhs->path_following_mode)))
  {
    return false;
  }
  // active_region_information
  if (!bosdyn_msgs__msg__KeyStringValueBosdynMsgsNavigationFeedbackResponseActiveRegionInformation__Sequence__are_equal(
      &(lhs->active_region_information), &(rhs->active_region_information)))
  {
    return false;
  }
  // route_following_status
  if (!bosdyn_msgs__msg__NavigationFeedbackResponseRouteFollowingStatus__are_equal(
      &(lhs->route_following_status), &(rhs->route_following_status)))
  {
    return false;
  }
  // blockage_status
  if (!bosdyn_msgs__msg__NavigationFeedbackResponseBlockageStatus__are_equal(
      &(lhs->blockage_status), &(rhs->blockage_status)))
  {
    return false;
  }
  // stuck_reason
  if (!bosdyn_msgs__msg__NavigationFeedbackResponseStuckReason__are_equal(
      &(lhs->stuck_reason), &(rhs->stuck_reason)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__NavigationFeedbackResponse__copy(
  const bosdyn_msgs__msg__NavigationFeedbackResponse * input,
  bosdyn_msgs__msg__NavigationFeedbackResponse * output)
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
  // status
  if (!bosdyn_msgs__msg__NavigationFeedbackResponseStatus__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  // impaired_state
  if (!bosdyn_msgs__msg__RobotImpairedState__copy(
      &(input->impaired_state), &(output->impaired_state)))
  {
    return false;
  }
  // impaired_state_is_set
  output->impaired_state_is_set = input->impaired_state_is_set;
  // area_callback_errors
  if (!bosdyn_msgs__msg__KeyStringValueBosdynMsgsAreaCallbackError__Sequence__copy(
      &(input->area_callback_errors), &(output->area_callback_errors)))
  {
    return false;
  }
  // remaining_route
  if (!bosdyn_msgs__msg__Route__copy(
      &(input->remaining_route), &(output->remaining_route)))
  {
    return false;
  }
  // remaining_route_is_set
  output->remaining_route_is_set = input->remaining_route_is_set;
  // command_id
  output->command_id = input->command_id;
  // last_ko_tform_goal
  if (!geometry_msgs__msg__Pose__copy(
      &(input->last_ko_tform_goal), &(output->last_ko_tform_goal)))
  {
    return false;
  }
  // last_ko_tform_goal_is_set
  output->last_ko_tform_goal_is_set = input->last_ko_tform_goal_is_set;
  // body_movement_status
  if (!bosdyn_msgs__msg__SE2TrajectoryCommandFeedbackBodyMovementStatus__copy(
      &(input->body_movement_status), &(output->body_movement_status)))
  {
    return false;
  }
  // path_following_mode
  if (!bosdyn_msgs__msg__EdgeAnnotationsPathFollowingMode__copy(
      &(input->path_following_mode), &(output->path_following_mode)))
  {
    return false;
  }
  // active_region_information
  if (!bosdyn_msgs__msg__KeyStringValueBosdynMsgsNavigationFeedbackResponseActiveRegionInformation__Sequence__copy(
      &(input->active_region_information), &(output->active_region_information)))
  {
    return false;
  }
  // route_following_status
  if (!bosdyn_msgs__msg__NavigationFeedbackResponseRouteFollowingStatus__copy(
      &(input->route_following_status), &(output->route_following_status)))
  {
    return false;
  }
  // blockage_status
  if (!bosdyn_msgs__msg__NavigationFeedbackResponseBlockageStatus__copy(
      &(input->blockage_status), &(output->blockage_status)))
  {
    return false;
  }
  // stuck_reason
  if (!bosdyn_msgs__msg__NavigationFeedbackResponseStuckReason__copy(
      &(input->stuck_reason), &(output->stuck_reason)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__NavigationFeedbackResponse *
bosdyn_msgs__msg__NavigationFeedbackResponse__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__NavigationFeedbackResponse * msg = (bosdyn_msgs__msg__NavigationFeedbackResponse *)allocator.allocate(sizeof(bosdyn_msgs__msg__NavigationFeedbackResponse), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__NavigationFeedbackResponse));
  bool success = bosdyn_msgs__msg__NavigationFeedbackResponse__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__NavigationFeedbackResponse__destroy(bosdyn_msgs__msg__NavigationFeedbackResponse * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__NavigationFeedbackResponse__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__NavigationFeedbackResponse__Sequence__init(bosdyn_msgs__msg__NavigationFeedbackResponse__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__NavigationFeedbackResponse * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__NavigationFeedbackResponse *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__NavigationFeedbackResponse), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__NavigationFeedbackResponse__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__NavigationFeedbackResponse__fini(&data[i - 1]);
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
bosdyn_msgs__msg__NavigationFeedbackResponse__Sequence__fini(bosdyn_msgs__msg__NavigationFeedbackResponse__Sequence * array)
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
      bosdyn_msgs__msg__NavigationFeedbackResponse__fini(&array->data[i]);
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

bosdyn_msgs__msg__NavigationFeedbackResponse__Sequence *
bosdyn_msgs__msg__NavigationFeedbackResponse__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__NavigationFeedbackResponse__Sequence * array = (bosdyn_msgs__msg__NavigationFeedbackResponse__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__NavigationFeedbackResponse__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__NavigationFeedbackResponse__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__NavigationFeedbackResponse__Sequence__destroy(bosdyn_msgs__msg__NavigationFeedbackResponse__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__NavigationFeedbackResponse__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__NavigationFeedbackResponse__Sequence__are_equal(const bosdyn_msgs__msg__NavigationFeedbackResponse__Sequence * lhs, const bosdyn_msgs__msg__NavigationFeedbackResponse__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__NavigationFeedbackResponse__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__NavigationFeedbackResponse__Sequence__copy(
  const bosdyn_msgs__msg__NavigationFeedbackResponse__Sequence * input,
  bosdyn_msgs__msg__NavigationFeedbackResponse__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__NavigationFeedbackResponse);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__NavigationFeedbackResponse * data =
      (bosdyn_msgs__msg__NavigationFeedbackResponse *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__NavigationFeedbackResponse__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__NavigationFeedbackResponse__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__NavigationFeedbackResponse__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
