// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/ActionWrapperArmSensorPointing.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/action_wrapper_arm_sensor_pointing__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `joint_trajectory`
#include "bosdyn_msgs/msg/detail/arm_joint_trajectory__functions.h"
// Member `wrist_tform_tool`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `pose_trajectory_rt_target`
#include "bosdyn_msgs/msg/detail/se3_trajectory__functions.h"
// Member `target_tform_measured_offset`
#include "bosdyn_msgs/msg/detail/se2_pose__functions.h"
// Member `body_assist_params`
#include "bosdyn_msgs/msg/detail/body_control_params_body_assist_for_manipulation__functions.h"

bool
bosdyn_msgs__msg__ActionWrapperArmSensorPointing__init(bosdyn_msgs__msg__ActionWrapperArmSensorPointing * msg)
{
  if (!msg) {
    return false;
  }
  // joint_trajectory
  if (!bosdyn_msgs__msg__ArmJointTrajectory__init(&msg->joint_trajectory)) {
    bosdyn_msgs__msg__ActionWrapperArmSensorPointing__fini(msg);
    return false;
  }
  // joint_trajectory_is_set
  // wrist_tform_tool
  if (!geometry_msgs__msg__Pose__init(&msg->wrist_tform_tool)) {
    bosdyn_msgs__msg__ActionWrapperArmSensorPointing__fini(msg);
    return false;
  }
  // wrist_tform_tool_is_set
  // pose_trajectory_rt_target
  if (!bosdyn_msgs__msg__SE3Trajectory__init(&msg->pose_trajectory_rt_target)) {
    bosdyn_msgs__msg__ActionWrapperArmSensorPointing__fini(msg);
    return false;
  }
  // pose_trajectory_rt_target_is_set
  // target_tform_measured_offset
  if (!bosdyn_msgs__msg__SE2Pose__init(&msg->target_tform_measured_offset)) {
    bosdyn_msgs__msg__ActionWrapperArmSensorPointing__fini(msg);
    return false;
  }
  // target_tform_measured_offset_is_set
  // body_assist_params
  if (!bosdyn_msgs__msg__BodyControlParamsBodyAssistForManipulation__init(&msg->body_assist_params)) {
    bosdyn_msgs__msg__ActionWrapperArmSensorPointing__fini(msg);
    return false;
  }
  // body_assist_params_is_set
  // force_stow_override
  return true;
}

void
bosdyn_msgs__msg__ActionWrapperArmSensorPointing__fini(bosdyn_msgs__msg__ActionWrapperArmSensorPointing * msg)
{
  if (!msg) {
    return;
  }
  // joint_trajectory
  bosdyn_msgs__msg__ArmJointTrajectory__fini(&msg->joint_trajectory);
  // joint_trajectory_is_set
  // wrist_tform_tool
  geometry_msgs__msg__Pose__fini(&msg->wrist_tform_tool);
  // wrist_tform_tool_is_set
  // pose_trajectory_rt_target
  bosdyn_msgs__msg__SE3Trajectory__fini(&msg->pose_trajectory_rt_target);
  // pose_trajectory_rt_target_is_set
  // target_tform_measured_offset
  bosdyn_msgs__msg__SE2Pose__fini(&msg->target_tform_measured_offset);
  // target_tform_measured_offset_is_set
  // body_assist_params
  bosdyn_msgs__msg__BodyControlParamsBodyAssistForManipulation__fini(&msg->body_assist_params);
  // body_assist_params_is_set
  // force_stow_override
}

bool
bosdyn_msgs__msg__ActionWrapperArmSensorPointing__are_equal(const bosdyn_msgs__msg__ActionWrapperArmSensorPointing * lhs, const bosdyn_msgs__msg__ActionWrapperArmSensorPointing * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // joint_trajectory
  if (!bosdyn_msgs__msg__ArmJointTrajectory__are_equal(
      &(lhs->joint_trajectory), &(rhs->joint_trajectory)))
  {
    return false;
  }
  // joint_trajectory_is_set
  if (lhs->joint_trajectory_is_set != rhs->joint_trajectory_is_set) {
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
  // pose_trajectory_rt_target
  if (!bosdyn_msgs__msg__SE3Trajectory__are_equal(
      &(lhs->pose_trajectory_rt_target), &(rhs->pose_trajectory_rt_target)))
  {
    return false;
  }
  // pose_trajectory_rt_target_is_set
  if (lhs->pose_trajectory_rt_target_is_set != rhs->pose_trajectory_rt_target_is_set) {
    return false;
  }
  // target_tform_measured_offset
  if (!bosdyn_msgs__msg__SE2Pose__are_equal(
      &(lhs->target_tform_measured_offset), &(rhs->target_tform_measured_offset)))
  {
    return false;
  }
  // target_tform_measured_offset_is_set
  if (lhs->target_tform_measured_offset_is_set != rhs->target_tform_measured_offset_is_set) {
    return false;
  }
  // body_assist_params
  if (!bosdyn_msgs__msg__BodyControlParamsBodyAssistForManipulation__are_equal(
      &(lhs->body_assist_params), &(rhs->body_assist_params)))
  {
    return false;
  }
  // body_assist_params_is_set
  if (lhs->body_assist_params_is_set != rhs->body_assist_params_is_set) {
    return false;
  }
  // force_stow_override
  if (lhs->force_stow_override != rhs->force_stow_override) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__ActionWrapperArmSensorPointing__copy(
  const bosdyn_msgs__msg__ActionWrapperArmSensorPointing * input,
  bosdyn_msgs__msg__ActionWrapperArmSensorPointing * output)
{
  if (!input || !output) {
    return false;
  }
  // joint_trajectory
  if (!bosdyn_msgs__msg__ArmJointTrajectory__copy(
      &(input->joint_trajectory), &(output->joint_trajectory)))
  {
    return false;
  }
  // joint_trajectory_is_set
  output->joint_trajectory_is_set = input->joint_trajectory_is_set;
  // wrist_tform_tool
  if (!geometry_msgs__msg__Pose__copy(
      &(input->wrist_tform_tool), &(output->wrist_tform_tool)))
  {
    return false;
  }
  // wrist_tform_tool_is_set
  output->wrist_tform_tool_is_set = input->wrist_tform_tool_is_set;
  // pose_trajectory_rt_target
  if (!bosdyn_msgs__msg__SE3Trajectory__copy(
      &(input->pose_trajectory_rt_target), &(output->pose_trajectory_rt_target)))
  {
    return false;
  }
  // pose_trajectory_rt_target_is_set
  output->pose_trajectory_rt_target_is_set = input->pose_trajectory_rt_target_is_set;
  // target_tform_measured_offset
  if (!bosdyn_msgs__msg__SE2Pose__copy(
      &(input->target_tform_measured_offset), &(output->target_tform_measured_offset)))
  {
    return false;
  }
  // target_tform_measured_offset_is_set
  output->target_tform_measured_offset_is_set = input->target_tform_measured_offset_is_set;
  // body_assist_params
  if (!bosdyn_msgs__msg__BodyControlParamsBodyAssistForManipulation__copy(
      &(input->body_assist_params), &(output->body_assist_params)))
  {
    return false;
  }
  // body_assist_params_is_set
  output->body_assist_params_is_set = input->body_assist_params_is_set;
  // force_stow_override
  output->force_stow_override = input->force_stow_override;
  return true;
}

bosdyn_msgs__msg__ActionWrapperArmSensorPointing *
bosdyn_msgs__msg__ActionWrapperArmSensorPointing__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ActionWrapperArmSensorPointing * msg = (bosdyn_msgs__msg__ActionWrapperArmSensorPointing *)allocator.allocate(sizeof(bosdyn_msgs__msg__ActionWrapperArmSensorPointing), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__ActionWrapperArmSensorPointing));
  bool success = bosdyn_msgs__msg__ActionWrapperArmSensorPointing__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__ActionWrapperArmSensorPointing__destroy(bosdyn_msgs__msg__ActionWrapperArmSensorPointing * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__ActionWrapperArmSensorPointing__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__ActionWrapperArmSensorPointing__Sequence__init(bosdyn_msgs__msg__ActionWrapperArmSensorPointing__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ActionWrapperArmSensorPointing * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__ActionWrapperArmSensorPointing *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__ActionWrapperArmSensorPointing), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__ActionWrapperArmSensorPointing__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__ActionWrapperArmSensorPointing__fini(&data[i - 1]);
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
bosdyn_msgs__msg__ActionWrapperArmSensorPointing__Sequence__fini(bosdyn_msgs__msg__ActionWrapperArmSensorPointing__Sequence * array)
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
      bosdyn_msgs__msg__ActionWrapperArmSensorPointing__fini(&array->data[i]);
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

bosdyn_msgs__msg__ActionWrapperArmSensorPointing__Sequence *
bosdyn_msgs__msg__ActionWrapperArmSensorPointing__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ActionWrapperArmSensorPointing__Sequence * array = (bosdyn_msgs__msg__ActionWrapperArmSensorPointing__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__ActionWrapperArmSensorPointing__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__ActionWrapperArmSensorPointing__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__ActionWrapperArmSensorPointing__Sequence__destroy(bosdyn_msgs__msg__ActionWrapperArmSensorPointing__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__ActionWrapperArmSensorPointing__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__ActionWrapperArmSensorPointing__Sequence__are_equal(const bosdyn_msgs__msg__ActionWrapperArmSensorPointing__Sequence * lhs, const bosdyn_msgs__msg__ActionWrapperArmSensorPointing__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__ActionWrapperArmSensorPointing__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__ActionWrapperArmSensorPointing__Sequence__copy(
  const bosdyn_msgs__msg__ActionWrapperArmSensorPointing__Sequence * input,
  bosdyn_msgs__msg__ActionWrapperArmSensorPointing__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__ActionWrapperArmSensorPointing);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__ActionWrapperArmSensorPointing * data =
      (bosdyn_msgs__msg__ActionWrapperArmSensorPointing *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__ActionWrapperArmSensorPointing__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__ActionWrapperArmSensorPointing__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__ActionWrapperArmSensorPointing__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
