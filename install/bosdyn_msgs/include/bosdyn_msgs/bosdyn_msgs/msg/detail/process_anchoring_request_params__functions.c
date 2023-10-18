// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/ProcessAnchoringRequestParams.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/process_anchoring_request_params__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `optimizer_params`
#include "bosdyn_msgs/msg/detail/process_anchoring_request_params_optimizer_params__functions.h"
// Member `measurement_params`
#include "bosdyn_msgs/msg/detail/process_anchoring_request_params_measurement_params__functions.h"
// Member `weights`
#include "bosdyn_msgs/msg/detail/process_anchoring_request_params_weights__functions.h"
// Member `gravity_ewrt_seed`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
bosdyn_msgs__msg__ProcessAnchoringRequestParams__init(bosdyn_msgs__msg__ProcessAnchoringRequestParams * msg)
{
  if (!msg) {
    return false;
  }
  // optimizer_params
  if (!bosdyn_msgs__msg__ProcessAnchoringRequestParamsOptimizerParams__init(&msg->optimizer_params)) {
    bosdyn_msgs__msg__ProcessAnchoringRequestParams__fini(msg);
    return false;
  }
  // optimizer_params_is_set
  // measurement_params
  if (!bosdyn_msgs__msg__ProcessAnchoringRequestParamsMeasurementParams__init(&msg->measurement_params)) {
    bosdyn_msgs__msg__ProcessAnchoringRequestParams__fini(msg);
    return false;
  }
  // measurement_params_is_set
  // weights
  if (!bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights__init(&msg->weights)) {
    bosdyn_msgs__msg__ProcessAnchoringRequestParams__fini(msg);
    return false;
  }
  // weights_is_set
  // optimize_existing_anchoring
  // optimize_existing_anchoring_is_set
  // gravity_ewrt_seed
  if (!geometry_msgs__msg__Vector3__init(&msg->gravity_ewrt_seed)) {
    bosdyn_msgs__msg__ProcessAnchoringRequestParams__fini(msg);
    return false;
  }
  // gravity_ewrt_seed_is_set
  return true;
}

void
bosdyn_msgs__msg__ProcessAnchoringRequestParams__fini(bosdyn_msgs__msg__ProcessAnchoringRequestParams * msg)
{
  if (!msg) {
    return;
  }
  // optimizer_params
  bosdyn_msgs__msg__ProcessAnchoringRequestParamsOptimizerParams__fini(&msg->optimizer_params);
  // optimizer_params_is_set
  // measurement_params
  bosdyn_msgs__msg__ProcessAnchoringRequestParamsMeasurementParams__fini(&msg->measurement_params);
  // measurement_params_is_set
  // weights
  bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights__fini(&msg->weights);
  // weights_is_set
  // optimize_existing_anchoring
  // optimize_existing_anchoring_is_set
  // gravity_ewrt_seed
  geometry_msgs__msg__Vector3__fini(&msg->gravity_ewrt_seed);
  // gravity_ewrt_seed_is_set
}

bool
bosdyn_msgs__msg__ProcessAnchoringRequestParams__are_equal(const bosdyn_msgs__msg__ProcessAnchoringRequestParams * lhs, const bosdyn_msgs__msg__ProcessAnchoringRequestParams * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // optimizer_params
  if (!bosdyn_msgs__msg__ProcessAnchoringRequestParamsOptimizerParams__are_equal(
      &(lhs->optimizer_params), &(rhs->optimizer_params)))
  {
    return false;
  }
  // optimizer_params_is_set
  if (lhs->optimizer_params_is_set != rhs->optimizer_params_is_set) {
    return false;
  }
  // measurement_params
  if (!bosdyn_msgs__msg__ProcessAnchoringRequestParamsMeasurementParams__are_equal(
      &(lhs->measurement_params), &(rhs->measurement_params)))
  {
    return false;
  }
  // measurement_params_is_set
  if (lhs->measurement_params_is_set != rhs->measurement_params_is_set) {
    return false;
  }
  // weights
  if (!bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights__are_equal(
      &(lhs->weights), &(rhs->weights)))
  {
    return false;
  }
  // weights_is_set
  if (lhs->weights_is_set != rhs->weights_is_set) {
    return false;
  }
  // optimize_existing_anchoring
  if (lhs->optimize_existing_anchoring != rhs->optimize_existing_anchoring) {
    return false;
  }
  // optimize_existing_anchoring_is_set
  if (lhs->optimize_existing_anchoring_is_set != rhs->optimize_existing_anchoring_is_set) {
    return false;
  }
  // gravity_ewrt_seed
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->gravity_ewrt_seed), &(rhs->gravity_ewrt_seed)))
  {
    return false;
  }
  // gravity_ewrt_seed_is_set
  if (lhs->gravity_ewrt_seed_is_set != rhs->gravity_ewrt_seed_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__ProcessAnchoringRequestParams__copy(
  const bosdyn_msgs__msg__ProcessAnchoringRequestParams * input,
  bosdyn_msgs__msg__ProcessAnchoringRequestParams * output)
{
  if (!input || !output) {
    return false;
  }
  // optimizer_params
  if (!bosdyn_msgs__msg__ProcessAnchoringRequestParamsOptimizerParams__copy(
      &(input->optimizer_params), &(output->optimizer_params)))
  {
    return false;
  }
  // optimizer_params_is_set
  output->optimizer_params_is_set = input->optimizer_params_is_set;
  // measurement_params
  if (!bosdyn_msgs__msg__ProcessAnchoringRequestParamsMeasurementParams__copy(
      &(input->measurement_params), &(output->measurement_params)))
  {
    return false;
  }
  // measurement_params_is_set
  output->measurement_params_is_set = input->measurement_params_is_set;
  // weights
  if (!bosdyn_msgs__msg__ProcessAnchoringRequestParamsWeights__copy(
      &(input->weights), &(output->weights)))
  {
    return false;
  }
  // weights_is_set
  output->weights_is_set = input->weights_is_set;
  // optimize_existing_anchoring
  output->optimize_existing_anchoring = input->optimize_existing_anchoring;
  // optimize_existing_anchoring_is_set
  output->optimize_existing_anchoring_is_set = input->optimize_existing_anchoring_is_set;
  // gravity_ewrt_seed
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->gravity_ewrt_seed), &(output->gravity_ewrt_seed)))
  {
    return false;
  }
  // gravity_ewrt_seed_is_set
  output->gravity_ewrt_seed_is_set = input->gravity_ewrt_seed_is_set;
  return true;
}

bosdyn_msgs__msg__ProcessAnchoringRequestParams *
bosdyn_msgs__msg__ProcessAnchoringRequestParams__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ProcessAnchoringRequestParams * msg = (bosdyn_msgs__msg__ProcessAnchoringRequestParams *)allocator.allocate(sizeof(bosdyn_msgs__msg__ProcessAnchoringRequestParams), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__ProcessAnchoringRequestParams));
  bool success = bosdyn_msgs__msg__ProcessAnchoringRequestParams__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__ProcessAnchoringRequestParams__destroy(bosdyn_msgs__msg__ProcessAnchoringRequestParams * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__ProcessAnchoringRequestParams__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__ProcessAnchoringRequestParams__Sequence__init(bosdyn_msgs__msg__ProcessAnchoringRequestParams__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ProcessAnchoringRequestParams * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__ProcessAnchoringRequestParams *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__ProcessAnchoringRequestParams), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__ProcessAnchoringRequestParams__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__ProcessAnchoringRequestParams__fini(&data[i - 1]);
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
bosdyn_msgs__msg__ProcessAnchoringRequestParams__Sequence__fini(bosdyn_msgs__msg__ProcessAnchoringRequestParams__Sequence * array)
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
      bosdyn_msgs__msg__ProcessAnchoringRequestParams__fini(&array->data[i]);
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

bosdyn_msgs__msg__ProcessAnchoringRequestParams__Sequence *
bosdyn_msgs__msg__ProcessAnchoringRequestParams__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ProcessAnchoringRequestParams__Sequence * array = (bosdyn_msgs__msg__ProcessAnchoringRequestParams__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__ProcessAnchoringRequestParams__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__ProcessAnchoringRequestParams__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__ProcessAnchoringRequestParams__Sequence__destroy(bosdyn_msgs__msg__ProcessAnchoringRequestParams__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__ProcessAnchoringRequestParams__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__ProcessAnchoringRequestParams__Sequence__are_equal(const bosdyn_msgs__msg__ProcessAnchoringRequestParams__Sequence * lhs, const bosdyn_msgs__msg__ProcessAnchoringRequestParams__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__ProcessAnchoringRequestParams__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__ProcessAnchoringRequestParams__Sequence__copy(
  const bosdyn_msgs__msg__ProcessAnchoringRequestParams__Sequence * input,
  bosdyn_msgs__msg__ProcessAnchoringRequestParams__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__ProcessAnchoringRequestParams);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__ProcessAnchoringRequestParams * data =
      (bosdyn_msgs__msg__ProcessAnchoringRequestParams *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__ProcessAnchoringRequestParams__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__ProcessAnchoringRequestParams__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__ProcessAnchoringRequestParams__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
