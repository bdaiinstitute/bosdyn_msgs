// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/ArmImpedanceCommandRequest.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/arm_impedance_command_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `root_frame_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `root_tform_task`
// Member `wrist_tform_tool`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `task_tform_desired_tool`
#include "bosdyn_msgs/msg/detail/se3_trajectory__functions.h"
// Member `feed_forward_wrench_at_tool_in_desired_tool`
#include "geometry_msgs/msg/detail/wrench__functions.h"
// Member `diagonal_stiffness_matrix`
// Member `diagonal_damping_matrix`
#include "bosdyn_msgs/msg/detail/vector__functions.h"

bool
bosdyn_msgs__msg__ArmImpedanceCommandRequest__init(bosdyn_msgs__msg__ArmImpedanceCommandRequest * msg)
{
  if (!msg) {
    return false;
  }
  // root_frame_name
  if (!rosidl_runtime_c__String__init(&msg->root_frame_name)) {
    bosdyn_msgs__msg__ArmImpedanceCommandRequest__fini(msg);
    return false;
  }
  // root_tform_task
  if (!geometry_msgs__msg__Pose__init(&msg->root_tform_task)) {
    bosdyn_msgs__msg__ArmImpedanceCommandRequest__fini(msg);
    return false;
  }
  // root_tform_task_is_set
  // wrist_tform_tool
  if (!geometry_msgs__msg__Pose__init(&msg->wrist_tform_tool)) {
    bosdyn_msgs__msg__ArmImpedanceCommandRequest__fini(msg);
    return false;
  }
  // wrist_tform_tool_is_set
  // task_tform_desired_tool
  if (!bosdyn_msgs__msg__SE3Trajectory__init(&msg->task_tform_desired_tool)) {
    bosdyn_msgs__msg__ArmImpedanceCommandRequest__fini(msg);
    return false;
  }
  // task_tform_desired_tool_is_set
  // feed_forward_wrench_at_tool_in_desired_tool
  if (!geometry_msgs__msg__Wrench__init(&msg->feed_forward_wrench_at_tool_in_desired_tool)) {
    bosdyn_msgs__msg__ArmImpedanceCommandRequest__fini(msg);
    return false;
  }
  // feed_forward_wrench_at_tool_in_desired_tool_is_set
  // diagonal_stiffness_matrix
  if (!bosdyn_msgs__msg__Vector__init(&msg->diagonal_stiffness_matrix)) {
    bosdyn_msgs__msg__ArmImpedanceCommandRequest__fini(msg);
    return false;
  }
  // diagonal_stiffness_matrix_is_set
  // diagonal_damping_matrix
  if (!bosdyn_msgs__msg__Vector__init(&msg->diagonal_damping_matrix)) {
    bosdyn_msgs__msg__ArmImpedanceCommandRequest__fini(msg);
    return false;
  }
  // diagonal_damping_matrix_is_set
  // max_force_mag
  // max_force_mag_is_set
  // max_torque_mag
  // max_torque_mag_is_set
  return true;
}

void
bosdyn_msgs__msg__ArmImpedanceCommandRequest__fini(bosdyn_msgs__msg__ArmImpedanceCommandRequest * msg)
{
  if (!msg) {
    return;
  }
  // root_frame_name
  rosidl_runtime_c__String__fini(&msg->root_frame_name);
  // root_tform_task
  geometry_msgs__msg__Pose__fini(&msg->root_tform_task);
  // root_tform_task_is_set
  // wrist_tform_tool
  geometry_msgs__msg__Pose__fini(&msg->wrist_tform_tool);
  // wrist_tform_tool_is_set
  // task_tform_desired_tool
  bosdyn_msgs__msg__SE3Trajectory__fini(&msg->task_tform_desired_tool);
  // task_tform_desired_tool_is_set
  // feed_forward_wrench_at_tool_in_desired_tool
  geometry_msgs__msg__Wrench__fini(&msg->feed_forward_wrench_at_tool_in_desired_tool);
  // feed_forward_wrench_at_tool_in_desired_tool_is_set
  // diagonal_stiffness_matrix
  bosdyn_msgs__msg__Vector__fini(&msg->diagonal_stiffness_matrix);
  // diagonal_stiffness_matrix_is_set
  // diagonal_damping_matrix
  bosdyn_msgs__msg__Vector__fini(&msg->diagonal_damping_matrix);
  // diagonal_damping_matrix_is_set
  // max_force_mag
  // max_force_mag_is_set
  // max_torque_mag
  // max_torque_mag_is_set
}

bool
bosdyn_msgs__msg__ArmImpedanceCommandRequest__are_equal(const bosdyn_msgs__msg__ArmImpedanceCommandRequest * lhs, const bosdyn_msgs__msg__ArmImpedanceCommandRequest * rhs)
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
  // task_tform_desired_tool
  if (!bosdyn_msgs__msg__SE3Trajectory__are_equal(
      &(lhs->task_tform_desired_tool), &(rhs->task_tform_desired_tool)))
  {
    return false;
  }
  // task_tform_desired_tool_is_set
  if (lhs->task_tform_desired_tool_is_set != rhs->task_tform_desired_tool_is_set) {
    return false;
  }
  // feed_forward_wrench_at_tool_in_desired_tool
  if (!geometry_msgs__msg__Wrench__are_equal(
      &(lhs->feed_forward_wrench_at_tool_in_desired_tool), &(rhs->feed_forward_wrench_at_tool_in_desired_tool)))
  {
    return false;
  }
  // feed_forward_wrench_at_tool_in_desired_tool_is_set
  if (lhs->feed_forward_wrench_at_tool_in_desired_tool_is_set != rhs->feed_forward_wrench_at_tool_in_desired_tool_is_set) {
    return false;
  }
  // diagonal_stiffness_matrix
  if (!bosdyn_msgs__msg__Vector__are_equal(
      &(lhs->diagonal_stiffness_matrix), &(rhs->diagonal_stiffness_matrix)))
  {
    return false;
  }
  // diagonal_stiffness_matrix_is_set
  if (lhs->diagonal_stiffness_matrix_is_set != rhs->diagonal_stiffness_matrix_is_set) {
    return false;
  }
  // diagonal_damping_matrix
  if (!bosdyn_msgs__msg__Vector__are_equal(
      &(lhs->diagonal_damping_matrix), &(rhs->diagonal_damping_matrix)))
  {
    return false;
  }
  // diagonal_damping_matrix_is_set
  if (lhs->diagonal_damping_matrix_is_set != rhs->diagonal_damping_matrix_is_set) {
    return false;
  }
  // max_force_mag
  if (lhs->max_force_mag != rhs->max_force_mag) {
    return false;
  }
  // max_force_mag_is_set
  if (lhs->max_force_mag_is_set != rhs->max_force_mag_is_set) {
    return false;
  }
  // max_torque_mag
  if (lhs->max_torque_mag != rhs->max_torque_mag) {
    return false;
  }
  // max_torque_mag_is_set
  if (lhs->max_torque_mag_is_set != rhs->max_torque_mag_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__ArmImpedanceCommandRequest__copy(
  const bosdyn_msgs__msg__ArmImpedanceCommandRequest * input,
  bosdyn_msgs__msg__ArmImpedanceCommandRequest * output)
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
  // root_tform_task
  if (!geometry_msgs__msg__Pose__copy(
      &(input->root_tform_task), &(output->root_tform_task)))
  {
    return false;
  }
  // root_tform_task_is_set
  output->root_tform_task_is_set = input->root_tform_task_is_set;
  // wrist_tform_tool
  if (!geometry_msgs__msg__Pose__copy(
      &(input->wrist_tform_tool), &(output->wrist_tform_tool)))
  {
    return false;
  }
  // wrist_tform_tool_is_set
  output->wrist_tform_tool_is_set = input->wrist_tform_tool_is_set;
  // task_tform_desired_tool
  if (!bosdyn_msgs__msg__SE3Trajectory__copy(
      &(input->task_tform_desired_tool), &(output->task_tform_desired_tool)))
  {
    return false;
  }
  // task_tform_desired_tool_is_set
  output->task_tform_desired_tool_is_set = input->task_tform_desired_tool_is_set;
  // feed_forward_wrench_at_tool_in_desired_tool
  if (!geometry_msgs__msg__Wrench__copy(
      &(input->feed_forward_wrench_at_tool_in_desired_tool), &(output->feed_forward_wrench_at_tool_in_desired_tool)))
  {
    return false;
  }
  // feed_forward_wrench_at_tool_in_desired_tool_is_set
  output->feed_forward_wrench_at_tool_in_desired_tool_is_set = input->feed_forward_wrench_at_tool_in_desired_tool_is_set;
  // diagonal_stiffness_matrix
  if (!bosdyn_msgs__msg__Vector__copy(
      &(input->diagonal_stiffness_matrix), &(output->diagonal_stiffness_matrix)))
  {
    return false;
  }
  // diagonal_stiffness_matrix_is_set
  output->diagonal_stiffness_matrix_is_set = input->diagonal_stiffness_matrix_is_set;
  // diagonal_damping_matrix
  if (!bosdyn_msgs__msg__Vector__copy(
      &(input->diagonal_damping_matrix), &(output->diagonal_damping_matrix)))
  {
    return false;
  }
  // diagonal_damping_matrix_is_set
  output->diagonal_damping_matrix_is_set = input->diagonal_damping_matrix_is_set;
  // max_force_mag
  output->max_force_mag = input->max_force_mag;
  // max_force_mag_is_set
  output->max_force_mag_is_set = input->max_force_mag_is_set;
  // max_torque_mag
  output->max_torque_mag = input->max_torque_mag;
  // max_torque_mag_is_set
  output->max_torque_mag_is_set = input->max_torque_mag_is_set;
  return true;
}

bosdyn_msgs__msg__ArmImpedanceCommandRequest *
bosdyn_msgs__msg__ArmImpedanceCommandRequest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ArmImpedanceCommandRequest * msg = (bosdyn_msgs__msg__ArmImpedanceCommandRequest *)allocator.allocate(sizeof(bosdyn_msgs__msg__ArmImpedanceCommandRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__ArmImpedanceCommandRequest));
  bool success = bosdyn_msgs__msg__ArmImpedanceCommandRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__ArmImpedanceCommandRequest__destroy(bosdyn_msgs__msg__ArmImpedanceCommandRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__ArmImpedanceCommandRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__ArmImpedanceCommandRequest__Sequence__init(bosdyn_msgs__msg__ArmImpedanceCommandRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ArmImpedanceCommandRequest * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__ArmImpedanceCommandRequest *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__ArmImpedanceCommandRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__ArmImpedanceCommandRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__ArmImpedanceCommandRequest__fini(&data[i - 1]);
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
bosdyn_msgs__msg__ArmImpedanceCommandRequest__Sequence__fini(bosdyn_msgs__msg__ArmImpedanceCommandRequest__Sequence * array)
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
      bosdyn_msgs__msg__ArmImpedanceCommandRequest__fini(&array->data[i]);
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

bosdyn_msgs__msg__ArmImpedanceCommandRequest__Sequence *
bosdyn_msgs__msg__ArmImpedanceCommandRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ArmImpedanceCommandRequest__Sequence * array = (bosdyn_msgs__msg__ArmImpedanceCommandRequest__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__ArmImpedanceCommandRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__ArmImpedanceCommandRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__ArmImpedanceCommandRequest__Sequence__destroy(bosdyn_msgs__msg__ArmImpedanceCommandRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__ArmImpedanceCommandRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__ArmImpedanceCommandRequest__Sequence__are_equal(const bosdyn_msgs__msg__ArmImpedanceCommandRequest__Sequence * lhs, const bosdyn_msgs__msg__ArmImpedanceCommandRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__ArmImpedanceCommandRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__ArmImpedanceCommandRequest__Sequence__copy(
  const bosdyn_msgs__msg__ArmImpedanceCommandRequest__Sequence * input,
  bosdyn_msgs__msg__ArmImpedanceCommandRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__ArmImpedanceCommandRequest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__ArmImpedanceCommandRequest * data =
      (bosdyn_msgs__msg__ArmImpedanceCommandRequest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__ArmImpedanceCommandRequest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__ArmImpedanceCommandRequest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__ArmImpedanceCommandRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
