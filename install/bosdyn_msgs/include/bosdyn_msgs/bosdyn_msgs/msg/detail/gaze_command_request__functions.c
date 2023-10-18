// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/GazeCommandRequest.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/gaze_command_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `target_trajectory_in_frame1`
#include "bosdyn_msgs/msg/detail/vec3_trajectory__functions.h"
// Member `frame1_name`
// Member `frame2_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `tool_trajectory_in_frame2`
#include "bosdyn_msgs/msg/detail/se3_trajectory__functions.h"
// Member `wrist_tform_tool`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
bosdyn_msgs__msg__GazeCommandRequest__init(bosdyn_msgs__msg__GazeCommandRequest * msg)
{
  if (!msg) {
    return false;
  }
  // target_trajectory_in_frame1
  if (!bosdyn_msgs__msg__Vec3Trajectory__init(&msg->target_trajectory_in_frame1)) {
    bosdyn_msgs__msg__GazeCommandRequest__fini(msg);
    return false;
  }
  // target_trajectory_in_frame1_is_set
  // frame1_name
  if (!rosidl_runtime_c__String__init(&msg->frame1_name)) {
    bosdyn_msgs__msg__GazeCommandRequest__fini(msg);
    return false;
  }
  // tool_trajectory_in_frame2
  if (!bosdyn_msgs__msg__SE3Trajectory__init(&msg->tool_trajectory_in_frame2)) {
    bosdyn_msgs__msg__GazeCommandRequest__fini(msg);
    return false;
  }
  // tool_trajectory_in_frame2_is_set
  // frame2_name
  if (!rosidl_runtime_c__String__init(&msg->frame2_name)) {
    bosdyn_msgs__msg__GazeCommandRequest__fini(msg);
    return false;
  }
  // wrist_tform_tool
  if (!geometry_msgs__msg__Pose__init(&msg->wrist_tform_tool)) {
    bosdyn_msgs__msg__GazeCommandRequest__fini(msg);
    return false;
  }
  // wrist_tform_tool_is_set
  // target_trajectory_initial_velocity
  // target_trajectory_initial_velocity_is_set
  // maximum_acceleration
  // maximum_acceleration_is_set
  // max_linear_velocity
  // max_linear_velocity_is_set
  // max_angular_velocity
  // max_angular_velocity_is_set
  return true;
}

void
bosdyn_msgs__msg__GazeCommandRequest__fini(bosdyn_msgs__msg__GazeCommandRequest * msg)
{
  if (!msg) {
    return;
  }
  // target_trajectory_in_frame1
  bosdyn_msgs__msg__Vec3Trajectory__fini(&msg->target_trajectory_in_frame1);
  // target_trajectory_in_frame1_is_set
  // frame1_name
  rosidl_runtime_c__String__fini(&msg->frame1_name);
  // tool_trajectory_in_frame2
  bosdyn_msgs__msg__SE3Trajectory__fini(&msg->tool_trajectory_in_frame2);
  // tool_trajectory_in_frame2_is_set
  // frame2_name
  rosidl_runtime_c__String__fini(&msg->frame2_name);
  // wrist_tform_tool
  geometry_msgs__msg__Pose__fini(&msg->wrist_tform_tool);
  // wrist_tform_tool_is_set
  // target_trajectory_initial_velocity
  // target_trajectory_initial_velocity_is_set
  // maximum_acceleration
  // maximum_acceleration_is_set
  // max_linear_velocity
  // max_linear_velocity_is_set
  // max_angular_velocity
  // max_angular_velocity_is_set
}

bool
bosdyn_msgs__msg__GazeCommandRequest__are_equal(const bosdyn_msgs__msg__GazeCommandRequest * lhs, const bosdyn_msgs__msg__GazeCommandRequest * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // target_trajectory_in_frame1
  if (!bosdyn_msgs__msg__Vec3Trajectory__are_equal(
      &(lhs->target_trajectory_in_frame1), &(rhs->target_trajectory_in_frame1)))
  {
    return false;
  }
  // target_trajectory_in_frame1_is_set
  if (lhs->target_trajectory_in_frame1_is_set != rhs->target_trajectory_in_frame1_is_set) {
    return false;
  }
  // frame1_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->frame1_name), &(rhs->frame1_name)))
  {
    return false;
  }
  // tool_trajectory_in_frame2
  if (!bosdyn_msgs__msg__SE3Trajectory__are_equal(
      &(lhs->tool_trajectory_in_frame2), &(rhs->tool_trajectory_in_frame2)))
  {
    return false;
  }
  // tool_trajectory_in_frame2_is_set
  if (lhs->tool_trajectory_in_frame2_is_set != rhs->tool_trajectory_in_frame2_is_set) {
    return false;
  }
  // frame2_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->frame2_name), &(rhs->frame2_name)))
  {
    return false;
  }
  // wrist_tform_tool
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->wrist_tform_tool), &(rhs->wrist_tform_tool)))
  {
    return false;
  }
  // wrist_tform_tool_is_set
  if (lhs->wrist_tform_tool_is_set != rhs->wrist_tform_tool_is_set) {
    return false;
  }
  // target_trajectory_initial_velocity
  if (lhs->target_trajectory_initial_velocity != rhs->target_trajectory_initial_velocity) {
    return false;
  }
  // target_trajectory_initial_velocity_is_set
  if (lhs->target_trajectory_initial_velocity_is_set != rhs->target_trajectory_initial_velocity_is_set) {
    return false;
  }
  // maximum_acceleration
  if (lhs->maximum_acceleration != rhs->maximum_acceleration) {
    return false;
  }
  // maximum_acceleration_is_set
  if (lhs->maximum_acceleration_is_set != rhs->maximum_acceleration_is_set) {
    return false;
  }
  // max_linear_velocity
  if (lhs->max_linear_velocity != rhs->max_linear_velocity) {
    return false;
  }
  // max_linear_velocity_is_set
  if (lhs->max_linear_velocity_is_set != rhs->max_linear_velocity_is_set) {
    return false;
  }
  // max_angular_velocity
  if (lhs->max_angular_velocity != rhs->max_angular_velocity) {
    return false;
  }
  // max_angular_velocity_is_set
  if (lhs->max_angular_velocity_is_set != rhs->max_angular_velocity_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__GazeCommandRequest__copy(
  const bosdyn_msgs__msg__GazeCommandRequest * input,
  bosdyn_msgs__msg__GazeCommandRequest * output)
{
  if (!input || !output) {
    return false;
  }
  // target_trajectory_in_frame1
  if (!bosdyn_msgs__msg__Vec3Trajectory__copy(
      &(input->target_trajectory_in_frame1), &(output->target_trajectory_in_frame1)))
  {
    return false;
  }
  // target_trajectory_in_frame1_is_set
  output->target_trajectory_in_frame1_is_set = input->target_trajectory_in_frame1_is_set;
  // frame1_name
  if (!rosidl_runtime_c__String__copy(
      &(input->frame1_name), &(output->frame1_name)))
  {
    return false;
  }
  // tool_trajectory_in_frame2
  if (!bosdyn_msgs__msg__SE3Trajectory__copy(
      &(input->tool_trajectory_in_frame2), &(output->tool_trajectory_in_frame2)))
  {
    return false;
  }
  // tool_trajectory_in_frame2_is_set
  output->tool_trajectory_in_frame2_is_set = input->tool_trajectory_in_frame2_is_set;
  // frame2_name
  if (!rosidl_runtime_c__String__copy(
      &(input->frame2_name), &(output->frame2_name)))
  {
    return false;
  }
  // wrist_tform_tool
  if (!geometry_msgs__msg__Pose__copy(
      &(input->wrist_tform_tool), &(output->wrist_tform_tool)))
  {
    return false;
  }
  // wrist_tform_tool_is_set
  output->wrist_tform_tool_is_set = input->wrist_tform_tool_is_set;
  // target_trajectory_initial_velocity
  output->target_trajectory_initial_velocity = input->target_trajectory_initial_velocity;
  // target_trajectory_initial_velocity_is_set
  output->target_trajectory_initial_velocity_is_set = input->target_trajectory_initial_velocity_is_set;
  // maximum_acceleration
  output->maximum_acceleration = input->maximum_acceleration;
  // maximum_acceleration_is_set
  output->maximum_acceleration_is_set = input->maximum_acceleration_is_set;
  // max_linear_velocity
  output->max_linear_velocity = input->max_linear_velocity;
  // max_linear_velocity_is_set
  output->max_linear_velocity_is_set = input->max_linear_velocity_is_set;
  // max_angular_velocity
  output->max_angular_velocity = input->max_angular_velocity;
  // max_angular_velocity_is_set
  output->max_angular_velocity_is_set = input->max_angular_velocity_is_set;
  return true;
}

bosdyn_msgs__msg__GazeCommandRequest *
bosdyn_msgs__msg__GazeCommandRequest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__GazeCommandRequest * msg = (bosdyn_msgs__msg__GazeCommandRequest *)allocator.allocate(sizeof(bosdyn_msgs__msg__GazeCommandRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__GazeCommandRequest));
  bool success = bosdyn_msgs__msg__GazeCommandRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__GazeCommandRequest__destroy(bosdyn_msgs__msg__GazeCommandRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__GazeCommandRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__GazeCommandRequest__Sequence__init(bosdyn_msgs__msg__GazeCommandRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__GazeCommandRequest * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__GazeCommandRequest *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__GazeCommandRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__GazeCommandRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__GazeCommandRequest__fini(&data[i - 1]);
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
bosdyn_msgs__msg__GazeCommandRequest__Sequence__fini(bosdyn_msgs__msg__GazeCommandRequest__Sequence * array)
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
      bosdyn_msgs__msg__GazeCommandRequest__fini(&array->data[i]);
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

bosdyn_msgs__msg__GazeCommandRequest__Sequence *
bosdyn_msgs__msg__GazeCommandRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__GazeCommandRequest__Sequence * array = (bosdyn_msgs__msg__GazeCommandRequest__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__GazeCommandRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__GazeCommandRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__GazeCommandRequest__Sequence__destroy(bosdyn_msgs__msg__GazeCommandRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__GazeCommandRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__GazeCommandRequest__Sequence__are_equal(const bosdyn_msgs__msg__GazeCommandRequest__Sequence * lhs, const bosdyn_msgs__msg__GazeCommandRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__GazeCommandRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__GazeCommandRequest__Sequence__copy(
  const bosdyn_msgs__msg__GazeCommandRequest__Sequence * input,
  bosdyn_msgs__msg__GazeCommandRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__GazeCommandRequest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__GazeCommandRequest * data =
      (bosdyn_msgs__msg__GazeCommandRequest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__GazeCommandRequest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__GazeCommandRequest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__GazeCommandRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
