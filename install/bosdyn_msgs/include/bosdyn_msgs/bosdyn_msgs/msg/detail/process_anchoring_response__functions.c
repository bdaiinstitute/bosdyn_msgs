// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/ProcessAnchoringResponse.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/process_anchoring_response__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "bosdyn_msgs/msg/detail/response_header__functions.h"
// Member `status`
#include "bosdyn_msgs/msg/detail/process_anchoring_response_status__functions.h"
// Member `waypoint_results`
#include "bosdyn_msgs/msg/detail/anchor__functions.h"
// Member `world_object_results`
#include "bosdyn_msgs/msg/detail/anchored_world_object__functions.h"
// Member `violated_waypoint_constraints`
#include "bosdyn_msgs/msg/detail/waypoint_anchor_hint__functions.h"
// Member `violated_object_constraints`
#include "bosdyn_msgs/msg/detail/world_object_anchor_hint__functions.h"
// Member `missing_snapshot_ids`
// Member `missing_waypoint_ids`
// Member `invalid_hints`
#include "rosidl_runtime_c/string_functions.h"
// Member `inconsistent_edges`
#include "bosdyn_msgs/msg/detail/edge_id__functions.h"

bool
bosdyn_msgs__msg__ProcessAnchoringResponse__init(bosdyn_msgs__msg__ProcessAnchoringResponse * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__ResponseHeader__init(&msg->header)) {
    bosdyn_msgs__msg__ProcessAnchoringResponse__fini(msg);
    return false;
  }
  // header_is_set
  // status
  if (!bosdyn_msgs__msg__ProcessAnchoringResponseStatus__init(&msg->status)) {
    bosdyn_msgs__msg__ProcessAnchoringResponse__fini(msg);
    return false;
  }
  // waypoint_results
  if (!bosdyn_msgs__msg__Anchor__Sequence__init(&msg->waypoint_results, 0)) {
    bosdyn_msgs__msg__ProcessAnchoringResponse__fini(msg);
    return false;
  }
  // world_object_results
  if (!bosdyn_msgs__msg__AnchoredWorldObject__Sequence__init(&msg->world_object_results, 0)) {
    bosdyn_msgs__msg__ProcessAnchoringResponse__fini(msg);
    return false;
  }
  // anchoring_on_server_was_modified
  // iteration
  // cost
  // final_iteration
  // violated_waypoint_constraints
  if (!bosdyn_msgs__msg__WaypointAnchorHint__Sequence__init(&msg->violated_waypoint_constraints, 0)) {
    bosdyn_msgs__msg__ProcessAnchoringResponse__fini(msg);
    return false;
  }
  // violated_object_constraints
  if (!bosdyn_msgs__msg__WorldObjectAnchorHint__Sequence__init(&msg->violated_object_constraints, 0)) {
    bosdyn_msgs__msg__ProcessAnchoringResponse__fini(msg);
    return false;
  }
  // missing_snapshot_ids
  if (!rosidl_runtime_c__String__Sequence__init(&msg->missing_snapshot_ids, 0)) {
    bosdyn_msgs__msg__ProcessAnchoringResponse__fini(msg);
    return false;
  }
  // missing_waypoint_ids
  if (!rosidl_runtime_c__String__Sequence__init(&msg->missing_waypoint_ids, 0)) {
    bosdyn_msgs__msg__ProcessAnchoringResponse__fini(msg);
    return false;
  }
  // invalid_hints
  if (!rosidl_runtime_c__String__Sequence__init(&msg->invalid_hints, 0)) {
    bosdyn_msgs__msg__ProcessAnchoringResponse__fini(msg);
    return false;
  }
  // inconsistent_edges
  if (!bosdyn_msgs__msg__EdgeId__Sequence__init(&msg->inconsistent_edges, 0)) {
    bosdyn_msgs__msg__ProcessAnchoringResponse__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__ProcessAnchoringResponse__fini(bosdyn_msgs__msg__ProcessAnchoringResponse * msg)
{
  if (!msg) {
    return;
  }
  // header
  bosdyn_msgs__msg__ResponseHeader__fini(&msg->header);
  // header_is_set
  // status
  bosdyn_msgs__msg__ProcessAnchoringResponseStatus__fini(&msg->status);
  // waypoint_results
  bosdyn_msgs__msg__Anchor__Sequence__fini(&msg->waypoint_results);
  // world_object_results
  bosdyn_msgs__msg__AnchoredWorldObject__Sequence__fini(&msg->world_object_results);
  // anchoring_on_server_was_modified
  // iteration
  // cost
  // final_iteration
  // violated_waypoint_constraints
  bosdyn_msgs__msg__WaypointAnchorHint__Sequence__fini(&msg->violated_waypoint_constraints);
  // violated_object_constraints
  bosdyn_msgs__msg__WorldObjectAnchorHint__Sequence__fini(&msg->violated_object_constraints);
  // missing_snapshot_ids
  rosidl_runtime_c__String__Sequence__fini(&msg->missing_snapshot_ids);
  // missing_waypoint_ids
  rosidl_runtime_c__String__Sequence__fini(&msg->missing_waypoint_ids);
  // invalid_hints
  rosidl_runtime_c__String__Sequence__fini(&msg->invalid_hints);
  // inconsistent_edges
  bosdyn_msgs__msg__EdgeId__Sequence__fini(&msg->inconsistent_edges);
}

bool
bosdyn_msgs__msg__ProcessAnchoringResponse__are_equal(const bosdyn_msgs__msg__ProcessAnchoringResponse * lhs, const bosdyn_msgs__msg__ProcessAnchoringResponse * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__ResponseHeader__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // header_is_set
  if (lhs->header_is_set != rhs->header_is_set) {
    return false;
  }
  // status
  if (!bosdyn_msgs__msg__ProcessAnchoringResponseStatus__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  // waypoint_results
  if (!bosdyn_msgs__msg__Anchor__Sequence__are_equal(
      &(lhs->waypoint_results), &(rhs->waypoint_results)))
  {
    return false;
  }
  // world_object_results
  if (!bosdyn_msgs__msg__AnchoredWorldObject__Sequence__are_equal(
      &(lhs->world_object_results), &(rhs->world_object_results)))
  {
    return false;
  }
  // anchoring_on_server_was_modified
  if (lhs->anchoring_on_server_was_modified != rhs->anchoring_on_server_was_modified) {
    return false;
  }
  // iteration
  if (lhs->iteration != rhs->iteration) {
    return false;
  }
  // cost
  if (lhs->cost != rhs->cost) {
    return false;
  }
  // final_iteration
  if (lhs->final_iteration != rhs->final_iteration) {
    return false;
  }
  // violated_waypoint_constraints
  if (!bosdyn_msgs__msg__WaypointAnchorHint__Sequence__are_equal(
      &(lhs->violated_waypoint_constraints), &(rhs->violated_waypoint_constraints)))
  {
    return false;
  }
  // violated_object_constraints
  if (!bosdyn_msgs__msg__WorldObjectAnchorHint__Sequence__are_equal(
      &(lhs->violated_object_constraints), &(rhs->violated_object_constraints)))
  {
    return false;
  }
  // missing_snapshot_ids
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->missing_snapshot_ids), &(rhs->missing_snapshot_ids)))
  {
    return false;
  }
  // missing_waypoint_ids
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->missing_waypoint_ids), &(rhs->missing_waypoint_ids)))
  {
    return false;
  }
  // invalid_hints
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->invalid_hints), &(rhs->invalid_hints)))
  {
    return false;
  }
  // inconsistent_edges
  if (!bosdyn_msgs__msg__EdgeId__Sequence__are_equal(
      &(lhs->inconsistent_edges), &(rhs->inconsistent_edges)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__ProcessAnchoringResponse__copy(
  const bosdyn_msgs__msg__ProcessAnchoringResponse * input,
  bosdyn_msgs__msg__ProcessAnchoringResponse * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__ResponseHeader__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // header_is_set
  output->header_is_set = input->header_is_set;
  // status
  if (!bosdyn_msgs__msg__ProcessAnchoringResponseStatus__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  // waypoint_results
  if (!bosdyn_msgs__msg__Anchor__Sequence__copy(
      &(input->waypoint_results), &(output->waypoint_results)))
  {
    return false;
  }
  // world_object_results
  if (!bosdyn_msgs__msg__AnchoredWorldObject__Sequence__copy(
      &(input->world_object_results), &(output->world_object_results)))
  {
    return false;
  }
  // anchoring_on_server_was_modified
  output->anchoring_on_server_was_modified = input->anchoring_on_server_was_modified;
  // iteration
  output->iteration = input->iteration;
  // cost
  output->cost = input->cost;
  // final_iteration
  output->final_iteration = input->final_iteration;
  // violated_waypoint_constraints
  if (!bosdyn_msgs__msg__WaypointAnchorHint__Sequence__copy(
      &(input->violated_waypoint_constraints), &(output->violated_waypoint_constraints)))
  {
    return false;
  }
  // violated_object_constraints
  if (!bosdyn_msgs__msg__WorldObjectAnchorHint__Sequence__copy(
      &(input->violated_object_constraints), &(output->violated_object_constraints)))
  {
    return false;
  }
  // missing_snapshot_ids
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->missing_snapshot_ids), &(output->missing_snapshot_ids)))
  {
    return false;
  }
  // missing_waypoint_ids
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->missing_waypoint_ids), &(output->missing_waypoint_ids)))
  {
    return false;
  }
  // invalid_hints
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->invalid_hints), &(output->invalid_hints)))
  {
    return false;
  }
  // inconsistent_edges
  if (!bosdyn_msgs__msg__EdgeId__Sequence__copy(
      &(input->inconsistent_edges), &(output->inconsistent_edges)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__ProcessAnchoringResponse *
bosdyn_msgs__msg__ProcessAnchoringResponse__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ProcessAnchoringResponse * msg = (bosdyn_msgs__msg__ProcessAnchoringResponse *)allocator.allocate(sizeof(bosdyn_msgs__msg__ProcessAnchoringResponse), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__ProcessAnchoringResponse));
  bool success = bosdyn_msgs__msg__ProcessAnchoringResponse__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__ProcessAnchoringResponse__destroy(bosdyn_msgs__msg__ProcessAnchoringResponse * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__ProcessAnchoringResponse__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__ProcessAnchoringResponse__Sequence__init(bosdyn_msgs__msg__ProcessAnchoringResponse__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ProcessAnchoringResponse * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__ProcessAnchoringResponse *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__ProcessAnchoringResponse), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__ProcessAnchoringResponse__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__ProcessAnchoringResponse__fini(&data[i - 1]);
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
bosdyn_msgs__msg__ProcessAnchoringResponse__Sequence__fini(bosdyn_msgs__msg__ProcessAnchoringResponse__Sequence * array)
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
      bosdyn_msgs__msg__ProcessAnchoringResponse__fini(&array->data[i]);
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

bosdyn_msgs__msg__ProcessAnchoringResponse__Sequence *
bosdyn_msgs__msg__ProcessAnchoringResponse__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ProcessAnchoringResponse__Sequence * array = (bosdyn_msgs__msg__ProcessAnchoringResponse__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__ProcessAnchoringResponse__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__ProcessAnchoringResponse__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__ProcessAnchoringResponse__Sequence__destroy(bosdyn_msgs__msg__ProcessAnchoringResponse__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__ProcessAnchoringResponse__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__ProcessAnchoringResponse__Sequence__are_equal(const bosdyn_msgs__msg__ProcessAnchoringResponse__Sequence * lhs, const bosdyn_msgs__msg__ProcessAnchoringResponse__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__ProcessAnchoringResponse__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__ProcessAnchoringResponse__Sequence__copy(
  const bosdyn_msgs__msg__ProcessAnchoringResponse__Sequence * input,
  bosdyn_msgs__msg__ProcessAnchoringResponse__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__ProcessAnchoringResponse);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__ProcessAnchoringResponse * data =
      (bosdyn_msgs__msg__ProcessAnchoringResponse *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__ProcessAnchoringResponse__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__ProcessAnchoringResponse__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__ProcessAnchoringResponse__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
