// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/State.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `questions`
#include "bosdyn_msgs/msg/detail/question__functions.h"
// Member `answered_questions`
#include "bosdyn_msgs/msg/detail/state_answered_question__functions.h"
// Member `history`
#include "bosdyn_msgs/msg/detail/state_node_states_at_tick__functions.h"
// Member `status`
#include "bosdyn_msgs/msg/detail/state_status__functions.h"
// Member `error`
#include "rosidl_runtime_c/string_functions.h"

bool
bosdyn_msgs__msg__State__init(bosdyn_msgs__msg__State * msg)
{
  if (!msg) {
    return false;
  }
  // questions
  if (!bosdyn_msgs__msg__Question__Sequence__init(&msg->questions, 0)) {
    bosdyn_msgs__msg__State__fini(msg);
    return false;
  }
  // answered_questions
  if (!bosdyn_msgs__msg__StateAnsweredQuestion__Sequence__init(&msg->answered_questions, 0)) {
    bosdyn_msgs__msg__State__fini(msg);
    return false;
  }
  // history
  if (!bosdyn_msgs__msg__StateNodeStatesAtTick__Sequence__init(&msg->history, 0)) {
    bosdyn_msgs__msg__State__fini(msg);
    return false;
  }
  // status
  if (!bosdyn_msgs__msg__StateStatus__init(&msg->status)) {
    bosdyn_msgs__msg__State__fini(msg);
    return false;
  }
  // error
  if (!rosidl_runtime_c__String__init(&msg->error)) {
    bosdyn_msgs__msg__State__fini(msg);
    return false;
  }
  // tick_counter
  // mission_id
  return true;
}

void
bosdyn_msgs__msg__State__fini(bosdyn_msgs__msg__State * msg)
{
  if (!msg) {
    return;
  }
  // questions
  bosdyn_msgs__msg__Question__Sequence__fini(&msg->questions);
  // answered_questions
  bosdyn_msgs__msg__StateAnsweredQuestion__Sequence__fini(&msg->answered_questions);
  // history
  bosdyn_msgs__msg__StateNodeStatesAtTick__Sequence__fini(&msg->history);
  // status
  bosdyn_msgs__msg__StateStatus__fini(&msg->status);
  // error
  rosidl_runtime_c__String__fini(&msg->error);
  // tick_counter
  // mission_id
}

bool
bosdyn_msgs__msg__State__are_equal(const bosdyn_msgs__msg__State * lhs, const bosdyn_msgs__msg__State * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // questions
  if (!bosdyn_msgs__msg__Question__Sequence__are_equal(
      &(lhs->questions), &(rhs->questions)))
  {
    return false;
  }
  // answered_questions
  if (!bosdyn_msgs__msg__StateAnsweredQuestion__Sequence__are_equal(
      &(lhs->answered_questions), &(rhs->answered_questions)))
  {
    return false;
  }
  // history
  if (!bosdyn_msgs__msg__StateNodeStatesAtTick__Sequence__are_equal(
      &(lhs->history), &(rhs->history)))
  {
    return false;
  }
  // status
  if (!bosdyn_msgs__msg__StateStatus__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  // error
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->error), &(rhs->error)))
  {
    return false;
  }
  // tick_counter
  if (lhs->tick_counter != rhs->tick_counter) {
    return false;
  }
  // mission_id
  if (lhs->mission_id != rhs->mission_id) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__State__copy(
  const bosdyn_msgs__msg__State * input,
  bosdyn_msgs__msg__State * output)
{
  if (!input || !output) {
    return false;
  }
  // questions
  if (!bosdyn_msgs__msg__Question__Sequence__copy(
      &(input->questions), &(output->questions)))
  {
    return false;
  }
  // answered_questions
  if (!bosdyn_msgs__msg__StateAnsweredQuestion__Sequence__copy(
      &(input->answered_questions), &(output->answered_questions)))
  {
    return false;
  }
  // history
  if (!bosdyn_msgs__msg__StateNodeStatesAtTick__Sequence__copy(
      &(input->history), &(output->history)))
  {
    return false;
  }
  // status
  if (!bosdyn_msgs__msg__StateStatus__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  // error
  if (!rosidl_runtime_c__String__copy(
      &(input->error), &(output->error)))
  {
    return false;
  }
  // tick_counter
  output->tick_counter = input->tick_counter;
  // mission_id
  output->mission_id = input->mission_id;
  return true;
}

bosdyn_msgs__msg__State *
bosdyn_msgs__msg__State__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__State * msg = (bosdyn_msgs__msg__State *)allocator.allocate(sizeof(bosdyn_msgs__msg__State), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__State));
  bool success = bosdyn_msgs__msg__State__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__State__destroy(bosdyn_msgs__msg__State * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__State__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__State__Sequence__init(bosdyn_msgs__msg__State__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__State * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__State *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__State), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__State__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__State__fini(&data[i - 1]);
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
bosdyn_msgs__msg__State__Sequence__fini(bosdyn_msgs__msg__State__Sequence * array)
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
      bosdyn_msgs__msg__State__fini(&array->data[i]);
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

bosdyn_msgs__msg__State__Sequence *
bosdyn_msgs__msg__State__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__State__Sequence * array = (bosdyn_msgs__msg__State__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__State__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__State__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__State__Sequence__destroy(bosdyn_msgs__msg__State__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__State__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__State__Sequence__are_equal(const bosdyn_msgs__msg__State__Sequence * lhs, const bosdyn_msgs__msg__State__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__State__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__State__Sequence__copy(
  const bosdyn_msgs__msg__State__Sequence * input,
  bosdyn_msgs__msg__State__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__State);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__State * data =
      (bosdyn_msgs__msg__State *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__State__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__State__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__State__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
