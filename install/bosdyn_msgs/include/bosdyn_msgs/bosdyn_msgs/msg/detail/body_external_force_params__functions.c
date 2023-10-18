// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/BodyExternalForceParams.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/body_external_force_params__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `external_force_indicator`
#include "bosdyn_msgs/msg/detail/body_external_force_params_external_force_indicator__functions.h"
// Member `frame_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `external_force_override`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
bosdyn_msgs__msg__BodyExternalForceParams__init(bosdyn_msgs__msg__BodyExternalForceParams * msg)
{
  if (!msg) {
    return false;
  }
  // external_force_indicator
  if (!bosdyn_msgs__msg__BodyExternalForceParamsExternalForceIndicator__init(&msg->external_force_indicator)) {
    bosdyn_msgs__msg__BodyExternalForceParams__fini(msg);
    return false;
  }
  // frame_name
  if (!rosidl_runtime_c__String__init(&msg->frame_name)) {
    bosdyn_msgs__msg__BodyExternalForceParams__fini(msg);
    return false;
  }
  // external_force_override
  if (!geometry_msgs__msg__Vector3__init(&msg->external_force_override)) {
    bosdyn_msgs__msg__BodyExternalForceParams__fini(msg);
    return false;
  }
  // external_force_override_is_set
  return true;
}

void
bosdyn_msgs__msg__BodyExternalForceParams__fini(bosdyn_msgs__msg__BodyExternalForceParams * msg)
{
  if (!msg) {
    return;
  }
  // external_force_indicator
  bosdyn_msgs__msg__BodyExternalForceParamsExternalForceIndicator__fini(&msg->external_force_indicator);
  // frame_name
  rosidl_runtime_c__String__fini(&msg->frame_name);
  // external_force_override
  geometry_msgs__msg__Vector3__fini(&msg->external_force_override);
  // external_force_override_is_set
}

bool
bosdyn_msgs__msg__BodyExternalForceParams__are_equal(const bosdyn_msgs__msg__BodyExternalForceParams * lhs, const bosdyn_msgs__msg__BodyExternalForceParams * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // external_force_indicator
  if (!bosdyn_msgs__msg__BodyExternalForceParamsExternalForceIndicator__are_equal(
      &(lhs->external_force_indicator), &(rhs->external_force_indicator)))
  {
    return false;
  }
  // frame_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->frame_name), &(rhs->frame_name)))
  {
    return false;
  }
  // external_force_override
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->external_force_override), &(rhs->external_force_override)))
  {
    return false;
  }
  // external_force_override_is_set
  if (lhs->external_force_override_is_set != rhs->external_force_override_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__BodyExternalForceParams__copy(
  const bosdyn_msgs__msg__BodyExternalForceParams * input,
  bosdyn_msgs__msg__BodyExternalForceParams * output)
{
  if (!input || !output) {
    return false;
  }
  // external_force_indicator
  if (!bosdyn_msgs__msg__BodyExternalForceParamsExternalForceIndicator__copy(
      &(input->external_force_indicator), &(output->external_force_indicator)))
  {
    return false;
  }
  // frame_name
  if (!rosidl_runtime_c__String__copy(
      &(input->frame_name), &(output->frame_name)))
  {
    return false;
  }
  // external_force_override
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->external_force_override), &(output->external_force_override)))
  {
    return false;
  }
  // external_force_override_is_set
  output->external_force_override_is_set = input->external_force_override_is_set;
  return true;
}

bosdyn_msgs__msg__BodyExternalForceParams *
bosdyn_msgs__msg__BodyExternalForceParams__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__BodyExternalForceParams * msg = (bosdyn_msgs__msg__BodyExternalForceParams *)allocator.allocate(sizeof(bosdyn_msgs__msg__BodyExternalForceParams), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__BodyExternalForceParams));
  bool success = bosdyn_msgs__msg__BodyExternalForceParams__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__BodyExternalForceParams__destroy(bosdyn_msgs__msg__BodyExternalForceParams * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__BodyExternalForceParams__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__BodyExternalForceParams__Sequence__init(bosdyn_msgs__msg__BodyExternalForceParams__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__BodyExternalForceParams * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__BodyExternalForceParams *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__BodyExternalForceParams), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__BodyExternalForceParams__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__BodyExternalForceParams__fini(&data[i - 1]);
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
bosdyn_msgs__msg__BodyExternalForceParams__Sequence__fini(bosdyn_msgs__msg__BodyExternalForceParams__Sequence * array)
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
      bosdyn_msgs__msg__BodyExternalForceParams__fini(&array->data[i]);
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

bosdyn_msgs__msg__BodyExternalForceParams__Sequence *
bosdyn_msgs__msg__BodyExternalForceParams__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__BodyExternalForceParams__Sequence * array = (bosdyn_msgs__msg__BodyExternalForceParams__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__BodyExternalForceParams__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__BodyExternalForceParams__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__BodyExternalForceParams__Sequence__destroy(bosdyn_msgs__msg__BodyExternalForceParams__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__BodyExternalForceParams__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__BodyExternalForceParams__Sequence__are_equal(const bosdyn_msgs__msg__BodyExternalForceParams__Sequence * lhs, const bosdyn_msgs__msg__BodyExternalForceParams__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__BodyExternalForceParams__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__BodyExternalForceParams__Sequence__copy(
  const bosdyn_msgs__msg__BodyExternalForceParams__Sequence * input,
  bosdyn_msgs__msg__BodyExternalForceParams__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__BodyExternalForceParams);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__BodyExternalForceParams * data =
      (bosdyn_msgs__msg__BodyExternalForceParams *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__BodyExternalForceParams__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__BodyExternalForceParams__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__BodyExternalForceParams__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
