// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/ArmJointTrajectory.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/arm_joint_trajectory__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `points`
#include "bosdyn_msgs/msg/detail/arm_joint_trajectory_point__functions.h"
// Member `reference_time`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
bosdyn_msgs__msg__ArmJointTrajectory__init(bosdyn_msgs__msg__ArmJointTrajectory * msg)
{
  if (!msg) {
    return false;
  }
  // points
  if (!bosdyn_msgs__msg__ArmJointTrajectoryPoint__Sequence__init(&msg->points, 0)) {
    bosdyn_msgs__msg__ArmJointTrajectory__fini(msg);
    return false;
  }
  // reference_time
  if (!builtin_interfaces__msg__Time__init(&msg->reference_time)) {
    bosdyn_msgs__msg__ArmJointTrajectory__fini(msg);
    return false;
  }
  // reference_time_is_set
  // maximum_velocity
  // maximum_velocity_is_set
  // maximum_acceleration
  // maximum_acceleration_is_set
  return true;
}

void
bosdyn_msgs__msg__ArmJointTrajectory__fini(bosdyn_msgs__msg__ArmJointTrajectory * msg)
{
  if (!msg) {
    return;
  }
  // points
  bosdyn_msgs__msg__ArmJointTrajectoryPoint__Sequence__fini(&msg->points);
  // reference_time
  builtin_interfaces__msg__Time__fini(&msg->reference_time);
  // reference_time_is_set
  // maximum_velocity
  // maximum_velocity_is_set
  // maximum_acceleration
  // maximum_acceleration_is_set
}

bool
bosdyn_msgs__msg__ArmJointTrajectory__are_equal(const bosdyn_msgs__msg__ArmJointTrajectory * lhs, const bosdyn_msgs__msg__ArmJointTrajectory * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // points
  if (!bosdyn_msgs__msg__ArmJointTrajectoryPoint__Sequence__are_equal(
      &(lhs->points), &(rhs->points)))
  {
    return false;
  }
  // reference_time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->reference_time), &(rhs->reference_time)))
  {
    return false;
  }
  // reference_time_is_set
  if (lhs->reference_time_is_set != rhs->reference_time_is_set) {
    return false;
  }
  // maximum_velocity
  if (lhs->maximum_velocity != rhs->maximum_velocity) {
    return false;
  }
  // maximum_velocity_is_set
  if (lhs->maximum_velocity_is_set != rhs->maximum_velocity_is_set) {
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
  return true;
}

bool
bosdyn_msgs__msg__ArmJointTrajectory__copy(
  const bosdyn_msgs__msg__ArmJointTrajectory * input,
  bosdyn_msgs__msg__ArmJointTrajectory * output)
{
  if (!input || !output) {
    return false;
  }
  // points
  if (!bosdyn_msgs__msg__ArmJointTrajectoryPoint__Sequence__copy(
      &(input->points), &(output->points)))
  {
    return false;
  }
  // reference_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->reference_time), &(output->reference_time)))
  {
    return false;
  }
  // reference_time_is_set
  output->reference_time_is_set = input->reference_time_is_set;
  // maximum_velocity
  output->maximum_velocity = input->maximum_velocity;
  // maximum_velocity_is_set
  output->maximum_velocity_is_set = input->maximum_velocity_is_set;
  // maximum_acceleration
  output->maximum_acceleration = input->maximum_acceleration;
  // maximum_acceleration_is_set
  output->maximum_acceleration_is_set = input->maximum_acceleration_is_set;
  return true;
}

bosdyn_msgs__msg__ArmJointTrajectory *
bosdyn_msgs__msg__ArmJointTrajectory__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ArmJointTrajectory * msg = (bosdyn_msgs__msg__ArmJointTrajectory *)allocator.allocate(sizeof(bosdyn_msgs__msg__ArmJointTrajectory), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__ArmJointTrajectory));
  bool success = bosdyn_msgs__msg__ArmJointTrajectory__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__ArmJointTrajectory__destroy(bosdyn_msgs__msg__ArmJointTrajectory * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__ArmJointTrajectory__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__ArmJointTrajectory__Sequence__init(bosdyn_msgs__msg__ArmJointTrajectory__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ArmJointTrajectory * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__ArmJointTrajectory *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__ArmJointTrajectory), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__ArmJointTrajectory__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__ArmJointTrajectory__fini(&data[i - 1]);
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
bosdyn_msgs__msg__ArmJointTrajectory__Sequence__fini(bosdyn_msgs__msg__ArmJointTrajectory__Sequence * array)
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
      bosdyn_msgs__msg__ArmJointTrajectory__fini(&array->data[i]);
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

bosdyn_msgs__msg__ArmJointTrajectory__Sequence *
bosdyn_msgs__msg__ArmJointTrajectory__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ArmJointTrajectory__Sequence * array = (bosdyn_msgs__msg__ArmJointTrajectory__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__ArmJointTrajectory__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__ArmJointTrajectory__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__ArmJointTrajectory__Sequence__destroy(bosdyn_msgs__msg__ArmJointTrajectory__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__ArmJointTrajectory__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__ArmJointTrajectory__Sequence__are_equal(const bosdyn_msgs__msg__ArmJointTrajectory__Sequence * lhs, const bosdyn_msgs__msg__ArmJointTrajectory__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__ArmJointTrajectory__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__ArmJointTrajectory__Sequence__copy(
  const bosdyn_msgs__msg__ArmJointTrajectory__Sequence * input,
  bosdyn_msgs__msg__ArmJointTrajectory__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__ArmJointTrajectory);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__ArmJointTrajectory * data =
      (bosdyn_msgs__msg__ArmJointTrajectory *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__ArmJointTrajectory__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__ArmJointTrajectory__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__ArmJointTrajectory__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
