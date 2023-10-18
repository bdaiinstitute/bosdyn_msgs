// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/ArmCartesianCommandRequest.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/arm_cartesian_command_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `root_frame_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `wrist_tform_tool`
// Member `root_tform_task`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `pose_trajectory_in_task`
#include "bosdyn_msgs/msg/detail/se3_trajectory__functions.h"
// Member `joint_configuration`
#include "bosdyn_msgs/msg/detail/arm_cartesian_command_request_one_of_joint_configuration__functions.h"
// Member `x_axis`
// Member `y_axis`
// Member `z_axis`
// Member `rx_axis`
// Member `ry_axis`
// Member `rz_axis`
#include "bosdyn_msgs/msg/detail/arm_cartesian_command_request_axis_mode__functions.h"
// Member `wrench_trajectory_in_task`
#include "bosdyn_msgs/msg/detail/wrench_trajectory__functions.h"

bool
bosdyn_msgs__msg__ArmCartesianCommandRequest__init(bosdyn_msgs__msg__ArmCartesianCommandRequest * msg)
{
  if (!msg) {
    return false;
  }
  // root_frame_name
  if (!rosidl_runtime_c__String__init(&msg->root_frame_name)) {
    bosdyn_msgs__msg__ArmCartesianCommandRequest__fini(msg);
    return false;
  }
  // wrist_tform_tool
  if (!geometry_msgs__msg__Pose__init(&msg->wrist_tform_tool)) {
    bosdyn_msgs__msg__ArmCartesianCommandRequest__fini(msg);
    return false;
  }
  // wrist_tform_tool_is_set
  // root_tform_task
  if (!geometry_msgs__msg__Pose__init(&msg->root_tform_task)) {
    bosdyn_msgs__msg__ArmCartesianCommandRequest__fini(msg);
    return false;
  }
  // root_tform_task_is_set
  // pose_trajectory_in_task
  if (!bosdyn_msgs__msg__SE3Trajectory__init(&msg->pose_trajectory_in_task)) {
    bosdyn_msgs__msg__ArmCartesianCommandRequest__fini(msg);
    return false;
  }
  // pose_trajectory_in_task_is_set
  // maximum_acceleration
  // maximum_acceleration_is_set
  // max_linear_velocity
  // max_linear_velocity_is_set
  // max_angular_velocity
  // max_angular_velocity_is_set
  // max_pos_tracking_error
  // max_pos_tracking_error_is_set
  // max_rot_tracking_error
  // max_rot_tracking_error_is_set
  // joint_configuration
  if (!bosdyn_msgs__msg__ArmCartesianCommandRequestOneOfJointConfiguration__init(&msg->joint_configuration)) {
    bosdyn_msgs__msg__ArmCartesianCommandRequest__fini(msg);
    return false;
  }
  // x_axis
  if (!bosdyn_msgs__msg__ArmCartesianCommandRequestAxisMode__init(&msg->x_axis)) {
    bosdyn_msgs__msg__ArmCartesianCommandRequest__fini(msg);
    return false;
  }
  // y_axis
  if (!bosdyn_msgs__msg__ArmCartesianCommandRequestAxisMode__init(&msg->y_axis)) {
    bosdyn_msgs__msg__ArmCartesianCommandRequest__fini(msg);
    return false;
  }
  // z_axis
  if (!bosdyn_msgs__msg__ArmCartesianCommandRequestAxisMode__init(&msg->z_axis)) {
    bosdyn_msgs__msg__ArmCartesianCommandRequest__fini(msg);
    return false;
  }
  // rx_axis
  if (!bosdyn_msgs__msg__ArmCartesianCommandRequestAxisMode__init(&msg->rx_axis)) {
    bosdyn_msgs__msg__ArmCartesianCommandRequest__fini(msg);
    return false;
  }
  // ry_axis
  if (!bosdyn_msgs__msg__ArmCartesianCommandRequestAxisMode__init(&msg->ry_axis)) {
    bosdyn_msgs__msg__ArmCartesianCommandRequest__fini(msg);
    return false;
  }
  // rz_axis
  if (!bosdyn_msgs__msg__ArmCartesianCommandRequestAxisMode__init(&msg->rz_axis)) {
    bosdyn_msgs__msg__ArmCartesianCommandRequest__fini(msg);
    return false;
  }
  // wrench_trajectory_in_task
  if (!bosdyn_msgs__msg__WrenchTrajectory__init(&msg->wrench_trajectory_in_task)) {
    bosdyn_msgs__msg__ArmCartesianCommandRequest__fini(msg);
    return false;
  }
  // wrench_trajectory_in_task_is_set
  return true;
}

void
bosdyn_msgs__msg__ArmCartesianCommandRequest__fini(bosdyn_msgs__msg__ArmCartesianCommandRequest * msg)
{
  if (!msg) {
    return;
  }
  // root_frame_name
  rosidl_runtime_c__String__fini(&msg->root_frame_name);
  // wrist_tform_tool
  geometry_msgs__msg__Pose__fini(&msg->wrist_tform_tool);
  // wrist_tform_tool_is_set
  // root_tform_task
  geometry_msgs__msg__Pose__fini(&msg->root_tform_task);
  // root_tform_task_is_set
  // pose_trajectory_in_task
  bosdyn_msgs__msg__SE3Trajectory__fini(&msg->pose_trajectory_in_task);
  // pose_trajectory_in_task_is_set
  // maximum_acceleration
  // maximum_acceleration_is_set
  // max_linear_velocity
  // max_linear_velocity_is_set
  // max_angular_velocity
  // max_angular_velocity_is_set
  // max_pos_tracking_error
  // max_pos_tracking_error_is_set
  // max_rot_tracking_error
  // max_rot_tracking_error_is_set
  // joint_configuration
  bosdyn_msgs__msg__ArmCartesianCommandRequestOneOfJointConfiguration__fini(&msg->joint_configuration);
  // x_axis
  bosdyn_msgs__msg__ArmCartesianCommandRequestAxisMode__fini(&msg->x_axis);
  // y_axis
  bosdyn_msgs__msg__ArmCartesianCommandRequestAxisMode__fini(&msg->y_axis);
  // z_axis
  bosdyn_msgs__msg__ArmCartesianCommandRequestAxisMode__fini(&msg->z_axis);
  // rx_axis
  bosdyn_msgs__msg__ArmCartesianCommandRequestAxisMode__fini(&msg->rx_axis);
  // ry_axis
  bosdyn_msgs__msg__ArmCartesianCommandRequestAxisMode__fini(&msg->ry_axis);
  // rz_axis
  bosdyn_msgs__msg__ArmCartesianCommandRequestAxisMode__fini(&msg->rz_axis);
  // wrench_trajectory_in_task
  bosdyn_msgs__msg__WrenchTrajectory__fini(&msg->wrench_trajectory_in_task);
  // wrench_trajectory_in_task_is_set
}

bool
bosdyn_msgs__msg__ArmCartesianCommandRequest__are_equal(const bosdyn_msgs__msg__ArmCartesianCommandRequest * lhs, const bosdyn_msgs__msg__ArmCartesianCommandRequest * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // root_frame_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->root_frame_name), &(rhs->root_frame_name)))
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
  // root_tform_task
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->root_tform_task), &(rhs->root_tform_task)))
  {
    return false;
  }
  // root_tform_task_is_set
  if (lhs->root_tform_task_is_set != rhs->root_tform_task_is_set) {
    return false;
  }
  // pose_trajectory_in_task
  if (!bosdyn_msgs__msg__SE3Trajectory__are_equal(
      &(lhs->pose_trajectory_in_task), &(rhs->pose_trajectory_in_task)))
  {
    return false;
  }
  // pose_trajectory_in_task_is_set
  if (lhs->pose_trajectory_in_task_is_set != rhs->pose_trajectory_in_task_is_set) {
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
  // max_pos_tracking_error
  if (lhs->max_pos_tracking_error != rhs->max_pos_tracking_error) {
    return false;
  }
  // max_pos_tracking_error_is_set
  if (lhs->max_pos_tracking_error_is_set != rhs->max_pos_tracking_error_is_set) {
    return false;
  }
  // max_rot_tracking_error
  if (lhs->max_rot_tracking_error != rhs->max_rot_tracking_error) {
    return false;
  }
  // max_rot_tracking_error_is_set
  if (lhs->max_rot_tracking_error_is_set != rhs->max_rot_tracking_error_is_set) {
    return false;
  }
  // joint_configuration
  if (!bosdyn_msgs__msg__ArmCartesianCommandRequestOneOfJointConfiguration__are_equal(
      &(lhs->joint_configuration), &(rhs->joint_configuration)))
  {
    return false;
  }
  // x_axis
  if (!bosdyn_msgs__msg__ArmCartesianCommandRequestAxisMode__are_equal(
      &(lhs->x_axis), &(rhs->x_axis)))
  {
    return false;
  }
  // y_axis
  if (!bosdyn_msgs__msg__ArmCartesianCommandRequestAxisMode__are_equal(
      &(lhs->y_axis), &(rhs->y_axis)))
  {
    return false;
  }
  // z_axis
  if (!bosdyn_msgs__msg__ArmCartesianCommandRequestAxisMode__are_equal(
      &(lhs->z_axis), &(rhs->z_axis)))
  {
    return false;
  }
  // rx_axis
  if (!bosdyn_msgs__msg__ArmCartesianCommandRequestAxisMode__are_equal(
      &(lhs->rx_axis), &(rhs->rx_axis)))
  {
    return false;
  }
  // ry_axis
  if (!bosdyn_msgs__msg__ArmCartesianCommandRequestAxisMode__are_equal(
      &(lhs->ry_axis), &(rhs->ry_axis)))
  {
    return false;
  }
  // rz_axis
  if (!bosdyn_msgs__msg__ArmCartesianCommandRequestAxisMode__are_equal(
      &(lhs->rz_axis), &(rhs->rz_axis)))
  {
    return false;
  }
  // wrench_trajectory_in_task
  if (!bosdyn_msgs__msg__WrenchTrajectory__are_equal(
      &(lhs->wrench_trajectory_in_task), &(rhs->wrench_trajectory_in_task)))
  {
    return false;
  }
  // wrench_trajectory_in_task_is_set
  if (lhs->wrench_trajectory_in_task_is_set != rhs->wrench_trajectory_in_task_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__ArmCartesianCommandRequest__copy(
  const bosdyn_msgs__msg__ArmCartesianCommandRequest * input,
  bosdyn_msgs__msg__ArmCartesianCommandRequest * output)
{
  if (!input || !output) {
    return false;
  }
  // root_frame_name
  if (!rosidl_runtime_c__String__copy(
      &(input->root_frame_name), &(output->root_frame_name)))
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
  // root_tform_task
  if (!geometry_msgs__msg__Pose__copy(
      &(input->root_tform_task), &(output->root_tform_task)))
  {
    return false;
  }
  // root_tform_task_is_set
  output->root_tform_task_is_set = input->root_tform_task_is_set;
  // pose_trajectory_in_task
  if (!bosdyn_msgs__msg__SE3Trajectory__copy(
      &(input->pose_trajectory_in_task), &(output->pose_trajectory_in_task)))
  {
    return false;
  }
  // pose_trajectory_in_task_is_set
  output->pose_trajectory_in_task_is_set = input->pose_trajectory_in_task_is_set;
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
  // max_pos_tracking_error
  output->max_pos_tracking_error = input->max_pos_tracking_error;
  // max_pos_tracking_error_is_set
  output->max_pos_tracking_error_is_set = input->max_pos_tracking_error_is_set;
  // max_rot_tracking_error
  output->max_rot_tracking_error = input->max_rot_tracking_error;
  // max_rot_tracking_error_is_set
  output->max_rot_tracking_error_is_set = input->max_rot_tracking_error_is_set;
  // joint_configuration
  if (!bosdyn_msgs__msg__ArmCartesianCommandRequestOneOfJointConfiguration__copy(
      &(input->joint_configuration), &(output->joint_configuration)))
  {
    return false;
  }
  // x_axis
  if (!bosdyn_msgs__msg__ArmCartesianCommandRequestAxisMode__copy(
      &(input->x_axis), &(output->x_axis)))
  {
    return false;
  }
  // y_axis
  if (!bosdyn_msgs__msg__ArmCartesianCommandRequestAxisMode__copy(
      &(input->y_axis), &(output->y_axis)))
  {
    return false;
  }
  // z_axis
  if (!bosdyn_msgs__msg__ArmCartesianCommandRequestAxisMode__copy(
      &(input->z_axis), &(output->z_axis)))
  {
    return false;
  }
  // rx_axis
  if (!bosdyn_msgs__msg__ArmCartesianCommandRequestAxisMode__copy(
      &(input->rx_axis), &(output->rx_axis)))
  {
    return false;
  }
  // ry_axis
  if (!bosdyn_msgs__msg__ArmCartesianCommandRequestAxisMode__copy(
      &(input->ry_axis), &(output->ry_axis)))
  {
    return false;
  }
  // rz_axis
  if (!bosdyn_msgs__msg__ArmCartesianCommandRequestAxisMode__copy(
      &(input->rz_axis), &(output->rz_axis)))
  {
    return false;
  }
  // wrench_trajectory_in_task
  if (!bosdyn_msgs__msg__WrenchTrajectory__copy(
      &(input->wrench_trajectory_in_task), &(output->wrench_trajectory_in_task)))
  {
    return false;
  }
  // wrench_trajectory_in_task_is_set
  output->wrench_trajectory_in_task_is_set = input->wrench_trajectory_in_task_is_set;
  return true;
}

bosdyn_msgs__msg__ArmCartesianCommandRequest *
bosdyn_msgs__msg__ArmCartesianCommandRequest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ArmCartesianCommandRequest * msg = (bosdyn_msgs__msg__ArmCartesianCommandRequest *)allocator.allocate(sizeof(bosdyn_msgs__msg__ArmCartesianCommandRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__ArmCartesianCommandRequest));
  bool success = bosdyn_msgs__msg__ArmCartesianCommandRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__ArmCartesianCommandRequest__destroy(bosdyn_msgs__msg__ArmCartesianCommandRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__ArmCartesianCommandRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__ArmCartesianCommandRequest__Sequence__init(bosdyn_msgs__msg__ArmCartesianCommandRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ArmCartesianCommandRequest * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__ArmCartesianCommandRequest *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__ArmCartesianCommandRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__ArmCartesianCommandRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__ArmCartesianCommandRequest__fini(&data[i - 1]);
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
bosdyn_msgs__msg__ArmCartesianCommandRequest__Sequence__fini(bosdyn_msgs__msg__ArmCartesianCommandRequest__Sequence * array)
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
      bosdyn_msgs__msg__ArmCartesianCommandRequest__fini(&array->data[i]);
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

bosdyn_msgs__msg__ArmCartesianCommandRequest__Sequence *
bosdyn_msgs__msg__ArmCartesianCommandRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ArmCartesianCommandRequest__Sequence * array = (bosdyn_msgs__msg__ArmCartesianCommandRequest__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__ArmCartesianCommandRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__ArmCartesianCommandRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__ArmCartesianCommandRequest__Sequence__destroy(bosdyn_msgs__msg__ArmCartesianCommandRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__ArmCartesianCommandRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__ArmCartesianCommandRequest__Sequence__are_equal(const bosdyn_msgs__msg__ArmCartesianCommandRequest__Sequence * lhs, const bosdyn_msgs__msg__ArmCartesianCommandRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__ArmCartesianCommandRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__ArmCartesianCommandRequest__Sequence__copy(
  const bosdyn_msgs__msg__ArmCartesianCommandRequest__Sequence * input,
  bosdyn_msgs__msg__ArmCartesianCommandRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__ArmCartesianCommandRequest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__ArmCartesianCommandRequest * data =
      (bosdyn_msgs__msg__ArmCartesianCommandRequest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__ArmCartesianCommandRequest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__ArmCartesianCommandRequest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__ArmCartesianCommandRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
