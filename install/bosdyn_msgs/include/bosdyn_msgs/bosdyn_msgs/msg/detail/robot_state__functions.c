// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/RobotState.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/robot_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `power_state`
#include "bosdyn_msgs/msg/detail/power_state__functions.h"
// Member `battery_states`
#include "bosdyn_msgs/msg/detail/battery_state__functions.h"
// Member `comms_states`
#include "bosdyn_msgs/msg/detail/comms_state__functions.h"
// Member `system_fault_state`
#include "bosdyn_msgs/msg/detail/system_fault_state__functions.h"
// Member `estop_states`
#include "bosdyn_msgs/msg/detail/e_stop_state__functions.h"
// Member `kinematic_state`
#include "bosdyn_msgs/msg/detail/kinematic_state__functions.h"
// Member `behavior_fault_state`
#include "bosdyn_msgs/msg/detail/behavior_fault_state__functions.h"
// Member `foot_state`
#include "bosdyn_msgs/msg/detail/foot_state__functions.h"
// Member `manipulator_state`
#include "bosdyn_msgs/msg/detail/manipulator_state__functions.h"
// Member `service_fault_state`
#include "bosdyn_msgs/msg/detail/service_fault_state__functions.h"
// Member `terrain_state`
#include "bosdyn_msgs/msg/detail/terrain_state__functions.h"

bool
bosdyn_msgs__msg__RobotState__init(bosdyn_msgs__msg__RobotState * msg)
{
  if (!msg) {
    return false;
  }
  // power_state
  if (!bosdyn_msgs__msg__PowerState__init(&msg->power_state)) {
    bosdyn_msgs__msg__RobotState__fini(msg);
    return false;
  }
  // power_state_is_set
  // battery_states
  if (!bosdyn_msgs__msg__BatteryState__Sequence__init(&msg->battery_states, 0)) {
    bosdyn_msgs__msg__RobotState__fini(msg);
    return false;
  }
  // comms_states
  if (!bosdyn_msgs__msg__CommsState__Sequence__init(&msg->comms_states, 0)) {
    bosdyn_msgs__msg__RobotState__fini(msg);
    return false;
  }
  // system_fault_state
  if (!bosdyn_msgs__msg__SystemFaultState__init(&msg->system_fault_state)) {
    bosdyn_msgs__msg__RobotState__fini(msg);
    return false;
  }
  // system_fault_state_is_set
  // estop_states
  if (!bosdyn_msgs__msg__EStopState__Sequence__init(&msg->estop_states, 0)) {
    bosdyn_msgs__msg__RobotState__fini(msg);
    return false;
  }
  // kinematic_state
  if (!bosdyn_msgs__msg__KinematicState__init(&msg->kinematic_state)) {
    bosdyn_msgs__msg__RobotState__fini(msg);
    return false;
  }
  // kinematic_state_is_set
  // behavior_fault_state
  if (!bosdyn_msgs__msg__BehaviorFaultState__init(&msg->behavior_fault_state)) {
    bosdyn_msgs__msg__RobotState__fini(msg);
    return false;
  }
  // behavior_fault_state_is_set
  // foot_state
  if (!bosdyn_msgs__msg__FootState__Sequence__init(&msg->foot_state, 0)) {
    bosdyn_msgs__msg__RobotState__fini(msg);
    return false;
  }
  // manipulator_state
  if (!bosdyn_msgs__msg__ManipulatorState__init(&msg->manipulator_state)) {
    bosdyn_msgs__msg__RobotState__fini(msg);
    return false;
  }
  // manipulator_state_is_set
  // service_fault_state
  if (!bosdyn_msgs__msg__ServiceFaultState__init(&msg->service_fault_state)) {
    bosdyn_msgs__msg__RobotState__fini(msg);
    return false;
  }
  // service_fault_state_is_set
  // terrain_state
  if (!bosdyn_msgs__msg__TerrainState__init(&msg->terrain_state)) {
    bosdyn_msgs__msg__RobotState__fini(msg);
    return false;
  }
  // terrain_state_is_set
  return true;
}

void
bosdyn_msgs__msg__RobotState__fini(bosdyn_msgs__msg__RobotState * msg)
{
  if (!msg) {
    return;
  }
  // power_state
  bosdyn_msgs__msg__PowerState__fini(&msg->power_state);
  // power_state_is_set
  // battery_states
  bosdyn_msgs__msg__BatteryState__Sequence__fini(&msg->battery_states);
  // comms_states
  bosdyn_msgs__msg__CommsState__Sequence__fini(&msg->comms_states);
  // system_fault_state
  bosdyn_msgs__msg__SystemFaultState__fini(&msg->system_fault_state);
  // system_fault_state_is_set
  // estop_states
  bosdyn_msgs__msg__EStopState__Sequence__fini(&msg->estop_states);
  // kinematic_state
  bosdyn_msgs__msg__KinematicState__fini(&msg->kinematic_state);
  // kinematic_state_is_set
  // behavior_fault_state
  bosdyn_msgs__msg__BehaviorFaultState__fini(&msg->behavior_fault_state);
  // behavior_fault_state_is_set
  // foot_state
  bosdyn_msgs__msg__FootState__Sequence__fini(&msg->foot_state);
  // manipulator_state
  bosdyn_msgs__msg__ManipulatorState__fini(&msg->manipulator_state);
  // manipulator_state_is_set
  // service_fault_state
  bosdyn_msgs__msg__ServiceFaultState__fini(&msg->service_fault_state);
  // service_fault_state_is_set
  // terrain_state
  bosdyn_msgs__msg__TerrainState__fini(&msg->terrain_state);
  // terrain_state_is_set
}

bool
bosdyn_msgs__msg__RobotState__are_equal(const bosdyn_msgs__msg__RobotState * lhs, const bosdyn_msgs__msg__RobotState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // power_state
  if (!bosdyn_msgs__msg__PowerState__are_equal(
      &(lhs->power_state), &(rhs->power_state)))
  {
    return false;
  }
  // power_state_is_set
  if (lhs->power_state_is_set != rhs->power_state_is_set) {
    return false;
  }
  // battery_states
  if (!bosdyn_msgs__msg__BatteryState__Sequence__are_equal(
      &(lhs->battery_states), &(rhs->battery_states)))
  {
    return false;
  }
  // comms_states
  if (!bosdyn_msgs__msg__CommsState__Sequence__are_equal(
      &(lhs->comms_states), &(rhs->comms_states)))
  {
    return false;
  }
  // system_fault_state
  if (!bosdyn_msgs__msg__SystemFaultState__are_equal(
      &(lhs->system_fault_state), &(rhs->system_fault_state)))
  {
    return false;
  }
  // system_fault_state_is_set
  if (lhs->system_fault_state_is_set != rhs->system_fault_state_is_set) {
    return false;
  }
  // estop_states
  if (!bosdyn_msgs__msg__EStopState__Sequence__are_equal(
      &(lhs->estop_states), &(rhs->estop_states)))
  {
    return false;
  }
  // kinematic_state
  if (!bosdyn_msgs__msg__KinematicState__are_equal(
      &(lhs->kinematic_state), &(rhs->kinematic_state)))
  {
    return false;
  }
  // kinematic_state_is_set
  if (lhs->kinematic_state_is_set != rhs->kinematic_state_is_set) {
    return false;
  }
  // behavior_fault_state
  if (!bosdyn_msgs__msg__BehaviorFaultState__are_equal(
      &(lhs->behavior_fault_state), &(rhs->behavior_fault_state)))
  {
    return false;
  }
  // behavior_fault_state_is_set
  if (lhs->behavior_fault_state_is_set != rhs->behavior_fault_state_is_set) {
    return false;
  }
  // foot_state
  if (!bosdyn_msgs__msg__FootState__Sequence__are_equal(
      &(lhs->foot_state), &(rhs->foot_state)))
  {
    return false;
  }
  // manipulator_state
  if (!bosdyn_msgs__msg__ManipulatorState__are_equal(
      &(lhs->manipulator_state), &(rhs->manipulator_state)))
  {
    return false;
  }
  // manipulator_state_is_set
  if (lhs->manipulator_state_is_set != rhs->manipulator_state_is_set) {
    return false;
  }
  // service_fault_state
  if (!bosdyn_msgs__msg__ServiceFaultState__are_equal(
      &(lhs->service_fault_state), &(rhs->service_fault_state)))
  {
    return false;
  }
  // service_fault_state_is_set
  if (lhs->service_fault_state_is_set != rhs->service_fault_state_is_set) {
    return false;
  }
  // terrain_state
  if (!bosdyn_msgs__msg__TerrainState__are_equal(
      &(lhs->terrain_state), &(rhs->terrain_state)))
  {
    return false;
  }
  // terrain_state_is_set
  if (lhs->terrain_state_is_set != rhs->terrain_state_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__RobotState__copy(
  const bosdyn_msgs__msg__RobotState * input,
  bosdyn_msgs__msg__RobotState * output)
{
  if (!input || !output) {
    return false;
  }
  // power_state
  if (!bosdyn_msgs__msg__PowerState__copy(
      &(input->power_state), &(output->power_state)))
  {
    return false;
  }
  // power_state_is_set
  output->power_state_is_set = input->power_state_is_set;
  // battery_states
  if (!bosdyn_msgs__msg__BatteryState__Sequence__copy(
      &(input->battery_states), &(output->battery_states)))
  {
    return false;
  }
  // comms_states
  if (!bosdyn_msgs__msg__CommsState__Sequence__copy(
      &(input->comms_states), &(output->comms_states)))
  {
    return false;
  }
  // system_fault_state
  if (!bosdyn_msgs__msg__SystemFaultState__copy(
      &(input->system_fault_state), &(output->system_fault_state)))
  {
    return false;
  }
  // system_fault_state_is_set
  output->system_fault_state_is_set = input->system_fault_state_is_set;
  // estop_states
  if (!bosdyn_msgs__msg__EStopState__Sequence__copy(
      &(input->estop_states), &(output->estop_states)))
  {
    return false;
  }
  // kinematic_state
  if (!bosdyn_msgs__msg__KinematicState__copy(
      &(input->kinematic_state), &(output->kinematic_state)))
  {
    return false;
  }
  // kinematic_state_is_set
  output->kinematic_state_is_set = input->kinematic_state_is_set;
  // behavior_fault_state
  if (!bosdyn_msgs__msg__BehaviorFaultState__copy(
      &(input->behavior_fault_state), &(output->behavior_fault_state)))
  {
    return false;
  }
  // behavior_fault_state_is_set
  output->behavior_fault_state_is_set = input->behavior_fault_state_is_set;
  // foot_state
  if (!bosdyn_msgs__msg__FootState__Sequence__copy(
      &(input->foot_state), &(output->foot_state)))
  {
    return false;
  }
  // manipulator_state
  if (!bosdyn_msgs__msg__ManipulatorState__copy(
      &(input->manipulator_state), &(output->manipulator_state)))
  {
    return false;
  }
  // manipulator_state_is_set
  output->manipulator_state_is_set = input->manipulator_state_is_set;
  // service_fault_state
  if (!bosdyn_msgs__msg__ServiceFaultState__copy(
      &(input->service_fault_state), &(output->service_fault_state)))
  {
    return false;
  }
  // service_fault_state_is_set
  output->service_fault_state_is_set = input->service_fault_state_is_set;
  // terrain_state
  if (!bosdyn_msgs__msg__TerrainState__copy(
      &(input->terrain_state), &(output->terrain_state)))
  {
    return false;
  }
  // terrain_state_is_set
  output->terrain_state_is_set = input->terrain_state_is_set;
  return true;
}

bosdyn_msgs__msg__RobotState *
bosdyn_msgs__msg__RobotState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__RobotState * msg = (bosdyn_msgs__msg__RobotState *)allocator.allocate(sizeof(bosdyn_msgs__msg__RobotState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__RobotState));
  bool success = bosdyn_msgs__msg__RobotState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__RobotState__destroy(bosdyn_msgs__msg__RobotState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__RobotState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__RobotState__Sequence__init(bosdyn_msgs__msg__RobotState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__RobotState * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__RobotState *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__RobotState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__RobotState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__RobotState__fini(&data[i - 1]);
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
bosdyn_msgs__msg__RobotState__Sequence__fini(bosdyn_msgs__msg__RobotState__Sequence * array)
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
      bosdyn_msgs__msg__RobotState__fini(&array->data[i]);
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

bosdyn_msgs__msg__RobotState__Sequence *
bosdyn_msgs__msg__RobotState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__RobotState__Sequence * array = (bosdyn_msgs__msg__RobotState__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__RobotState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__RobotState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__RobotState__Sequence__destroy(bosdyn_msgs__msg__RobotState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__RobotState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__RobotState__Sequence__are_equal(const bosdyn_msgs__msg__RobotState__Sequence * lhs, const bosdyn_msgs__msg__RobotState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__RobotState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__RobotState__Sequence__copy(
  const bosdyn_msgs__msg__RobotState__Sequence * input,
  bosdyn_msgs__msg__RobotState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__RobotState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__RobotState * data =
      (bosdyn_msgs__msg__RobotState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__RobotState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__RobotState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__RobotState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
