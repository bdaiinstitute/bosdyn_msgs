// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/AssociatedMetadata.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/associated_metadata__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `reference_id`
#include "bosdyn_msgs/msg/detail/data_identifier__functions.h"
// Member `metadata`
#include "bosdyn_msgs/msg/detail/metadata__functions.h"

bool
bosdyn_msgs__msg__AssociatedMetadata__init(bosdyn_msgs__msg__AssociatedMetadata * msg)
{
  if (!msg) {
    return false;
  }
  // reference_id
  if (!bosdyn_msgs__msg__DataIdentifier__init(&msg->reference_id)) {
    bosdyn_msgs__msg__AssociatedMetadata__fini(msg);
    return false;
  }
  // reference_id_is_set
  // metadata
  if (!bosdyn_msgs__msg__Metadata__init(&msg->metadata)) {
    bosdyn_msgs__msg__AssociatedMetadata__fini(msg);
    return false;
  }
  // metadata_is_set
  return true;
}

void
bosdyn_msgs__msg__AssociatedMetadata__fini(bosdyn_msgs__msg__AssociatedMetadata * msg)
{
  if (!msg) {
    return;
  }
  // reference_id
  bosdyn_msgs__msg__DataIdentifier__fini(&msg->reference_id);
  // reference_id_is_set
  // metadata
  bosdyn_msgs__msg__Metadata__fini(&msg->metadata);
  // metadata_is_set
}

bool
bosdyn_msgs__msg__AssociatedMetadata__are_equal(const bosdyn_msgs__msg__AssociatedMetadata * lhs, const bosdyn_msgs__msg__AssociatedMetadata * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // reference_id
  if (!bosdyn_msgs__msg__DataIdentifier__are_equal(
      &(lhs->reference_id), &(rhs->reference_id)))
  {
    return false;
  }
  // reference_id_is_set
  if (lhs->reference_id_is_set != rhs->reference_id_is_set) {
    return false;
  }
  // metadata
  if (!bosdyn_msgs__msg__Metadata__are_equal(
      &(lhs->metadata), &(rhs->metadata)))
  {
    return false;
  }
  // metadata_is_set
  if (lhs->metadata_is_set != rhs->metadata_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__AssociatedMetadata__copy(
  const bosdyn_msgs__msg__AssociatedMetadata * input,
  bosdyn_msgs__msg__AssociatedMetadata * output)
{
  if (!input || !output) {
    return false;
  }
  // reference_id
  if (!bosdyn_msgs__msg__DataIdentifier__copy(
      &(input->reference_id), &(output->reference_id)))
  {
    return false;
  }
  // reference_id_is_set
  output->reference_id_is_set = input->reference_id_is_set;
  // metadata
  if (!bosdyn_msgs__msg__Metadata__copy(
      &(input->metadata), &(output->metadata)))
  {
    return false;
  }
  // metadata_is_set
  output->metadata_is_set = input->metadata_is_set;
  return true;
}

bosdyn_msgs__msg__AssociatedMetadata *
bosdyn_msgs__msg__AssociatedMetadata__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__AssociatedMetadata * msg = (bosdyn_msgs__msg__AssociatedMetadata *)allocator.allocate(sizeof(bosdyn_msgs__msg__AssociatedMetadata), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__AssociatedMetadata));
  bool success = bosdyn_msgs__msg__AssociatedMetadata__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__AssociatedMetadata__destroy(bosdyn_msgs__msg__AssociatedMetadata * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__AssociatedMetadata__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__AssociatedMetadata__Sequence__init(bosdyn_msgs__msg__AssociatedMetadata__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__AssociatedMetadata * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__AssociatedMetadata *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__AssociatedMetadata), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__AssociatedMetadata__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__AssociatedMetadata__fini(&data[i - 1]);
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
bosdyn_msgs__msg__AssociatedMetadata__Sequence__fini(bosdyn_msgs__msg__AssociatedMetadata__Sequence * array)
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
      bosdyn_msgs__msg__AssociatedMetadata__fini(&array->data[i]);
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

bosdyn_msgs__msg__AssociatedMetadata__Sequence *
bosdyn_msgs__msg__AssociatedMetadata__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__AssociatedMetadata__Sequence * array = (bosdyn_msgs__msg__AssociatedMetadata__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__AssociatedMetadata__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__AssociatedMetadata__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__AssociatedMetadata__Sequence__destroy(bosdyn_msgs__msg__AssociatedMetadata__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__AssociatedMetadata__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__AssociatedMetadata__Sequence__are_equal(const bosdyn_msgs__msg__AssociatedMetadata__Sequence * lhs, const bosdyn_msgs__msg__AssociatedMetadata__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__AssociatedMetadata__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__AssociatedMetadata__Sequence__copy(
  const bosdyn_msgs__msg__AssociatedMetadata__Sequence * input,
  bosdyn_msgs__msg__AssociatedMetadata__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__AssociatedMetadata);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__AssociatedMetadata * data =
      (bosdyn_msgs__msg__AssociatedMetadata *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__AssociatedMetadata__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__AssociatedMetadata__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__AssociatedMetadata__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
