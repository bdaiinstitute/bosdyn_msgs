// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/LogAnnotations.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/log_annotations__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `text_messages`
#include "bosdyn_msgs/msg/detail/log_annotation_text_message__functions.h"
// Member `operator_messages`
#include "bosdyn_msgs/msg/detail/log_annotation_operator_message__functions.h"
// Member `blob_data`
#include "bosdyn_msgs/msg/detail/log_annotation_log_blob__functions.h"

bool
bosdyn_msgs__msg__LogAnnotations__init(bosdyn_msgs__msg__LogAnnotations * msg)
{
  if (!msg) {
    return false;
  }
  // text_messages
  if (!bosdyn_msgs__msg__LogAnnotationTextMessage__Sequence__init(&msg->text_messages, 0)) {
    bosdyn_msgs__msg__LogAnnotations__fini(msg);
    return false;
  }
  // operator_messages
  if (!bosdyn_msgs__msg__LogAnnotationOperatorMessage__Sequence__init(&msg->operator_messages, 0)) {
    bosdyn_msgs__msg__LogAnnotations__fini(msg);
    return false;
  }
  // blob_data
  if (!bosdyn_msgs__msg__LogAnnotationLogBlob__Sequence__init(&msg->blob_data, 0)) {
    bosdyn_msgs__msg__LogAnnotations__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__LogAnnotations__fini(bosdyn_msgs__msg__LogAnnotations * msg)
{
  if (!msg) {
    return;
  }
  // text_messages
  bosdyn_msgs__msg__LogAnnotationTextMessage__Sequence__fini(&msg->text_messages);
  // operator_messages
  bosdyn_msgs__msg__LogAnnotationOperatorMessage__Sequence__fini(&msg->operator_messages);
  // blob_data
  bosdyn_msgs__msg__LogAnnotationLogBlob__Sequence__fini(&msg->blob_data);
}

bool
bosdyn_msgs__msg__LogAnnotations__are_equal(const bosdyn_msgs__msg__LogAnnotations * lhs, const bosdyn_msgs__msg__LogAnnotations * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // text_messages
  if (!bosdyn_msgs__msg__LogAnnotationTextMessage__Sequence__are_equal(
      &(lhs->text_messages), &(rhs->text_messages)))
  {
    return false;
  }
  // operator_messages
  if (!bosdyn_msgs__msg__LogAnnotationOperatorMessage__Sequence__are_equal(
      &(lhs->operator_messages), &(rhs->operator_messages)))
  {
    return false;
  }
  // blob_data
  if (!bosdyn_msgs__msg__LogAnnotationLogBlob__Sequence__are_equal(
      &(lhs->blob_data), &(rhs->blob_data)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__LogAnnotations__copy(
  const bosdyn_msgs__msg__LogAnnotations * input,
  bosdyn_msgs__msg__LogAnnotations * output)
{
  if (!input || !output) {
    return false;
  }
  // text_messages
  if (!bosdyn_msgs__msg__LogAnnotationTextMessage__Sequence__copy(
      &(input->text_messages), &(output->text_messages)))
  {
    return false;
  }
  // operator_messages
  if (!bosdyn_msgs__msg__LogAnnotationOperatorMessage__Sequence__copy(
      &(input->operator_messages), &(output->operator_messages)))
  {
    return false;
  }
  // blob_data
  if (!bosdyn_msgs__msg__LogAnnotationLogBlob__Sequence__copy(
      &(input->blob_data), &(output->blob_data)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__LogAnnotations *
bosdyn_msgs__msg__LogAnnotations__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__LogAnnotations * msg = (bosdyn_msgs__msg__LogAnnotations *)allocator.allocate(sizeof(bosdyn_msgs__msg__LogAnnotations), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__LogAnnotations));
  bool success = bosdyn_msgs__msg__LogAnnotations__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__LogAnnotations__destroy(bosdyn_msgs__msg__LogAnnotations * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__LogAnnotations__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__LogAnnotations__Sequence__init(bosdyn_msgs__msg__LogAnnotations__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__LogAnnotations * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__LogAnnotations *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__LogAnnotations), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__LogAnnotations__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__LogAnnotations__fini(&data[i - 1]);
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
bosdyn_msgs__msg__LogAnnotations__Sequence__fini(bosdyn_msgs__msg__LogAnnotations__Sequence * array)
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
      bosdyn_msgs__msg__LogAnnotations__fini(&array->data[i]);
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

bosdyn_msgs__msg__LogAnnotations__Sequence *
bosdyn_msgs__msg__LogAnnotations__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__LogAnnotations__Sequence * array = (bosdyn_msgs__msg__LogAnnotations__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__LogAnnotations__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__LogAnnotations__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__LogAnnotations__Sequence__destroy(bosdyn_msgs__msg__LogAnnotations__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__LogAnnotations__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__LogAnnotations__Sequence__are_equal(const bosdyn_msgs__msg__LogAnnotations__Sequence * lhs, const bosdyn_msgs__msg__LogAnnotations__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__LogAnnotations__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__LogAnnotations__Sequence__copy(
  const bosdyn_msgs__msg__LogAnnotations__Sequence * input,
  bosdyn_msgs__msg__LogAnnotations__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__LogAnnotations);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__LogAnnotations * data =
      (bosdyn_msgs__msg__LogAnnotations *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__LogAnnotations__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__LogAnnotations__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__LogAnnotations__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
