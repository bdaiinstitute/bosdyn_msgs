// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/KinematicState.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/kinematic_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `joint_states`
#include "bosdyn_msgs/msg/detail/joint_state__functions.h"
// Member `acquisition_timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `transforms_snapshot`
#include "bosdyn_msgs/msg/detail/frame_tree_snapshot__functions.h"
// Member `velocity_of_body_in_vision`
// Member `velocity_of_body_in_odom`
#include "geometry_msgs/msg/detail/twist__functions.h"

bool
bosdyn_msgs__msg__KinematicState__init(bosdyn_msgs__msg__KinematicState * msg)
{
  if (!msg) {
    return false;
  }
  // joint_states
  if (!bosdyn_msgs__msg__JointState__Sequence__init(&msg->joint_states, 0)) {
    bosdyn_msgs__msg__KinematicState__fini(msg);
    return false;
  }
  // acquisition_timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->acquisition_timestamp)) {
    bosdyn_msgs__msg__KinematicState__fini(msg);
    return false;
  }
  // acquisition_timestamp_is_set
  // transforms_snapshot
  if (!bosdyn_msgs__msg__FrameTreeSnapshot__init(&msg->transforms_snapshot)) {
    bosdyn_msgs__msg__KinematicState__fini(msg);
    return false;
  }
  // transforms_snapshot_is_set
  // velocity_of_body_in_vision
  if (!geometry_msgs__msg__Twist__init(&msg->velocity_of_body_in_vision)) {
    bosdyn_msgs__msg__KinematicState__fini(msg);
    return false;
  }
  // velocity_of_body_in_vision_is_set
  // velocity_of_body_in_odom
  if (!geometry_msgs__msg__Twist__init(&msg->velocity_of_body_in_odom)) {
    bosdyn_msgs__msg__KinematicState__fini(msg);
    return false;
  }
  // velocity_of_body_in_odom_is_set
  return true;
}

void
bosdyn_msgs__msg__KinematicState__fini(bosdyn_msgs__msg__KinematicState * msg)
{
  if (!msg) {
    return;
  }
  // joint_states
  bosdyn_msgs__msg__JointState__Sequence__fini(&msg->joint_states);
  // acquisition_timestamp
  builtin_interfaces__msg__Time__fini(&msg->acquisition_timestamp);
  // acquisition_timestamp_is_set
  // transforms_snapshot
  bosdyn_msgs__msg__FrameTreeSnapshot__fini(&msg->transforms_snapshot);
  // transforms_snapshot_is_set
  // velocity_of_body_in_vision
  geometry_msgs__msg__Twist__fini(&msg->velocity_of_body_in_vision);
  // velocity_of_body_in_vision_is_set
  // velocity_of_body_in_odom
  geometry_msgs__msg__Twist__fini(&msg->velocity_of_body_in_odom);
  // velocity_of_body_in_odom_is_set
}

bool
bosdyn_msgs__msg__KinematicState__are_equal(const bosdyn_msgs__msg__KinematicState * lhs, const bosdyn_msgs__msg__KinematicState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // joint_states
  if (!bosdyn_msgs__msg__JointState__Sequence__are_equal(
      &(lhs->joint_states), &(rhs->joint_states)))
  {
    return false;
  }
  // acquisition_timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->acquisition_timestamp), &(rhs->acquisition_timestamp)))
  {
    return false;
  }
  // acquisition_timestamp_is_set
  if (lhs->acquisition_timestamp_is_set != rhs->acquisition_timestamp_is_set) {
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
  // velocity_of_body_in_vision
  if (!geometry_msgs__msg__Twist__are_equal(
      &(lhs->velocity_of_body_in_vision), &(rhs->velocity_of_body_in_vision)))
  {
    return false;
  }
  // velocity_of_body_in_vision_is_set
  if (lhs->velocity_of_body_in_vision_is_set != rhs->velocity_of_body_in_vision_is_set) {
    return false;
  }
  // velocity_of_body_in_odom
  if (!geometry_msgs__msg__Twist__are_equal(
      &(lhs->velocity_of_body_in_odom), &(rhs->velocity_of_body_in_odom)))
  {
    return false;
  }
  // velocity_of_body_in_odom_is_set
  if (lhs->velocity_of_body_in_odom_is_set != rhs->velocity_of_body_in_odom_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__KinematicState__copy(
  const bosdyn_msgs__msg__KinematicState * input,
  bosdyn_msgs__msg__KinematicState * output)
{
  if (!input || !output) {
    return false;
  }
  // joint_states
  if (!bosdyn_msgs__msg__JointState__Sequence__copy(
      &(input->joint_states), &(output->joint_states)))
  {
    return false;
  }
  // acquisition_timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->acquisition_timestamp), &(output->acquisition_timestamp)))
  {
    return false;
  }
  // acquisition_timestamp_is_set
  output->acquisition_timestamp_is_set = input->acquisition_timestamp_is_set;
  // transforms_snapshot
  if (!bosdyn_msgs__msg__FrameTreeSnapshot__copy(
      &(input->transforms_snapshot), &(output->transforms_snapshot)))
  {
    return false;
  }
  // transforms_snapshot_is_set
  output->transforms_snapshot_is_set = input->transforms_snapshot_is_set;
  // velocity_of_body_in_vision
  if (!geometry_msgs__msg__Twist__copy(
      &(input->velocity_of_body_in_vision), &(output->velocity_of_body_in_vision)))
  {
    return false;
  }
  // velocity_of_body_in_vision_is_set
  output->velocity_of_body_in_vision_is_set = input->velocity_of_body_in_vision_is_set;
  // velocity_of_body_in_odom
  if (!geometry_msgs__msg__Twist__copy(
      &(input->velocity_of_body_in_odom), &(output->velocity_of_body_in_odom)))
  {
    return false;
  }
  // velocity_of_body_in_odom_is_set
  output->velocity_of_body_in_odom_is_set = input->velocity_of_body_in_odom_is_set;
  return true;
}

bosdyn_msgs__msg__KinematicState *
bosdyn_msgs__msg__KinematicState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__KinematicState * msg = (bosdyn_msgs__msg__KinematicState *)allocator.allocate(sizeof(bosdyn_msgs__msg__KinematicState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__KinematicState));
  bool success = bosdyn_msgs__msg__KinematicState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__KinematicState__destroy(bosdyn_msgs__msg__KinematicState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__KinematicState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__KinematicState__Sequence__init(bosdyn_msgs__msg__KinematicState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__KinematicState * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__KinematicState *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__KinematicState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__KinematicState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__KinematicState__fini(&data[i - 1]);
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
bosdyn_msgs__msg__KinematicState__Sequence__fini(bosdyn_msgs__msg__KinematicState__Sequence * array)
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
      bosdyn_msgs__msg__KinematicState__fini(&array->data[i]);
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

bosdyn_msgs__msg__KinematicState__Sequence *
bosdyn_msgs__msg__KinematicState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__KinematicState__Sequence * array = (bosdyn_msgs__msg__KinematicState__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__KinematicState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__KinematicState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__KinematicState__Sequence__destroy(bosdyn_msgs__msg__KinematicState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__KinematicState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__KinematicState__Sequence__are_equal(const bosdyn_msgs__msg__KinematicState__Sequence * lhs, const bosdyn_msgs__msg__KinematicState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__KinematicState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__KinematicState__Sequence__copy(
  const bosdyn_msgs__msg__KinematicState__Sequence * input,
  bosdyn_msgs__msg__KinematicState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__KinematicState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__KinematicState * data =
      (bosdyn_msgs__msg__KinematicState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__KinematicState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__KinematicState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__KinematicState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
