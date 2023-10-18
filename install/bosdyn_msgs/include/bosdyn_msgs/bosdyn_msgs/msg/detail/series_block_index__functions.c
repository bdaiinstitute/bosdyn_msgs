// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/SeriesBlockIndex.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/series_block_index__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `block_entries`
#include "bosdyn_msgs/msg/detail/series_block_index_block_entry__functions.h"

bool
bosdyn_msgs__msg__SeriesBlockIndex__init(bosdyn_msgs__msg__SeriesBlockIndex * msg)
{
  if (!msg) {
    return false;
  }
  // series_index
  // descriptor_file_offset
  // block_entries
  if (!bosdyn_msgs__msg__SeriesBlockIndexBlockEntry__Sequence__init(&msg->block_entries, 0)) {
    bosdyn_msgs__msg__SeriesBlockIndex__fini(msg);
    return false;
  }
  // total_bytes
  return true;
}

void
bosdyn_msgs__msg__SeriesBlockIndex__fini(bosdyn_msgs__msg__SeriesBlockIndex * msg)
{
  if (!msg) {
    return;
  }
  // series_index
  // descriptor_file_offset
  // block_entries
  bosdyn_msgs__msg__SeriesBlockIndexBlockEntry__Sequence__fini(&msg->block_entries);
  // total_bytes
}

bool
bosdyn_msgs__msg__SeriesBlockIndex__are_equal(const bosdyn_msgs__msg__SeriesBlockIndex * lhs, const bosdyn_msgs__msg__SeriesBlockIndex * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // series_index
  if (lhs->series_index != rhs->series_index) {
    return false;
  }
  // descriptor_file_offset
  if (lhs->descriptor_file_offset != rhs->descriptor_file_offset) {
    return false;
  }
  // block_entries
  if (!bosdyn_msgs__msg__SeriesBlockIndexBlockEntry__Sequence__are_equal(
      &(lhs->block_entries), &(rhs->block_entries)))
  {
    return false;
  }
  // total_bytes
  if (lhs->total_bytes != rhs->total_bytes) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__SeriesBlockIndex__copy(
  const bosdyn_msgs__msg__SeriesBlockIndex * input,
  bosdyn_msgs__msg__SeriesBlockIndex * output)
{
  if (!input || !output) {
    return false;
  }
  // series_index
  output->series_index = input->series_index;
  // descriptor_file_offset
  output->descriptor_file_offset = input->descriptor_file_offset;
  // block_entries
  if (!bosdyn_msgs__msg__SeriesBlockIndexBlockEntry__Sequence__copy(
      &(input->block_entries), &(output->block_entries)))
  {
    return false;
  }
  // total_bytes
  output->total_bytes = input->total_bytes;
  return true;
}

bosdyn_msgs__msg__SeriesBlockIndex *
bosdyn_msgs__msg__SeriesBlockIndex__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__SeriesBlockIndex * msg = (bosdyn_msgs__msg__SeriesBlockIndex *)allocator.allocate(sizeof(bosdyn_msgs__msg__SeriesBlockIndex), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__SeriesBlockIndex));
  bool success = bosdyn_msgs__msg__SeriesBlockIndex__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__SeriesBlockIndex__destroy(bosdyn_msgs__msg__SeriesBlockIndex * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__SeriesBlockIndex__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__SeriesBlockIndex__Sequence__init(bosdyn_msgs__msg__SeriesBlockIndex__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__SeriesBlockIndex * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__SeriesBlockIndex *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__SeriesBlockIndex), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__SeriesBlockIndex__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__SeriesBlockIndex__fini(&data[i - 1]);
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
bosdyn_msgs__msg__SeriesBlockIndex__Sequence__fini(bosdyn_msgs__msg__SeriesBlockIndex__Sequence * array)
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
      bosdyn_msgs__msg__SeriesBlockIndex__fini(&array->data[i]);
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

bosdyn_msgs__msg__SeriesBlockIndex__Sequence *
bosdyn_msgs__msg__SeriesBlockIndex__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__SeriesBlockIndex__Sequence * array = (bosdyn_msgs__msg__SeriesBlockIndex__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__SeriesBlockIndex__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__SeriesBlockIndex__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__SeriesBlockIndex__Sequence__destroy(bosdyn_msgs__msg__SeriesBlockIndex__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__SeriesBlockIndex__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__SeriesBlockIndex__Sequence__are_equal(const bosdyn_msgs__msg__SeriesBlockIndex__Sequence * lhs, const bosdyn_msgs__msg__SeriesBlockIndex__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__SeriesBlockIndex__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__SeriesBlockIndex__Sequence__copy(
  const bosdyn_msgs__msg__SeriesBlockIndex__Sequence * input,
  bosdyn_msgs__msg__SeriesBlockIndex__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__SeriesBlockIndex);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__SeriesBlockIndex * data =
      (bosdyn_msgs__msg__SeriesBlockIndex *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__SeriesBlockIndex__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__SeriesBlockIndex__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__SeriesBlockIndex__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
