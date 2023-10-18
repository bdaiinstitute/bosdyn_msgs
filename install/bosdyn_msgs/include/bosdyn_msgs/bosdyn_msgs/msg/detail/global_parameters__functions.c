// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/GlobalParameters.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/global_parameters__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `group_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `post_mission_callbacks`
#include "bosdyn_msgs/msg/detail/action_remote_grpc__functions.h"

bool
bosdyn_msgs__msg__GlobalParameters__init(bosdyn_msgs__msg__GlobalParameters * msg)
{
  if (!msg) {
    return false;
  }
  // group_name
  if (!rosidl_runtime_c__String__init(&msg->group_name)) {
    bosdyn_msgs__msg__GlobalParameters__fini(msg);
    return false;
  }
  // should_autofocus_ptz
  // self_right_attempts
  // post_mission_callbacks
  if (!bosdyn_msgs__msg__ActionRemoteGrpc__Sequence__init(&msg->post_mission_callbacks, 0)) {
    bosdyn_msgs__msg__GlobalParameters__fini(msg);
    return false;
  }
  // skip_actions
  return true;
}

void
bosdyn_msgs__msg__GlobalParameters__fini(bosdyn_msgs__msg__GlobalParameters * msg)
{
  if (!msg) {
    return;
  }
  // group_name
  rosidl_runtime_c__String__fini(&msg->group_name);
  // should_autofocus_ptz
  // self_right_attempts
  // post_mission_callbacks
  bosdyn_msgs__msg__ActionRemoteGrpc__Sequence__fini(&msg->post_mission_callbacks);
  // skip_actions
}

bool
bosdyn_msgs__msg__GlobalParameters__are_equal(const bosdyn_msgs__msg__GlobalParameters * lhs, const bosdyn_msgs__msg__GlobalParameters * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // group_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->group_name), &(rhs->group_name)))
  {
    return false;
  }
  // should_autofocus_ptz
  if (lhs->should_autofocus_ptz != rhs->should_autofocus_ptz) {
    return false;
  }
  // self_right_attempts
  if (lhs->self_right_attempts != rhs->self_right_attempts) {
    return false;
  }
  // post_mission_callbacks
  if (!bosdyn_msgs__msg__ActionRemoteGrpc__Sequence__are_equal(
      &(lhs->post_mission_callbacks), &(rhs->post_mission_callbacks)))
  {
    return false;
  }
  // skip_actions
  if (lhs->skip_actions != rhs->skip_actions) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__GlobalParameters__copy(
  const bosdyn_msgs__msg__GlobalParameters * input,
  bosdyn_msgs__msg__GlobalParameters * output)
{
  if (!input || !output) {
    return false;
  }
  // group_name
  if (!rosidl_runtime_c__String__copy(
      &(input->group_name), &(output->group_name)))
  {
    return false;
  }
  // should_autofocus_ptz
  output->should_autofocus_ptz = input->should_autofocus_ptz;
  // self_right_attempts
  output->self_right_attempts = input->self_right_attempts;
  // post_mission_callbacks
  if (!bosdyn_msgs__msg__ActionRemoteGrpc__Sequence__copy(
      &(input->post_mission_callbacks), &(output->post_mission_callbacks)))
  {
    return false;
  }
  // skip_actions
  output->skip_actions = input->skip_actions;
  return true;
}

bosdyn_msgs__msg__GlobalParameters *
bosdyn_msgs__msg__GlobalParameters__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__GlobalParameters * msg = (bosdyn_msgs__msg__GlobalParameters *)allocator.allocate(sizeof(bosdyn_msgs__msg__GlobalParameters), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__GlobalParameters));
  bool success = bosdyn_msgs__msg__GlobalParameters__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__GlobalParameters__destroy(bosdyn_msgs__msg__GlobalParameters * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__GlobalParameters__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__GlobalParameters__Sequence__init(bosdyn_msgs__msg__GlobalParameters__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__GlobalParameters * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__GlobalParameters *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__GlobalParameters), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__GlobalParameters__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__GlobalParameters__fini(&data[i - 1]);
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
bosdyn_msgs__msg__GlobalParameters__Sequence__fini(bosdyn_msgs__msg__GlobalParameters__Sequence * array)
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
      bosdyn_msgs__msg__GlobalParameters__fini(&array->data[i]);
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

bosdyn_msgs__msg__GlobalParameters__Sequence *
bosdyn_msgs__msg__GlobalParameters__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__GlobalParameters__Sequence * array = (bosdyn_msgs__msg__GlobalParameters__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__GlobalParameters__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__GlobalParameters__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__GlobalParameters__Sequence__destroy(bosdyn_msgs__msg__GlobalParameters__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__GlobalParameters__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__GlobalParameters__Sequence__are_equal(const bosdyn_msgs__msg__GlobalParameters__Sequence * lhs, const bosdyn_msgs__msg__GlobalParameters__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__GlobalParameters__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__GlobalParameters__Sequence__copy(
  const bosdyn_msgs__msg__GlobalParameters__Sequence * input,
  bosdyn_msgs__msg__GlobalParameters__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__GlobalParameters);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__GlobalParameters * data =
      (bosdyn_msgs__msg__GlobalParameters *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__GlobalParameters__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__GlobalParameters__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__GlobalParameters__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
