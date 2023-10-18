// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/FootStateTerrainState.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/foot_state_terrain_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `frame_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `foot_slip_distance_rt_frame`
// Member `foot_slip_velocity_rt_frame`
// Member `ground_contact_normal_rt_frame`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
bosdyn_msgs__msg__FootStateTerrainState__init(bosdyn_msgs__msg__FootStateTerrainState * msg)
{
  if (!msg) {
    return false;
  }
  // ground_mu_est
  // frame_name
  if (!rosidl_runtime_c__String__init(&msg->frame_name)) {
    bosdyn_msgs__msg__FootStateTerrainState__fini(msg);
    return false;
  }
  // foot_slip_distance_rt_frame
  if (!geometry_msgs__msg__Vector3__init(&msg->foot_slip_distance_rt_frame)) {
    bosdyn_msgs__msg__FootStateTerrainState__fini(msg);
    return false;
  }
  // foot_slip_distance_rt_frame_is_set
  // foot_slip_velocity_rt_frame
  if (!geometry_msgs__msg__Vector3__init(&msg->foot_slip_velocity_rt_frame)) {
    bosdyn_msgs__msg__FootStateTerrainState__fini(msg);
    return false;
  }
  // foot_slip_velocity_rt_frame_is_set
  // ground_contact_normal_rt_frame
  if (!geometry_msgs__msg__Vector3__init(&msg->ground_contact_normal_rt_frame)) {
    bosdyn_msgs__msg__FootStateTerrainState__fini(msg);
    return false;
  }
  // ground_contact_normal_rt_frame_is_set
  // visual_surface_ground_penetration_mean
  // visual_surface_ground_penetration_std
  return true;
}

void
bosdyn_msgs__msg__FootStateTerrainState__fini(bosdyn_msgs__msg__FootStateTerrainState * msg)
{
  if (!msg) {
    return;
  }
  // ground_mu_est
  // frame_name
  rosidl_runtime_c__String__fini(&msg->frame_name);
  // foot_slip_distance_rt_frame
  geometry_msgs__msg__Vector3__fini(&msg->foot_slip_distance_rt_frame);
  // foot_slip_distance_rt_frame_is_set
  // foot_slip_velocity_rt_frame
  geometry_msgs__msg__Vector3__fini(&msg->foot_slip_velocity_rt_frame);
  // foot_slip_velocity_rt_frame_is_set
  // ground_contact_normal_rt_frame
  geometry_msgs__msg__Vector3__fini(&msg->ground_contact_normal_rt_frame);
  // ground_contact_normal_rt_frame_is_set
  // visual_surface_ground_penetration_mean
  // visual_surface_ground_penetration_std
}

bool
bosdyn_msgs__msg__FootStateTerrainState__are_equal(const bosdyn_msgs__msg__FootStateTerrainState * lhs, const bosdyn_msgs__msg__FootStateTerrainState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ground_mu_est
  if (lhs->ground_mu_est != rhs->ground_mu_est) {
    return false;
  }
  // frame_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->frame_name), &(rhs->frame_name)))
  {
    return false;
  }
  // foot_slip_distance_rt_frame
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->foot_slip_distance_rt_frame), &(rhs->foot_slip_distance_rt_frame)))
  {
    return false;
  }
  // foot_slip_distance_rt_frame_is_set
  if (lhs->foot_slip_distance_rt_frame_is_set != rhs->foot_slip_distance_rt_frame_is_set) {
    return false;
  }
  // foot_slip_velocity_rt_frame
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->foot_slip_velocity_rt_frame), &(rhs->foot_slip_velocity_rt_frame)))
  {
    return false;
  }
  // foot_slip_velocity_rt_frame_is_set
  if (lhs->foot_slip_velocity_rt_frame_is_set != rhs->foot_slip_velocity_rt_frame_is_set) {
    return false;
  }
  // ground_contact_normal_rt_frame
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->ground_contact_normal_rt_frame), &(rhs->ground_contact_normal_rt_frame)))
  {
    return false;
  }
  // ground_contact_normal_rt_frame_is_set
  if (lhs->ground_contact_normal_rt_frame_is_set != rhs->ground_contact_normal_rt_frame_is_set) {
    return false;
  }
  // visual_surface_ground_penetration_mean
  if (lhs->visual_surface_ground_penetration_mean != rhs->visual_surface_ground_penetration_mean) {
    return false;
  }
  // visual_surface_ground_penetration_std
  if (lhs->visual_surface_ground_penetration_std != rhs->visual_surface_ground_penetration_std) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__FootStateTerrainState__copy(
  const bosdyn_msgs__msg__FootStateTerrainState * input,
  bosdyn_msgs__msg__FootStateTerrainState * output)
{
  if (!input || !output) {
    return false;
  }
  // ground_mu_est
  output->ground_mu_est = input->ground_mu_est;
  // frame_name
  if (!rosidl_runtime_c__String__copy(
      &(input->frame_name), &(output->frame_name)))
  {
    return false;
  }
  // foot_slip_distance_rt_frame
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->foot_slip_distance_rt_frame), &(output->foot_slip_distance_rt_frame)))
  {
    return false;
  }
  // foot_slip_distance_rt_frame_is_set
  output->foot_slip_distance_rt_frame_is_set = input->foot_slip_distance_rt_frame_is_set;
  // foot_slip_velocity_rt_frame
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->foot_slip_velocity_rt_frame), &(output->foot_slip_velocity_rt_frame)))
  {
    return false;
  }
  // foot_slip_velocity_rt_frame_is_set
  output->foot_slip_velocity_rt_frame_is_set = input->foot_slip_velocity_rt_frame_is_set;
  // ground_contact_normal_rt_frame
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->ground_contact_normal_rt_frame), &(output->ground_contact_normal_rt_frame)))
  {
    return false;
  }
  // ground_contact_normal_rt_frame_is_set
  output->ground_contact_normal_rt_frame_is_set = input->ground_contact_normal_rt_frame_is_set;
  // visual_surface_ground_penetration_mean
  output->visual_surface_ground_penetration_mean = input->visual_surface_ground_penetration_mean;
  // visual_surface_ground_penetration_std
  output->visual_surface_ground_penetration_std = input->visual_surface_ground_penetration_std;
  return true;
}

bosdyn_msgs__msg__FootStateTerrainState *
bosdyn_msgs__msg__FootStateTerrainState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__FootStateTerrainState * msg = (bosdyn_msgs__msg__FootStateTerrainState *)allocator.allocate(sizeof(bosdyn_msgs__msg__FootStateTerrainState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__FootStateTerrainState));
  bool success = bosdyn_msgs__msg__FootStateTerrainState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__FootStateTerrainState__destroy(bosdyn_msgs__msg__FootStateTerrainState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__FootStateTerrainState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__FootStateTerrainState__Sequence__init(bosdyn_msgs__msg__FootStateTerrainState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__FootStateTerrainState * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__FootStateTerrainState *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__FootStateTerrainState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__FootStateTerrainState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__FootStateTerrainState__fini(&data[i - 1]);
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
bosdyn_msgs__msg__FootStateTerrainState__Sequence__fini(bosdyn_msgs__msg__FootStateTerrainState__Sequence * array)
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
      bosdyn_msgs__msg__FootStateTerrainState__fini(&array->data[i]);
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

bosdyn_msgs__msg__FootStateTerrainState__Sequence *
bosdyn_msgs__msg__FootStateTerrainState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__FootStateTerrainState__Sequence * array = (bosdyn_msgs__msg__FootStateTerrainState__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__FootStateTerrainState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__FootStateTerrainState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__FootStateTerrainState__Sequence__destroy(bosdyn_msgs__msg__FootStateTerrainState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__FootStateTerrainState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__FootStateTerrainState__Sequence__are_equal(const bosdyn_msgs__msg__FootStateTerrainState__Sequence * lhs, const bosdyn_msgs__msg__FootStateTerrainState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__FootStateTerrainState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__FootStateTerrainState__Sequence__copy(
  const bosdyn_msgs__msg__FootStateTerrainState__Sequence * input,
  bosdyn_msgs__msg__FootStateTerrainState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__FootStateTerrainState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__FootStateTerrainState * data =
      (bosdyn_msgs__msg__FootStateTerrainState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__FootStateTerrainState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__FootStateTerrainState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__FootStateTerrainState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
