// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/SpotCamPtz.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/spot_cam_ptz__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `service_name`
// Member `host`
#include "rosidl_runtime_c/string_functions.h"
// Member `ptz_position`
#include "bosdyn_msgs/msg/detail/ptz_position__functions.h"
// Member `adjust_parameters`
#include "bosdyn_msgs/msg/detail/spot_cam_ptz_adjust_parameters__functions.h"

bool
bosdyn_msgs__msg__SpotCamPtz__init(bosdyn_msgs__msg__SpotCamPtz * msg)
{
  if (!msg) {
    return false;
  }
  // service_name
  if (!rosidl_runtime_c__String__init(&msg->service_name)) {
    bosdyn_msgs__msg__SpotCamPtz__fini(msg);
    return false;
  }
  // host
  if (!rosidl_runtime_c__String__init(&msg->host)) {
    bosdyn_msgs__msg__SpotCamPtz__fini(msg);
    return false;
  }
  // ptz_position
  if (!bosdyn_msgs__msg__PtzPosition__init(&msg->ptz_position)) {
    bosdyn_msgs__msg__SpotCamPtz__fini(msg);
    return false;
  }
  // ptz_position_is_set
  // adjust_parameters
  if (!bosdyn_msgs__msg__SpotCamPtzAdjustParameters__init(&msg->adjust_parameters)) {
    bosdyn_msgs__msg__SpotCamPtz__fini(msg);
    return false;
  }
  // adjust_parameters_is_set
  return true;
}

void
bosdyn_msgs__msg__SpotCamPtz__fini(bosdyn_msgs__msg__SpotCamPtz * msg)
{
  if (!msg) {
    return;
  }
  // service_name
  rosidl_runtime_c__String__fini(&msg->service_name);
  // host
  rosidl_runtime_c__String__fini(&msg->host);
  // ptz_position
  bosdyn_msgs__msg__PtzPosition__fini(&msg->ptz_position);
  // ptz_position_is_set
  // adjust_parameters
  bosdyn_msgs__msg__SpotCamPtzAdjustParameters__fini(&msg->adjust_parameters);
  // adjust_parameters_is_set
}

bool
bosdyn_msgs__msg__SpotCamPtz__are_equal(const bosdyn_msgs__msg__SpotCamPtz * lhs, const bosdyn_msgs__msg__SpotCamPtz * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // service_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->service_name), &(rhs->service_name)))
  {
    return false;
  }
  // host
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->host), &(rhs->host)))
  {
    return false;
  }
  // ptz_position
  if (!bosdyn_msgs__msg__PtzPosition__are_equal(
      &(lhs->ptz_position), &(rhs->ptz_position)))
  {
    return false;
  }
  // ptz_position_is_set
  if (lhs->ptz_position_is_set != rhs->ptz_position_is_set) {
    return false;
  }
  // adjust_parameters
  if (!bosdyn_msgs__msg__SpotCamPtzAdjustParameters__are_equal(
      &(lhs->adjust_parameters), &(rhs->adjust_parameters)))
  {
    return false;
  }
  // adjust_parameters_is_set
  if (lhs->adjust_parameters_is_set != rhs->adjust_parameters_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__SpotCamPtz__copy(
  const bosdyn_msgs__msg__SpotCamPtz * input,
  bosdyn_msgs__msg__SpotCamPtz * output)
{
  if (!input || !output) {
    return false;
  }
  // service_name
  if (!rosidl_runtime_c__String__copy(
      &(input->service_name), &(output->service_name)))
  {
    return false;
  }
  // host
  if (!rosidl_runtime_c__String__copy(
      &(input->host), &(output->host)))
  {
    return false;
  }
  // ptz_position
  if (!bosdyn_msgs__msg__PtzPosition__copy(
      &(input->ptz_position), &(output->ptz_position)))
  {
    return false;
  }
  // ptz_position_is_set
  output->ptz_position_is_set = input->ptz_position_is_set;
  // adjust_parameters
  if (!bosdyn_msgs__msg__SpotCamPtzAdjustParameters__copy(
      &(input->adjust_parameters), &(output->adjust_parameters)))
  {
    return false;
  }
  // adjust_parameters_is_set
  output->adjust_parameters_is_set = input->adjust_parameters_is_set;
  return true;
}

bosdyn_msgs__msg__SpotCamPtz *
bosdyn_msgs__msg__SpotCamPtz__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__SpotCamPtz * msg = (bosdyn_msgs__msg__SpotCamPtz *)allocator.allocate(sizeof(bosdyn_msgs__msg__SpotCamPtz), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__SpotCamPtz));
  bool success = bosdyn_msgs__msg__SpotCamPtz__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__SpotCamPtz__destroy(bosdyn_msgs__msg__SpotCamPtz * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__SpotCamPtz__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__SpotCamPtz__Sequence__init(bosdyn_msgs__msg__SpotCamPtz__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__SpotCamPtz * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__SpotCamPtz *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__SpotCamPtz), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__SpotCamPtz__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__SpotCamPtz__fini(&data[i - 1]);
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
bosdyn_msgs__msg__SpotCamPtz__Sequence__fini(bosdyn_msgs__msg__SpotCamPtz__Sequence * array)
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
      bosdyn_msgs__msg__SpotCamPtz__fini(&array->data[i]);
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

bosdyn_msgs__msg__SpotCamPtz__Sequence *
bosdyn_msgs__msg__SpotCamPtz__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__SpotCamPtz__Sequence * array = (bosdyn_msgs__msg__SpotCamPtz__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__SpotCamPtz__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__SpotCamPtz__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__SpotCamPtz__Sequence__destroy(bosdyn_msgs__msg__SpotCamPtz__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__SpotCamPtz__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__SpotCamPtz__Sequence__are_equal(const bosdyn_msgs__msg__SpotCamPtz__Sequence * lhs, const bosdyn_msgs__msg__SpotCamPtz__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__SpotCamPtz__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__SpotCamPtz__Sequence__copy(
  const bosdyn_msgs__msg__SpotCamPtz__Sequence * input,
  bosdyn_msgs__msg__SpotCamPtz__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__SpotCamPtz);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__SpotCamPtz * data =
      (bosdyn_msgs__msg__SpotCamPtz *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__SpotCamPtz__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__SpotCamPtz__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__SpotCamPtz__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
