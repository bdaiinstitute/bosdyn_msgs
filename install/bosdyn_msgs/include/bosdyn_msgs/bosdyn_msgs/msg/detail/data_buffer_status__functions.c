// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/DataBufferStatus.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/data_buffer_status__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `blob_specs`
#include "bosdyn_msgs/msg/detail/blob_spec__functions.h"

bool
bosdyn_msgs__msg__DataBufferStatus__init(bosdyn_msgs__msg__DataBufferStatus * msg)
{
  if (!msg) {
    return false;
  }
  // num_data_buffer_pages
  // data_buffer_total_bytes
  // num_comments
  // num_events
  // blob_specs
  if (!bosdyn_msgs__msg__BlobSpec__Sequence__init(&msg->blob_specs, 0)) {
    bosdyn_msgs__msg__DataBufferStatus__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__DataBufferStatus__fini(bosdyn_msgs__msg__DataBufferStatus * msg)
{
  if (!msg) {
    return;
  }
  // num_data_buffer_pages
  // data_buffer_total_bytes
  // num_comments
  // num_events
  // blob_specs
  bosdyn_msgs__msg__BlobSpec__Sequence__fini(&msg->blob_specs);
}

bool
bosdyn_msgs__msg__DataBufferStatus__are_equal(const bosdyn_msgs__msg__DataBufferStatus * lhs, const bosdyn_msgs__msg__DataBufferStatus * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // num_data_buffer_pages
  if (lhs->num_data_buffer_pages != rhs->num_data_buffer_pages) {
    return false;
  }
  // data_buffer_total_bytes
  if (lhs->data_buffer_total_bytes != rhs->data_buffer_total_bytes) {
    return false;
  }
  // num_comments
  if (lhs->num_comments != rhs->num_comments) {
    return false;
  }
  // num_events
  if (lhs->num_events != rhs->num_events) {
    return false;
  }
  // blob_specs
  if (!bosdyn_msgs__msg__BlobSpec__Sequence__are_equal(
      &(lhs->blob_specs), &(rhs->blob_specs)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__DataBufferStatus__copy(
  const bosdyn_msgs__msg__DataBufferStatus * input,
  bosdyn_msgs__msg__DataBufferStatus * output)
{
  if (!input || !output) {
    return false;
  }
  // num_data_buffer_pages
  output->num_data_buffer_pages = input->num_data_buffer_pages;
  // data_buffer_total_bytes
  output->data_buffer_total_bytes = input->data_buffer_total_bytes;
  // num_comments
  output->num_comments = input->num_comments;
  // num_events
  output->num_events = input->num_events;
  // blob_specs
  if (!bosdyn_msgs__msg__BlobSpec__Sequence__copy(
      &(input->blob_specs), &(output->blob_specs)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__DataBufferStatus *
bosdyn_msgs__msg__DataBufferStatus__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__DataBufferStatus * msg = (bosdyn_msgs__msg__DataBufferStatus *)allocator.allocate(sizeof(bosdyn_msgs__msg__DataBufferStatus), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__DataBufferStatus));
  bool success = bosdyn_msgs__msg__DataBufferStatus__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__DataBufferStatus__destroy(bosdyn_msgs__msg__DataBufferStatus * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__DataBufferStatus__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__DataBufferStatus__Sequence__init(bosdyn_msgs__msg__DataBufferStatus__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__DataBufferStatus * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__DataBufferStatus *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__DataBufferStatus), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__DataBufferStatus__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__DataBufferStatus__fini(&data[i - 1]);
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
bosdyn_msgs__msg__DataBufferStatus__Sequence__fini(bosdyn_msgs__msg__DataBufferStatus__Sequence * array)
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
      bosdyn_msgs__msg__DataBufferStatus__fini(&array->data[i]);
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

bosdyn_msgs__msg__DataBufferStatus__Sequence *
bosdyn_msgs__msg__DataBufferStatus__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__DataBufferStatus__Sequence * array = (bosdyn_msgs__msg__DataBufferStatus__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__DataBufferStatus__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__DataBufferStatus__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__DataBufferStatus__Sequence__destroy(bosdyn_msgs__msg__DataBufferStatus__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__DataBufferStatus__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__DataBufferStatus__Sequence__are_equal(const bosdyn_msgs__msg__DataBufferStatus__Sequence * lhs, const bosdyn_msgs__msg__DataBufferStatus__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__DataBufferStatus__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__DataBufferStatus__Sequence__copy(
  const bosdyn_msgs__msg__DataBufferStatus__Sequence * input,
  bosdyn_msgs__msg__DataBufferStatus__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__DataBufferStatus);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__DataBufferStatus * data =
      (bosdyn_msgs__msg__DataBufferStatus *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__DataBufferStatus__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__DataBufferStatus__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__DataBufferStatus__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
