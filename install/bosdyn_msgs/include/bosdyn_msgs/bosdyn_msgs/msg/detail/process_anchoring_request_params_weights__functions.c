// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/ProcessAnchoringRequestParamsWeights.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/process_anchoring_request_params_weights__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights__init(bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights * msg)
{
  if (!msg) {
    return false;
  }
  // kinematic_odometry_weight
  // visual_odometry_weight
  // world_object_weight
  // hint_weight
  // gyroscope_weight
  // loop_closure_weight
  return true;
}

void
bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights__fini(bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights * msg)
{
  if (!msg) {
    return;
  }
  // kinematic_odometry_weight
  // visual_odometry_weight
  // world_object_weight
  // hint_weight
  // gyroscope_weight
  // loop_closure_weight
}

bool
bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights__are_equal(const bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights * lhs, const bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // kinematic_odometry_weight
  if (lhs->kinematic_odometry_weight != rhs->kinematic_odometry_weight) {
    return false;
  }
  // visual_odometry_weight
  if (lhs->visual_odometry_weight != rhs->visual_odometry_weight) {
    return false;
  }
  // world_object_weight
  if (lhs->world_object_weight != rhs->world_object_weight) {
    return false;
  }
  // hint_weight
  if (lhs->hint_weight != rhs->hint_weight) {
    return false;
  }
  // gyroscope_weight
  if (lhs->gyroscope_weight != rhs->gyroscope_weight) {
    return false;
  }
  // loop_closure_weight
  if (lhs->loop_closure_weight != rhs->loop_closure_weight) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights__copy(
  const bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights * input,
  bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights * output)
{
  if (!input || !output) {
    return false;
  }
  // kinematic_odometry_weight
  output->kinematic_odometry_weight = input->kinematic_odometry_weight;
  // visual_odometry_weight
  output->visual_odometry_weight = input->visual_odometry_weight;
  // world_object_weight
  output->world_object_weight = input->world_object_weight;
  // hint_weight
  output->hint_weight = input->hint_weight;
  // gyroscope_weight
  output->gyroscope_weight = input->gyroscope_weight;
  // loop_closure_weight
  output->loop_closure_weight = input->loop_closure_weight;
  return true;
}

bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights *
bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights * msg = (bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights *)allocator.allocate(sizeof(bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights));
  bool success = bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights__destroy(bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights__Sequence__init(bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights__fini(&data[i - 1]);
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
bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights__Sequence__fini(bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights__Sequence * array)
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
      bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights__fini(&array->data[i]);
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

bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights__Sequence *
bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights__Sequence * array = (bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights__Sequence__destroy(bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights__Sequence__are_equal(const bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights__Sequence * lhs, const bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights__Sequence__copy(
  const bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights__Sequence * input,
  bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights * data =
      (bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
