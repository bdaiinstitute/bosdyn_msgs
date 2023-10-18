// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/ActionDataAcquisition.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/action_data_acquisition__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `acquire_data_request`
#include "bosdyn_msgs/msg/detail/acquire_data_request__functions.h"
// Member `completion_behavior`
#include "bosdyn_msgs/msg/detail/data_acquisition_completion_behavior__functions.h"
// Member `last_known_capabilities`
#include "bosdyn_msgs/msg/detail/acquisition_capability_list__functions.h"
// Member `record_time_images`
#include "bosdyn_msgs/msg/detail/image_capture_and_source__functions.h"

bool
bosdyn_msgs__msg__ActionDataAcquisition__init(bosdyn_msgs__msg__ActionDataAcquisition * msg)
{
  if (!msg) {
    return false;
  }
  // acquire_data_request
  if (!bosdyn_msgs__msg__AcquireDataRequest__init(&msg->acquire_data_request)) {
    bosdyn_msgs__msg__ActionDataAcquisition__fini(msg);
    return false;
  }
  // acquire_data_request_is_set
  // completion_behavior
  if (!bosdyn_msgs__msg__DataAcquisitionCompletionBehavior__init(&msg->completion_behavior)) {
    bosdyn_msgs__msg__ActionDataAcquisition__fini(msg);
    return false;
  }
  // last_known_capabilities
  if (!bosdyn_msgs__msg__AcquisitionCapabilityList__init(&msg->last_known_capabilities)) {
    bosdyn_msgs__msg__ActionDataAcquisition__fini(msg);
    return false;
  }
  // last_known_capabilities_is_set
  // record_time_images
  if (!bosdyn_msgs__msg__ImageCaptureAndSource__Sequence__init(&msg->record_time_images, 0)) {
    bosdyn_msgs__msg__ActionDataAcquisition__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__ActionDataAcquisition__fini(bosdyn_msgs__msg__ActionDataAcquisition * msg)
{
  if (!msg) {
    return;
  }
  // acquire_data_request
  bosdyn_msgs__msg__AcquireDataRequest__fini(&msg->acquire_data_request);
  // acquire_data_request_is_set
  // completion_behavior
  bosdyn_msgs__msg__DataAcquisitionCompletionBehavior__fini(&msg->completion_behavior);
  // last_known_capabilities
  bosdyn_msgs__msg__AcquisitionCapabilityList__fini(&msg->last_known_capabilities);
  // last_known_capabilities_is_set
  // record_time_images
  bosdyn_msgs__msg__ImageCaptureAndSource__Sequence__fini(&msg->record_time_images);
}

bool
bosdyn_msgs__msg__ActionDataAcquisition__are_equal(const bosdyn_msgs__msg__ActionDataAcquisition * lhs, const bosdyn_msgs__msg__ActionDataAcquisition * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // acquire_data_request
  if (!bosdyn_msgs__msg__AcquireDataRequest__are_equal(
      &(lhs->acquire_data_request), &(rhs->acquire_data_request)))
  {
    return false;
  }
  // acquire_data_request_is_set
  if (lhs->acquire_data_request_is_set != rhs->acquire_data_request_is_set) {
    return false;
  }
  // completion_behavior
  if (!bosdyn_msgs__msg__DataAcquisitionCompletionBehavior__are_equal(
      &(lhs->completion_behavior), &(rhs->completion_behavior)))
  {
    return false;
  }
  // last_known_capabilities
  if (!bosdyn_msgs__msg__AcquisitionCapabilityList__are_equal(
      &(lhs->last_known_capabilities), &(rhs->last_known_capabilities)))
  {
    return false;
  }
  // last_known_capabilities_is_set
  if (lhs->last_known_capabilities_is_set != rhs->last_known_capabilities_is_set) {
    return false;
  }
  // record_time_images
  if (!bosdyn_msgs__msg__ImageCaptureAndSource__Sequence__are_equal(
      &(lhs->record_time_images), &(rhs->record_time_images)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__ActionDataAcquisition__copy(
  const bosdyn_msgs__msg__ActionDataAcquisition * input,
  bosdyn_msgs__msg__ActionDataAcquisition * output)
{
  if (!input || !output) {
    return false;
  }
  // acquire_data_request
  if (!bosdyn_msgs__msg__AcquireDataRequest__copy(
      &(input->acquire_data_request), &(output->acquire_data_request)))
  {
    return false;
  }
  // acquire_data_request_is_set
  output->acquire_data_request_is_set = input->acquire_data_request_is_set;
  // completion_behavior
  if (!bosdyn_msgs__msg__DataAcquisitionCompletionBehavior__copy(
      &(input->completion_behavior), &(output->completion_behavior)))
  {
    return false;
  }
  // last_known_capabilities
  if (!bosdyn_msgs__msg__AcquisitionCapabilityList__copy(
      &(input->last_known_capabilities), &(output->last_known_capabilities)))
  {
    return false;
  }
  // last_known_capabilities_is_set
  output->last_known_capabilities_is_set = input->last_known_capabilities_is_set;
  // record_time_images
  if (!bosdyn_msgs__msg__ImageCaptureAndSource__Sequence__copy(
      &(input->record_time_images), &(output->record_time_images)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__ActionDataAcquisition *
bosdyn_msgs__msg__ActionDataAcquisition__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ActionDataAcquisition * msg = (bosdyn_msgs__msg__ActionDataAcquisition *)allocator.allocate(sizeof(bosdyn_msgs__msg__ActionDataAcquisition), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__ActionDataAcquisition));
  bool success = bosdyn_msgs__msg__ActionDataAcquisition__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__ActionDataAcquisition__destroy(bosdyn_msgs__msg__ActionDataAcquisition * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__ActionDataAcquisition__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__ActionDataAcquisition__Sequence__init(bosdyn_msgs__msg__ActionDataAcquisition__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ActionDataAcquisition * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__ActionDataAcquisition *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__ActionDataAcquisition), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__ActionDataAcquisition__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__ActionDataAcquisition__fini(&data[i - 1]);
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
bosdyn_msgs__msg__ActionDataAcquisition__Sequence__fini(bosdyn_msgs__msg__ActionDataAcquisition__Sequence * array)
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
      bosdyn_msgs__msg__ActionDataAcquisition__fini(&array->data[i]);
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

bosdyn_msgs__msg__ActionDataAcquisition__Sequence *
bosdyn_msgs__msg__ActionDataAcquisition__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ActionDataAcquisition__Sequence * array = (bosdyn_msgs__msg__ActionDataAcquisition__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__ActionDataAcquisition__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__ActionDataAcquisition__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__ActionDataAcquisition__Sequence__destroy(bosdyn_msgs__msg__ActionDataAcquisition__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__ActionDataAcquisition__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__ActionDataAcquisition__Sequence__are_equal(const bosdyn_msgs__msg__ActionDataAcquisition__Sequence * lhs, const bosdyn_msgs__msg__ActionDataAcquisition__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__ActionDataAcquisition__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__ActionDataAcquisition__Sequence__copy(
  const bosdyn_msgs__msg__ActionDataAcquisition__Sequence * input,
  bosdyn_msgs__msg__ActionDataAcquisition__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__ActionDataAcquisition);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__ActionDataAcquisition * data =
      (bosdyn_msgs__msg__ActionDataAcquisition *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__ActionDataAcquisition__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__ActionDataAcquisition__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__ActionDataAcquisition__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
