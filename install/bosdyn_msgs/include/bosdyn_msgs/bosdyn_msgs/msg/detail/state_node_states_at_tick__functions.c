// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/StateNodeStatesAtTick.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/state_node_states_at_tick__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `tick_start_timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `node_states`
#include "bosdyn_msgs/msg/detail/state_node_states_at_tick_node_state__functions.h"

bool
bosdyn_msgs__msg__StateNodeStatesAtTick__init(bosdyn_msgs__msg__StateNodeStatesAtTick * msg)
{
  if (!msg) {
    return false;
  }
  // tick_counter
  // tick_start_timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->tick_start_timestamp)) {
    bosdyn_msgs__msg__StateNodeStatesAtTick__fini(msg);
    return false;
  }
  // tick_start_timestamp_is_set
  // node_states
  if (!bosdyn_msgs__msg__StateNodeStatesAtTickNodeState__Sequence__init(&msg->node_states, 0)) {
    bosdyn_msgs__msg__StateNodeStatesAtTick__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__StateNodeStatesAtTick__fini(bosdyn_msgs__msg__StateNodeStatesAtTick * msg)
{
  if (!msg) {
    return;
  }
  // tick_counter
  // tick_start_timestamp
  builtin_interfaces__msg__Time__fini(&msg->tick_start_timestamp);
  // tick_start_timestamp_is_set
  // node_states
  bosdyn_msgs__msg__StateNodeStatesAtTickNodeState__Sequence__fini(&msg->node_states);
}

bool
bosdyn_msgs__msg__StateNodeStatesAtTick__are_equal(const bosdyn_msgs__msg__StateNodeStatesAtTick * lhs, const bosdyn_msgs__msg__StateNodeStatesAtTick * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // tick_counter
  if (lhs->tick_counter != rhs->tick_counter) {
    return false;
  }
  // tick_start_timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->tick_start_timestamp), &(rhs->tick_start_timestamp)))
  {
    return false;
  }
  // tick_start_timestamp_is_set
  if (lhs->tick_start_timestamp_is_set != rhs->tick_start_timestamp_is_set) {
    return false;
  }
  // node_states
  if (!bosdyn_msgs__msg__StateNodeStatesAtTickNodeState__Sequence__are_equal(
      &(lhs->node_states), &(rhs->node_states)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__StateNodeStatesAtTick__copy(
  const bosdyn_msgs__msg__StateNodeStatesAtTick * input,
  bosdyn_msgs__msg__StateNodeStatesAtTick * output)
{
  if (!input || !output) {
    return false;
  }
  // tick_counter
  output->tick_counter = input->tick_counter;
  // tick_start_timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->tick_start_timestamp), &(output->tick_start_timestamp)))
  {
    return false;
  }
  // tick_start_timestamp_is_set
  output->tick_start_timestamp_is_set = input->tick_start_timestamp_is_set;
  // node_states
  if (!bosdyn_msgs__msg__StateNodeStatesAtTickNodeState__Sequence__copy(
      &(input->node_states), &(output->node_states)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__StateNodeStatesAtTick *
bosdyn_msgs__msg__StateNodeStatesAtTick__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__StateNodeStatesAtTick * msg = (bosdyn_msgs__msg__StateNodeStatesAtTick *)allocator.allocate(sizeof(bosdyn_msgs__msg__StateNodeStatesAtTick), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__StateNodeStatesAtTick));
  bool success = bosdyn_msgs__msg__StateNodeStatesAtTick__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__StateNodeStatesAtTick__destroy(bosdyn_msgs__msg__StateNodeStatesAtTick * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__StateNodeStatesAtTick__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__StateNodeStatesAtTick__Sequence__init(bosdyn_msgs__msg__StateNodeStatesAtTick__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__StateNodeStatesAtTick * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__StateNodeStatesAtTick *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__StateNodeStatesAtTick), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__StateNodeStatesAtTick__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__StateNodeStatesAtTick__fini(&data[i - 1]);
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
bosdyn_msgs__msg__StateNodeStatesAtTick__Sequence__fini(bosdyn_msgs__msg__StateNodeStatesAtTick__Sequence * array)
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
      bosdyn_msgs__msg__StateNodeStatesAtTick__fini(&array->data[i]);
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

bosdyn_msgs__msg__StateNodeStatesAtTick__Sequence *
bosdyn_msgs__msg__StateNodeStatesAtTick__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__StateNodeStatesAtTick__Sequence * array = (bosdyn_msgs__msg__StateNodeStatesAtTick__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__StateNodeStatesAtTick__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__StateNodeStatesAtTick__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__StateNodeStatesAtTick__Sequence__destroy(bosdyn_msgs__msg__StateNodeStatesAtTick__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__StateNodeStatesAtTick__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__StateNodeStatesAtTick__Sequence__are_equal(const bosdyn_msgs__msg__StateNodeStatesAtTick__Sequence * lhs, const bosdyn_msgs__msg__StateNodeStatesAtTick__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__StateNodeStatesAtTick__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__StateNodeStatesAtTick__Sequence__copy(
  const bosdyn_msgs__msg__StateNodeStatesAtTick__Sequence * input,
  bosdyn_msgs__msg__StateNodeStatesAtTick__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__StateNodeStatesAtTick);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__StateNodeStatesAtTick * data =
      (bosdyn_msgs__msg__StateNodeStatesAtTick *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__StateNodeStatesAtTick__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__StateNodeStatesAtTick__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__StateNodeStatesAtTick__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
