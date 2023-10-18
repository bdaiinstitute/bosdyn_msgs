// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/ImageResponse.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/image_response__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `shot`
#include "bosdyn_msgs/msg/detail/image_capture__functions.h"
// Member `source`
#include "bosdyn_msgs/msg/detail/image_source__functions.h"
// Member `status`
#include "bosdyn_msgs/msg/detail/image_response_status__functions.h"
// Member `custom_param_error`
#include "bosdyn_msgs/msg/detail/custom_param_error__functions.h"

bool
bosdyn_msgs__msg__ImageResponse__init(bosdyn_msgs__msg__ImageResponse * msg)
{
  if (!msg) {
    return false;
  }
  // shot
  if (!bosdyn_msgs__msg__ImageCapture__init(&msg->shot)) {
    bosdyn_msgs__msg__ImageResponse__fini(msg);
    return false;
  }
  // shot_is_set
  // source
  if (!bosdyn_msgs__msg__ImageSource__init(&msg->source)) {
    bosdyn_msgs__msg__ImageResponse__fini(msg);
    return false;
  }
  // source_is_set
  // status
  if (!bosdyn_msgs__msg__ImageResponseStatus__init(&msg->status)) {
    bosdyn_msgs__msg__ImageResponse__fini(msg);
    return false;
  }
  // custom_param_error
  if (!bosdyn_msgs__msg__CustomParamError__init(&msg->custom_param_error)) {
    bosdyn_msgs__msg__ImageResponse__fini(msg);
    return false;
  }
  // custom_param_error_is_set
  return true;
}

void
bosdyn_msgs__msg__ImageResponse__fini(bosdyn_msgs__msg__ImageResponse * msg)
{
  if (!msg) {
    return;
  }
  // shot
  bosdyn_msgs__msg__ImageCapture__fini(&msg->shot);
  // shot_is_set
  // source
  bosdyn_msgs__msg__ImageSource__fini(&msg->source);
  // source_is_set
  // status
  bosdyn_msgs__msg__ImageResponseStatus__fini(&msg->status);
  // custom_param_error
  bosdyn_msgs__msg__CustomParamError__fini(&msg->custom_param_error);
  // custom_param_error_is_set
}

bool
bosdyn_msgs__msg__ImageResponse__are_equal(const bosdyn_msgs__msg__ImageResponse * lhs, const bosdyn_msgs__msg__ImageResponse * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // shot
  if (!bosdyn_msgs__msg__ImageCapture__are_equal(
      &(lhs->shot), &(rhs->shot)))
  {
    return false;
  }
  // shot_is_set
  if (lhs->shot_is_set != rhs->shot_is_set) {
    return false;
  }
  // source
  if (!bosdyn_msgs__msg__ImageSource__are_equal(
      &(lhs->source), &(rhs->source)))
  {
    return false;
  }
  // source_is_set
  if (lhs->source_is_set != rhs->source_is_set) {
    return false;
  }
  // status
  if (!bosdyn_msgs__msg__ImageResponseStatus__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  // custom_param_error
  if (!bosdyn_msgs__msg__CustomParamError__are_equal(
      &(lhs->custom_param_error), &(rhs->custom_param_error)))
  {
    return false;
  }
  // custom_param_error_is_set
  if (lhs->custom_param_error_is_set != rhs->custom_param_error_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__ImageResponse__copy(
  const bosdyn_msgs__msg__ImageResponse * input,
  bosdyn_msgs__msg__ImageResponse * output)
{
  if (!input || !output) {
    return false;
  }
  // shot
  if (!bosdyn_msgs__msg__ImageCapture__copy(
      &(input->shot), &(output->shot)))
  {
    return false;
  }
  // shot_is_set
  output->shot_is_set = input->shot_is_set;
  // source
  if (!bosdyn_msgs__msg__ImageSource__copy(
      &(input->source), &(output->source)))
  {
    return false;
  }
  // source_is_set
  output->source_is_set = input->source_is_set;
  // status
  if (!bosdyn_msgs__msg__ImageResponseStatus__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  // custom_param_error
  if (!bosdyn_msgs__msg__CustomParamError__copy(
      &(input->custom_param_error), &(output->custom_param_error)))
  {
    return false;
  }
  // custom_param_error_is_set
  output->custom_param_error_is_set = input->custom_param_error_is_set;
  return true;
}

bosdyn_msgs__msg__ImageResponse *
bosdyn_msgs__msg__ImageResponse__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ImageResponse * msg = (bosdyn_msgs__msg__ImageResponse *)allocator.allocate(sizeof(bosdyn_msgs__msg__ImageResponse), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__ImageResponse));
  bool success = bosdyn_msgs__msg__ImageResponse__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__ImageResponse__destroy(bosdyn_msgs__msg__ImageResponse * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__ImageResponse__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__ImageResponse__Sequence__init(bosdyn_msgs__msg__ImageResponse__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ImageResponse * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__ImageResponse *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__ImageResponse), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__ImageResponse__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__ImageResponse__fini(&data[i - 1]);
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
bosdyn_msgs__msg__ImageResponse__Sequence__fini(bosdyn_msgs__msg__ImageResponse__Sequence * array)
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
      bosdyn_msgs__msg__ImageResponse__fini(&array->data[i]);
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

bosdyn_msgs__msg__ImageResponse__Sequence *
bosdyn_msgs__msg__ImageResponse__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ImageResponse__Sequence * array = (bosdyn_msgs__msg__ImageResponse__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__ImageResponse__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__ImageResponse__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__ImageResponse__Sequence__destroy(bosdyn_msgs__msg__ImageResponse__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__ImageResponse__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__ImageResponse__Sequence__are_equal(const bosdyn_msgs__msg__ImageResponse__Sequence * lhs, const bosdyn_msgs__msg__ImageResponse__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__ImageResponse__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__ImageResponse__Sequence__copy(
  const bosdyn_msgs__msg__ImageResponse__Sequence * input,
  bosdyn_msgs__msg__ImageResponse__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__ImageResponse);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__ImageResponse * data =
      (bosdyn_msgs__msg__ImageResponse *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__ImageResponse__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__ImageResponse__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__ImageResponse__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
