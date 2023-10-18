// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/LogpointCalibration.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/logpoint_calibration__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `base_frame_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `base_tform_sensor`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `intrinsics`
#include "bosdyn_msgs/msg/detail/camera_pinhole_intrinsics__functions.h"

bool
bosdyn_msgs__msg__LogpointCalibration__init(bosdyn_msgs__msg__LogpointCalibration * msg)
{
  if (!msg) {
    return false;
  }
  // xoffset
  // yoffset
  // width
  // height
  // base_frame_name
  if (!rosidl_runtime_c__String__init(&msg->base_frame_name)) {
    bosdyn_msgs__msg__LogpointCalibration__fini(msg);
    return false;
  }
  // base_tform_sensor
  if (!geometry_msgs__msg__Pose__init(&msg->base_tform_sensor)) {
    bosdyn_msgs__msg__LogpointCalibration__fini(msg);
    return false;
  }
  // base_tform_sensor_is_set
  // intrinsics
  if (!bosdyn_msgs__msg__CameraPinholeIntrinsics__init(&msg->intrinsics)) {
    bosdyn_msgs__msg__LogpointCalibration__fini(msg);
    return false;
  }
  // intrinsics_is_set
  return true;
}

void
bosdyn_msgs__msg__LogpointCalibration__fini(bosdyn_msgs__msg__LogpointCalibration * msg)
{
  if (!msg) {
    return;
  }
  // xoffset
  // yoffset
  // width
  // height
  // base_frame_name
  rosidl_runtime_c__String__fini(&msg->base_frame_name);
  // base_tform_sensor
  geometry_msgs__msg__Pose__fini(&msg->base_tform_sensor);
  // base_tform_sensor_is_set
  // intrinsics
  bosdyn_msgs__msg__CameraPinholeIntrinsics__fini(&msg->intrinsics);
  // intrinsics_is_set
}

bool
bosdyn_msgs__msg__LogpointCalibration__are_equal(const bosdyn_msgs__msg__LogpointCalibration * lhs, const bosdyn_msgs__msg__LogpointCalibration * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // xoffset
  if (lhs->xoffset != rhs->xoffset) {
    return false;
  }
  // yoffset
  if (lhs->yoffset != rhs->yoffset) {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  // height
  if (lhs->height != rhs->height) {
    return false;
  }
  // base_frame_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->base_frame_name), &(rhs->base_frame_name)))
  {
    return false;
  }
  // base_tform_sensor
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->base_tform_sensor), &(rhs->base_tform_sensor)))
  {
    return false;
  }
  // base_tform_sensor_is_set
  if (lhs->base_tform_sensor_is_set != rhs->base_tform_sensor_is_set) {
    return false;
  }
  // intrinsics
  if (!bosdyn_msgs__msg__CameraPinholeIntrinsics__are_equal(
      &(lhs->intrinsics), &(rhs->intrinsics)))
  {
    return false;
  }
  // intrinsics_is_set
  if (lhs->intrinsics_is_set != rhs->intrinsics_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__LogpointCalibration__copy(
  const bosdyn_msgs__msg__LogpointCalibration * input,
  bosdyn_msgs__msg__LogpointCalibration * output)
{
  if (!input || !output) {
    return false;
  }
  // xoffset
  output->xoffset = input->xoffset;
  // yoffset
  output->yoffset = input->yoffset;
  // width
  output->width = input->width;
  // height
  output->height = input->height;
  // base_frame_name
  if (!rosidl_runtime_c__String__copy(
      &(input->base_frame_name), &(output->base_frame_name)))
  {
    return false;
  }
  // base_tform_sensor
  if (!geometry_msgs__msg__Pose__copy(
      &(input->base_tform_sensor), &(output->base_tform_sensor)))
  {
    return false;
  }
  // base_tform_sensor_is_set
  output->base_tform_sensor_is_set = input->base_tform_sensor_is_set;
  // intrinsics
  if (!bosdyn_msgs__msg__CameraPinholeIntrinsics__copy(
      &(input->intrinsics), &(output->intrinsics)))
  {
    return false;
  }
  // intrinsics_is_set
  output->intrinsics_is_set = input->intrinsics_is_set;
  return true;
}

bosdyn_msgs__msg__LogpointCalibration *
bosdyn_msgs__msg__LogpointCalibration__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__LogpointCalibration * msg = (bosdyn_msgs__msg__LogpointCalibration *)allocator.allocate(sizeof(bosdyn_msgs__msg__LogpointCalibration), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__LogpointCalibration));
  bool success = bosdyn_msgs__msg__LogpointCalibration__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__LogpointCalibration__destroy(bosdyn_msgs__msg__LogpointCalibration * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__LogpointCalibration__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__LogpointCalibration__Sequence__init(bosdyn_msgs__msg__LogpointCalibration__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__LogpointCalibration * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__LogpointCalibration *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__LogpointCalibration), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__LogpointCalibration__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__LogpointCalibration__fini(&data[i - 1]);
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
bosdyn_msgs__msg__LogpointCalibration__Sequence__fini(bosdyn_msgs__msg__LogpointCalibration__Sequence * array)
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
      bosdyn_msgs__msg__LogpointCalibration__fini(&array->data[i]);
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

bosdyn_msgs__msg__LogpointCalibration__Sequence *
bosdyn_msgs__msg__LogpointCalibration__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__LogpointCalibration__Sequence * array = (bosdyn_msgs__msg__LogpointCalibration__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__LogpointCalibration__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__LogpointCalibration__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__LogpointCalibration__Sequence__destroy(bosdyn_msgs__msg__LogpointCalibration__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__LogpointCalibration__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__LogpointCalibration__Sequence__are_equal(const bosdyn_msgs__msg__LogpointCalibration__Sequence * lhs, const bosdyn_msgs__msg__LogpointCalibration__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__LogpointCalibration__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__LogpointCalibration__Sequence__copy(
  const bosdyn_msgs__msg__LogpointCalibration__Sequence * input,
  bosdyn_msgs__msg__LogpointCalibration__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__LogpointCalibration);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__LogpointCalibration * data =
      (bosdyn_msgs__msg__LogpointCalibration *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__LogpointCalibration__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__LogpointCalibration__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__LogpointCalibration__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
