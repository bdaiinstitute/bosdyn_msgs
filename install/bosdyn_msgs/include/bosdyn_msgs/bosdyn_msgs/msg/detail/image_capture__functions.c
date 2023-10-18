// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/ImageCapture.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/image_capture__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `acquisition_time`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `transforms_snapshot`
#include "bosdyn_msgs/msg/detail/frame_tree_snapshot__functions.h"
// Member `frame_name_image_sensor`
#include "rosidl_runtime_c/string_functions.h"
// Member `image`
#include "bosdyn_msgs/msg/detail/image__functions.h"
// Member `capture_params`
#include "bosdyn_msgs/msg/detail/capture_parameters__functions.h"

bool
bosdyn_msgs__msg__ImageCapture__init(bosdyn_msgs__msg__ImageCapture * msg)
{
  if (!msg) {
    return false;
  }
  // acquisition_time
  if (!builtin_interfaces__msg__Time__init(&msg->acquisition_time)) {
    bosdyn_msgs__msg__ImageCapture__fini(msg);
    return false;
  }
  // acquisition_time_is_set
  // transforms_snapshot
  if (!bosdyn_msgs__msg__FrameTreeSnapshot__init(&msg->transforms_snapshot)) {
    bosdyn_msgs__msg__ImageCapture__fini(msg);
    return false;
  }
  // transforms_snapshot_is_set
  // frame_name_image_sensor
  if (!rosidl_runtime_c__String__init(&msg->frame_name_image_sensor)) {
    bosdyn_msgs__msg__ImageCapture__fini(msg);
    return false;
  }
  // image
  if (!bosdyn_msgs__msg__Image__init(&msg->image)) {
    bosdyn_msgs__msg__ImageCapture__fini(msg);
    return false;
  }
  // image_is_set
  // capture_params
  if (!bosdyn_msgs__msg__CaptureParameters__init(&msg->capture_params)) {
    bosdyn_msgs__msg__ImageCapture__fini(msg);
    return false;
  }
  // capture_params_is_set
  return true;
}

void
bosdyn_msgs__msg__ImageCapture__fini(bosdyn_msgs__msg__ImageCapture * msg)
{
  if (!msg) {
    return;
  }
  // acquisition_time
  builtin_interfaces__msg__Time__fini(&msg->acquisition_time);
  // acquisition_time_is_set
  // transforms_snapshot
  bosdyn_msgs__msg__FrameTreeSnapshot__fini(&msg->transforms_snapshot);
  // transforms_snapshot_is_set
  // frame_name_image_sensor
  rosidl_runtime_c__String__fini(&msg->frame_name_image_sensor);
  // image
  bosdyn_msgs__msg__Image__fini(&msg->image);
  // image_is_set
  // capture_params
  bosdyn_msgs__msg__CaptureParameters__fini(&msg->capture_params);
  // capture_params_is_set
}

bool
bosdyn_msgs__msg__ImageCapture__are_equal(const bosdyn_msgs__msg__ImageCapture * lhs, const bosdyn_msgs__msg__ImageCapture * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // acquisition_time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->acquisition_time), &(rhs->acquisition_time)))
  {
    return false;
  }
  // acquisition_time_is_set
  if (lhs->acquisition_time_is_set != rhs->acquisition_time_is_set) {
    return false;
  }
  // transforms_snapshot
  if (!bosdyn_msgs__msg__FrameTreeSnapshot__are_equal(
      &(lhs->transforms_snapshot), &(rhs->transforms_snapshot)))
  {
    return false;
  }
  // transforms_snapshot_is_set
  if (lhs->transforms_snapshot_is_set != rhs->transforms_snapshot_is_set) {
    return false;
  }
  // frame_name_image_sensor
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->frame_name_image_sensor), &(rhs->frame_name_image_sensor)))
  {
    return false;
  }
  // image
  if (!bosdyn_msgs__msg__Image__are_equal(
      &(lhs->image), &(rhs->image)))
  {
    return false;
  }
  // image_is_set
  if (lhs->image_is_set != rhs->image_is_set) {
    return false;
  }
  // capture_params
  if (!bosdyn_msgs__msg__CaptureParameters__are_equal(
      &(lhs->capture_params), &(rhs->capture_params)))
  {
    return false;
  }
  // capture_params_is_set
  if (lhs->capture_params_is_set != rhs->capture_params_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__ImageCapture__copy(
  const bosdyn_msgs__msg__ImageCapture * input,
  bosdyn_msgs__msg__ImageCapture * output)
{
  if (!input || !output) {
    return false;
  }
  // acquisition_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->acquisition_time), &(output->acquisition_time)))
  {
    return false;
  }
  // acquisition_time_is_set
  output->acquisition_time_is_set = input->acquisition_time_is_set;
  // transforms_snapshot
  if (!bosdyn_msgs__msg__FrameTreeSnapshot__copy(
      &(input->transforms_snapshot), &(output->transforms_snapshot)))
  {
    return false;
  }
  // transforms_snapshot_is_set
  output->transforms_snapshot_is_set = input->transforms_snapshot_is_set;
  // frame_name_image_sensor
  if (!rosidl_runtime_c__String__copy(
      &(input->frame_name_image_sensor), &(output->frame_name_image_sensor)))
  {
    return false;
  }
  // image
  if (!bosdyn_msgs__msg__Image__copy(
      &(input->image), &(output->image)))
  {
    return false;
  }
  // image_is_set
  output->image_is_set = input->image_is_set;
  // capture_params
  if (!bosdyn_msgs__msg__CaptureParameters__copy(
      &(input->capture_params), &(output->capture_params)))
  {
    return false;
  }
  // capture_params_is_set
  output->capture_params_is_set = input->capture_params_is_set;
  return true;
}

bosdyn_msgs__msg__ImageCapture *
bosdyn_msgs__msg__ImageCapture__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ImageCapture * msg = (bosdyn_msgs__msg__ImageCapture *)allocator.allocate(sizeof(bosdyn_msgs__msg__ImageCapture), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__ImageCapture));
  bool success = bosdyn_msgs__msg__ImageCapture__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__ImageCapture__destroy(bosdyn_msgs__msg__ImageCapture * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__ImageCapture__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__ImageCapture__Sequence__init(bosdyn_msgs__msg__ImageCapture__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ImageCapture * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__ImageCapture *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__ImageCapture), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__ImageCapture__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__ImageCapture__fini(&data[i - 1]);
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
bosdyn_msgs__msg__ImageCapture__Sequence__fini(bosdyn_msgs__msg__ImageCapture__Sequence * array)
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
      bosdyn_msgs__msg__ImageCapture__fini(&array->data[i]);
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

bosdyn_msgs__msg__ImageCapture__Sequence *
bosdyn_msgs__msg__ImageCapture__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ImageCapture__Sequence * array = (bosdyn_msgs__msg__ImageCapture__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__ImageCapture__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__ImageCapture__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__ImageCapture__Sequence__destroy(bosdyn_msgs__msg__ImageCapture__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__ImageCapture__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__ImageCapture__Sequence__are_equal(const bosdyn_msgs__msg__ImageCapture__Sequence * lhs, const bosdyn_msgs__msg__ImageCapture__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__ImageCapture__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__ImageCapture__Sequence__copy(
  const bosdyn_msgs__msg__ImageCapture__Sequence * input,
  bosdyn_msgs__msg__ImageCapture__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__ImageCapture);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__ImageCapture * data =
      (bosdyn_msgs__msg__ImageCapture *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__ImageCapture__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__ImageCapture__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__ImageCapture__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
