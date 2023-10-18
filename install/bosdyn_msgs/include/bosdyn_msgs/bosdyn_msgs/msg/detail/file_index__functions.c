// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/FileIndex.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/file_index__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `series_identifiers`
#include "bosdyn_msgs/msg/detail/series_identifier__functions.h"
// Member `series_block_index_offsets`
// Member `series_identifier_hashes`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
bosdyn_msgs__msg__FileIndex__init(bosdyn_msgs__msg__FileIndex * msg)
{
  if (!msg) {
    return false;
  }
  // series_identifiers
  if (!bosdyn_msgs__msg__SeriesIdentifier__Sequence__init(&msg->series_identifiers, 0)) {
    bosdyn_msgs__msg__FileIndex__fini(msg);
    return false;
  }
  // series_block_index_offsets
  if (!rosidl_runtime_c__uint64__Sequence__init(&msg->series_block_index_offsets, 0)) {
    bosdyn_msgs__msg__FileIndex__fini(msg);
    return false;
  }
  // series_identifier_hashes
  if (!rosidl_runtime_c__uint64__Sequence__init(&msg->series_identifier_hashes, 0)) {
    bosdyn_msgs__msg__FileIndex__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__FileIndex__fini(bosdyn_msgs__msg__FileIndex * msg)
{
  if (!msg) {
    return;
  }
  // series_identifiers
  bosdyn_msgs__msg__SeriesIdentifier__Sequence__fini(&msg->series_identifiers);
  // series_block_index_offsets
  rosidl_runtime_c__uint64__Sequence__fini(&msg->series_block_index_offsets);
  // series_identifier_hashes
  rosidl_runtime_c__uint64__Sequence__fini(&msg->series_identifier_hashes);
}

bool
bosdyn_msgs__msg__FileIndex__are_equal(const bosdyn_msgs__msg__FileIndex * lhs, const bosdyn_msgs__msg__FileIndex * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // series_identifiers
  if (!bosdyn_msgs__msg__SeriesIdentifier__Sequence__are_equal(
      &(lhs->series_identifiers), &(rhs->series_identifiers)))
  {
    return false;
  }
  // series_block_index_offsets
  if (!rosidl_runtime_c__uint64__Sequence__are_equal(
      &(lhs->series_block_index_offsets), &(rhs->series_block_index_offsets)))
  {
    return false;
  }
  // series_identifier_hashes
  if (!rosidl_runtime_c__uint64__Sequence__are_equal(
      &(lhs->series_identifier_hashes), &(rhs->series_identifier_hashes)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__FileIndex__copy(
  const bosdyn_msgs__msg__FileIndex * input,
  bosdyn_msgs__msg__FileIndex * output)
{
  if (!input || !output) {
    return false;
  }
  // series_identifiers
  if (!bosdyn_msgs__msg__SeriesIdentifier__Sequence__copy(
      &(input->series_identifiers), &(output->series_identifiers)))
  {
    return false;
  }
  // series_block_index_offsets
  if (!rosidl_runtime_c__uint64__Sequence__copy(
      &(input->series_block_index_offsets), &(output->series_block_index_offsets)))
  {
    return false;
  }
  // series_identifier_hashes
  if (!rosidl_runtime_c__uint64__Sequence__copy(
      &(input->series_identifier_hashes), &(output->series_identifier_hashes)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__FileIndex *
bosdyn_msgs__msg__FileIndex__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__FileIndex * msg = (bosdyn_msgs__msg__FileIndex *)allocator.allocate(sizeof(bosdyn_msgs__msg__FileIndex), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__FileIndex));
  bool success = bosdyn_msgs__msg__FileIndex__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__FileIndex__destroy(bosdyn_msgs__msg__FileIndex * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__FileIndex__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__FileIndex__Sequence__init(bosdyn_msgs__msg__FileIndex__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__FileIndex * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__FileIndex *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__FileIndex), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__FileIndex__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__FileIndex__fini(&data[i - 1]);
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
bosdyn_msgs__msg__FileIndex__Sequence__fini(bosdyn_msgs__msg__FileIndex__Sequence * array)
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
      bosdyn_msgs__msg__FileIndex__fini(&array->data[i]);
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

bosdyn_msgs__msg__FileIndex__Sequence *
bosdyn_msgs__msg__FileIndex__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__FileIndex__Sequence * array = (bosdyn_msgs__msg__FileIndex__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__FileIndex__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__FileIndex__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__FileIndex__Sequence__destroy(bosdyn_msgs__msg__FileIndex__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__FileIndex__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__FileIndex__Sequence__are_equal(const bosdyn_msgs__msg__FileIndex__Sequence * lhs, const bosdyn_msgs__msg__FileIndex__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__FileIndex__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__FileIndex__Sequence__copy(
  const bosdyn_msgs__msg__FileIndex__Sequence * input,
  bosdyn_msgs__msg__FileIndex__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__FileIndex);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__FileIndex * data =
      (bosdyn_msgs__msg__FileIndex *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__FileIndex__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__FileIndex__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__FileIndex__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
