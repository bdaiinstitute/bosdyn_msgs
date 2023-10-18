// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/OutputImage.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/output_image__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `image_response`
#include "bosdyn_msgs/msg/detail/image_response__functions.h"
// Member `object_in_image`
#include "bosdyn_msgs/msg/detail/world_object__functions.h"
// Member `alert_data`
#include "bosdyn_msgs/msg/detail/alert_data__functions.h"

bool
bosdyn_msgs__msg__OutputImage__init(bosdyn_msgs__msg__OutputImage * msg)
{
  if (!msg) {
    return false;
  }
  // image_response
  if (!bosdyn_msgs__msg__ImageResponse__init(&msg->image_response)) {
    bosdyn_msgs__msg__OutputImage__fini(msg);
    return false;
  }
  // image_response_is_set
  // object_in_image
  if (!bosdyn_msgs__msg__WorldObject__Sequence__init(&msg->object_in_image, 0)) {
    bosdyn_msgs__msg__OutputImage__fini(msg);
    return false;
  }
  // alert_data
  if (!bosdyn_msgs__msg__AlertData__init(&msg->alert_data)) {
    bosdyn_msgs__msg__OutputImage__fini(msg);
    return false;
  }
  // alert_data_is_set
  return true;
}

void
bosdyn_msgs__msg__OutputImage__fini(bosdyn_msgs__msg__OutputImage * msg)
{
  if (!msg) {
    return;
  }
  // image_response
  bosdyn_msgs__msg__ImageResponse__fini(&msg->image_response);
  // image_response_is_set
  // object_in_image
  bosdyn_msgs__msg__WorldObject__Sequence__fini(&msg->object_in_image);
  // alert_data
  bosdyn_msgs__msg__AlertData__fini(&msg->alert_data);
  // alert_data_is_set
}

bool
bosdyn_msgs__msg__OutputImage__are_equal(const bosdyn_msgs__msg__OutputImage * lhs, const bosdyn_msgs__msg__OutputImage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // image_response
  if (!bosdyn_msgs__msg__ImageResponse__are_equal(
      &(lhs->image_response), &(rhs->image_response)))
  {
    return false;
  }
  // image_response_is_set
  if (lhs->image_response_is_set != rhs->image_response_is_set) {
    return false;
  }
  // object_in_image
  if (!bosdyn_msgs__msg__WorldObject__Sequence__are_equal(
      &(lhs->object_in_image), &(rhs->object_in_image)))
  {
    return false;
  }
  // alert_data
  if (!bosdyn_msgs__msg__AlertData__are_equal(
      &(lhs->alert_data), &(rhs->alert_data)))
  {
    return false;
  }
  // alert_data_is_set
  if (lhs->alert_data_is_set != rhs->alert_data_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__OutputImage__copy(
  const bosdyn_msgs__msg__OutputImage * input,
  bosdyn_msgs__msg__OutputImage * output)
{
  if (!input || !output) {
    return false;
  }
  // image_response
  if (!bosdyn_msgs__msg__ImageResponse__copy(
      &(input->image_response), &(output->image_response)))
  {
    return false;
  }
  // image_response_is_set
  output->image_response_is_set = input->image_response_is_set;
  // object_in_image
  if (!bosdyn_msgs__msg__WorldObject__Sequence__copy(
      &(input->object_in_image), &(output->object_in_image)))
  {
    return false;
  }
  // alert_data
  if (!bosdyn_msgs__msg__AlertData__copy(
      &(input->alert_data), &(output->alert_data)))
  {
    return false;
  }
  // alert_data_is_set
  output->alert_data_is_set = input->alert_data_is_set;
  return true;
}

bosdyn_msgs__msg__OutputImage *
bosdyn_msgs__msg__OutputImage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__OutputImage * msg = (bosdyn_msgs__msg__OutputImage *)allocator.allocate(sizeof(bosdyn_msgs__msg__OutputImage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__OutputImage));
  bool success = bosdyn_msgs__msg__OutputImage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__OutputImage__destroy(bosdyn_msgs__msg__OutputImage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__OutputImage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__OutputImage__Sequence__init(bosdyn_msgs__msg__OutputImage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__OutputImage * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__OutputImage *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__OutputImage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__OutputImage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__OutputImage__fini(&data[i - 1]);
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
bosdyn_msgs__msg__OutputImage__Sequence__fini(bosdyn_msgs__msg__OutputImage__Sequence * array)
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
      bosdyn_msgs__msg__OutputImage__fini(&array->data[i]);
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

bosdyn_msgs__msg__OutputImage__Sequence *
bosdyn_msgs__msg__OutputImage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__OutputImage__Sequence * array = (bosdyn_msgs__msg__OutputImage__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__OutputImage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__OutputImage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__OutputImage__Sequence__destroy(bosdyn_msgs__msg__OutputImage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__OutputImage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__OutputImage__Sequence__are_equal(const bosdyn_msgs__msg__OutputImage__Sequence * lhs, const bosdyn_msgs__msg__OutputImage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__OutputImage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__OutputImage__Sequence__copy(
  const bosdyn_msgs__msg__OutputImage__Sequence * input,
  bosdyn_msgs__msg__OutputImage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__OutputImage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__OutputImage * data =
      (bosdyn_msgs__msg__OutputImage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__OutputImage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__OutputImage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__OutputImage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
