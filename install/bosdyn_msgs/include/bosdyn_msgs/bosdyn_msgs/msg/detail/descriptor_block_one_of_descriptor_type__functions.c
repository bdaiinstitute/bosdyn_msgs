// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/DescriptorBlockOneOfDescriptorType.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/descriptor_block_one_of_descriptor_type__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `file_descriptor`
#include "bosdyn_msgs/msg/detail/file_format_descriptor__functions.h"
// Member `series_descriptor`
#include "bosdyn_msgs/msg/detail/series_descriptor__functions.h"
// Member `series_block_index`
#include "bosdyn_msgs/msg/detail/series_block_index__functions.h"
// Member `file_index`
#include "bosdyn_msgs/msg/detail/file_index__functions.h"

bool
bosdyn_msgs__msg__DescriptorBlockOneOfDescriptorType__init(bosdyn_msgs__msg__DescriptorBlockOneOfDescriptorType * msg)
{
  if (!msg) {
    return false;
  }
  // file_descriptor
  if (!bosdyn_msgs__msg__FileFormatDescriptor__init(&msg->file_descriptor)) {
    bosdyn_msgs__msg__DescriptorBlockOneOfDescriptorType__fini(msg);
    return false;
  }
  // series_descriptor
  if (!bosdyn_msgs__msg__SeriesDescriptor__init(&msg->series_descriptor)) {
    bosdyn_msgs__msg__DescriptorBlockOneOfDescriptorType__fini(msg);
    return false;
  }
  // series_block_index
  if (!bosdyn_msgs__msg__SeriesBlockIndex__init(&msg->series_block_index)) {
    bosdyn_msgs__msg__DescriptorBlockOneOfDescriptorType__fini(msg);
    return false;
  }
  // file_index
  if (!bosdyn_msgs__msg__FileIndex__init(&msg->file_index)) {
    bosdyn_msgs__msg__DescriptorBlockOneOfDescriptorType__fini(msg);
    return false;
  }
  // descriptor_type_choice
  return true;
}

void
bosdyn_msgs__msg__DescriptorBlockOneOfDescriptorType__fini(bosdyn_msgs__msg__DescriptorBlockOneOfDescriptorType * msg)
{
  if (!msg) {
    return;
  }
  // file_descriptor
  bosdyn_msgs__msg__FileFormatDescriptor__fini(&msg->file_descriptor);
  // series_descriptor
  bosdyn_msgs__msg__SeriesDescriptor__fini(&msg->series_descriptor);
  // series_block_index
  bosdyn_msgs__msg__SeriesBlockIndex__fini(&msg->series_block_index);
  // file_index
  bosdyn_msgs__msg__FileIndex__fini(&msg->file_index);
  // descriptor_type_choice
}

bool
bosdyn_msgs__msg__DescriptorBlockOneOfDescriptorType__are_equal(const bosdyn_msgs__msg__DescriptorBlockOneOfDescriptorType * lhs, const bosdyn_msgs__msg__DescriptorBlockOneOfDescriptorType * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // file_descriptor
  if (!bosdyn_msgs__msg__FileFormatDescriptor__are_equal(
      &(lhs->file_descriptor), &(rhs->file_descriptor)))
  {
    return false;
  }
  // series_descriptor
  if (!bosdyn_msgs__msg__SeriesDescriptor__are_equal(
      &(lhs->series_descriptor), &(rhs->series_descriptor)))
  {
    return false;
  }
  // series_block_index
  if (!bosdyn_msgs__msg__SeriesBlockIndex__are_equal(
      &(lhs->series_block_index), &(rhs->series_block_index)))
  {
    return false;
  }
  // file_index
  if (!bosdyn_msgs__msg__FileIndex__are_equal(
      &(lhs->file_index), &(rhs->file_index)))
  {
    return false;
  }
  // descriptor_type_choice
  if (lhs->descriptor_type_choice != rhs->descriptor_type_choice) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__DescriptorBlockOneOfDescriptorType__copy(
  const bosdyn_msgs__msg__DescriptorBlockOneOfDescriptorType * input,
  bosdyn_msgs__msg__DescriptorBlockOneOfDescriptorType * output)
{
  if (!input || !output) {
    return false;
  }
  // file_descriptor
  if (!bosdyn_msgs__msg__FileFormatDescriptor__copy(
      &(input->file_descriptor), &(output->file_descriptor)))
  {
    return false;
  }
  // series_descriptor
  if (!bosdyn_msgs__msg__SeriesDescriptor__copy(
      &(input->series_descriptor), &(output->series_descriptor)))
  {
    return false;
  }
  // series_block_index
  if (!bosdyn_msgs__msg__SeriesBlockIndex__copy(
      &(input->series_block_index), &(output->series_block_index)))
  {
    return false;
  }
  // file_index
  if (!bosdyn_msgs__msg__FileIndex__copy(
      &(input->file_index), &(output->file_index)))
  {
    return false;
  }
  // descriptor_type_choice
  output->descriptor_type_choice = input->descriptor_type_choice;
  return true;
}

bosdyn_msgs__msg__DescriptorBlockOneOfDescriptorType *
bosdyn_msgs__msg__DescriptorBlockOneOfDescriptorType__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__DescriptorBlockOneOfDescriptorType * msg = (bosdyn_msgs__msg__DescriptorBlockOneOfDescriptorType *)allocator.allocate(sizeof(bosdyn_msgs__msg__DescriptorBlockOneOfDescriptorType), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__DescriptorBlockOneOfDescriptorType));
  bool success = bosdyn_msgs__msg__DescriptorBlockOneOfDescriptorType__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__DescriptorBlockOneOfDescriptorType__destroy(bosdyn_msgs__msg__DescriptorBlockOneOfDescriptorType * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__DescriptorBlockOneOfDescriptorType__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__DescriptorBlockOneOfDescriptorType__Sequence__init(bosdyn_msgs__msg__DescriptorBlockOneOfDescriptorType__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__DescriptorBlockOneOfDescriptorType * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__DescriptorBlockOneOfDescriptorType *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__DescriptorBlockOneOfDescriptorType), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__DescriptorBlockOneOfDescriptorType__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__DescriptorBlockOneOfDescriptorType__fini(&data[i - 1]);
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
bosdyn_msgs__msg__DescriptorBlockOneOfDescriptorType__Sequence__fini(bosdyn_msgs__msg__DescriptorBlockOneOfDescriptorType__Sequence * array)
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
      bosdyn_msgs__msg__DescriptorBlockOneOfDescriptorType__fini(&array->data[i]);
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

bosdyn_msgs__msg__DescriptorBlockOneOfDescriptorType__Sequence *
bosdyn_msgs__msg__DescriptorBlockOneOfDescriptorType__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__DescriptorBlockOneOfDescriptorType__Sequence * array = (bosdyn_msgs__msg__DescriptorBlockOneOfDescriptorType__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__DescriptorBlockOneOfDescriptorType__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__DescriptorBlockOneOfDescriptorType__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__DescriptorBlockOneOfDescriptorType__Sequence__destroy(bosdyn_msgs__msg__DescriptorBlockOneOfDescriptorType__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__DescriptorBlockOneOfDescriptorType__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__DescriptorBlockOneOfDescriptorType__Sequence__are_equal(const bosdyn_msgs__msg__DescriptorBlockOneOfDescriptorType__Sequence * lhs, const bosdyn_msgs__msg__DescriptorBlockOneOfDescriptorType__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__DescriptorBlockOneOfDescriptorType__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__DescriptorBlockOneOfDescriptorType__Sequence__copy(
  const bosdyn_msgs__msg__DescriptorBlockOneOfDescriptorType__Sequence * input,
  bosdyn_msgs__msg__DescriptorBlockOneOfDescriptorType__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__DescriptorBlockOneOfDescriptorType);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__DescriptorBlockOneOfDescriptorType * data =
      (bosdyn_msgs__msg__DescriptorBlockOneOfDescriptorType *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__DescriptorBlockOneOfDescriptorType__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__DescriptorBlockOneOfDescriptorType__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__DescriptorBlockOneOfDescriptorType__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
