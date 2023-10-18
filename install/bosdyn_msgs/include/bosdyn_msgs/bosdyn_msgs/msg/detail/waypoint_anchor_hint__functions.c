// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/WaypointAnchorHint.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/waypoint_anchor_hint__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `waypoint_anchor`
#include "bosdyn_msgs/msg/detail/anchor__functions.h"
// Member `seed_tform_waypoint_uncertainty`
#include "bosdyn_msgs/msg/detail/anchor_hint_uncertainty__functions.h"
// Member `seed_tform_waypoint_constraint`
#include "bosdyn_msgs/msg/detail/pose_bounds__functions.h"

bool
bosdyn_msgs__msg__WaypointAnchorHint__init(bosdyn_msgs__msg__WaypointAnchorHint * msg)
{
  if (!msg) {
    return false;
  }
  // waypoint_anchor
  if (!bosdyn_msgs__msg__Anchor__init(&msg->waypoint_anchor)) {
    bosdyn_msgs__msg__WaypointAnchorHint__fini(msg);
    return false;
  }
  // waypoint_anchor_is_set
  // seed_tform_waypoint_uncertainty
  if (!bosdyn_msgs__msg__AnchorHintUncertainty__init(&msg->seed_tform_waypoint_uncertainty)) {
    bosdyn_msgs__msg__WaypointAnchorHint__fini(msg);
    return false;
  }
  // seed_tform_waypoint_uncertainty_is_set
  // seed_tform_waypoint_constraint
  if (!bosdyn_msgs__msg__PoseBounds__init(&msg->seed_tform_waypoint_constraint)) {
    bosdyn_msgs__msg__WaypointAnchorHint__fini(msg);
    return false;
  }
  // seed_tform_waypoint_constraint_is_set
  return true;
}

void
bosdyn_msgs__msg__WaypointAnchorHint__fini(bosdyn_msgs__msg__WaypointAnchorHint * msg)
{
  if (!msg) {
    return;
  }
  // waypoint_anchor
  bosdyn_msgs__msg__Anchor__fini(&msg->waypoint_anchor);
  // waypoint_anchor_is_set
  // seed_tform_waypoint_uncertainty
  bosdyn_msgs__msg__AnchorHintUncertainty__fini(&msg->seed_tform_waypoint_uncertainty);
  // seed_tform_waypoint_uncertainty_is_set
  // seed_tform_waypoint_constraint
  bosdyn_msgs__msg__PoseBounds__fini(&msg->seed_tform_waypoint_constraint);
  // seed_tform_waypoint_constraint_is_set
}

bool
bosdyn_msgs__msg__WaypointAnchorHint__are_equal(const bosdyn_msgs__msg__WaypointAnchorHint * lhs, const bosdyn_msgs__msg__WaypointAnchorHint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // waypoint_anchor
  if (!bosdyn_msgs__msg__Anchor__are_equal(
      &(lhs->waypoint_anchor), &(rhs->waypoint_anchor)))
  {
    return false;
  }
  // waypoint_anchor_is_set
  if (lhs->waypoint_anchor_is_set != rhs->waypoint_anchor_is_set) {
    return false;
  }
  // seed_tform_waypoint_uncertainty
  if (!bosdyn_msgs__msg__AnchorHintUncertainty__are_equal(
      &(lhs->seed_tform_waypoint_uncertainty), &(rhs->seed_tform_waypoint_uncertainty)))
  {
    return false;
  }
  // seed_tform_waypoint_uncertainty_is_set
  if (lhs->seed_tform_waypoint_uncertainty_is_set != rhs->seed_tform_waypoint_uncertainty_is_set) {
    return false;
  }
  // seed_tform_waypoint_constraint
  if (!bosdyn_msgs__msg__PoseBounds__are_equal(
      &(lhs->seed_tform_waypoint_constraint), &(rhs->seed_tform_waypoint_constraint)))
  {
    return false;
  }
  // seed_tform_waypoint_constraint_is_set
  if (lhs->seed_tform_waypoint_constraint_is_set != rhs->seed_tform_waypoint_constraint_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__WaypointAnchorHint__copy(
  const bosdyn_msgs__msg__WaypointAnchorHint * input,
  bosdyn_msgs__msg__WaypointAnchorHint * output)
{
  if (!input || !output) {
    return false;
  }
  // waypoint_anchor
  if (!bosdyn_msgs__msg__Anchor__copy(
      &(input->waypoint_anchor), &(output->waypoint_anchor)))
  {
    return false;
  }
  // waypoint_anchor_is_set
  output->waypoint_anchor_is_set = input->waypoint_anchor_is_set;
  // seed_tform_waypoint_uncertainty
  if (!bosdyn_msgs__msg__AnchorHintUncertainty__copy(
      &(input->seed_tform_waypoint_uncertainty), &(output->seed_tform_waypoint_uncertainty)))
  {
    return false;
  }
  // seed_tform_waypoint_uncertainty_is_set
  output->seed_tform_waypoint_uncertainty_is_set = input->seed_tform_waypoint_uncertainty_is_set;
  // seed_tform_waypoint_constraint
  if (!bosdyn_msgs__msg__PoseBounds__copy(
      &(input->seed_tform_waypoint_constraint), &(output->seed_tform_waypoint_constraint)))
  {
    return false;
  }
  // seed_tform_waypoint_constraint_is_set
  output->seed_tform_waypoint_constraint_is_set = input->seed_tform_waypoint_constraint_is_set;
  return true;
}

bosdyn_msgs__msg__WaypointAnchorHint *
bosdyn_msgs__msg__WaypointAnchorHint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__WaypointAnchorHint * msg = (bosdyn_msgs__msg__WaypointAnchorHint *)allocator.allocate(sizeof(bosdyn_msgs__msg__WaypointAnchorHint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__WaypointAnchorHint));
  bool success = bosdyn_msgs__msg__WaypointAnchorHint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__WaypointAnchorHint__destroy(bosdyn_msgs__msg__WaypointAnchorHint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__WaypointAnchorHint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__WaypointAnchorHint__Sequence__init(bosdyn_msgs__msg__WaypointAnchorHint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__WaypointAnchorHint * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__WaypointAnchorHint *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__WaypointAnchorHint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__WaypointAnchorHint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__WaypointAnchorHint__fini(&data[i - 1]);
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
bosdyn_msgs__msg__WaypointAnchorHint__Sequence__fini(bosdyn_msgs__msg__WaypointAnchorHint__Sequence * array)
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
      bosdyn_msgs__msg__WaypointAnchorHint__fini(&array->data[i]);
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

bosdyn_msgs__msg__WaypointAnchorHint__Sequence *
bosdyn_msgs__msg__WaypointAnchorHint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__WaypointAnchorHint__Sequence * array = (bosdyn_msgs__msg__WaypointAnchorHint__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__WaypointAnchorHint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__WaypointAnchorHint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__WaypointAnchorHint__Sequence__destroy(bosdyn_msgs__msg__WaypointAnchorHint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__WaypointAnchorHint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__WaypointAnchorHint__Sequence__are_equal(const bosdyn_msgs__msg__WaypointAnchorHint__Sequence * lhs, const bosdyn_msgs__msg__WaypointAnchorHint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__WaypointAnchorHint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__WaypointAnchorHint__Sequence__copy(
  const bosdyn_msgs__msg__WaypointAnchorHint__Sequence * input,
  bosdyn_msgs__msg__WaypointAnchorHint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__WaypointAnchorHint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__WaypointAnchorHint * data =
      (bosdyn_msgs__msg__WaypointAnchorHint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__WaypointAnchorHint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__WaypointAnchorHint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__WaypointAnchorHint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
