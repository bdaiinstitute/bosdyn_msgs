// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/WalkToObjectInImage.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/walk_to_object_in_image__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pixel_xy`
#include "bosdyn_msgs/msg/detail/vec2__functions.h"
// Member `transforms_snapshot_for_camera`
#include "bosdyn_msgs/msg/detail/frame_tree_snapshot__functions.h"
// Member `frame_name_image_sensor`
#include "rosidl_runtime_c/string_functions.h"
// Member `camera_model`
#include "bosdyn_msgs/msg/detail/image_source_pinhole_model__functions.h"

bool
bosdyn_msgs__msg__WalkToObjectInImage__init(bosdyn_msgs__msg__WalkToObjectInImage * msg)
{
  if (!msg) {
    return false;
  }
  // pixel_xy
  if (!bosdyn_msgs__msg__Vec2__init(&msg->pixel_xy)) {
    bosdyn_msgs__msg__WalkToObjectInImage__fini(msg);
    return false;
  }
  // pixel_xy_is_set
  // transforms_snapshot_for_camera
  if (!bosdyn_msgs__msg__FrameTreeSnapshot__init(&msg->transforms_snapshot_for_camera)) {
    bosdyn_msgs__msg__WalkToObjectInImage__fini(msg);
    return false;
  }
  // transforms_snapshot_for_camera_is_set
  // frame_name_image_sensor
  if (!rosidl_runtime_c__String__init(&msg->frame_name_image_sensor)) {
    bosdyn_msgs__msg__WalkToObjectInImage__fini(msg);
    return false;
  }
  // camera_model
  if (!bosdyn_msgs__msg__ImageSourcePinholeModel__init(&msg->camera_model)) {
    bosdyn_msgs__msg__WalkToObjectInImage__fini(msg);
    return false;
  }
  // camera_model_is_set
  // offset_distance
  // offset_distance_is_set
  return true;
}

void
bosdyn_msgs__msg__WalkToObjectInImage__fini(bosdyn_msgs__msg__WalkToObjectInImage * msg)
{
  if (!msg) {
    return;
  }
  // pixel_xy
  bosdyn_msgs__msg__Vec2__fini(&msg->pixel_xy);
  // pixel_xy_is_set
  // transforms_snapshot_for_camera
  bosdyn_msgs__msg__FrameTreeSnapshot__fini(&msg->transforms_snapshot_for_camera);
  // transforms_snapshot_for_camera_is_set
  // frame_name_image_sensor
  rosidl_runtime_c__String__fini(&msg->frame_name_image_sensor);
  // camera_model
  bosdyn_msgs__msg__ImageSourcePinholeModel__fini(&msg->camera_model);
  // camera_model_is_set
  // offset_distance
  // offset_distance_is_set
}

bool
bosdyn_msgs__msg__WalkToObjectInImage__are_equal(const bosdyn_msgs__msg__WalkToObjectInImage * lhs, const bosdyn_msgs__msg__WalkToObjectInImage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pixel_xy
  if (!bosdyn_msgs__msg__Vec2__are_equal(
      &(lhs->pixel_xy), &(rhs->pixel_xy)))
  {
    return false;
  }
  // pixel_xy_is_set
  if (lhs->pixel_xy_is_set != rhs->pixel_xy_is_set) {
    return false;
  }
  // transforms_snapshot_for_camera
  if (!bosdyn_msgs__msg__FrameTreeSnapshot__are_equal(
      &(lhs->transforms_snapshot_for_camera), &(rhs->transforms_snapshot_for_camera)))
  {
    return false;
  }
  // transforms_snapshot_for_camera_is_set
  if (lhs->transforms_snapshot_for_camera_is_set != rhs->transforms_snapshot_for_camera_is_set) {
    return false;
  }
  // frame_name_image_sensor
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->frame_name_image_sensor), &(rhs->frame_name_image_sensor)))
  {
    return false;
  }
  // camera_model
  if (!bosdyn_msgs__msg__ImageSourcePinholeModel__are_equal(
      &(lhs->camera_model), &(rhs->camera_model)))
  {
    return false;
  }
  // camera_model_is_set
  if (lhs->camera_model_is_set != rhs->camera_model_is_set) {
    return false;
  }
  // offset_distance
  if (lhs->offset_distance != rhs->offset_distance) {
    return false;
  }
  // offset_distance_is_set
  if (lhs->offset_distance_is_set != rhs->offset_distance_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__WalkToObjectInImage__copy(
  const bosdyn_msgs__msg__WalkToObjectInImage * input,
  bosdyn_msgs__msg__WalkToObjectInImage * output)
{
  if (!input || !output) {
    return false;
  }
  // pixel_xy
  if (!bosdyn_msgs__msg__Vec2__copy(
      &(input->pixel_xy), &(output->pixel_xy)))
  {
    return false;
  }
  // pixel_xy_is_set
  output->pixel_xy_is_set = input->pixel_xy_is_set;
  // transforms_snapshot_for_camera
  if (!bosdyn_msgs__msg__FrameTreeSnapshot__copy(
      &(input->transforms_snapshot_for_camera), &(output->transforms_snapshot_for_camera)))
  {
    return false;
  }
  // transforms_snapshot_for_camera_is_set
  output->transforms_snapshot_for_camera_is_set = input->transforms_snapshot_for_camera_is_set;
  // frame_name_image_sensor
  if (!rosidl_runtime_c__String__copy(
      &(input->frame_name_image_sensor), &(output->frame_name_image_sensor)))
  {
    return false;
  }
  // camera_model
  if (!bosdyn_msgs__msg__ImageSourcePinholeModel__copy(
      &(input->camera_model), &(output->camera_model)))
  {
    return false;
  }
  // camera_model_is_set
  output->camera_model_is_set = input->camera_model_is_set;
  // offset_distance
  output->offset_distance = input->offset_distance;
  // offset_distance_is_set
  output->offset_distance_is_set = input->offset_distance_is_set;
  return true;
}

bosdyn_msgs__msg__WalkToObjectInImage *
bosdyn_msgs__msg__WalkToObjectInImage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__WalkToObjectInImage * msg = (bosdyn_msgs__msg__WalkToObjectInImage *)allocator.allocate(sizeof(bosdyn_msgs__msg__WalkToObjectInImage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__WalkToObjectInImage));
  bool success = bosdyn_msgs__msg__WalkToObjectInImage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__WalkToObjectInImage__destroy(bosdyn_msgs__msg__WalkToObjectInImage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__WalkToObjectInImage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__WalkToObjectInImage__Sequence__init(bosdyn_msgs__msg__WalkToObjectInImage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__WalkToObjectInImage * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__WalkToObjectInImage *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__WalkToObjectInImage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__WalkToObjectInImage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__WalkToObjectInImage__fini(&data[i - 1]);
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
bosdyn_msgs__msg__WalkToObjectInImage__Sequence__fini(bosdyn_msgs__msg__WalkToObjectInImage__Sequence * array)
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
      bosdyn_msgs__msg__WalkToObjectInImage__fini(&array->data[i]);
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

bosdyn_msgs__msg__WalkToObjectInImage__Sequence *
bosdyn_msgs__msg__WalkToObjectInImage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__WalkToObjectInImage__Sequence * array = (bosdyn_msgs__msg__WalkToObjectInImage__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__WalkToObjectInImage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__WalkToObjectInImage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__WalkToObjectInImage__Sequence__destroy(bosdyn_msgs__msg__WalkToObjectInImage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__WalkToObjectInImage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__WalkToObjectInImage__Sequence__are_equal(const bosdyn_msgs__msg__WalkToObjectInImage__Sequence * lhs, const bosdyn_msgs__msg__WalkToObjectInImage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__WalkToObjectInImage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__WalkToObjectInImage__Sequence__copy(
  const bosdyn_msgs__msg__WalkToObjectInImage__Sequence * input,
  bosdyn_msgs__msg__WalkToObjectInImage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__WalkToObjectInImage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__WalkToObjectInImage * data =
      (bosdyn_msgs__msg__WalkToObjectInImage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__WalkToObjectInImage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__WalkToObjectInImage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__WalkToObjectInImage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
