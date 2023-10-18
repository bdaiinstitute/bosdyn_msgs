// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/EdgeAnnotations.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/edge_annotations__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `stairs`
#include "bosdyn_msgs/msg/detail/edge_annotations_stair_data__functions.h"
// Member `direction_constraint`
#include "bosdyn_msgs/msg/detail/edge_annotations_direction_constraint__functions.h"
// Member `mobility_params`
#include "bosdyn_msgs/msg/detail/mobility_params__functions.h"
// Member `edge_source`
#include "bosdyn_msgs/msg/detail/edge_edge_source__functions.h"
// Member `path_following_mode`
#include "bosdyn_msgs/msg/detail/edge_annotations_path_following_mode__functions.h"
// Member `area_callbacks`
#include "bosdyn_msgs/msg/detail/key_string_value_bosdyn_msgs_area_callback_region__functions.h"
// Member `ground_clutter_mode`
#include "bosdyn_msgs/msg/detail/edge_annotations_ground_clutter_avoidance_mode__functions.h"

bool
bosdyn_msgs__msg__EdgeAnnotations__init(bosdyn_msgs__msg__EdgeAnnotations * msg)
{
  if (!msg) {
    return false;
  }
  // stairs
  if (!bosdyn_msgs__msg__EdgeAnnotationsStairData__init(&msg->stairs)) {
    bosdyn_msgs__msg__EdgeAnnotations__fini(msg);
    return false;
  }
  // stairs_is_set
  // direction_constraint
  if (!bosdyn_msgs__msg__EdgeAnnotationsDirectionConstraint__init(&msg->direction_constraint)) {
    bosdyn_msgs__msg__EdgeAnnotations__fini(msg);
    return false;
  }
  // require_alignment
  // require_alignment_is_set
  // mobility_params
  if (!bosdyn_msgs__msg__MobilityParams__init(&msg->mobility_params)) {
    bosdyn_msgs__msg__EdgeAnnotations__fini(msg);
    return false;
  }
  // mobility_params_is_set
  // cost
  // cost_is_set
  // edge_source
  if (!bosdyn_msgs__msg__EdgeEdgeSource__init(&msg->edge_source)) {
    bosdyn_msgs__msg__EdgeAnnotations__fini(msg);
    return false;
  }
  // disable_alternate_route_finding
  // path_following_mode
  if (!bosdyn_msgs__msg__EdgeAnnotationsPathFollowingMode__init(&msg->path_following_mode)) {
    bosdyn_msgs__msg__EdgeAnnotations__fini(msg);
    return false;
  }
  // disable_directed_exploration
  // area_callbacks
  if (!bosdyn_msgs__msg__KeyStringValueBosdynMsgsAreaCallbackRegion__Sequence__init(&msg->area_callbacks, 0)) {
    bosdyn_msgs__msg__EdgeAnnotations__fini(msg);
    return false;
  }
  // ground_clutter_mode
  if (!bosdyn_msgs__msg__EdgeAnnotationsGroundClutterAvoidanceMode__init(&msg->ground_clutter_mode)) {
    bosdyn_msgs__msg__EdgeAnnotations__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__EdgeAnnotations__fini(bosdyn_msgs__msg__EdgeAnnotations * msg)
{
  if (!msg) {
    return;
  }
  // stairs
  bosdyn_msgs__msg__EdgeAnnotationsStairData__fini(&msg->stairs);
  // stairs_is_set
  // direction_constraint
  bosdyn_msgs__msg__EdgeAnnotationsDirectionConstraint__fini(&msg->direction_constraint);
  // require_alignment
  // require_alignment_is_set
  // mobility_params
  bosdyn_msgs__msg__MobilityParams__fini(&msg->mobility_params);
  // mobility_params_is_set
  // cost
  // cost_is_set
  // edge_source
  bosdyn_msgs__msg__EdgeEdgeSource__fini(&msg->edge_source);
  // disable_alternate_route_finding
  // path_following_mode
  bosdyn_msgs__msg__EdgeAnnotationsPathFollowingMode__fini(&msg->path_following_mode);
  // disable_directed_exploration
  // area_callbacks
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsAreaCallbackRegion__Sequence__fini(&msg->area_callbacks);
  // ground_clutter_mode
  bosdyn_msgs__msg__EdgeAnnotationsGroundClutterAvoidanceMode__fini(&msg->ground_clutter_mode);
}

bool
bosdyn_msgs__msg__EdgeAnnotations__are_equal(const bosdyn_msgs__msg__EdgeAnnotations * lhs, const bosdyn_msgs__msg__EdgeAnnotations * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // stairs
  if (!bosdyn_msgs__msg__EdgeAnnotationsStairData__are_equal(
      &(lhs->stairs), &(rhs->stairs)))
  {
    return false;
  }
  // stairs_is_set
  if (lhs->stairs_is_set != rhs->stairs_is_set) {
    return false;
  }
  // direction_constraint
  if (!bosdyn_msgs__msg__EdgeAnnotationsDirectionConstraint__are_equal(
      &(lhs->direction_constraint), &(rhs->direction_constraint)))
  {
    return false;
  }
  // require_alignment
  if (lhs->require_alignment != rhs->require_alignment) {
    return false;
  }
  // require_alignment_is_set
  if (lhs->require_alignment_is_set != rhs->require_alignment_is_set) {
    return false;
  }
  // mobility_params
  if (!bosdyn_msgs__msg__MobilityParams__are_equal(
      &(lhs->mobility_params), &(rhs->mobility_params)))
  {
    return false;
  }
  // mobility_params_is_set
  if (lhs->mobility_params_is_set != rhs->mobility_params_is_set) {
    return false;
  }
  // cost
  if (lhs->cost != rhs->cost) {
    return false;
  }
  // cost_is_set
  if (lhs->cost_is_set != rhs->cost_is_set) {
    return false;
  }
  // edge_source
  if (!bosdyn_msgs__msg__EdgeEdgeSource__are_equal(
      &(lhs->edge_source), &(rhs->edge_source)))
  {
    return false;
  }
  // disable_alternate_route_finding
  if (lhs->disable_alternate_route_finding != rhs->disable_alternate_route_finding) {
    return false;
  }
  // path_following_mode
  if (!bosdyn_msgs__msg__EdgeAnnotationsPathFollowingMode__are_equal(
      &(lhs->path_following_mode), &(rhs->path_following_mode)))
  {
    return false;
  }
  // disable_directed_exploration
  if (lhs->disable_directed_exploration != rhs->disable_directed_exploration) {
    return false;
  }
  // area_callbacks
  if (!bosdyn_msgs__msg__KeyStringValueBosdynMsgsAreaCallbackRegion__Sequence__are_equal(
      &(lhs->area_callbacks), &(rhs->area_callbacks)))
  {
    return false;
  }
  // ground_clutter_mode
  if (!bosdyn_msgs__msg__EdgeAnnotationsGroundClutterAvoidanceMode__are_equal(
      &(lhs->ground_clutter_mode), &(rhs->ground_clutter_mode)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__EdgeAnnotations__copy(
  const bosdyn_msgs__msg__EdgeAnnotations * input,
  bosdyn_msgs__msg__EdgeAnnotations * output)
{
  if (!input || !output) {
    return false;
  }
  // stairs
  if (!bosdyn_msgs__msg__EdgeAnnotationsStairData__copy(
      &(input->stairs), &(output->stairs)))
  {
    return false;
  }
  // stairs_is_set
  output->stairs_is_set = input->stairs_is_set;
  // direction_constraint
  if (!bosdyn_msgs__msg__EdgeAnnotationsDirectionConstraint__copy(
      &(input->direction_constraint), &(output->direction_constraint)))
  {
    return false;
  }
  // require_alignment
  output->require_alignment = input->require_alignment;
  // require_alignment_is_set
  output->require_alignment_is_set = input->require_alignment_is_set;
  // mobility_params
  if (!bosdyn_msgs__msg__MobilityParams__copy(
      &(input->mobility_params), &(output->mobility_params)))
  {
    return false;
  }
  // mobility_params_is_set
  output->mobility_params_is_set = input->mobility_params_is_set;
  // cost
  output->cost = input->cost;
  // cost_is_set
  output->cost_is_set = input->cost_is_set;
  // edge_source
  if (!bosdyn_msgs__msg__EdgeEdgeSource__copy(
      &(input->edge_source), &(output->edge_source)))
  {
    return false;
  }
  // disable_alternate_route_finding
  output->disable_alternate_route_finding = input->disable_alternate_route_finding;
  // path_following_mode
  if (!bosdyn_msgs__msg__EdgeAnnotationsPathFollowingMode__copy(
      &(input->path_following_mode), &(output->path_following_mode)))
  {
    return false;
  }
  // disable_directed_exploration
  output->disable_directed_exploration = input->disable_directed_exploration;
  // area_callbacks
  if (!bosdyn_msgs__msg__KeyStringValueBosdynMsgsAreaCallbackRegion__Sequence__copy(
      &(input->area_callbacks), &(output->area_callbacks)))
  {
    return false;
  }
  // ground_clutter_mode
  if (!bosdyn_msgs__msg__EdgeAnnotationsGroundClutterAvoidanceMode__copy(
      &(input->ground_clutter_mode), &(output->ground_clutter_mode)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__EdgeAnnotations *
bosdyn_msgs__msg__EdgeAnnotations__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__EdgeAnnotations * msg = (bosdyn_msgs__msg__EdgeAnnotations *)allocator.allocate(sizeof(bosdyn_msgs__msg__EdgeAnnotations), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__EdgeAnnotations));
  bool success = bosdyn_msgs__msg__EdgeAnnotations__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__EdgeAnnotations__destroy(bosdyn_msgs__msg__EdgeAnnotations * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__EdgeAnnotations__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__EdgeAnnotations__Sequence__init(bosdyn_msgs__msg__EdgeAnnotations__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__EdgeAnnotations * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__EdgeAnnotations *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__EdgeAnnotations), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__EdgeAnnotations__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__EdgeAnnotations__fini(&data[i - 1]);
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
bosdyn_msgs__msg__EdgeAnnotations__Sequence__fini(bosdyn_msgs__msg__EdgeAnnotations__Sequence * array)
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
      bosdyn_msgs__msg__EdgeAnnotations__fini(&array->data[i]);
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

bosdyn_msgs__msg__EdgeAnnotations__Sequence *
bosdyn_msgs__msg__EdgeAnnotations__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__EdgeAnnotations__Sequence * array = (bosdyn_msgs__msg__EdgeAnnotations__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__EdgeAnnotations__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__EdgeAnnotations__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__EdgeAnnotations__Sequence__destroy(bosdyn_msgs__msg__EdgeAnnotations__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__EdgeAnnotations__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__EdgeAnnotations__Sequence__are_equal(const bosdyn_msgs__msg__EdgeAnnotations__Sequence * lhs, const bosdyn_msgs__msg__EdgeAnnotations__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__EdgeAnnotations__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__EdgeAnnotations__Sequence__copy(
  const bosdyn_msgs__msg__EdgeAnnotations__Sequence * input,
  bosdyn_msgs__msg__EdgeAnnotations__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__EdgeAnnotations);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__EdgeAnnotations * data =
      (bosdyn_msgs__msg__EdgeAnnotations *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__EdgeAnnotations__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__EdgeAnnotations__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__EdgeAnnotations__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
