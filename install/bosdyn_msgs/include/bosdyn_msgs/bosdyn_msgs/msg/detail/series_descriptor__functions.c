// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/SeriesDescriptor.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/series_descriptor__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `series_identifier`
#include "bosdyn_msgs/msg/detail/series_identifier__functions.h"
// Member `data_type`
#include "bosdyn_msgs/msg/detail/series_descriptor_one_of_data_type__functions.h"
// Member `annotations`
#include "bosdyn_msgs/msg/detail/key_string_value_string__functions.h"
// Member `additional_index_names`
// Member `description`
#include "rosidl_runtime_c/string_functions.h"

bool
bosdyn_msgs__msg__SeriesDescriptor__init(bosdyn_msgs__msg__SeriesDescriptor * msg)
{
  if (!msg) {
    return false;
  }
  // series_index
  // series_identifier
  if (!bosdyn_msgs__msg__SeriesIdentifier__init(&msg->series_identifier)) {
    bosdyn_msgs__msg__SeriesDescriptor__fini(msg);
    return false;
  }
  // series_identifier_is_set
  // identifier_hash
  // data_type
  if (!bosdyn_msgs__msg__SeriesDescriptorOneOfDataType__init(&msg->data_type)) {
    bosdyn_msgs__msg__SeriesDescriptor__fini(msg);
    return false;
  }
  // annotations
  if (!bosdyn_msgs__msg__KeyStringValueString__Sequence__init(&msg->annotations, 0)) {
    bosdyn_msgs__msg__SeriesDescriptor__fini(msg);
    return false;
  }
  // additional_index_names
  if (!rosidl_runtime_c__String__Sequence__init(&msg->additional_index_names, 0)) {
    bosdyn_msgs__msg__SeriesDescriptor__fini(msg);
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__init(&msg->description)) {
    bosdyn_msgs__msg__SeriesDescriptor__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__SeriesDescriptor__fini(bosdyn_msgs__msg__SeriesDescriptor * msg)
{
  if (!msg) {
    return;
  }
  // series_index
  // series_identifier
  bosdyn_msgs__msg__SeriesIdentifier__fini(&msg->series_identifier);
  // series_identifier_is_set
  // identifier_hash
  // data_type
  bosdyn_msgs__msg__SeriesDescriptorOneOfDataType__fini(&msg->data_type);
  // annotations
  bosdyn_msgs__msg__KeyStringValueString__Sequence__fini(&msg->annotations);
  // additional_index_names
  rosidl_runtime_c__String__Sequence__fini(&msg->additional_index_names);
  // description
  rosidl_runtime_c__String__fini(&msg->description);
}

bool
bosdyn_msgs__msg__SeriesDescriptor__are_equal(const bosdyn_msgs__msg__SeriesDescriptor * lhs, const bosdyn_msgs__msg__SeriesDescriptor * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // series_index
  if (lhs->series_index != rhs->series_index) {
    return false;
  }
  // series_identifier
  if (!bosdyn_msgs__msg__SeriesIdentifier__are_equal(
      &(lhs->series_identifier), &(rhs->series_identifier)))
  {
    return false;
  }
  // series_identifier_is_set
  if (lhs->series_identifier_is_set != rhs->series_identifier_is_set) {
    return false;
  }
  // identifier_hash
  if (lhs->identifier_hash != rhs->identifier_hash) {
    return false;
  }
  // data_type
  if (!bosdyn_msgs__msg__SeriesDescriptorOneOfDataType__are_equal(
      &(lhs->data_type), &(rhs->data_type)))
  {
    return false;
  }
  // annotations
  if (!bosdyn_msgs__msg__KeyStringValueString__Sequence__are_equal(
      &(lhs->annotations), &(rhs->annotations)))
  {
    return false;
  }
  // additional_index_names
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->additional_index_names), &(rhs->additional_index_names)))
  {
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->description), &(rhs->description)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__SeriesDescriptor__copy(
  const bosdyn_msgs__msg__SeriesDescriptor * input,
  bosdyn_msgs__msg__SeriesDescriptor * output)
{
  if (!input || !output) {
    return false;
  }
  // series_index
  output->series_index = input->series_index;
  // series_identifier
  if (!bosdyn_msgs__msg__SeriesIdentifier__copy(
      &(input->series_identifier), &(output->series_identifier)))
  {
    return false;
  }
  // series_identifier_is_set
  output->series_identifier_is_set = input->series_identifier_is_set;
  // identifier_hash
  output->identifier_hash = input->identifier_hash;
  // data_type
  if (!bosdyn_msgs__msg__SeriesDescriptorOneOfDataType__copy(
      &(input->data_type), &(output->data_type)))
  {
    return false;
  }
  // annotations
  if (!bosdyn_msgs__msg__KeyStringValueString__Sequence__copy(
      &(input->annotations), &(output->annotations)))
  {
    return false;
  }
  // additional_index_names
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->additional_index_names), &(output->additional_index_names)))
  {
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__copy(
      &(input->description), &(output->description)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__SeriesDescriptor *
bosdyn_msgs__msg__SeriesDescriptor__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__SeriesDescriptor * msg = (bosdyn_msgs__msg__SeriesDescriptor *)allocator.allocate(sizeof(bosdyn_msgs__msg__SeriesDescriptor), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__SeriesDescriptor));
  bool success = bosdyn_msgs__msg__SeriesDescriptor__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__SeriesDescriptor__destroy(bosdyn_msgs__msg__SeriesDescriptor * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__SeriesDescriptor__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__SeriesDescriptor__Sequence__init(bosdyn_msgs__msg__SeriesDescriptor__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__SeriesDescriptor * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__SeriesDescriptor *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__SeriesDescriptor), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__SeriesDescriptor__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__SeriesDescriptor__fini(&data[i - 1]);
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
bosdyn_msgs__msg__SeriesDescriptor__Sequence__fini(bosdyn_msgs__msg__SeriesDescriptor__Sequence * array)
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
      bosdyn_msgs__msg__SeriesDescriptor__fini(&array->data[i]);
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

bosdyn_msgs__msg__SeriesDescriptor__Sequence *
bosdyn_msgs__msg__SeriesDescriptor__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__SeriesDescriptor__Sequence * array = (bosdyn_msgs__msg__SeriesDescriptor__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__SeriesDescriptor__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__SeriesDescriptor__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__SeriesDescriptor__Sequence__destroy(bosdyn_msgs__msg__SeriesDescriptor__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__SeriesDescriptor__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__SeriesDescriptor__Sequence__are_equal(const bosdyn_msgs__msg__SeriesDescriptor__Sequence * lhs, const bosdyn_msgs__msg__SeriesDescriptor__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__SeriesDescriptor__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__SeriesDescriptor__Sequence__copy(
  const bosdyn_msgs__msg__SeriesDescriptor__Sequence * input,
  bosdyn_msgs__msg__SeriesDescriptor__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__SeriesDescriptor);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__SeriesDescriptor * data =
      (bosdyn_msgs__msg__SeriesDescriptor *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__SeriesDescriptor__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__SeriesDescriptor__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__SeriesDescriptor__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
