// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/FileFormatDescriptor.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/file_format_descriptor__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `version`
#include "bosdyn_msgs/msg/detail/file_format_version__functions.h"
// Member `annotations`
#include "bosdyn_msgs/msg/detail/key_string_value_string__functions.h"
// Member `checksum_type`
#include "bosdyn_msgs/msg/detail/file_format_descriptor_check_sum_type__functions.h"

bool
bosdyn_msgs__msg__FileFormatDescriptor__init(bosdyn_msgs__msg__FileFormatDescriptor * msg)
{
  if (!msg) {
    return false;
  }
  // version
  if (!bosdyn_msgs__msg__FileFormatVersion__init(&msg->version)) {
    bosdyn_msgs__msg__FileFormatDescriptor__fini(msg);
    return false;
  }
  // version_is_set
  // annotations
  if (!bosdyn_msgs__msg__KeyStringValueString__Sequence__init(&msg->annotations, 0)) {
    bosdyn_msgs__msg__FileFormatDescriptor__fini(msg);
    return false;
  }
  // checksum_type
  if (!bosdyn_msgs__msg__FileFormatDescriptorCheckSumType__init(&msg->checksum_type)) {
    bosdyn_msgs__msg__FileFormatDescriptor__fini(msg);
    return false;
  }
  // checksum_num_bytes
  return true;
}

void
bosdyn_msgs__msg__FileFormatDescriptor__fini(bosdyn_msgs__msg__FileFormatDescriptor * msg)
{
  if (!msg) {
    return;
  }
  // version
  bosdyn_msgs__msg__FileFormatVersion__fini(&msg->version);
  // version_is_set
  // annotations
  bosdyn_msgs__msg__KeyStringValueString__Sequence__fini(&msg->annotations);
  // checksum_type
  bosdyn_msgs__msg__FileFormatDescriptorCheckSumType__fini(&msg->checksum_type);
  // checksum_num_bytes
}

bool
bosdyn_msgs__msg__FileFormatDescriptor__are_equal(const bosdyn_msgs__msg__FileFormatDescriptor * lhs, const bosdyn_msgs__msg__FileFormatDescriptor * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // version
  if (!bosdyn_msgs__msg__FileFormatVersion__are_equal(
      &(lhs->version), &(rhs->version)))
  {
    return false;
  }
  // version_is_set
  if (lhs->version_is_set != rhs->version_is_set) {
    return false;
  }
  // annotations
  if (!bosdyn_msgs__msg__KeyStringValueString__Sequence__are_equal(
      &(lhs->annotations), &(rhs->annotations)))
  {
    return false;
  }
  // checksum_type
  if (!bosdyn_msgs__msg__FileFormatDescriptorCheckSumType__are_equal(
      &(lhs->checksum_type), &(rhs->checksum_type)))
  {
    return false;
  }
  // checksum_num_bytes
  if (lhs->checksum_num_bytes != rhs->checksum_num_bytes) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__FileFormatDescriptor__copy(
  const bosdyn_msgs__msg__FileFormatDescriptor * input,
  bosdyn_msgs__msg__FileFormatDescriptor * output)
{
  if (!input || !output) {
    return false;
  }
  // version
  if (!bosdyn_msgs__msg__FileFormatVersion__copy(
      &(input->version), &(output->version)))
  {
    return false;
  }
  // version_is_set
  output->version_is_set = input->version_is_set;
  // annotations
  if (!bosdyn_msgs__msg__KeyStringValueString__Sequence__copy(
      &(input->annotations), &(output->annotations)))
  {
    return false;
  }
  // checksum_type
  if (!bosdyn_msgs__msg__FileFormatDescriptorCheckSumType__copy(
      &(input->checksum_type), &(output->checksum_type)))
  {
    return false;
  }
  // checksum_num_bytes
  output->checksum_num_bytes = input->checksum_num_bytes;
  return true;
}

bosdyn_msgs__msg__FileFormatDescriptor *
bosdyn_msgs__msg__FileFormatDescriptor__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__FileFormatDescriptor * msg = (bosdyn_msgs__msg__FileFormatDescriptor *)allocator.allocate(sizeof(bosdyn_msgs__msg__FileFormatDescriptor), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__FileFormatDescriptor));
  bool success = bosdyn_msgs__msg__FileFormatDescriptor__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__FileFormatDescriptor__destroy(bosdyn_msgs__msg__FileFormatDescriptor * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__FileFormatDescriptor__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__FileFormatDescriptor__Sequence__init(bosdyn_msgs__msg__FileFormatDescriptor__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__FileFormatDescriptor * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__FileFormatDescriptor *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__FileFormatDescriptor), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__FileFormatDescriptor__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__FileFormatDescriptor__fini(&data[i - 1]);
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
bosdyn_msgs__msg__FileFormatDescriptor__Sequence__fini(bosdyn_msgs__msg__FileFormatDescriptor__Sequence * array)
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
      bosdyn_msgs__msg__FileFormatDescriptor__fini(&array->data[i]);
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

bosdyn_msgs__msg__FileFormatDescriptor__Sequence *
bosdyn_msgs__msg__FileFormatDescriptor__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__FileFormatDescriptor__Sequence * array = (bosdyn_msgs__msg__FileFormatDescriptor__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__FileFormatDescriptor__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__FileFormatDescriptor__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__FileFormatDescriptor__Sequence__destroy(bosdyn_msgs__msg__FileFormatDescriptor__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__FileFormatDescriptor__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__FileFormatDescriptor__Sequence__are_equal(const bosdyn_msgs__msg__FileFormatDescriptor__Sequence * lhs, const bosdyn_msgs__msg__FileFormatDescriptor__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__FileFormatDescriptor__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__FileFormatDescriptor__Sequence__copy(
  const bosdyn_msgs__msg__FileFormatDescriptor__Sequence * input,
  bosdyn_msgs__msg__FileFormatDescriptor__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__FileFormatDescriptor);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__FileFormatDescriptor * data =
      (bosdyn_msgs__msg__FileFormatDescriptor *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__FileFormatDescriptor__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__FileFormatDescriptor__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__FileFormatDescriptor__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
