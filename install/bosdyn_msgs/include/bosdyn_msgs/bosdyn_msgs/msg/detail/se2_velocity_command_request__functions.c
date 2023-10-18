// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/SE2VelocityCommandRequest.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/se2_velocity_command_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `end_time`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `se2_frame_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `velocity`
// Member `slew_rate_limit`
#include "bosdyn_msgs/msg/detail/se2_velocity__functions.h"

bool
bosdyn_msgs__msg__SE2VelocityCommandRequest__init(bosdyn_msgs__msg__SE2VelocityCommandRequest * msg)
{
  if (!msg) {
    return false;
  }
  // end_time
  if (!builtin_interfaces__msg__Time__init(&msg->end_time)) {
    bosdyn_msgs__msg__SE2VelocityCommandRequest__fini(msg);
    return false;
  }
  // end_time_is_set
  // se2_frame_name
  if (!rosidl_runtime_c__String__init(&msg->se2_frame_name)) {
    bosdyn_msgs__msg__SE2VelocityCommandRequest__fini(msg);
    return false;
  }
  // velocity
  if (!bosdyn_msgs__msg__SE2Velocity__init(&msg->velocity)) {
    bosdyn_msgs__msg__SE2VelocityCommandRequest__fini(msg);
    return false;
  }
  // velocity_is_set
  // slew_rate_limit
  if (!bosdyn_msgs__msg__SE2Velocity__init(&msg->slew_rate_limit)) {
    bosdyn_msgs__msg__SE2VelocityCommandRequest__fini(msg);
    return false;
  }
  // slew_rate_limit_is_set
  return true;
}

void
bosdyn_msgs__msg__SE2VelocityCommandRequest__fini(bosdyn_msgs__msg__SE2VelocityCommandRequest * msg)
{
  if (!msg) {
    return;
  }
  // end_time
  builtin_interfaces__msg__Time__fini(&msg->end_time);
  // end_time_is_set
  // se2_frame_name
  rosidl_runtime_c__String__fini(&msg->se2_frame_name);
  // velocity
  bosdyn_msgs__msg__SE2Velocity__fini(&msg->velocity);
  // velocity_is_set
  // slew_rate_limit
  bosdyn_msgs__msg__SE2Velocity__fini(&msg->slew_rate_limit);
  // slew_rate_limit_is_set
}

bool
bosdyn_msgs__msg__SE2VelocityCommandRequest__are_equal(const bosdyn_msgs__msg__SE2VelocityCommandRequest * lhs, const bosdyn_msgs__msg__SE2VelocityCommandRequest * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // end_time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->end_time), &(rhs->end_time)))
  {
    return false;
  }
  // end_time_is_set
  if (lhs->end_time_is_set != rhs->end_time_is_set) {
    return false;
  }
  // se2_frame_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->se2_frame_name), &(rhs->se2_frame_name)))
  {
    return false;
  }
  // velocity
  if (!bosdyn_msgs__msg__SE2Velocity__are_equal(
      &(lhs->velocity), &(rhs->velocity)))
  {
    return false;
  }
  // velocity_is_set
  if (lhs->velocity_is_set != rhs->velocity_is_set) {
    return false;
  }
  // slew_rate_limit
  if (!bosdyn_msgs__msg__SE2Velocity__are_equal(
      &(lhs->slew_rate_limit), &(rhs->slew_rate_limit)))
  {
    return false;
  }
  // slew_rate_limit_is_set
  if (lhs->slew_rate_limit_is_set != rhs->slew_rate_limit_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__SE2VelocityCommandRequest__copy(
  const bosdyn_msgs__msg__SE2VelocityCommandRequest * input,
  bosdyn_msgs__msg__SE2VelocityCommandRequest * output)
{
  if (!input || !output) {
    return false;
  }
  // end_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->end_time), &(output->end_time)))
  {
    return false;
  }
  // end_time_is_set
  output->end_time_is_set = input->end_time_is_set;
  // se2_frame_name
  if (!rosidl_runtime_c__String__copy(
      &(input->se2_frame_name), &(output->se2_frame_name)))
  {
    return false;
  }
  // velocity
  if (!bosdyn_msgs__msg__SE2Velocity__copy(
      &(input->velocity), &(output->velocity)))
  {
    return false;
  }
  // velocity_is_set
  output->velocity_is_set = input->velocity_is_set;
  // slew_rate_limit
  if (!bosdyn_msgs__msg__SE2Velocity__copy(
      &(input->slew_rate_limit), &(output->slew_rate_limit)))
  {
    return false;
  }
  // slew_rate_limit_is_set
  output->slew_rate_limit_is_set = input->slew_rate_limit_is_set;
  return true;
}

bosdyn_msgs__msg__SE2VelocityCommandRequest *
bosdyn_msgs__msg__SE2VelocityCommandRequest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__SE2VelocityCommandRequest * msg = (bosdyn_msgs__msg__SE2VelocityCommandRequest *)allocator.allocate(sizeof(bosdyn_msgs__msg__SE2VelocityCommandRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__SE2VelocityCommandRequest));
  bool success = bosdyn_msgs__msg__SE2VelocityCommandRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__SE2VelocityCommandRequest__destroy(bosdyn_msgs__msg__SE2VelocityCommandRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__SE2VelocityCommandRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__SE2VelocityCommandRequest__Sequence__init(bosdyn_msgs__msg__SE2VelocityCommandRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__SE2VelocityCommandRequest * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__SE2VelocityCommandRequest *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__SE2VelocityCommandRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__SE2VelocityCommandRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__SE2VelocityCommandRequest__fini(&data[i - 1]);
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
bosdyn_msgs__msg__SE2VelocityCommandRequest__Sequence__fini(bosdyn_msgs__msg__SE2VelocityCommandRequest__Sequence * array)
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
      bosdyn_msgs__msg__SE2VelocityCommandRequest__fini(&array->data[i]);
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

bosdyn_msgs__msg__SE2VelocityCommandRequest__Sequence *
bosdyn_msgs__msg__SE2VelocityCommandRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__SE2VelocityCommandRequest__Sequence * array = (bosdyn_msgs__msg__SE2VelocityCommandRequest__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__SE2VelocityCommandRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__SE2VelocityCommandRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__SE2VelocityCommandRequest__Sequence__destroy(bosdyn_msgs__msg__SE2VelocityCommandRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__SE2VelocityCommandRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__SE2VelocityCommandRequest__Sequence__are_equal(const bosdyn_msgs__msg__SE2VelocityCommandRequest__Sequence * lhs, const bosdyn_msgs__msg__SE2VelocityCommandRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__SE2VelocityCommandRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__SE2VelocityCommandRequest__Sequence__copy(
  const bosdyn_msgs__msg__SE2VelocityCommandRequest__Sequence * input,
  bosdyn_msgs__msg__SE2VelocityCommandRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__SE2VelocityCommandRequest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__SE2VelocityCommandRequest * data =
      (bosdyn_msgs__msg__SE2VelocityCommandRequest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__SE2VelocityCommandRequest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__SE2VelocityCommandRequest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__SE2VelocityCommandRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
