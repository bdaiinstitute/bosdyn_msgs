// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/MobilityParams.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/mobility_params__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `vel_limit`
#include "bosdyn_msgs/msg/detail/se2_velocity_limit__functions.h"
// Member `body_control`
#include "bosdyn_msgs/msg/detail/body_control_params__functions.h"
// Member `locomotion_hint`
#include "bosdyn_msgs/msg/detail/locomotion_hint__functions.h"
// Member `stairs_mode`
#include "bosdyn_msgs/msg/detail/mobility_params_stairs_mode__functions.h"
// Member `obstacle_params`
#include "bosdyn_msgs/msg/detail/obstacle_params__functions.h"
// Member `swing_height`
#include "bosdyn_msgs/msg/detail/swing_height__functions.h"
// Member `terrain_params`
#include "bosdyn_msgs/msg/detail/terrain_params__functions.h"
// Member `external_force_params`
#include "bosdyn_msgs/msg/detail/body_external_force_params__functions.h"

bool
bosdyn_msgs__msg__MobilityParams__init(bosdyn_msgs__msg__MobilityParams * msg)
{
  if (!msg) {
    return false;
  }
  // vel_limit
  if (!bosdyn_msgs__msg__SE2VelocityLimit__init(&msg->vel_limit)) {
    bosdyn_msgs__msg__MobilityParams__fini(msg);
    return false;
  }
  // vel_limit_is_set
  // body_control
  if (!bosdyn_msgs__msg__BodyControlParams__init(&msg->body_control)) {
    bosdyn_msgs__msg__MobilityParams__fini(msg);
    return false;
  }
  // body_control_is_set
  // locomotion_hint
  if (!bosdyn_msgs__msg__LocomotionHint__init(&msg->locomotion_hint)) {
    bosdyn_msgs__msg__MobilityParams__fini(msg);
    return false;
  }
  // stairs_mode
  if (!bosdyn_msgs__msg__MobilityParamsStairsMode__init(&msg->stairs_mode)) {
    bosdyn_msgs__msg__MobilityParams__fini(msg);
    return false;
  }
  // allow_degraded_perception
  // obstacle_params
  if (!bosdyn_msgs__msg__ObstacleParams__init(&msg->obstacle_params)) {
    bosdyn_msgs__msg__MobilityParams__fini(msg);
    return false;
  }
  // obstacle_params_is_set
  // swing_height
  if (!bosdyn_msgs__msg__SwingHeight__init(&msg->swing_height)) {
    bosdyn_msgs__msg__MobilityParams__fini(msg);
    return false;
  }
  // terrain_params
  if (!bosdyn_msgs__msg__TerrainParams__init(&msg->terrain_params)) {
    bosdyn_msgs__msg__MobilityParams__fini(msg);
    return false;
  }
  // terrain_params_is_set
  // disallow_stair_tracker
  // disable_stair_error_auto_descent
  // external_force_params
  if (!bosdyn_msgs__msg__BodyExternalForceParams__init(&msg->external_force_params)) {
    bosdyn_msgs__msg__MobilityParams__fini(msg);
    return false;
  }
  // external_force_params_is_set
  // disallow_non_stairs_pitch_limiting
  // disable_nearmap_cliff_avoidance
  return true;
}

void
bosdyn_msgs__msg__MobilityParams__fini(bosdyn_msgs__msg__MobilityParams * msg)
{
  if (!msg) {
    return;
  }
  // vel_limit
  bosdyn_msgs__msg__SE2VelocityLimit__fini(&msg->vel_limit);
  // vel_limit_is_set
  // body_control
  bosdyn_msgs__msg__BodyControlParams__fini(&msg->body_control);
  // body_control_is_set
  // locomotion_hint
  bosdyn_msgs__msg__LocomotionHint__fini(&msg->locomotion_hint);
  // stairs_mode
  bosdyn_msgs__msg__MobilityParamsStairsMode__fini(&msg->stairs_mode);
  // allow_degraded_perception
  // obstacle_params
  bosdyn_msgs__msg__ObstacleParams__fini(&msg->obstacle_params);
  // obstacle_params_is_set
  // swing_height
  bosdyn_msgs__msg__SwingHeight__fini(&msg->swing_height);
  // terrain_params
  bosdyn_msgs__msg__TerrainParams__fini(&msg->terrain_params);
  // terrain_params_is_set
  // disallow_stair_tracker
  // disable_stair_error_auto_descent
  // external_force_params
  bosdyn_msgs__msg__BodyExternalForceParams__fini(&msg->external_force_params);
  // external_force_params_is_set
  // disallow_non_stairs_pitch_limiting
  // disable_nearmap_cliff_avoidance
}

bool
bosdyn_msgs__msg__MobilityParams__are_equal(const bosdyn_msgs__msg__MobilityParams * lhs, const bosdyn_msgs__msg__MobilityParams * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // vel_limit
  if (!bosdyn_msgs__msg__SE2VelocityLimit__are_equal(
      &(lhs->vel_limit), &(rhs->vel_limit)))
  {
    return false;
  }
  // vel_limit_is_set
  if (lhs->vel_limit_is_set != rhs->vel_limit_is_set) {
    return false;
  }
  // body_control
  if (!bosdyn_msgs__msg__BodyControlParams__are_equal(
      &(lhs->body_control), &(rhs->body_control)))
  {
    return false;
  }
  // body_control_is_set
  if (lhs->body_control_is_set != rhs->body_control_is_set) {
    return false;
  }
  // locomotion_hint
  if (!bosdyn_msgs__msg__LocomotionHint__are_equal(
      &(lhs->locomotion_hint), &(rhs->locomotion_hint)))
  {
    return false;
  }
  // stairs_mode
  if (!bosdyn_msgs__msg__MobilityParamsStairsMode__are_equal(
      &(lhs->stairs_mode), &(rhs->stairs_mode)))
  {
    return false;
  }
  // allow_degraded_perception
  if (lhs->allow_degraded_perception != rhs->allow_degraded_perception) {
    return false;
  }
  // obstacle_params
  if (!bosdyn_msgs__msg__ObstacleParams__are_equal(
      &(lhs->obstacle_params), &(rhs->obstacle_params)))
  {
    return false;
  }
  // obstacle_params_is_set
  if (lhs->obstacle_params_is_set != rhs->obstacle_params_is_set) {
    return false;
  }
  // swing_height
  if (!bosdyn_msgs__msg__SwingHeight__are_equal(
      &(lhs->swing_height), &(rhs->swing_height)))
  {
    return false;
  }
  // terrain_params
  if (!bosdyn_msgs__msg__TerrainParams__are_equal(
      &(lhs->terrain_params), &(rhs->terrain_params)))
  {
    return false;
  }
  // terrain_params_is_set
  if (lhs->terrain_params_is_set != rhs->terrain_params_is_set) {
    return false;
  }
  // disallow_stair_tracker
  if (lhs->disallow_stair_tracker != rhs->disallow_stair_tracker) {
    return false;
  }
  // disable_stair_error_auto_descent
  if (lhs->disable_stair_error_auto_descent != rhs->disable_stair_error_auto_descent) {
    return false;
  }
  // external_force_params
  if (!bosdyn_msgs__msg__BodyExternalForceParams__are_equal(
      &(lhs->external_force_params), &(rhs->external_force_params)))
  {
    return false;
  }
  // external_force_params_is_set
  if (lhs->external_force_params_is_set != rhs->external_force_params_is_set) {
    return false;
  }
  // disallow_non_stairs_pitch_limiting
  if (lhs->disallow_non_stairs_pitch_limiting != rhs->disallow_non_stairs_pitch_limiting) {
    return false;
  }
  // disable_nearmap_cliff_avoidance
  if (lhs->disable_nearmap_cliff_avoidance != rhs->disable_nearmap_cliff_avoidance) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__MobilityParams__copy(
  const bosdyn_msgs__msg__MobilityParams * input,
  bosdyn_msgs__msg__MobilityParams * output)
{
  if (!input || !output) {
    return false;
  }
  // vel_limit
  if (!bosdyn_msgs__msg__SE2VelocityLimit__copy(
      &(input->vel_limit), &(output->vel_limit)))
  {
    return false;
  }
  // vel_limit_is_set
  output->vel_limit_is_set = input->vel_limit_is_set;
  // body_control
  if (!bosdyn_msgs__msg__BodyControlParams__copy(
      &(input->body_control), &(output->body_control)))
  {
    return false;
  }
  // body_control_is_set
  output->body_control_is_set = input->body_control_is_set;
  // locomotion_hint
  if (!bosdyn_msgs__msg__LocomotionHint__copy(
      &(input->locomotion_hint), &(output->locomotion_hint)))
  {
    return false;
  }
  // stairs_mode
  if (!bosdyn_msgs__msg__MobilityParamsStairsMode__copy(
      &(input->stairs_mode), &(output->stairs_mode)))
  {
    return false;
  }
  // allow_degraded_perception
  output->allow_degraded_perception = input->allow_degraded_perception;
  // obstacle_params
  if (!bosdyn_msgs__msg__ObstacleParams__copy(
      &(input->obstacle_params), &(output->obstacle_params)))
  {
    return false;
  }
  // obstacle_params_is_set
  output->obstacle_params_is_set = input->obstacle_params_is_set;
  // swing_height
  if (!bosdyn_msgs__msg__SwingHeight__copy(
      &(input->swing_height), &(output->swing_height)))
  {
    return false;
  }
  // terrain_params
  if (!bosdyn_msgs__msg__TerrainParams__copy(
      &(input->terrain_params), &(output->terrain_params)))
  {
    return false;
  }
  // terrain_params_is_set
  output->terrain_params_is_set = input->terrain_params_is_set;
  // disallow_stair_tracker
  output->disallow_stair_tracker = input->disallow_stair_tracker;
  // disable_stair_error_auto_descent
  output->disable_stair_error_auto_descent = input->disable_stair_error_auto_descent;
  // external_force_params
  if (!bosdyn_msgs__msg__BodyExternalForceParams__copy(
      &(input->external_force_params), &(output->external_force_params)))
  {
    return false;
  }
  // external_force_params_is_set
  output->external_force_params_is_set = input->external_force_params_is_set;
  // disallow_non_stairs_pitch_limiting
  output->disallow_non_stairs_pitch_limiting = input->disallow_non_stairs_pitch_limiting;
  // disable_nearmap_cliff_avoidance
  output->disable_nearmap_cliff_avoidance = input->disable_nearmap_cliff_avoidance;
  return true;
}

bosdyn_msgs__msg__MobilityParams *
bosdyn_msgs__msg__MobilityParams__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__MobilityParams * msg = (bosdyn_msgs__msg__MobilityParams *)allocator.allocate(sizeof(bosdyn_msgs__msg__MobilityParams), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__MobilityParams));
  bool success = bosdyn_msgs__msg__MobilityParams__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__MobilityParams__destroy(bosdyn_msgs__msg__MobilityParams * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__MobilityParams__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__MobilityParams__Sequence__init(bosdyn_msgs__msg__MobilityParams__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__MobilityParams * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__MobilityParams *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__MobilityParams), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__MobilityParams__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__MobilityParams__fini(&data[i - 1]);
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
bosdyn_msgs__msg__MobilityParams__Sequence__fini(bosdyn_msgs__msg__MobilityParams__Sequence * array)
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
      bosdyn_msgs__msg__MobilityParams__fini(&array->data[i]);
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

bosdyn_msgs__msg__MobilityParams__Sequence *
bosdyn_msgs__msg__MobilityParams__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__MobilityParams__Sequence * array = (bosdyn_msgs__msg__MobilityParams__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__MobilityParams__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__MobilityParams__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__MobilityParams__Sequence__destroy(bosdyn_msgs__msg__MobilityParams__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__MobilityParams__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__MobilityParams__Sequence__are_equal(const bosdyn_msgs__msg__MobilityParams__Sequence * lhs, const bosdyn_msgs__msg__MobilityParams__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__MobilityParams__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__MobilityParams__Sequence__copy(
  const bosdyn_msgs__msg__MobilityParams__Sequence * input,
  bosdyn_msgs__msg__MobilityParams__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__MobilityParams);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__MobilityParams * data =
      (bosdyn_msgs__msg__MobilityParams *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__MobilityParams__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__MobilityParams__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__MobilityParams__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
