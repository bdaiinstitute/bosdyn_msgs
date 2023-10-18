// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/LogAnnotationLogBlob.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/log_annotation_log_blob__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `timestamp`
// Member `timestamp_client`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `channel`
// Member `type_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
bosdyn_msgs__msg__LogAnnotationLogBlob__init(bosdyn_msgs__msg__LogAnnotationLogBlob * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    bosdyn_msgs__msg__LogAnnotationLogBlob__fini(msg);
    return false;
  }
  // timestamp_is_set
  // channel
  if (!rosidl_runtime_c__String__init(&msg->channel)) {
    bosdyn_msgs__msg__LogAnnotationLogBlob__fini(msg);
    return false;
  }
  // type_id
  if (!rosidl_runtime_c__String__init(&msg->type_id)) {
    bosdyn_msgs__msg__LogAnnotationLogBlob__fini(msg);
    return false;
  }
  // data
  if (!rosidl_runtime_c__octet__Sequence__init(&msg->data, 0)) {
    bosdyn_msgs__msg__LogAnnotationLogBlob__fini(msg);
    return false;
  }
  // timestamp_client
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp_client)) {
    bosdyn_msgs__msg__LogAnnotationLogBlob__fini(msg);
    return false;
  }
  // timestamp_client_is_set
  return true;
}

void
bosdyn_msgs__msg__LogAnnotationLogBlob__fini(bosdyn_msgs__msg__LogAnnotationLogBlob * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  builtin_interfaces__msg__Time__fini(&msg->timestamp);
  // timestamp_is_set
  // channel
  rosidl_runtime_c__String__fini(&msg->channel);
  // type_id
  rosidl_runtime_c__String__fini(&msg->type_id);
  // data
  rosidl_runtime_c__octet__Sequence__fini(&msg->data);
  // timestamp_client
  builtin_interfaces__msg__Time__fini(&msg->timestamp_client);
  // timestamp_client_is_set
}

bool
bosdyn_msgs__msg__LogAnnotationLogBlob__are_equal(const bosdyn_msgs__msg__LogAnnotationLogBlob * lhs, const bosdyn_msgs__msg__LogAnnotationLogBlob * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->timestamp), &(rhs->timestamp)))
  {
    return false;
  }
  // timestamp_is_set
  if (lhs->timestamp_is_set != rhs->timestamp_is_set) {
    return false;
  }
  // channel
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->channel), &(rhs->channel)))
  {
    return false;
  }
  // type_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->type_id), &(rhs->type_id)))
  {
    return false;
  }
  // data
  if (!rosidl_runtime_c__octet__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  // timestamp_client
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->timestamp_client), &(rhs->timestamp_client)))
  {
    return false;
  }
  // timestamp_client_is_set
  if (lhs->timestamp_client_is_set != rhs->timestamp_client_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__LogAnnotationLogBlob__copy(
  const bosdyn_msgs__msg__LogAnnotationLogBlob * input,
  bosdyn_msgs__msg__LogAnnotationLogBlob * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->timestamp), &(output->timestamp)))
  {
    return false;
  }
  // timestamp_is_set
  output->timestamp_is_set = input->timestamp_is_set;
  // channel
  if (!rosidl_runtime_c__String__copy(
      &(input->channel), &(output->channel)))
  {
    return false;
  }
  // type_id
  if (!rosidl_runtime_c__String__copy(
      &(input->type_id), &(output->type_id)))
  {
    return false;
  }
  // data
  if (!rosidl_runtime_c__octet__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  // timestamp_client
  if (!builtin_interfaces__msg__Time__copy(
      &(input->timestamp_client), &(output->timestamp_client)))
  {
    return false;
  }
  // timestamp_client_is_set
  output->timestamp_client_is_set = input->timestamp_client_is_set;
  return true;
}

bosdyn_msgs__msg__LogAnnotationLogBlob *
bosdyn_msgs__msg__LogAnnotationLogBlob__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__LogAnnotationLogBlob * msg = (bosdyn_msgs__msg__LogAnnotationLogBlob *)allocator.allocate(sizeof(bosdyn_msgs__msg__LogAnnotationLogBlob), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__LogAnnotationLogBlob));
  bool success = bosdyn_msgs__msg__LogAnnotationLogBlob__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__LogAnnotationLogBlob__destroy(bosdyn_msgs__msg__LogAnnotationLogBlob * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__LogAnnotationLogBlob__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__LogAnnotationLogBlob__Sequence__init(bosdyn_msgs__msg__LogAnnotationLogBlob__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__LogAnnotationLogBlob * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__LogAnnotationLogBlob *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__LogAnnotationLogBlob), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__LogAnnotationLogBlob__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__LogAnnotationLogBlob__fini(&data[i - 1]);
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
bosdyn_msgs__msg__LogAnnotationLogBlob__Sequence__fini(bosdyn_msgs__msg__LogAnnotationLogBlob__Sequence * array)
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
      bosdyn_msgs__msg__LogAnnotationLogBlob__fini(&array->data[i]);
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

bosdyn_msgs__msg__LogAnnotationLogBlob__Sequence *
bosdyn_msgs__msg__LogAnnotationLogBlob__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__LogAnnotationLogBlob__Sequence * array = (bosdyn_msgs__msg__LogAnnotationLogBlob__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__LogAnnotationLogBlob__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__LogAnnotationLogBlob__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__LogAnnotationLogBlob__Sequence__destroy(bosdyn_msgs__msg__LogAnnotationLogBlob__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__LogAnnotationLogBlob__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__LogAnnotationLogBlob__Sequence__are_equal(const bosdyn_msgs__msg__LogAnnotationLogBlob__Sequence * lhs, const bosdyn_msgs__msg__LogAnnotationLogBlob__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__LogAnnotationLogBlob__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__LogAnnotationLogBlob__Sequence__copy(
  const bosdyn_msgs__msg__LogAnnotationLogBlob__Sequence * input,
  bosdyn_msgs__msg__LogAnnotationLogBlob__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__LogAnnotationLogBlob);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__LogAnnotationLogBlob * data =
      (bosdyn_msgs__msg__LogAnnotationLogBlob *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__LogAnnotationLogBlob__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__LogAnnotationLogBlob__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__LogAnnotationLogBlob__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
