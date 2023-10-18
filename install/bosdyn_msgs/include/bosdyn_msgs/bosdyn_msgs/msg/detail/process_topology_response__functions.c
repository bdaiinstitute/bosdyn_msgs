// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/ProcessTopologyResponse.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/process_topology_response__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "bosdyn_msgs/msg/detail/response_header__functions.h"
// Member `status`
#include "bosdyn_msgs/msg/detail/process_topology_response_status__functions.h"
// Member `new_subgraph`
#include "bosdyn_msgs/msg/detail/graph__functions.h"
// Member `missing_snapshot_ids`
// Member `missing_waypoint_ids`
#include "rosidl_runtime_c/string_functions.h"

bool
bosdyn_msgs__msg__ProcessTopologyResponse__init(bosdyn_msgs__msg__ProcessTopologyResponse * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__ResponseHeader__init(&msg->header)) {
    bosdyn_msgs__msg__ProcessTopologyResponse__fini(msg);
    return false;
  }
  // header_is_set
  // status
  if (!bosdyn_msgs__msg__ProcessTopologyResponseStatus__init(&msg->status)) {
    bosdyn_msgs__msg__ProcessTopologyResponse__fini(msg);
    return false;
  }
  // new_subgraph
  if (!bosdyn_msgs__msg__Graph__init(&msg->new_subgraph)) {
    bosdyn_msgs__msg__ProcessTopologyResponse__fini(msg);
    return false;
  }
  // new_subgraph_is_set
  // map_on_server_was_modified
  // missing_snapshot_ids
  if (!rosidl_runtime_c__String__Sequence__init(&msg->missing_snapshot_ids, 0)) {
    bosdyn_msgs__msg__ProcessTopologyResponse__fini(msg);
    return false;
  }
  // missing_waypoint_ids
  if (!rosidl_runtime_c__String__Sequence__init(&msg->missing_waypoint_ids, 0)) {
    bosdyn_msgs__msg__ProcessTopologyResponse__fini(msg);
    return false;
  }
  // timed_out
  return true;
}

void
bosdyn_msgs__msg__ProcessTopologyResponse__fini(bosdyn_msgs__msg__ProcessTopologyResponse * msg)
{
  if (!msg) {
    return;
  }
  // header
  bosdyn_msgs__msg__ResponseHeader__fini(&msg->header);
  // header_is_set
  // status
  bosdyn_msgs__msg__ProcessTopologyResponseStatus__fini(&msg->status);
  // new_subgraph
  bosdyn_msgs__msg__Graph__fini(&msg->new_subgraph);
  // new_subgraph_is_set
  // map_on_server_was_modified
  // missing_snapshot_ids
  rosidl_runtime_c__String__Sequence__fini(&msg->missing_snapshot_ids);
  // missing_waypoint_ids
  rosidl_runtime_c__String__Sequence__fini(&msg->missing_waypoint_ids);
  // timed_out
}

bool
bosdyn_msgs__msg__ProcessTopologyResponse__are_equal(const bosdyn_msgs__msg__ProcessTopologyResponse * lhs, const bosdyn_msgs__msg__ProcessTopologyResponse * rhs)
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
  if (!bosdyn_msgs__msg__ProcessTopologyResponseStatus__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  // new_subgraph
  if (!bosdyn_msgs__msg__Graph__are_equal(
      &(lhs->new_subgraph), &(rhs->new_subgraph)))
  {
    return false;
  }
  // new_subgraph_is_set
  if (lhs->new_subgraph_is_set != rhs->new_subgraph_is_set) {
    return false;
  }
  // map_on_server_was_modified
  if (lhs->map_on_server_was_modified != rhs->map_on_server_was_modified) {
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
  // timed_out
  if (lhs->timed_out != rhs->timed_out) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__ProcessTopologyResponse__copy(
  const bosdyn_msgs__msg__ProcessTopologyResponse * input,
  bosdyn_msgs__msg__ProcessTopologyResponse * output)
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
  if (!bosdyn_msgs__msg__ProcessTopologyResponseStatus__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  // new_subgraph
  if (!bosdyn_msgs__msg__Graph__copy(
      &(input->new_subgraph), &(output->new_subgraph)))
  {
    return false;
  }
  // new_subgraph_is_set
  output->new_subgraph_is_set = input->new_subgraph_is_set;
  // map_on_server_was_modified
  output->map_on_server_was_modified = input->map_on_server_was_modified;
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
  // timed_out
  output->timed_out = input->timed_out;
  return true;
}

bosdyn_msgs__msg__ProcessTopologyResponse *
bosdyn_msgs__msg__ProcessTopologyResponse__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ProcessTopologyResponse * msg = (bosdyn_msgs__msg__ProcessTopologyResponse *)allocator.allocate(sizeof(bosdyn_msgs__msg__ProcessTopologyResponse), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__ProcessTopologyResponse));
  bool success = bosdyn_msgs__msg__ProcessTopologyResponse__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__ProcessTopologyResponse__destroy(bosdyn_msgs__msg__ProcessTopologyResponse * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__ProcessTopologyResponse__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__ProcessTopologyResponse__Sequence__init(bosdyn_msgs__msg__ProcessTopologyResponse__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ProcessTopologyResponse * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__ProcessTopologyResponse *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__ProcessTopologyResponse), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__ProcessTopologyResponse__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__ProcessTopologyResponse__fini(&data[i - 1]);
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
bosdyn_msgs__msg__ProcessTopologyResponse__Sequence__fini(bosdyn_msgs__msg__ProcessTopologyResponse__Sequence * array)
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
      bosdyn_msgs__msg__ProcessTopologyResponse__fini(&array->data[i]);
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

bosdyn_msgs__msg__ProcessTopologyResponse__Sequence *
bosdyn_msgs__msg__ProcessTopologyResponse__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ProcessTopologyResponse__Sequence * array = (bosdyn_msgs__msg__ProcessTopologyResponse__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__ProcessTopologyResponse__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__ProcessTopologyResponse__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__ProcessTopologyResponse__Sequence__destroy(bosdyn_msgs__msg__ProcessTopologyResponse__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__ProcessTopologyResponse__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__ProcessTopologyResponse__Sequence__are_equal(const bosdyn_msgs__msg__ProcessTopologyResponse__Sequence * lhs, const bosdyn_msgs__msg__ProcessTopologyResponse__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__ProcessTopologyResponse__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__ProcessTopologyResponse__Sequence__copy(
  const bosdyn_msgs__msg__ProcessTopologyResponse__Sequence * input,
  bosdyn_msgs__msg__ProcessTopologyResponse__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__ProcessTopologyResponse);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__ProcessTopologyResponse * data =
      (bosdyn_msgs__msg__ProcessTopologyResponse *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__ProcessTopologyResponse__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__ProcessTopologyResponse__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__ProcessTopologyResponse__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
