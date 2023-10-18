// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/ElementIdentifiers.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/element_identifiers__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `root_id`
// Member `action_id`
#include "bosdyn_msgs/msg/detail/node_identifier__functions.h"

bool
bosdyn_msgs__msg__ElementIdentifiers__init(bosdyn_msgs__msg__ElementIdentifiers * msg)
{
  if (!msg) {
    return false;
  }
  // root_id
  if (!bosdyn_msgs__msg__NodeIdentifier__init(&msg->root_id)) {
    bosdyn_msgs__msg__ElementIdentifiers__fini(msg);
    return false;
  }
  // root_id_is_set
  // action_id
  if (!bosdyn_msgs__msg__NodeIdentifier__init(&msg->action_id)) {
    bosdyn_msgs__msg__ElementIdentifiers__fini(msg);
    return false;
  }
  // action_id_is_set
  return true;
}

void
bosdyn_msgs__msg__ElementIdentifiers__fini(bosdyn_msgs__msg__ElementIdentifiers * msg)
{
  if (!msg) {
    return;
  }
  // root_id
  bosdyn_msgs__msg__NodeIdentifier__fini(&msg->root_id);
  // root_id_is_set
  // action_id
  bosdyn_msgs__msg__NodeIdentifier__fini(&msg->action_id);
  // action_id_is_set
}

bool
bosdyn_msgs__msg__ElementIdentifiers__are_equal(const bosdyn_msgs__msg__ElementIdentifiers * lhs, const bosdyn_msgs__msg__ElementIdentifiers * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // root_id
  if (!bosdyn_msgs__msg__NodeIdentifier__are_equal(
      &(lhs->root_id), &(rhs->root_id)))
  {
    return false;
  }
  // root_id_is_set
  if (lhs->root_id_is_set != rhs->root_id_is_set) {
    return false;
  }
  // action_id
  if (!bosdyn_msgs__msg__NodeIdentifier__are_equal(
      &(lhs->action_id), &(rhs->action_id)))
  {
    return false;
  }
  // action_id_is_set
  if (lhs->action_id_is_set != rhs->action_id_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__ElementIdentifiers__copy(
  const bosdyn_msgs__msg__ElementIdentifiers * input,
  bosdyn_msgs__msg__ElementIdentifiers * output)
{
  if (!input || !output) {
    return false;
  }
  // root_id
  if (!bosdyn_msgs__msg__NodeIdentifier__copy(
      &(input->root_id), &(output->root_id)))
  {
    return false;
  }
  // root_id_is_set
  output->root_id_is_set = input->root_id_is_set;
  // action_id
  if (!bosdyn_msgs__msg__NodeIdentifier__copy(
      &(input->action_id), &(output->action_id)))
  {
    return false;
  }
  // action_id_is_set
  output->action_id_is_set = input->action_id_is_set;
  return true;
}

bosdyn_msgs__msg__ElementIdentifiers *
bosdyn_msgs__msg__ElementIdentifiers__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ElementIdentifiers * msg = (bosdyn_msgs__msg__ElementIdentifiers *)allocator.allocate(sizeof(bosdyn_msgs__msg__ElementIdentifiers), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__ElementIdentifiers));
  bool success = bosdyn_msgs__msg__ElementIdentifiers__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__ElementIdentifiers__destroy(bosdyn_msgs__msg__ElementIdentifiers * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__ElementIdentifiers__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__ElementIdentifiers__Sequence__init(bosdyn_msgs__msg__ElementIdentifiers__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ElementIdentifiers * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__ElementIdentifiers *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__ElementIdentifiers), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__ElementIdentifiers__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__ElementIdentifiers__fini(&data[i - 1]);
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
bosdyn_msgs__msg__ElementIdentifiers__Sequence__fini(bosdyn_msgs__msg__ElementIdentifiers__Sequence * array)
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
      bosdyn_msgs__msg__ElementIdentifiers__fini(&array->data[i]);
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

bosdyn_msgs__msg__ElementIdentifiers__Sequence *
bosdyn_msgs__msg__ElementIdentifiers__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ElementIdentifiers__Sequence * array = (bosdyn_msgs__msg__ElementIdentifiers__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__ElementIdentifiers__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__ElementIdentifiers__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__ElementIdentifiers__Sequence__destroy(bosdyn_msgs__msg__ElementIdentifiers__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__ElementIdentifiers__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__ElementIdentifiers__Sequence__are_equal(const bosdyn_msgs__msg__ElementIdentifiers__Sequence * lhs, const bosdyn_msgs__msg__ElementIdentifiers__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__ElementIdentifiers__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__ElementIdentifiers__Sequence__copy(
  const bosdyn_msgs__msg__ElementIdentifiers__Sequence * input,
  bosdyn_msgs__msg__ElementIdentifiers__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__ElementIdentifiers);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__ElementIdentifiers * data =
      (bosdyn_msgs__msg__ElementIdentifiers *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__ElementIdentifiers__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__ElementIdentifiers__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__ElementIdentifiers__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
