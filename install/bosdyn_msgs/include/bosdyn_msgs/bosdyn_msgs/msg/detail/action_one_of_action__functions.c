// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/ActionOneOfAction.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/action_one_of_action__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `sleep`
#include "bosdyn_msgs/msg/detail/action_sleep__functions.h"
// Member `data_acquisition`
#include "bosdyn_msgs/msg/detail/action_data_acquisition__functions.h"
// Member `remote_grpc`
#include "bosdyn_msgs/msg/detail/action_remote_grpc__functions.h"
// Member `node`
#include "bosdyn_msgs/msg/detail/node__functions.h"

bool
bosdyn_msgs__msg__ActionOneOfAction__init(bosdyn_msgs__msg__ActionOneOfAction * msg)
{
  if (!msg) {
    return false;
  }
  // sleep
  if (!bosdyn_msgs__msg__ActionSleep__init(&msg->sleep)) {
    bosdyn_msgs__msg__ActionOneOfAction__fini(msg);
    return false;
  }
  // data_acquisition
  if (!bosdyn_msgs__msg__ActionDataAcquisition__init(&msg->data_acquisition)) {
    bosdyn_msgs__msg__ActionOneOfAction__fini(msg);
    return false;
  }
  // remote_grpc
  if (!bosdyn_msgs__msg__ActionRemoteGrpc__init(&msg->remote_grpc)) {
    bosdyn_msgs__msg__ActionOneOfAction__fini(msg);
    return false;
  }
  // node
  if (!bosdyn_msgs__msg__Node__init(&msg->node)) {
    bosdyn_msgs__msg__ActionOneOfAction__fini(msg);
    return false;
  }
  // action_choice
  return true;
}

void
bosdyn_msgs__msg__ActionOneOfAction__fini(bosdyn_msgs__msg__ActionOneOfAction * msg)
{
  if (!msg) {
    return;
  }
  // sleep
  bosdyn_msgs__msg__ActionSleep__fini(&msg->sleep);
  // data_acquisition
  bosdyn_msgs__msg__ActionDataAcquisition__fini(&msg->data_acquisition);
  // remote_grpc
  bosdyn_msgs__msg__ActionRemoteGrpc__fini(&msg->remote_grpc);
  // node
  bosdyn_msgs__msg__Node__fini(&msg->node);
  // action_choice
}

bool
bosdyn_msgs__msg__ActionOneOfAction__are_equal(const bosdyn_msgs__msg__ActionOneOfAction * lhs, const bosdyn_msgs__msg__ActionOneOfAction * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // sleep
  if (!bosdyn_msgs__msg__ActionSleep__are_equal(
      &(lhs->sleep), &(rhs->sleep)))
  {
    return false;
  }
  // data_acquisition
  if (!bosdyn_msgs__msg__ActionDataAcquisition__are_equal(
      &(lhs->data_acquisition), &(rhs->data_acquisition)))
  {
    return false;
  }
  // remote_grpc
  if (!bosdyn_msgs__msg__ActionRemoteGrpc__are_equal(
      &(lhs->remote_grpc), &(rhs->remote_grpc)))
  {
    return false;
  }
  // node
  if (!bosdyn_msgs__msg__Node__are_equal(
      &(lhs->node), &(rhs->node)))
  {
    return false;
  }
  // action_choice
  if (lhs->action_choice != rhs->action_choice) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__ActionOneOfAction__copy(
  const bosdyn_msgs__msg__ActionOneOfAction * input,
  bosdyn_msgs__msg__ActionOneOfAction * output)
{
  if (!input || !output) {
    return false;
  }
  // sleep
  if (!bosdyn_msgs__msg__ActionSleep__copy(
      &(input->sleep), &(output->sleep)))
  {
    return false;
  }
  // data_acquisition
  if (!bosdyn_msgs__msg__ActionDataAcquisition__copy(
      &(input->data_acquisition), &(output->data_acquisition)))
  {
    return false;
  }
  // remote_grpc
  if (!bosdyn_msgs__msg__ActionRemoteGrpc__copy(
      &(input->remote_grpc), &(output->remote_grpc)))
  {
    return false;
  }
  // node
  if (!bosdyn_msgs__msg__Node__copy(
      &(input->node), &(output->node)))
  {
    return false;
  }
  // action_choice
  output->action_choice = input->action_choice;
  return true;
}

bosdyn_msgs__msg__ActionOneOfAction *
bosdyn_msgs__msg__ActionOneOfAction__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ActionOneOfAction * msg = (bosdyn_msgs__msg__ActionOneOfAction *)allocator.allocate(sizeof(bosdyn_msgs__msg__ActionOneOfAction), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__ActionOneOfAction));
  bool success = bosdyn_msgs__msg__ActionOneOfAction__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__ActionOneOfAction__destroy(bosdyn_msgs__msg__ActionOneOfAction * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__ActionOneOfAction__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__ActionOneOfAction__Sequence__init(bosdyn_msgs__msg__ActionOneOfAction__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ActionOneOfAction * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__ActionOneOfAction *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__ActionOneOfAction), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__ActionOneOfAction__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__ActionOneOfAction__fini(&data[i - 1]);
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
bosdyn_msgs__msg__ActionOneOfAction__Sequence__fini(bosdyn_msgs__msg__ActionOneOfAction__Sequence * array)
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
      bosdyn_msgs__msg__ActionOneOfAction__fini(&array->data[i]);
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

bosdyn_msgs__msg__ActionOneOfAction__Sequence *
bosdyn_msgs__msg__ActionOneOfAction__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ActionOneOfAction__Sequence * array = (bosdyn_msgs__msg__ActionOneOfAction__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__ActionOneOfAction__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__ActionOneOfAction__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__ActionOneOfAction__Sequence__destroy(bosdyn_msgs__msg__ActionOneOfAction__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__ActionOneOfAction__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__ActionOneOfAction__Sequence__are_equal(const bosdyn_msgs__msg__ActionOneOfAction__Sequence * lhs, const bosdyn_msgs__msg__ActionOneOfAction__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__ActionOneOfAction__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__ActionOneOfAction__Sequence__copy(
  const bosdyn_msgs__msg__ActionOneOfAction__Sequence * input,
  bosdyn_msgs__msg__ActionOneOfAction__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__ActionOneOfAction);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__ActionOneOfAction * data =
      (bosdyn_msgs__msg__ActionOneOfAction *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__ActionOneOfAction__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__ActionOneOfAction__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__ActionOneOfAction__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
