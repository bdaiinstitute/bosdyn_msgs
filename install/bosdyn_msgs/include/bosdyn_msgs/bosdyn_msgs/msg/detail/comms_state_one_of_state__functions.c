// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/CommsStateOneOfState.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/comms_state_one_of_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `wifi_state`
#include "bosdyn_msgs/msg/detail/wi_fi_state__functions.h"

bool
bosdyn_msgs__msg__CommsStateOneOfState__init(bosdyn_msgs__msg__CommsStateOneOfState * msg)
{
  if (!msg) {
    return false;
  }
  // wifi_state
  if (!bosdyn_msgs__msg__WiFiState__init(&msg->wifi_state)) {
    bosdyn_msgs__msg__CommsStateOneOfState__fini(msg);
    return false;
  }
  // state_choice
  return true;
}

void
bosdyn_msgs__msg__CommsStateOneOfState__fini(bosdyn_msgs__msg__CommsStateOneOfState * msg)
{
  if (!msg) {
    return;
  }
  // wifi_state
  bosdyn_msgs__msg__WiFiState__fini(&msg->wifi_state);
  // state_choice
}

bool
bosdyn_msgs__msg__CommsStateOneOfState__are_equal(const bosdyn_msgs__msg__CommsStateOneOfState * lhs, const bosdyn_msgs__msg__CommsStateOneOfState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // wifi_state
  if (!bosdyn_msgs__msg__WiFiState__are_equal(
      &(lhs->wifi_state), &(rhs->wifi_state)))
  {
    return false;
  }
  // state_choice
  if (lhs->state_choice != rhs->state_choice) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__CommsStateOneOfState__copy(
  const bosdyn_msgs__msg__CommsStateOneOfState * input,
  bosdyn_msgs__msg__CommsStateOneOfState * output)
{
  if (!input || !output) {
    return false;
  }
  // wifi_state
  if (!bosdyn_msgs__msg__WiFiState__copy(
      &(input->wifi_state), &(output->wifi_state)))
  {
    return false;
  }
  // state_choice
  output->state_choice = input->state_choice;
  return true;
}

bosdyn_msgs__msg__CommsStateOneOfState *
bosdyn_msgs__msg__CommsStateOneOfState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__CommsStateOneOfState * msg = (bosdyn_msgs__msg__CommsStateOneOfState *)allocator.allocate(sizeof(bosdyn_msgs__msg__CommsStateOneOfState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__CommsStateOneOfState));
  bool success = bosdyn_msgs__msg__CommsStateOneOfState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__CommsStateOneOfState__destroy(bosdyn_msgs__msg__CommsStateOneOfState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__CommsStateOneOfState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__CommsStateOneOfState__Sequence__init(bosdyn_msgs__msg__CommsStateOneOfState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__CommsStateOneOfState * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__CommsStateOneOfState *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__CommsStateOneOfState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__CommsStateOneOfState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__CommsStateOneOfState__fini(&data[i - 1]);
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
bosdyn_msgs__msg__CommsStateOneOfState__Sequence__fini(bosdyn_msgs__msg__CommsStateOneOfState__Sequence * array)
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
      bosdyn_msgs__msg__CommsStateOneOfState__fini(&array->data[i]);
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

bosdyn_msgs__msg__CommsStateOneOfState__Sequence *
bosdyn_msgs__msg__CommsStateOneOfState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__CommsStateOneOfState__Sequence * array = (bosdyn_msgs__msg__CommsStateOneOfState__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__CommsStateOneOfState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__CommsStateOneOfState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__CommsStateOneOfState__Sequence__destroy(bosdyn_msgs__msg__CommsStateOneOfState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__CommsStateOneOfState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__CommsStateOneOfState__Sequence__are_equal(const bosdyn_msgs__msg__CommsStateOneOfState__Sequence * lhs, const bosdyn_msgs__msg__CommsStateOneOfState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__CommsStateOneOfState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__CommsStateOneOfState__Sequence__copy(
  const bosdyn_msgs__msg__CommsStateOneOfState__Sequence * input,
  bosdyn_msgs__msg__CommsStateOneOfState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__CommsStateOneOfState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__CommsStateOneOfState * data =
      (bosdyn_msgs__msg__CommsStateOneOfState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__CommsStateOneOfState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__CommsStateOneOfState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__CommsStateOneOfState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
