// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/MapStats.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/map_stats__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `waypoints`
// Member `waypoint_snapshots`
// Member `alternate_waypoints`
// Member `edges`
// Member `edge_snapshots`
// Member `alternate_edges`
// Member `waypoint_anchors`
// Member `object_anchors`
#include "bosdyn_msgs/msg/detail/map_stats_stat__functions.h"

bool
bosdyn_msgs__msg__MapStats__init(bosdyn_msgs__msg__MapStats * msg)
{
  if (!msg) {
    return false;
  }
  // waypoints
  if (!bosdyn_msgs__msg__MapStatsStat__init(&msg->waypoints)) {
    bosdyn_msgs__msg__MapStats__fini(msg);
    return false;
  }
  // waypoints_is_set
  // waypoint_snapshots
  if (!bosdyn_msgs__msg__MapStatsStat__init(&msg->waypoint_snapshots)) {
    bosdyn_msgs__msg__MapStats__fini(msg);
    return false;
  }
  // waypoint_snapshots_is_set
  // alternate_waypoints
  if (!bosdyn_msgs__msg__MapStatsStat__init(&msg->alternate_waypoints)) {
    bosdyn_msgs__msg__MapStats__fini(msg);
    return false;
  }
  // alternate_waypoints_is_set
  // edges
  if (!bosdyn_msgs__msg__MapStatsStat__init(&msg->edges)) {
    bosdyn_msgs__msg__MapStats__fini(msg);
    return false;
  }
  // edges_is_set
  // edge_snapshots
  if (!bosdyn_msgs__msg__MapStatsStat__init(&msg->edge_snapshots)) {
    bosdyn_msgs__msg__MapStats__fini(msg);
    return false;
  }
  // edge_snapshots_is_set
  // alternate_edges
  if (!bosdyn_msgs__msg__MapStatsStat__init(&msg->alternate_edges)) {
    bosdyn_msgs__msg__MapStats__fini(msg);
    return false;
  }
  // alternate_edges_is_set
  // waypoint_anchors
  if (!bosdyn_msgs__msg__MapStatsStat__init(&msg->waypoint_anchors)) {
    bosdyn_msgs__msg__MapStats__fini(msg);
    return false;
  }
  // waypoint_anchors_is_set
  // object_anchors
  if (!bosdyn_msgs__msg__MapStatsStat__init(&msg->object_anchors)) {
    bosdyn_msgs__msg__MapStats__fini(msg);
    return false;
  }
  // object_anchors_is_set
  // total_path_length
  return true;
}

void
bosdyn_msgs__msg__MapStats__fini(bosdyn_msgs__msg__MapStats * msg)
{
  if (!msg) {
    return;
  }
  // waypoints
  bosdyn_msgs__msg__MapStatsStat__fini(&msg->waypoints);
  // waypoints_is_set
  // waypoint_snapshots
  bosdyn_msgs__msg__MapStatsStat__fini(&msg->waypoint_snapshots);
  // waypoint_snapshots_is_set
  // alternate_waypoints
  bosdyn_msgs__msg__MapStatsStat__fini(&msg->alternate_waypoints);
  // alternate_waypoints_is_set
  // edges
  bosdyn_msgs__msg__MapStatsStat__fini(&msg->edges);
  // edges_is_set
  // edge_snapshots
  bosdyn_msgs__msg__MapStatsStat__fini(&msg->edge_snapshots);
  // edge_snapshots_is_set
  // alternate_edges
  bosdyn_msgs__msg__MapStatsStat__fini(&msg->alternate_edges);
  // alternate_edges_is_set
  // waypoint_anchors
  bosdyn_msgs__msg__MapStatsStat__fini(&msg->waypoint_anchors);
  // waypoint_anchors_is_set
  // object_anchors
  bosdyn_msgs__msg__MapStatsStat__fini(&msg->object_anchors);
  // object_anchors_is_set
  // total_path_length
}

bool
bosdyn_msgs__msg__MapStats__are_equal(const bosdyn_msgs__msg__MapStats * lhs, const bosdyn_msgs__msg__MapStats * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // waypoints
  if (!bosdyn_msgs__msg__MapStatsStat__are_equal(
      &(lhs->waypoints), &(rhs->waypoints)))
  {
    return false;
  }
  // waypoints_is_set
  if (lhs->waypoints_is_set != rhs->waypoints_is_set) {
    return false;
  }
  // waypoint_snapshots
  if (!bosdyn_msgs__msg__MapStatsStat__are_equal(
      &(lhs->waypoint_snapshots), &(rhs->waypoint_snapshots)))
  {
    return false;
  }
  // waypoint_snapshots_is_set
  if (lhs->waypoint_snapshots_is_set != rhs->waypoint_snapshots_is_set) {
    return false;
  }
  // alternate_waypoints
  if (!bosdyn_msgs__msg__MapStatsStat__are_equal(
      &(lhs->alternate_waypoints), &(rhs->alternate_waypoints)))
  {
    return false;
  }
  // alternate_waypoints_is_set
  if (lhs->alternate_waypoints_is_set != rhs->alternate_waypoints_is_set) {
    return false;
  }
  // edges
  if (!bosdyn_msgs__msg__MapStatsStat__are_equal(
      &(lhs->edges), &(rhs->edges)))
  {
    return false;
  }
  // edges_is_set
  if (lhs->edges_is_set != rhs->edges_is_set) {
    return false;
  }
  // edge_snapshots
  if (!bosdyn_msgs__msg__MapStatsStat__are_equal(
      &(lhs->edge_snapshots), &(rhs->edge_snapshots)))
  {
    return false;
  }
  // edge_snapshots_is_set
  if (lhs->edge_snapshots_is_set != rhs->edge_snapshots_is_set) {
    return false;
  }
  // alternate_edges
  if (!bosdyn_msgs__msg__MapStatsStat__are_equal(
      &(lhs->alternate_edges), &(rhs->alternate_edges)))
  {
    return false;
  }
  // alternate_edges_is_set
  if (lhs->alternate_edges_is_set != rhs->alternate_edges_is_set) {
    return false;
  }
  // waypoint_anchors
  if (!bosdyn_msgs__msg__MapStatsStat__are_equal(
      &(lhs->waypoint_anchors), &(rhs->waypoint_anchors)))
  {
    return false;
  }
  // waypoint_anchors_is_set
  if (lhs->waypoint_anchors_is_set != rhs->waypoint_anchors_is_set) {
    return false;
  }
  // object_anchors
  if (!bosdyn_msgs__msg__MapStatsStat__are_equal(
      &(lhs->object_anchors), &(rhs->object_anchors)))
  {
    return false;
  }
  // object_anchors_is_set
  if (lhs->object_anchors_is_set != rhs->object_anchors_is_set) {
    return false;
  }
  // total_path_length
  if (lhs->total_path_length != rhs->total_path_length) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__MapStats__copy(
  const bosdyn_msgs__msg__MapStats * input,
  bosdyn_msgs__msg__MapStats * output)
{
  if (!input || !output) {
    return false;
  }
  // waypoints
  if (!bosdyn_msgs__msg__MapStatsStat__copy(
      &(input->waypoints), &(output->waypoints)))
  {
    return false;
  }
  // waypoints_is_set
  output->waypoints_is_set = input->waypoints_is_set;
  // waypoint_snapshots
  if (!bosdyn_msgs__msg__MapStatsStat__copy(
      &(input->waypoint_snapshots), &(output->waypoint_snapshots)))
  {
    return false;
  }
  // waypoint_snapshots_is_set
  output->waypoint_snapshots_is_set = input->waypoint_snapshots_is_set;
  // alternate_waypoints
  if (!bosdyn_msgs__msg__MapStatsStat__copy(
      &(input->alternate_waypoints), &(output->alternate_waypoints)))
  {
    return false;
  }
  // alternate_waypoints_is_set
  output->alternate_waypoints_is_set = input->alternate_waypoints_is_set;
  // edges
  if (!bosdyn_msgs__msg__MapStatsStat__copy(
      &(input->edges), &(output->edges)))
  {
    return false;
  }
  // edges_is_set
  output->edges_is_set = input->edges_is_set;
  // edge_snapshots
  if (!bosdyn_msgs__msg__MapStatsStat__copy(
      &(input->edge_snapshots), &(output->edge_snapshots)))
  {
    return false;
  }
  // edge_snapshots_is_set
  output->edge_snapshots_is_set = input->edge_snapshots_is_set;
  // alternate_edges
  if (!bosdyn_msgs__msg__MapStatsStat__copy(
      &(input->alternate_edges), &(output->alternate_edges)))
  {
    return false;
  }
  // alternate_edges_is_set
  output->alternate_edges_is_set = input->alternate_edges_is_set;
  // waypoint_anchors
  if (!bosdyn_msgs__msg__MapStatsStat__copy(
      &(input->waypoint_anchors), &(output->waypoint_anchors)))
  {
    return false;
  }
  // waypoint_anchors_is_set
  output->waypoint_anchors_is_set = input->waypoint_anchors_is_set;
  // object_anchors
  if (!bosdyn_msgs__msg__MapStatsStat__copy(
      &(input->object_anchors), &(output->object_anchors)))
  {
    return false;
  }
  // object_anchors_is_set
  output->object_anchors_is_set = input->object_anchors_is_set;
  // total_path_length
  output->total_path_length = input->total_path_length;
  return true;
}

bosdyn_msgs__msg__MapStats *
bosdyn_msgs__msg__MapStats__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__MapStats * msg = (bosdyn_msgs__msg__MapStats *)allocator.allocate(sizeof(bosdyn_msgs__msg__MapStats), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__MapStats));
  bool success = bosdyn_msgs__msg__MapStats__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__MapStats__destroy(bosdyn_msgs__msg__MapStats * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__MapStats__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__MapStats__Sequence__init(bosdyn_msgs__msg__MapStats__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__MapStats * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__MapStats *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__MapStats), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__MapStats__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__MapStats__fini(&data[i - 1]);
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
bosdyn_msgs__msg__MapStats__Sequence__fini(bosdyn_msgs__msg__MapStats__Sequence * array)
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
      bosdyn_msgs__msg__MapStats__fini(&array->data[i]);
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

bosdyn_msgs__msg__MapStats__Sequence *
bosdyn_msgs__msg__MapStats__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__MapStats__Sequence * array = (bosdyn_msgs__msg__MapStats__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__MapStats__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__MapStats__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__MapStats__Sequence__destroy(bosdyn_msgs__msg__MapStats__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__MapStats__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__MapStats__Sequence__are_equal(const bosdyn_msgs__msg__MapStats__Sequence * lhs, const bosdyn_msgs__msg__MapStats__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__MapStats__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__MapStats__Sequence__copy(
  const bosdyn_msgs__msg__MapStats__Sequence * input,
  bosdyn_msgs__msg__MapStats__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__MapStats);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__MapStats * data =
      (bosdyn_msgs__msg__MapStats *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__MapStats__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__MapStats__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__MapStats__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
