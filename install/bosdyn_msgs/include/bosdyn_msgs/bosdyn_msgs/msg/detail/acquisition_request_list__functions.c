// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/AcquisitionRequestList.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/acquisition_request_list__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `image_captures`
#include "bosdyn_msgs/msg/detail/image_source_capture__functions.h"
// Member `data_captures`
#include "bosdyn_msgs/msg/detail/data_capture__functions.h"
// Member `network_compute_captures`
#include "bosdyn_msgs/msg/detail/network_compute_capture__functions.h"

bool
bosdyn_msgs__msg__AcquisitionRequestList__init(bosdyn_msgs__msg__AcquisitionRequestList * msg)
{
  if (!msg) {
    return false;
  }
  // image_captures
  if (!bosdyn_msgs__msg__ImageSourceCapture__Sequence__init(&msg->image_captures, 0)) {
    bosdyn_msgs__msg__AcquisitionRequestList__fini(msg);
    return false;
  }
  // data_captures
  if (!bosdyn_msgs__msg__DataCapture__Sequence__init(&msg->data_captures, 0)) {
    bosdyn_msgs__msg__AcquisitionRequestList__fini(msg);
    return false;
  }
  // network_compute_captures
  if (!bosdyn_msgs__msg__NetworkComputeCapture__Sequence__init(&msg->network_compute_captures, 0)) {
    bosdyn_msgs__msg__AcquisitionRequestList__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__AcquisitionRequestList__fini(bosdyn_msgs__msg__AcquisitionRequestList * msg)
{
  if (!msg) {
    return;
  }
  // image_captures
  bosdyn_msgs__msg__ImageSourceCapture__Sequence__fini(&msg->image_captures);
  // data_captures
  bosdyn_msgs__msg__DataCapture__Sequence__fini(&msg->data_captures);
  // network_compute_captures
  bosdyn_msgs__msg__NetworkComputeCapture__Sequence__fini(&msg->network_compute_captures);
}

bool
bosdyn_msgs__msg__AcquisitionRequestList__are_equal(const bosdyn_msgs__msg__AcquisitionRequestList * lhs, const bosdyn_msgs__msg__AcquisitionRequestList * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // image_captures
  if (!bosdyn_msgs__msg__ImageSourceCapture__Sequence__are_equal(
      &(lhs->image_captures), &(rhs->image_captures)))
  {
    return false;
  }
  // data_captures
  if (!bosdyn_msgs__msg__DataCapture__Sequence__are_equal(
      &(lhs->data_captures), &(rhs->data_captures)))
  {
    return false;
  }
  // network_compute_captures
  if (!bosdyn_msgs__msg__NetworkComputeCapture__Sequence__are_equal(
      &(lhs->network_compute_captures), &(rhs->network_compute_captures)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__AcquisitionRequestList__copy(
  const bosdyn_msgs__msg__AcquisitionRequestList * input,
  bosdyn_msgs__msg__AcquisitionRequestList * output)
{
  if (!input || !output) {
    return false;
  }
  // image_captures
  if (!bosdyn_msgs__msg__ImageSourceCapture__Sequence__copy(
      &(input->image_captures), &(output->image_captures)))
  {
    return false;
  }
  // data_captures
  if (!bosdyn_msgs__msg__DataCapture__Sequence__copy(
      &(input->data_captures), &(output->data_captures)))
  {
    return false;
  }
  // network_compute_captures
  if (!bosdyn_msgs__msg__NetworkComputeCapture__Sequence__copy(
      &(input->network_compute_captures), &(output->network_compute_captures)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__AcquisitionRequestList *
bosdyn_msgs__msg__AcquisitionRequestList__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__AcquisitionRequestList * msg = (bosdyn_msgs__msg__AcquisitionRequestList *)allocator.allocate(sizeof(bosdyn_msgs__msg__AcquisitionRequestList), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__AcquisitionRequestList));
  bool success = bosdyn_msgs__msg__AcquisitionRequestList__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__AcquisitionRequestList__destroy(bosdyn_msgs__msg__AcquisitionRequestList * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__AcquisitionRequestList__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__AcquisitionRequestList__Sequence__init(bosdyn_msgs__msg__AcquisitionRequestList__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__AcquisitionRequestList * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__AcquisitionRequestList *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__AcquisitionRequestList), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__AcquisitionRequestList__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__AcquisitionRequestList__fini(&data[i - 1]);
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
bosdyn_msgs__msg__AcquisitionRequestList__Sequence__fini(bosdyn_msgs__msg__AcquisitionRequestList__Sequence * array)
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
      bosdyn_msgs__msg__AcquisitionRequestList__fini(&array->data[i]);
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

bosdyn_msgs__msg__AcquisitionRequestList__Sequence *
bosdyn_msgs__msg__AcquisitionRequestList__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__AcquisitionRequestList__Sequence * array = (bosdyn_msgs__msg__AcquisitionRequestList__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__AcquisitionRequestList__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__AcquisitionRequestList__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__AcquisitionRequestList__Sequence__destroy(bosdyn_msgs__msg__AcquisitionRequestList__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__AcquisitionRequestList__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__AcquisitionRequestList__Sequence__are_equal(const bosdyn_msgs__msg__AcquisitionRequestList__Sequence * lhs, const bosdyn_msgs__msg__AcquisitionRequestList__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__AcquisitionRequestList__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__AcquisitionRequestList__Sequence__copy(
  const bosdyn_msgs__msg__AcquisitionRequestList__Sequence * input,
  bosdyn_msgs__msg__AcquisitionRequestList__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__AcquisitionRequestList);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__AcquisitionRequestList * data =
      (bosdyn_msgs__msg__AcquisitionRequestList *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__AcquisitionRequestList__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__AcquisitionRequestList__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__AcquisitionRequestList__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
