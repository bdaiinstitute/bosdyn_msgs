// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/StoreMetadata.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/store_metadata__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `service_name`
// Member `host`
// Member `acquire_data_request_name`
// Member `metadata_channel`
#include "rosidl_runtime_c/string_functions.h"
// Member `data`
#include "bosdyn_msgs/msg/detail/store_metadata_one_of_data__functions.h"

bool
bosdyn_msgs__msg__StoreMetadata__init(bosdyn_msgs__msg__StoreMetadata * msg)
{
  if (!msg) {
    return false;
  }
  // service_name
  if (!rosidl_runtime_c__String__init(&msg->service_name)) {
    bosdyn_msgs__msg__StoreMetadata__fini(msg);
    return false;
  }
  // host
  if (!rosidl_runtime_c__String__init(&msg->host)) {
    bosdyn_msgs__msg__StoreMetadata__fini(msg);
    return false;
  }
  // acquire_data_request_name
  if (!rosidl_runtime_c__String__init(&msg->acquire_data_request_name)) {
    bosdyn_msgs__msg__StoreMetadata__fini(msg);
    return false;
  }
  // data
  if (!bosdyn_msgs__msg__StoreMetadataOneOfData__init(&msg->data)) {
    bosdyn_msgs__msg__StoreMetadata__fini(msg);
    return false;
  }
  // metadata_channel
  if (!rosidl_runtime_c__String__init(&msg->metadata_channel)) {
    bosdyn_msgs__msg__StoreMetadata__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__StoreMetadata__fini(bosdyn_msgs__msg__StoreMetadata * msg)
{
  if (!msg) {
    return;
  }
  // service_name
  rosidl_runtime_c__String__fini(&msg->service_name);
  // host
  rosidl_runtime_c__String__fini(&msg->host);
  // acquire_data_request_name
  rosidl_runtime_c__String__fini(&msg->acquire_data_request_name);
  // data
  bosdyn_msgs__msg__StoreMetadataOneOfData__fini(&msg->data);
  // metadata_channel
  rosidl_runtime_c__String__fini(&msg->metadata_channel);
}

bool
bosdyn_msgs__msg__StoreMetadata__are_equal(const bosdyn_msgs__msg__StoreMetadata * lhs, const bosdyn_msgs__msg__StoreMetadata * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // service_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->service_name), &(rhs->service_name)))
  {
    return false;
  }
  // host
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->host), &(rhs->host)))
  {
    return false;
  }
  // acquire_data_request_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->acquire_data_request_name), &(rhs->acquire_data_request_name)))
  {
    return false;
  }
  // data
  if (!bosdyn_msgs__msg__StoreMetadataOneOfData__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  // metadata_channel
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->metadata_channel), &(rhs->metadata_channel)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__StoreMetadata__copy(
  const bosdyn_msgs__msg__StoreMetadata * input,
  bosdyn_msgs__msg__StoreMetadata * output)
{
  if (!input || !output) {
    return false;
  }
  // service_name
  if (!rosidl_runtime_c__String__copy(
      &(input->service_name), &(output->service_name)))
  {
    return false;
  }
  // host
  if (!rosidl_runtime_c__String__copy(
      &(input->host), &(output->host)))
  {
    return false;
  }
  // acquire_data_request_name
  if (!rosidl_runtime_c__String__copy(
      &(input->acquire_data_request_name), &(output->acquire_data_request_name)))
  {
    return false;
  }
  // data
  if (!bosdyn_msgs__msg__StoreMetadataOneOfData__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  // metadata_channel
  if (!rosidl_runtime_c__String__copy(
      &(input->metadata_channel), &(output->metadata_channel)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__StoreMetadata *
bosdyn_msgs__msg__StoreMetadata__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__StoreMetadata * msg = (bosdyn_msgs__msg__StoreMetadata *)allocator.allocate(sizeof(bosdyn_msgs__msg__StoreMetadata), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__StoreMetadata));
  bool success = bosdyn_msgs__msg__StoreMetadata__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__StoreMetadata__destroy(bosdyn_msgs__msg__StoreMetadata * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__StoreMetadata__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__StoreMetadata__Sequence__init(bosdyn_msgs__msg__StoreMetadata__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__StoreMetadata * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__StoreMetadata *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__StoreMetadata), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__StoreMetadata__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__StoreMetadata__fini(&data[i - 1]);
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
bosdyn_msgs__msg__StoreMetadata__Sequence__fini(bosdyn_msgs__msg__StoreMetadata__Sequence * array)
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
      bosdyn_msgs__msg__StoreMetadata__fini(&array->data[i]);
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

bosdyn_msgs__msg__StoreMetadata__Sequence *
bosdyn_msgs__msg__StoreMetadata__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__StoreMetadata__Sequence * array = (bosdyn_msgs__msg__StoreMetadata__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__StoreMetadata__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__StoreMetadata__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__StoreMetadata__Sequence__destroy(bosdyn_msgs__msg__StoreMetadata__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__StoreMetadata__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__StoreMetadata__Sequence__are_equal(const bosdyn_msgs__msg__StoreMetadata__Sequence * lhs, const bosdyn_msgs__msg__StoreMetadata__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__StoreMetadata__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__StoreMetadata__Sequence__copy(
  const bosdyn_msgs__msg__StoreMetadata__Sequence * input,
  bosdyn_msgs__msg__StoreMetadata__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__StoreMetadata);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__StoreMetadata * data =
      (bosdyn_msgs__msg__StoreMetadata *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__StoreMetadata__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__StoreMetadata__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__StoreMetadata__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
