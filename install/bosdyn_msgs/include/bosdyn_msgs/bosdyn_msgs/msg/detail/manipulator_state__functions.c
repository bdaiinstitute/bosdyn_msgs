// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/ManipulatorState.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/manipulator_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `estimated_end_effector_force_in_hand`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `stow_state`
#include "bosdyn_msgs/msg/detail/manipulator_state_stow_state__functions.h"
// Member `velocity_of_hand_in_vision`
// Member `velocity_of_hand_in_odom`
#include "geometry_msgs/msg/detail/twist__functions.h"
// Member `carry_state`
#include "bosdyn_msgs/msg/detail/manipulator_state_carry_state__functions.h"

bool
bosdyn_msgs__msg__ManipulatorState__init(bosdyn_msgs__msg__ManipulatorState * msg)
{
  if (!msg) {
    return false;
  }
  // gripper_open_percentage
  // is_gripper_holding_item
  // estimated_end_effector_force_in_hand
  if (!geometry_msgs__msg__Vector3__init(&msg->estimated_end_effector_force_in_hand)) {
    bosdyn_msgs__msg__ManipulatorState__fini(msg);
    return false;
  }
  // estimated_end_effector_force_in_hand_is_set
  // stow_state
  if (!bosdyn_msgs__msg__ManipulatorStateStowState__init(&msg->stow_state)) {
    bosdyn_msgs__msg__ManipulatorState__fini(msg);
    return false;
  }
  // velocity_of_hand_in_vision
  if (!geometry_msgs__msg__Twist__init(&msg->velocity_of_hand_in_vision)) {
    bosdyn_msgs__msg__ManipulatorState__fini(msg);
    return false;
  }
  // velocity_of_hand_in_vision_is_set
  // velocity_of_hand_in_odom
  if (!geometry_msgs__msg__Twist__init(&msg->velocity_of_hand_in_odom)) {
    bosdyn_msgs__msg__ManipulatorState__fini(msg);
    return false;
  }
  // velocity_of_hand_in_odom_is_set
  // carry_state
  if (!bosdyn_msgs__msg__ManipulatorStateCarryState__init(&msg->carry_state)) {
    bosdyn_msgs__msg__ManipulatorState__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__ManipulatorState__fini(bosdyn_msgs__msg__ManipulatorState * msg)
{
  if (!msg) {
    return;
  }
  // gripper_open_percentage
  // is_gripper_holding_item
  // estimated_end_effector_force_in_hand
  geometry_msgs__msg__Vector3__fini(&msg->estimated_end_effector_force_in_hand);
  // estimated_end_effector_force_in_hand_is_set
  // stow_state
  bosdyn_msgs__msg__ManipulatorStateStowState__fini(&msg->stow_state);
  // velocity_of_hand_in_vision
  geometry_msgs__msg__Twist__fini(&msg->velocity_of_hand_in_vision);
  // velocity_of_hand_in_vision_is_set
  // velocity_of_hand_in_odom
  geometry_msgs__msg__Twist__fini(&msg->velocity_of_hand_in_odom);
  // velocity_of_hand_in_odom_is_set
  // carry_state
  bosdyn_msgs__msg__ManipulatorStateCarryState__fini(&msg->carry_state);
}

bool
bosdyn_msgs__msg__ManipulatorState__are_equal(const bosdyn_msgs__msg__ManipulatorState * lhs, const bosdyn_msgs__msg__ManipulatorState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // gripper_open_percentage
  if (lhs->gripper_open_percentage != rhs->gripper_open_percentage) {
    return false;
  }
  // is_gripper_holding_item
  if (lhs->is_gripper_holding_item != rhs->is_gripper_holding_item) {
    return false;
  }
  // estimated_end_effector_force_in_hand
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->estimated_end_effector_force_in_hand), &(rhs->estimated_end_effector_force_in_hand)))
  {
    return false;
  }
  // estimated_end_effector_force_in_hand_is_set
  if (lhs->estimated_end_effector_force_in_hand_is_set != rhs->estimated_end_effector_force_in_hand_is_set) {
    return false;
  }
  // stow_state
  if (!bosdyn_msgs__msg__ManipulatorStateStowState__are_equal(
      &(lhs->stow_state), &(rhs->stow_state)))
  {
    return false;
  }
  // velocity_of_hand_in_vision
  if (!geometry_msgs__msg__Twist__are_equal(
      &(lhs->velocity_of_hand_in_vision), &(rhs->velocity_of_hand_in_vision)))
  {
    return false;
  }
  // velocity_of_hand_in_vision_is_set
  if (lhs->velocity_of_hand_in_vision_is_set != rhs->velocity_of_hand_in_vision_is_set) {
    return false;
  }
  // velocity_of_hand_in_odom
  if (!geometry_msgs__msg__Twist__are_equal(
      &(lhs->velocity_of_hand_in_odom), &(rhs->velocity_of_hand_in_odom)))
  {
    return false;
  }
  // velocity_of_hand_in_odom_is_set
  if (lhs->velocity_of_hand_in_odom_is_set != rhs->velocity_of_hand_in_odom_is_set) {
    return false;
  }
  // carry_state
  if (!bosdyn_msgs__msg__ManipulatorStateCarryState__are_equal(
      &(lhs->carry_state), &(rhs->carry_state)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__ManipulatorState__copy(
  const bosdyn_msgs__msg__ManipulatorState * input,
  bosdyn_msgs__msg__ManipulatorState * output)
{
  if (!input || !output) {
    return false;
  }
  // gripper_open_percentage
  output->gripper_open_percentage = input->gripper_open_percentage;
  // is_gripper_holding_item
  output->is_gripper_holding_item = input->is_gripper_holding_item;
  // estimated_end_effector_force_in_hand
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->estimated_end_effector_force_in_hand), &(output->estimated_end_effector_force_in_hand)))
  {
    return false;
  }
  // estimated_end_effector_force_in_hand_is_set
  output->estimated_end_effector_force_in_hand_is_set = input->estimated_end_effector_force_in_hand_is_set;
  // stow_state
  if (!bosdyn_msgs__msg__ManipulatorStateStowState__copy(
      &(input->stow_state), &(output->stow_state)))
  {
    return false;
  }
  // velocity_of_hand_in_vision
  if (!geometry_msgs__msg__Twist__copy(
      &(input->velocity_of_hand_in_vision), &(output->velocity_of_hand_in_vision)))
  {
    return false;
  }
  // velocity_of_hand_in_vision_is_set
  output->velocity_of_hand_in_vision_is_set = input->velocity_of_hand_in_vision_is_set;
  // velocity_of_hand_in_odom
  if (!geometry_msgs__msg__Twist__copy(
      &(input->velocity_of_hand_in_odom), &(output->velocity_of_hand_in_odom)))
  {
    return false;
  }
  // velocity_of_hand_in_odom_is_set
  output->velocity_of_hand_in_odom_is_set = input->velocity_of_hand_in_odom_is_set;
  // carry_state
  if (!bosdyn_msgs__msg__ManipulatorStateCarryState__copy(
      &(input->carry_state), &(output->carry_state)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__ManipulatorState *
bosdyn_msgs__msg__ManipulatorState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ManipulatorState * msg = (bosdyn_msgs__msg__ManipulatorState *)allocator.allocate(sizeof(bosdyn_msgs__msg__ManipulatorState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__ManipulatorState));
  bool success = bosdyn_msgs__msg__ManipulatorState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__ManipulatorState__destroy(bosdyn_msgs__msg__ManipulatorState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__ManipulatorState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__ManipulatorState__Sequence__init(bosdyn_msgs__msg__ManipulatorState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ManipulatorState * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__ManipulatorState *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__ManipulatorState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__ManipulatorState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__ManipulatorState__fini(&data[i - 1]);
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
bosdyn_msgs__msg__ManipulatorState__Sequence__fini(bosdyn_msgs__msg__ManipulatorState__Sequence * array)
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
      bosdyn_msgs__msg__ManipulatorState__fini(&array->data[i]);
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

bosdyn_msgs__msg__ManipulatorState__Sequence *
bosdyn_msgs__msg__ManipulatorState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ManipulatorState__Sequence * array = (bosdyn_msgs__msg__ManipulatorState__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__ManipulatorState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__ManipulatorState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__ManipulatorState__Sequence__destroy(bosdyn_msgs__msg__ManipulatorState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__ManipulatorState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__ManipulatorState__Sequence__are_equal(const bosdyn_msgs__msg__ManipulatorState__Sequence * lhs, const bosdyn_msgs__msg__ManipulatorState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__ManipulatorState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__ManipulatorState__Sequence__copy(
  const bosdyn_msgs__msg__ManipulatorState__Sequence * input,
  bosdyn_msgs__msg__ManipulatorState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__ManipulatorState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__ManipulatorState * data =
      (bosdyn_msgs__msg__ManipulatorState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__ManipulatorState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__ManipulatorState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__ManipulatorState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
