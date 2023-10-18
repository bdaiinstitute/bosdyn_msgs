// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/Camera.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/camera__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `base_frame_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `resolution`
#include "bosdyn_msgs/msg/detail/vec2__functions.h"
// Member `base_tform_sensor`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `intrinsics`
#include "bosdyn_msgs/msg/detail/camera_one_of_intrinsics__functions.h"

bool
bosdyn_msgs__msg__Camera__init(bosdyn_msgs__msg__Camera * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    bosdyn_msgs__msg__Camera__fini(msg);
    return false;
  }
  // resolution
  if (!bosdyn_msgs__msg__Vec2__init(&msg->resolution)) {
    bosdyn_msgs__msg__Camera__fini(msg);
    return false;
  }
  // resolution_is_set
  // base_frame_name
  if (!rosidl_runtime_c__String__init(&msg->base_frame_name)) {
    bosdyn_msgs__msg__Camera__fini(msg);
    return false;
  }
  // base_tform_sensor
  if (!geometry_msgs__msg__Pose__init(&msg->base_tform_sensor)) {
    bosdyn_msgs__msg__Camera__fini(msg);
    return false;
  }
  // base_tform_sensor_is_set
  // intrinsics
  if (!bosdyn_msgs__msg__CameraOneOfIntrinsics__init(&msg->intrinsics)) {
    bosdyn_msgs__msg__Camera__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__Camera__fini(bosdyn_msgs__msg__Camera * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // resolution
  bosdyn_msgs__msg__Vec2__fini(&msg->resolution);
  // resolution_is_set
  // base_frame_name
  rosidl_runtime_c__String__fini(&msg->base_frame_name);
  // base_tform_sensor
  geometry_msgs__msg__Pose__fini(&msg->base_tform_sensor);
  // base_tform_sensor_is_set
  // intrinsics
  bosdyn_msgs__msg__CameraOneOfIntrinsics__fini(&msg->intrinsics);
}

bool
bosdyn_msgs__msg__Camera__are_equal(const bosdyn_msgs__msg__Camera * lhs, const bosdyn_msgs__msg__Camera * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // resolution
  if (!bosdyn_msgs__msg__Vec2__are_equal(
      &(lhs->resolution), &(rhs->resolution)))
  {
    return false;
  }
  // resolution_is_set
  if (lhs->resolution_is_set != rhs->resolution_is_set) {
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
  if (!bosdyn_msgs__msg__CameraOneOfIntrinsics__are_equal(
      &(lhs->intrinsics), &(rhs->intrinsics)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__Camera__copy(
  const bosdyn_msgs__msg__Camera * input,
  bosdyn_msgs__msg__Camera * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // resolution
  if (!bosdyn_msgs__msg__Vec2__copy(
      &(input->resolution), &(output->resolution)))
  {
    return false;
  }
  // resolution_is_set
  output->resolution_is_set = input->resolution_is_set;
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
  if (!bosdyn_msgs__msg__CameraOneOfIntrinsics__copy(
      &(input->intrinsics), &(output->intrinsics)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__Camera *
bosdyn_msgs__msg__Camera__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Camera * msg = (bosdyn_msgs__msg__Camera *)allocator.allocate(sizeof(bosdyn_msgs__msg__Camera), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__Camera));
  bool success = bosdyn_msgs__msg__Camera__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__Camera__destroy(bosdyn_msgs__msg__Camera * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__Camera__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__Camera__Sequence__init(bosdyn_msgs__msg__Camera__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Camera * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__Camera *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__Camera), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__Camera__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__Camera__fini(&data[i - 1]);
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
bosdyn_msgs__msg__Camera__Sequence__fini(bosdyn_msgs__msg__Camera__Sequence * array)
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
      bosdyn_msgs__msg__Camera__fini(&array->data[i]);
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

bosdyn_msgs__msg__Camera__Sequence *
bosdyn_msgs__msg__Camera__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__Camera__Sequence * array = (bosdyn_msgs__msg__Camera__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__Camera__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__Camera__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__Camera__Sequence__destroy(bosdyn_msgs__msg__Camera__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__Camera__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__Camera__Sequence__are_equal(const bosdyn_msgs__msg__Camera__Sequence * lhs, const bosdyn_msgs__msg__Camera__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__Camera__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__Camera__Sequence__copy(
  const bosdyn_msgs__msg__Camera__Sequence * input,
  bosdyn_msgs__msg__Camera__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__Camera);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__Camera * data =
      (bosdyn_msgs__msg__Camera *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__Camera__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__Camera__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__Camera__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
