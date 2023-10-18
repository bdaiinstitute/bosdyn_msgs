// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/ArmSurfaceContactRequest.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/arm_surface_contact_request__functions.h"

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
#include "bosdyn_msgs/msg/detail/arm_surface_contact_request_one_of_joint_configuration__functions.h"
// Member `x_axis`
// Member `y_axis`
// Member `z_axis`
#include "bosdyn_msgs/msg/detail/arm_surface_contact_request_axis_mode__functions.h"
// Member `press_force_percentage`
// Member `bias_force_ewrt_body`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `xy_admittance`
// Member `z_admittance`
// Member `xy_to_z_cross_term_admittance`
#include "bosdyn_msgs/msg/detail/arm_surface_contact_request_admittance_setting__functions.h"
// Member `gripper_command`
#include "bosdyn_msgs/msg/detail/claw_gripper_command_request__functions.h"

bool
bosdyn_msgs__msg__ArmSurfaceContactRequest__init(bosdyn_msgs__msg__ArmSurfaceContactRequest * msg)
{
  if (!msg) {
    return false;
  }
  // root_frame_name
  if (!rosidl_runtime_c__String__init(&msg->root_frame_name)) {
    bosdyn_msgs__msg__ArmSurfaceContactRequest__fini(msg);
    return false;
  }
  // wrist_tform_tool
  if (!geometry_msgs__msg__Pose__init(&msg->wrist_tform_tool)) {
    bosdyn_msgs__msg__ArmSurfaceContactRequest__fini(msg);
    return false;
  }
  // wrist_tform_tool_is_set
  // root_tform_task
  if (!geometry_msgs__msg__Pose__init(&msg->root_tform_task)) {
    bosdyn_msgs__msg__ArmSurfaceContactRequest__fini(msg);
    return false;
  }
  // root_tform_task_is_set
  // pose_trajectory_in_task
  if (!bosdyn_msgs__msg__SE3Trajectory__init(&msg->pose_trajectory_in_task)) {
    bosdyn_msgs__msg__ArmSurfaceContactRequest__fini(msg);
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
  if (!bosdyn_msgs__msg__ArmSurfaceContactRequestOneOfJointConfiguration__init(&msg->joint_configuration)) {
    bosdyn_msgs__msg__ArmSurfaceContactRequest__fini(msg);
    return false;
  }
  // x_axis
  if (!bosdyn_msgs__msg__ArmSurfaceContactRequestAxisMode__init(&msg->x_axis)) {
    bosdyn_msgs__msg__ArmSurfaceContactRequest__fini(msg);
    return false;
  }
  // y_axis
  if (!bosdyn_msgs__msg__ArmSurfaceContactRequestAxisMode__init(&msg->y_axis)) {
    bosdyn_msgs__msg__ArmSurfaceContactRequest__fini(msg);
    return false;
  }
  // z_axis
  if (!bosdyn_msgs__msg__ArmSurfaceContactRequestAxisMode__init(&msg->z_axis)) {
    bosdyn_msgs__msg__ArmSurfaceContactRequest__fini(msg);
    return false;
  }
  // press_force_percentage
  if (!geometry_msgs__msg__Vector3__init(&msg->press_force_percentage)) {
    bosdyn_msgs__msg__ArmSurfaceContactRequest__fini(msg);
    return false;
  }
  // press_force_percentage_is_set
  // xy_admittance
  if (!bosdyn_msgs__msg__ArmSurfaceContactRequestAdmittanceSetting__init(&msg->xy_admittance)) {
    bosdyn_msgs__msg__ArmSurfaceContactRequest__fini(msg);
    return false;
  }
  // z_admittance
  if (!bosdyn_msgs__msg__ArmSurfaceContactRequestAdmittanceSetting__init(&msg->z_admittance)) {
    bosdyn_msgs__msg__ArmSurfaceContactRequest__fini(msg);
    return false;
  }
  // xy_to_z_cross_term_admittance
  if (!bosdyn_msgs__msg__ArmSurfaceContactRequestAdmittanceSetting__init(&msg->xy_to_z_cross_term_admittance)) {
    bosdyn_msgs__msg__ArmSurfaceContactRequest__fini(msg);
    return false;
  }
  // bias_force_ewrt_body
  if (!geometry_msgs__msg__Vector3__init(&msg->bias_force_ewrt_body)) {
    bosdyn_msgs__msg__ArmSurfaceContactRequest__fini(msg);
    return false;
  }
  // bias_force_ewrt_body_is_set
  // gripper_command
  if (!bosdyn_msgs__msg__ClawGripperCommandRequest__init(&msg->gripper_command)) {
    bosdyn_msgs__msg__ArmSurfaceContactRequest__fini(msg);
    return false;
  }
  // gripper_command_is_set
  // is_robot_following_hand
  return true;
}

void
bosdyn_msgs__msg__ArmSurfaceContactRequest__fini(bosdyn_msgs__msg__ArmSurfaceContactRequest * msg)
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
  bosdyn_msgs__msg__ArmSurfaceContactRequestOneOfJointConfiguration__fini(&msg->joint_configuration);
  // x_axis
  bosdyn_msgs__msg__ArmSurfaceContactRequestAxisMode__fini(&msg->x_axis);
  // y_axis
  bosdyn_msgs__msg__ArmSurfaceContactRequestAxisMode__fini(&msg->y_axis);
  // z_axis
  bosdyn_msgs__msg__ArmSurfaceContactRequestAxisMode__fini(&msg->z_axis);
  // press_force_percentage
  geometry_msgs__msg__Vector3__fini(&msg->press_force_percentage);
  // press_force_percentage_is_set
  // xy_admittance
  bosdyn_msgs__msg__ArmSurfaceContactRequestAdmittanceSetting__fini(&msg->xy_admittance);
  // z_admittance
  bosdyn_msgs__msg__ArmSurfaceContactRequestAdmittanceSetting__fini(&msg->z_admittance);
  // xy_to_z_cross_term_admittance
  bosdyn_msgs__msg__ArmSurfaceContactRequestAdmittanceSetting__fini(&msg->xy_to_z_cross_term_admittance);
  // bias_force_ewrt_body
  geometry_msgs__msg__Vector3__fini(&msg->bias_force_ewrt_body);
  // bias_force_ewrt_body_is_set
  // gripper_command
  bosdyn_msgs__msg__ClawGripperCommandRequest__fini(&msg->gripper_command);
  // gripper_command_is_set
  // is_robot_following_hand
}

bool
bosdyn_msgs__msg__ArmSurfaceContactRequest__are_equal(const bosdyn_msgs__msg__ArmSurfaceContactRequest * lhs, const bosdyn_msgs__msg__ArmSurfaceContactRequest * rhs)
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
  if (!bosdyn_msgs__msg__ArmSurfaceContactRequestOneOfJointConfiguration__are_equal(
      &(lhs->joint_configuration), &(rhs->joint_configuration)))
  {
    return false;
  }
  // x_axis
  if (!bosdyn_msgs__msg__ArmSurfaceContactRequestAxisMode__are_equal(
      &(lhs->x_axis), &(rhs->x_axis)))
  {
    return false;
  }
  // y_axis
  if (!bosdyn_msgs__msg__ArmSurfaceContactRequestAxisMode__are_equal(
      &(lhs->y_axis), &(rhs->y_axis)))
  {
    return false;
  }
  // z_axis
  if (!bosdyn_msgs__msg__ArmSurfaceContactRequestAxisMode__are_equal(
      &(lhs->z_axis), &(rhs->z_axis)))
  {
    return false;
  }
  // press_force_percentage
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->press_force_percentage), &(rhs->press_force_percentage)))
  {
    return false;
  }
  // press_force_percentage_is_set
  if (lhs->press_force_percentage_is_set != rhs->press_force_percentage_is_set) {
    return false;
  }
  // xy_admittance
  if (!bosdyn_msgs__msg__ArmSurfaceContactRequestAdmittanceSetting__are_equal(
      &(lhs->xy_admittance), &(rhs->xy_admittance)))
  {
    return false;
  }
  // z_admittance
  if (!bosdyn_msgs__msg__ArmSurfaceContactRequestAdmittanceSetting__are_equal(
      &(lhs->z_admittance), &(rhs->z_admittance)))
  {
    return false;
  }
  // xy_to_z_cross_term_admittance
  if (!bosdyn_msgs__msg__ArmSurfaceContactRequestAdmittanceSetting__are_equal(
      &(lhs->xy_to_z_cross_term_admittance), &(rhs->xy_to_z_cross_term_admittance)))
  {
    return false;
  }
  // bias_force_ewrt_body
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->bias_force_ewrt_body), &(rhs->bias_force_ewrt_body)))
  {
    return false;
  }
  // bias_force_ewrt_body_is_set
  if (lhs->bias_force_ewrt_body_is_set != rhs->bias_force_ewrt_body_is_set) {
    return false;
  }
  // gripper_command
  if (!bosdyn_msgs__msg__ClawGripperCommandRequest__are_equal(
      &(lhs->gripper_command), &(rhs->gripper_command)))
  {
    return false;
  }
  // gripper_command_is_set
  if (lhs->gripper_command_is_set != rhs->gripper_command_is_set) {
    return false;
  }
  // is_robot_following_hand
  if (lhs->is_robot_following_hand != rhs->is_robot_following_hand) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__ArmSurfaceContactRequest__copy(
  const bosdyn_msgs__msg__ArmSurfaceContactRequest * input,
  bosdyn_msgs__msg__ArmSurfaceContactRequest * output)
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
  if (!bosdyn_msgs__msg__ArmSurfaceContactRequestOneOfJointConfiguration__copy(
      &(input->joint_configuration), &(output->joint_configuration)))
  {
    return false;
  }
  // x_axis
  if (!bosdyn_msgs__msg__ArmSurfaceContactRequestAxisMode__copy(
      &(input->x_axis), &(output->x_axis)))
  {
    return false;
  }
  // y_axis
  if (!bosdyn_msgs__msg__ArmSurfaceContactRequestAxisMode__copy(
      &(input->y_axis), &(output->y_axis)))
  {
    return false;
  }
  // z_axis
  if (!bosdyn_msgs__msg__ArmSurfaceContactRequestAxisMode__copy(
      &(input->z_axis), &(output->z_axis)))
  {
    return false;
  }
  // press_force_percentage
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->press_force_percentage), &(output->press_force_percentage)))
  {
    return false;
  }
  // press_force_percentage_is_set
  output->press_force_percentage_is_set = input->press_force_percentage_is_set;
  // xy_admittance
  if (!bosdyn_msgs__msg__ArmSurfaceContactRequestAdmittanceSetting__copy(
      &(input->xy_admittance), &(output->xy_admittance)))
  {
    return false;
  }
  // z_admittance
  if (!bosdyn_msgs__msg__ArmSurfaceContactRequestAdmittanceSetting__copy(
      &(input->z_admittance), &(output->z_admittance)))
  {
    return false;
  }
  // xy_to_z_cross_term_admittance
  if (!bosdyn_msgs__msg__ArmSurfaceContactRequestAdmittanceSetting__copy(
      &(input->xy_to_z_cross_term_admittance), &(output->xy_to_z_cross_term_admittance)))
  {
    return false;
  }
  // bias_force_ewrt_body
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->bias_force_ewrt_body), &(output->bias_force_ewrt_body)))
  {
    return false;
  }
  // bias_force_ewrt_body_is_set
  output->bias_force_ewrt_body_is_set = input->bias_force_ewrt_body_is_set;
  // gripper_command
  if (!bosdyn_msgs__msg__ClawGripperCommandRequest__copy(
      &(input->gripper_command), &(output->gripper_command)))
  {
    return false;
  }
  // gripper_command_is_set
  output->gripper_command_is_set = input->gripper_command_is_set;
  // is_robot_following_hand
  output->is_robot_following_hand = input->is_robot_following_hand;
  return true;
}

bosdyn_msgs__msg__ArmSurfaceContactRequest *
bosdyn_msgs__msg__ArmSurfaceContactRequest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ArmSurfaceContactRequest * msg = (bosdyn_msgs__msg__ArmSurfaceContactRequest *)allocator.allocate(sizeof(bosdyn_msgs__msg__ArmSurfaceContactRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__ArmSurfaceContactRequest));
  bool success = bosdyn_msgs__msg__ArmSurfaceContactRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__ArmSurfaceContactRequest__destroy(bosdyn_msgs__msg__ArmSurfaceContactRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__ArmSurfaceContactRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__ArmSurfaceContactRequest__Sequence__init(bosdyn_msgs__msg__ArmSurfaceContactRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ArmSurfaceContactRequest * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__ArmSurfaceContactRequest *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__ArmSurfaceContactRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__ArmSurfaceContactRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__ArmSurfaceContactRequest__fini(&data[i - 1]);
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
bosdyn_msgs__msg__ArmSurfaceContactRequest__Sequence__fini(bosdyn_msgs__msg__ArmSurfaceContactRequest__Sequence * array)
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
      bosdyn_msgs__msg__ArmSurfaceContactRequest__fini(&array->data[i]);
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

bosdyn_msgs__msg__ArmSurfaceContactRequest__Sequence *
bosdyn_msgs__msg__ArmSurfaceContactRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ArmSurfaceContactRequest__Sequence * array = (bosdyn_msgs__msg__ArmSurfaceContactRequest__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__ArmSurfaceContactRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__ArmSurfaceContactRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__ArmSurfaceContactRequest__Sequence__destroy(bosdyn_msgs__msg__ArmSurfaceContactRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__ArmSurfaceContactRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__ArmSurfaceContactRequest__Sequence__are_equal(const bosdyn_msgs__msg__ArmSurfaceContactRequest__Sequence * lhs, const bosdyn_msgs__msg__ArmSurfaceContactRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__ArmSurfaceContactRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__ArmSurfaceContactRequest__Sequence__copy(
  const bosdyn_msgs__msg__ArmSurfaceContactRequest__Sequence * input,
  bosdyn_msgs__msg__ArmSurfaceContactRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__ArmSurfaceContactRequest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__ArmSurfaceContactRequest * data =
      (bosdyn_msgs__msg__ArmSurfaceContactRequest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__ArmSurfaceContactRequest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__ArmSurfaceContactRequest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__ArmSurfaceContactRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
