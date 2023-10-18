// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/ProcessTopologyRequestFiducialLoopClosureParams.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/process_topology_request_fiducial_loop_closure_params__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams__init(bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams * msg)
{
  if (!msg) {
    return false;
  }
  // min_loop_closure_path_length
  // min_loop_closure_path_length_is_set
  // max_loop_closure_edge_length
  // max_loop_closure_edge_length_is_set
  // max_fiducial_distance
  // max_fiducial_distance_is_set
  // max_loop_closure_height_change
  // max_loop_closure_height_change_is_set
  // prune_edges
  // prune_edges_is_set
  return true;
}

void
bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams__fini(bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams * msg)
{
  if (!msg) {
    return;
  }
  // min_loop_closure_path_length
  // min_loop_closure_path_length_is_set
  // max_loop_closure_edge_length
  // max_loop_closure_edge_length_is_set
  // max_fiducial_distance
  // max_fiducial_distance_is_set
  // max_loop_closure_height_change
  // max_loop_closure_height_change_is_set
  // prune_edges
  // prune_edges_is_set
}

bool
bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams__are_equal(const bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams * lhs, const bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // min_loop_closure_path_length
  if (lhs->min_loop_closure_path_length != rhs->min_loop_closure_path_length) {
    return false;
  }
  // min_loop_closure_path_length_is_set
  if (lhs->min_loop_closure_path_length_is_set != rhs->min_loop_closure_path_length_is_set) {
    return false;
  }
  // max_loop_closure_edge_length
  if (lhs->max_loop_closure_edge_length != rhs->max_loop_closure_edge_length) {
    return false;
  }
  // max_loop_closure_edge_length_is_set
  if (lhs->max_loop_closure_edge_length_is_set != rhs->max_loop_closure_edge_length_is_set) {
    return false;
  }
  // max_fiducial_distance
  if (lhs->max_fiducial_distance != rhs->max_fiducial_distance) {
    return false;
  }
  // max_fiducial_distance_is_set
  if (lhs->max_fiducial_distance_is_set != rhs->max_fiducial_distance_is_set) {
    return false;
  }
  // max_loop_closure_height_change
  if (lhs->max_loop_closure_height_change != rhs->max_loop_closure_height_change) {
    return false;
  }
  // max_loop_closure_height_change_is_set
  if (lhs->max_loop_closure_height_change_is_set != rhs->max_loop_closure_height_change_is_set) {
    return false;
  }
  // prune_edges
  if (lhs->prune_edges != rhs->prune_edges) {
    return false;
  }
  // prune_edges_is_set
  if (lhs->prune_edges_is_set != rhs->prune_edges_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams__copy(
  const bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams * input,
  bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams * output)
{
  if (!input || !output) {
    return false;
  }
  // min_loop_closure_path_length
  output->min_loop_closure_path_length = input->min_loop_closure_path_length;
  // min_loop_closure_path_length_is_set
  output->min_loop_closure_path_length_is_set = input->min_loop_closure_path_length_is_set;
  // max_loop_closure_edge_length
  output->max_loop_closure_edge_length = input->max_loop_closure_edge_length;
  // max_loop_closure_edge_length_is_set
  output->max_loop_closure_edge_length_is_set = input->max_loop_closure_edge_length_is_set;
  // max_fiducial_distance
  output->max_fiducial_distance = input->max_fiducial_distance;
  // max_fiducial_distance_is_set
  output->max_fiducial_distance_is_set = input->max_fiducial_distance_is_set;
  // max_loop_closure_height_change
  output->max_loop_closure_height_change = input->max_loop_closure_height_change;
  // max_loop_closure_height_change_is_set
  output->max_loop_closure_height_change_is_set = input->max_loop_closure_height_change_is_set;
  // prune_edges
  output->prune_edges = input->prune_edges;
  // prune_edges_is_set
  output->prune_edges_is_set = input->prune_edges_is_set;
  return true;
}

bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams *
bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams * msg = (bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams *)allocator.allocate(sizeof(bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams));
  bool success = bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams__destroy(bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams__Sequence__init(bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams__fini(&data[i - 1]);
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
bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams__Sequence__fini(bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams__Sequence * array)
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
      bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams__fini(&array->data[i]);
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

bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams__Sequence *
bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams__Sequence * array = (bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams__Sequence__destroy(bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams__Sequence__are_equal(const bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams__Sequence * lhs, const bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams__Sequence__copy(
  const bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams__Sequence * input,
  bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams * data =
      (bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__ProcessTopologyRequestFiducialLoopClosureParams__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
