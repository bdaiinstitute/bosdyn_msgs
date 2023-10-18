// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/ImageProperties.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/image_properties__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `camera_source`
// Member `frame_name_image_coordinates`
#include "rosidl_runtime_c/string_functions.h"
// Member `image_data`
#include "bosdyn_msgs/msg/detail/image_properties_one_of_image_data__functions.h"
// Member `image_source`
#include "bosdyn_msgs/msg/detail/image_source__functions.h"
// Member `image_capture`
#include "bosdyn_msgs/msg/detail/image_capture__functions.h"

bool
bosdyn_msgs__msg__ImageProperties__init(bosdyn_msgs__msg__ImageProperties * msg)
{
  if (!msg) {
    return false;
  }
  // camera_source
  if (!rosidl_runtime_c__String__init(&msg->camera_source)) {
    bosdyn_msgs__msg__ImageProperties__fini(msg);
    return false;
  }
  // image_data
  if (!bosdyn_msgs__msg__ImagePropertiesOneOfImageData__init(&msg->image_data)) {
    bosdyn_msgs__msg__ImageProperties__fini(msg);
    return false;
  }
  // image_source
  if (!bosdyn_msgs__msg__ImageSource__init(&msg->image_source)) {
    bosdyn_msgs__msg__ImageProperties__fini(msg);
    return false;
  }
  // image_source_is_set
  // image_capture
  if (!bosdyn_msgs__msg__ImageCapture__init(&msg->image_capture)) {
    bosdyn_msgs__msg__ImageProperties__fini(msg);
    return false;
  }
  // image_capture_is_set
  // frame_name_image_coordinates
  if (!rosidl_runtime_c__String__init(&msg->frame_name_image_coordinates)) {
    bosdyn_msgs__msg__ImageProperties__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__ImageProperties__fini(bosdyn_msgs__msg__ImageProperties * msg)
{
  if (!msg) {
    return;
  }
  // camera_source
  rosidl_runtime_c__String__fini(&msg->camera_source);
  // image_data
  bosdyn_msgs__msg__ImagePropertiesOneOfImageData__fini(&msg->image_data);
  // image_source
  bosdyn_msgs__msg__ImageSource__fini(&msg->image_source);
  // image_source_is_set
  // image_capture
  bosdyn_msgs__msg__ImageCapture__fini(&msg->image_capture);
  // image_capture_is_set
  // frame_name_image_coordinates
  rosidl_runtime_c__String__fini(&msg->frame_name_image_coordinates);
}

bool
bosdyn_msgs__msg__ImageProperties__are_equal(const bosdyn_msgs__msg__ImageProperties * lhs, const bosdyn_msgs__msg__ImageProperties * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // camera_source
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->camera_source), &(rhs->camera_source)))
  {
    return false;
  }
  // image_data
  if (!bosdyn_msgs__msg__ImagePropertiesOneOfImageData__are_equal(
      &(lhs->image_data), &(rhs->image_data)))
  {
    return false;
  }
  // image_source
  if (!bosdyn_msgs__msg__ImageSource__are_equal(
      &(lhs->image_source), &(rhs->image_source)))
  {
    return false;
  }
  // image_source_is_set
  if (lhs->image_source_is_set != rhs->image_source_is_set) {
    return false;
  }
  // image_capture
  if (!bosdyn_msgs__msg__ImageCapture__are_equal(
      &(lhs->image_capture), &(rhs->image_capture)))
  {
    return false;
  }
  // image_capture_is_set
  if (lhs->image_capture_is_set != rhs->image_capture_is_set) {
    return false;
  }
  // frame_name_image_coordinates
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->frame_name_image_coordinates), &(rhs->frame_name_image_coordinates)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__ImageProperties__copy(
  const bosdyn_msgs__msg__ImageProperties * input,
  bosdyn_msgs__msg__ImageProperties * output)
{
  if (!input || !output) {
    return false;
  }
  // camera_source
  if (!rosidl_runtime_c__String__copy(
      &(input->camera_source), &(output->camera_source)))
  {
    return false;
  }
  // image_data
  if (!bosdyn_msgs__msg__ImagePropertiesOneOfImageData__copy(
      &(input->image_data), &(output->image_data)))
  {
    return false;
  }
  // image_source
  if (!bosdyn_msgs__msg__ImageSource__copy(
      &(input->image_source), &(output->image_source)))
  {
    return false;
  }
  // image_source_is_set
  output->image_source_is_set = input->image_source_is_set;
  // image_capture
  if (!bosdyn_msgs__msg__ImageCapture__copy(
      &(input->image_capture), &(output->image_capture)))
  {
    return false;
  }
  // image_capture_is_set
  output->image_capture_is_set = input->image_capture_is_set;
  // frame_name_image_coordinates
  if (!rosidl_runtime_c__String__copy(
      &(input->frame_name_image_coordinates), &(output->frame_name_image_coordinates)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__ImageProperties *
bosdyn_msgs__msg__ImageProperties__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ImageProperties * msg = (bosdyn_msgs__msg__ImageProperties *)allocator.allocate(sizeof(bosdyn_msgs__msg__ImageProperties), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__ImageProperties));
  bool success = bosdyn_msgs__msg__ImageProperties__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__ImageProperties__destroy(bosdyn_msgs__msg__ImageProperties * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__ImageProperties__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__ImageProperties__Sequence__init(bosdyn_msgs__msg__ImageProperties__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ImageProperties * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__ImageProperties *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__ImageProperties), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__ImageProperties__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__ImageProperties__fini(&data[i - 1]);
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
bosdyn_msgs__msg__ImageProperties__Sequence__fini(bosdyn_msgs__msg__ImageProperties__Sequence * array)
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
      bosdyn_msgs__msg__ImageProperties__fini(&array->data[i]);
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

bosdyn_msgs__msg__ImageProperties__Sequence *
bosdyn_msgs__msg__ImageProperties__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ImageProperties__Sequence * array = (bosdyn_msgs__msg__ImageProperties__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__ImageProperties__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__ImageProperties__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__ImageProperties__Sequence__destroy(bosdyn_msgs__msg__ImageProperties__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__ImageProperties__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__ImageProperties__Sequence__are_equal(const bosdyn_msgs__msg__ImageProperties__Sequence * lhs, const bosdyn_msgs__msg__ImageProperties__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__ImageProperties__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__ImageProperties__Sequence__copy(
  const bosdyn_msgs__msg__ImageProperties__Sequence * input,
  bosdyn_msgs__msg__ImageProperties__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__ImageProperties);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__ImageProperties * data =
      (bosdyn_msgs__msg__ImageProperties *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__ImageProperties__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__ImageProperties__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__ImageProperties__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
