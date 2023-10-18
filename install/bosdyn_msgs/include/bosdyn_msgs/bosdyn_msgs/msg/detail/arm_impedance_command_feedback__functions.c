// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/ArmImpedanceCommandFeedback.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/arm_impedance_command_feedback__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `status`
#include "bosdyn_msgs/msg/detail/arm_impedance_command_feedback_status__functions.h"
// Member `transforms_snapshot`
#include "bosdyn_msgs/msg/detail/frame_tree_snapshot__functions.h"
// Member `commanded_wrench_from_stiffness_at_tool_in_desired_tool`
// Member `commanded_wrench_from_damping_at_tool_in_desired_tool`
// Member `commanded_wrench_from_feed_forward_at_tool_in_desired_tool`
// Member `total_commanded_wrench_at_tool_in_desired_tool`
// Member `total_measured_wrench_at_tool_in_desired_tool`
#include "geometry_msgs/msg/detail/wrench__functions.h"

bool
bosdyn_msgs__msg__ArmImpedanceCommandFeedback__init(bosdyn_msgs__msg__ArmImpedanceCommandFeedback * msg)
{
  if (!msg) {
    return false;
  }
  // status
  if (!bosdyn_msgs__msg__ArmImpedanceCommandFeedbackStatus__init(&msg->status)) {
    bosdyn_msgs__msg__ArmImpedanceCommandFeedback__fini(msg);
    return false;
  }
  // transforms_snapshot
  if (!bosdyn_msgs__msg__FrameTreeSnapshot__init(&msg->transforms_snapshot)) {
    bosdyn_msgs__msg__ArmImpedanceCommandFeedback__fini(msg);
    return false;
  }
  // transforms_snapshot_is_set
  // commanded_wrench_from_stiffness_at_tool_in_desired_tool
  if (!geometry_msgs__msg__Wrench__init(&msg->commanded_wrench_from_stiffness_at_tool_in_desired_tool)) {
    bosdyn_msgs__msg__ArmImpedanceCommandFeedback__fini(msg);
    return false;
  }
  // commanded_wrench_from_stiffness_at_tool_in_desired_tool_is_set
  // commanded_wrench_from_damping_at_tool_in_desired_tool
  if (!geometry_msgs__msg__Wrench__init(&msg->commanded_wrench_from_damping_at_tool_in_desired_tool)) {
    bosdyn_msgs__msg__ArmImpedanceCommandFeedback__fini(msg);
    return false;
  }
  // commanded_wrench_from_damping_at_tool_in_desired_tool_is_set
  // commanded_wrench_from_feed_forward_at_tool_in_desired_tool
  if (!geometry_msgs__msg__Wrench__init(&msg->commanded_wrench_from_feed_forward_at_tool_in_desired_tool)) {
    bosdyn_msgs__msg__ArmImpedanceCommandFeedback__fini(msg);
    return false;
  }
  // commanded_wrench_from_feed_forward_at_tool_in_desired_tool_is_set
  // total_commanded_wrench_at_tool_in_desired_tool
  if (!geometry_msgs__msg__Wrench__init(&msg->total_commanded_wrench_at_tool_in_desired_tool)) {
    bosdyn_msgs__msg__ArmImpedanceCommandFeedback__fini(msg);
    return false;
  }
  // total_commanded_wrench_at_tool_in_desired_tool_is_set
  // total_measured_wrench_at_tool_in_desired_tool
  if (!geometry_msgs__msg__Wrench__init(&msg->total_measured_wrench_at_tool_in_desired_tool)) {
    bosdyn_msgs__msg__ArmImpedanceCommandFeedback__fini(msg);
    return false;
  }
  // total_measured_wrench_at_tool_in_desired_tool_is_set
  return true;
}

void
bosdyn_msgs__msg__ArmImpedanceCommandFeedback__fini(bosdyn_msgs__msg__ArmImpedanceCommandFeedback * msg)
{
  if (!msg) {
    return;
  }
  // status
  bosdyn_msgs__msg__ArmImpedanceCommandFeedbackStatus__fini(&msg->status);
  // transforms_snapshot
  bosdyn_msgs__msg__FrameTreeSnapshot__fini(&msg->transforms_snapshot);
  // transforms_snapshot_is_set
  // commanded_wrench_from_stiffness_at_tool_in_desired_tool
  geometry_msgs__msg__Wrench__fini(&msg->commanded_wrench_from_stiffness_at_tool_in_desired_tool);
  // commanded_wrench_from_stiffness_at_tool_in_desired_tool_is_set
  // commanded_wrench_from_damping_at_tool_in_desired_tool
  geometry_msgs__msg__Wrench__fini(&msg->commanded_wrench_from_damping_at_tool_in_desired_tool);
  // commanded_wrench_from_damping_at_tool_in_desired_tool_is_set
  // commanded_wrench_from_feed_forward_at_tool_in_desired_tool
  geometry_msgs__msg__Wrench__fini(&msg->commanded_wrench_from_feed_forward_at_tool_in_desired_tool);
  // commanded_wrench_from_feed_forward_at_tool_in_desired_tool_is_set
  // total_commanded_wrench_at_tool_in_desired_tool
  geometry_msgs__msg__Wrench__fini(&msg->total_commanded_wrench_at_tool_in_desired_tool);
  // total_commanded_wrench_at_tool_in_desired_tool_is_set
  // total_measured_wrench_at_tool_in_desired_tool
  geometry_msgs__msg__Wrench__fini(&msg->total_measured_wrench_at_tool_in_desired_tool);
  // total_measured_wrench_at_tool_in_desired_tool_is_set
}

bool
bosdyn_msgs__msg__ArmImpedanceCommandFeedback__are_equal(const bosdyn_msgs__msg__ArmImpedanceCommandFeedback * lhs, const bosdyn_msgs__msg__ArmImpedanceCommandFeedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (!bosdyn_msgs__msg__ArmImpedanceCommandFeedbackStatus__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  // transforms_snapshot
  if (!bosdyn_msgs__msg__FrameTreeSnapshot__are_equal(
      &(lhs->transforms_snapshot), &(rhs->transforms_snapshot)))
  {
    return false;
  }
  // transforms_snapshot_is_set
  if (lhs->transforms_snapshot_is_set != rhs->transforms_snapshot_is_set) {
    return false;
  }
  // commanded_wrench_from_stiffness_at_tool_in_desired_tool
  if (!geometry_msgs__msg__Wrench__are_equal(
      &(lhs->commanded_wrench_from_stiffness_at_tool_in_desired_tool), &(rhs->commanded_wrench_from_stiffness_at_tool_in_desired_tool)))
  {
    return false;
  }
  // commanded_wrench_from_stiffness_at_tool_in_desired_tool_is_set
  if (lhs->commanded_wrench_from_stiffness_at_tool_in_desired_tool_is_set != rhs->commanded_wrench_from_stiffness_at_tool_in_desired_tool_is_set) {
    return false;
  }
  // commanded_wrench_from_damping_at_tool_in_desired_tool
  if (!geometry_msgs__msg__Wrench__are_equal(
      &(lhs->commanded_wrench_from_damping_at_tool_in_desired_tool), &(rhs->commanded_wrench_from_damping_at_tool_in_desired_tool)))
  {
    return false;
  }
  // commanded_wrench_from_damping_at_tool_in_desired_tool_is_set
  if (lhs->commanded_wrench_from_damping_at_tool_in_desired_tool_is_set != rhs->commanded_wrench_from_damping_at_tool_in_desired_tool_is_set) {
    return false;
  }
  // commanded_wrench_from_feed_forward_at_tool_in_desired_tool
  if (!geometry_msgs__msg__Wrench__are_equal(
      &(lhs->commanded_wrench_from_feed_forward_at_tool_in_desired_tool), &(rhs->commanded_wrench_from_feed_forward_at_tool_in_desired_tool)))
  {
    return false;
  }
  // commanded_wrench_from_feed_forward_at_tool_in_desired_tool_is_set
  if (lhs->commanded_wrench_from_feed_forward_at_tool_in_desired_tool_is_set != rhs->commanded_wrench_from_feed_forward_at_tool_in_desired_tool_is_set) {
    return false;
  }
  // total_commanded_wrench_at_tool_in_desired_tool
  if (!geometry_msgs__msg__Wrench__are_equal(
      &(lhs->total_commanded_wrench_at_tool_in_desired_tool), &(rhs->total_commanded_wrench_at_tool_in_desired_tool)))
  {
    return false;
  }
  // total_commanded_wrench_at_tool_in_desired_tool_is_set
  if (lhs->total_commanded_wrench_at_tool_in_desired_tool_is_set != rhs->total_commanded_wrench_at_tool_in_desired_tool_is_set) {
    return false;
  }
  // total_measured_wrench_at_tool_in_desired_tool
  if (!geometry_msgs__msg__Wrench__are_equal(
      &(lhs->total_measured_wrench_at_tool_in_desired_tool), &(rhs->total_measured_wrench_at_tool_in_desired_tool)))
  {
    return false;
  }
  // total_measured_wrench_at_tool_in_desired_tool_is_set
  if (lhs->total_measured_wrench_at_tool_in_desired_tool_is_set != rhs->total_measured_wrench_at_tool_in_desired_tool_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__ArmImpedanceCommandFeedback__copy(
  const bosdyn_msgs__msg__ArmImpedanceCommandFeedback * input,
  bosdyn_msgs__msg__ArmImpedanceCommandFeedback * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  if (!bosdyn_msgs__msg__ArmImpedanceCommandFeedbackStatus__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  // transforms_snapshot
  if (!bosdyn_msgs__msg__FrameTreeSnapshot__copy(
      &(input->transforms_snapshot), &(output->transforms_snapshot)))
  {
    return false;
  }
  // transforms_snapshot_is_set
  output->transforms_snapshot_is_set = input->transforms_snapshot_is_set;
  // commanded_wrench_from_stiffness_at_tool_in_desired_tool
  if (!geometry_msgs__msg__Wrench__copy(
      &(input->commanded_wrench_from_stiffness_at_tool_in_desired_tool), &(output->commanded_wrench_from_stiffness_at_tool_in_desired_tool)))
  {
    return false;
  }
  // commanded_wrench_from_stiffness_at_tool_in_desired_tool_is_set
  output->commanded_wrench_from_stiffness_at_tool_in_desired_tool_is_set = input->commanded_wrench_from_stiffness_at_tool_in_desired_tool_is_set;
  // commanded_wrench_from_damping_at_tool_in_desired_tool
  if (!geometry_msgs__msg__Wrench__copy(
      &(input->commanded_wrench_from_damping_at_tool_in_desired_tool), &(output->commanded_wrench_from_damping_at_tool_in_desired_tool)))
  {
    return false;
  }
  // commanded_wrench_from_damping_at_tool_in_desired_tool_is_set
  output->commanded_wrench_from_damping_at_tool_in_desired_tool_is_set = input->commanded_wrench_from_damping_at_tool_in_desired_tool_is_set;
  // commanded_wrench_from_feed_forward_at_tool_in_desired_tool
  if (!geometry_msgs__msg__Wrench__copy(
      &(input->commanded_wrench_from_feed_forward_at_tool_in_desired_tool), &(output->commanded_wrench_from_feed_forward_at_tool_in_desired_tool)))
  {
    return false;
  }
  // commanded_wrench_from_feed_forward_at_tool_in_desired_tool_is_set
  output->commanded_wrench_from_feed_forward_at_tool_in_desired_tool_is_set = input->commanded_wrench_from_feed_forward_at_tool_in_desired_tool_is_set;
  // total_commanded_wrench_at_tool_in_desired_tool
  if (!geometry_msgs__msg__Wrench__copy(
      &(input->total_commanded_wrench_at_tool_in_desired_tool), &(output->total_commanded_wrench_at_tool_in_desired_tool)))
  {
    return false;
  }
  // total_commanded_wrench_at_tool_in_desired_tool_is_set
  output->total_commanded_wrench_at_tool_in_desired_tool_is_set = input->total_commanded_wrench_at_tool_in_desired_tool_is_set;
  // total_measured_wrench_at_tool_in_desired_tool
  if (!geometry_msgs__msg__Wrench__copy(
      &(input->total_measured_wrench_at_tool_in_desired_tool), &(output->total_measured_wrench_at_tool_in_desired_tool)))
  {
    return false;
  }
  // total_measured_wrench_at_tool_in_desired_tool_is_set
  output->total_measured_wrench_at_tool_in_desired_tool_is_set = input->total_measured_wrench_at_tool_in_desired_tool_is_set;
  return true;
}

bosdyn_msgs__msg__ArmImpedanceCommandFeedback *
bosdyn_msgs__msg__ArmImpedanceCommandFeedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ArmImpedanceCommandFeedback * msg = (bosdyn_msgs__msg__ArmImpedanceCommandFeedback *)allocator.allocate(sizeof(bosdyn_msgs__msg__ArmImpedanceCommandFeedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__ArmImpedanceCommandFeedback));
  bool success = bosdyn_msgs__msg__ArmImpedanceCommandFeedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__ArmImpedanceCommandFeedback__destroy(bosdyn_msgs__msg__ArmImpedanceCommandFeedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__ArmImpedanceCommandFeedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__ArmImpedanceCommandFeedback__Sequence__init(bosdyn_msgs__msg__ArmImpedanceCommandFeedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ArmImpedanceCommandFeedback * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__ArmImpedanceCommandFeedback *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__ArmImpedanceCommandFeedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__ArmImpedanceCommandFeedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__ArmImpedanceCommandFeedback__fini(&data[i - 1]);
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
bosdyn_msgs__msg__ArmImpedanceCommandFeedback__Sequence__fini(bosdyn_msgs__msg__ArmImpedanceCommandFeedback__Sequence * array)
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
      bosdyn_msgs__msg__ArmImpedanceCommandFeedback__fini(&array->data[i]);
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

bosdyn_msgs__msg__ArmImpedanceCommandFeedback__Sequence *
bosdyn_msgs__msg__ArmImpedanceCommandFeedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ArmImpedanceCommandFeedback__Sequence * array = (bosdyn_msgs__msg__ArmImpedanceCommandFeedback__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__ArmImpedanceCommandFeedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__ArmImpedanceCommandFeedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__ArmImpedanceCommandFeedback__Sequence__destroy(bosdyn_msgs__msg__ArmImpedanceCommandFeedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__ArmImpedanceCommandFeedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__ArmImpedanceCommandFeedback__Sequence__are_equal(const bosdyn_msgs__msg__ArmImpedanceCommandFeedback__Sequence * lhs, const bosdyn_msgs__msg__ArmImpedanceCommandFeedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__ArmImpedanceCommandFeedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__ArmImpedanceCommandFeedback__Sequence__copy(
  const bosdyn_msgs__msg__ArmImpedanceCommandFeedback__Sequence * input,
  bosdyn_msgs__msg__ArmImpedanceCommandFeedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__ArmImpedanceCommandFeedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__ArmImpedanceCommandFeedback * data =
      (bosdyn_msgs__msg__ArmImpedanceCommandFeedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__ArmImpedanceCommandFeedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__ArmImpedanceCommandFeedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__ArmImpedanceCommandFeedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
