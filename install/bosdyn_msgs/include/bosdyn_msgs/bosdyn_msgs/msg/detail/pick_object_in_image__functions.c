// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/PickObjectInImage.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/pick_object_in_image__functions.h"

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
// Member `grasp_params`
#include "bosdyn_msgs/msg/detail/grasp_params__functions.h"
// Member `walk_gaze_mode`
#include "bosdyn_msgs/msg/detail/walk_gaze_mode__functions.h"

bool
bosdyn_msgs__msg__PickObjectInImage__init(bosdyn_msgs__msg__PickObjectInImage * msg)
{
  if (!msg) {
    return false;
  }
  // pixel_xy
  if (!bosdyn_msgs__msg__Vec2__init(&msg->pixel_xy)) {
    bosdyn_msgs__msg__PickObjectInImage__fini(msg);
    return false;
  }
  // pixel_xy_is_set
  // transforms_snapshot_for_camera
  if (!bosdyn_msgs__msg__FrameTreeSnapshot__init(&msg->transforms_snapshot_for_camera)) {
    bosdyn_msgs__msg__PickObjectInImage__fini(msg);
    return false;
  }
  // transforms_snapshot_for_camera_is_set
  // frame_name_image_sensor
  if (!rosidl_runtime_c__String__init(&msg->frame_name_image_sensor)) {
    bosdyn_msgs__msg__PickObjectInImage__fini(msg);
    return false;
  }
  // camera_model
  if (!bosdyn_msgs__msg__ImageSourcePinholeModel__init(&msg->camera_model)) {
    bosdyn_msgs__msg__PickObjectInImage__fini(msg);
    return false;
  }
  // camera_model_is_set
  // grasp_params
  if (!bosdyn_msgs__msg__GraspParams__init(&msg->grasp_params)) {
    bosdyn_msgs__msg__PickObjectInImage__fini(msg);
    return false;
  }
  // grasp_params_is_set
  // walk_gaze_mode
  if (!bosdyn_msgs__msg__WalkGazeMode__init(&msg->walk_gaze_mode)) {
    bosdyn_msgs__msg__PickObjectInImage__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__PickObjectInImage__fini(bosdyn_msgs__msg__PickObjectInImage * msg)
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
  // grasp_params
  bosdyn_msgs__msg__GraspParams__fini(&msg->grasp_params);
  // grasp_params_is_set
  // walk_gaze_mode
  bosdyn_msgs__msg__WalkGazeMode__fini(&msg->walk_gaze_mode);
}

bool
bosdyn_msgs__msg__PickObjectInImage__are_equal(const bosdyn_msgs__msg__PickObjectInImage * lhs, const bosdyn_msgs__msg__PickObjectInImage * rhs)
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
  // grasp_params
  if (!bosdyn_msgs__msg__GraspParams__are_equal(
      &(lhs->grasp_params), &(rhs->grasp_params)))
  {
    return false;
  }
  // grasp_params_is_set
  if (lhs->grasp_params_is_set != rhs->grasp_params_is_set) {
    return false;
  }
  // walk_gaze_mode
  if (!bosdyn_msgs__msg__WalkGazeMode__are_equal(
      &(lhs->walk_gaze_mode), &(rhs->walk_gaze_mode)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__PickObjectInImage__copy(
  const bosdyn_msgs__msg__PickObjectInImage * input,
  bosdyn_msgs__msg__PickObjectInImage * output)
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
  // grasp_params
  if (!bosdyn_msgs__msg__GraspParams__copy(
      &(input->grasp_params), &(output->grasp_params)))
  {
    return false;
  }
  // grasp_params_is_set
  output->grasp_params_is_set = input->grasp_params_is_set;
  // walk_gaze_mode
  if (!bosdyn_msgs__msg__WalkGazeMode__copy(
      &(input->walk_gaze_mode), &(output->walk_gaze_mode)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__PickObjectInImage *
bosdyn_msgs__msg__PickObjectInImage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__PickObjectInImage * msg = (bosdyn_msgs__msg__PickObjectInImage *)allocator.allocate(sizeof(bosdyn_msgs__msg__PickObjectInImage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__PickObjectInImage));
  bool success = bosdyn_msgs__msg__PickObjectInImage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__PickObjectInImage__destroy(bosdyn_msgs__msg__PickObjectInImage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__PickObjectInImage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__PickObjectInImage__Sequence__init(bosdyn_msgs__msg__PickObjectInImage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__PickObjectInImage * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__PickObjectInImage *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__PickObjectInImage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__PickObjectInImage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__PickObjectInImage__fini(&data[i - 1]);
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
bosdyn_msgs__msg__PickObjectInImage__Sequence__fini(bosdyn_msgs__msg__PickObjectInImage__Sequence * array)
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
      bosdyn_msgs__msg__PickObjectInImage__fini(&array->data[i]);
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

bosdyn_msgs__msg__PickObjectInImage__Sequence *
bosdyn_msgs__msg__PickObjectInImage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__PickObjectInImage__Sequence * array = (bosdyn_msgs__msg__PickObjectInImage__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__PickObjectInImage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__PickObjectInImage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__PickObjectInImage__Sequence__destroy(bosdyn_msgs__msg__PickObjectInImage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__PickObjectInImage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__PickObjectInImage__Sequence__are_equal(const bosdyn_msgs__msg__PickObjectInImage__Sequence * lhs, const bosdyn_msgs__msg__PickObjectInImage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__PickObjectInImage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__PickObjectInImage__Sequence__copy(
  const bosdyn_msgs__msg__PickObjectInImage__Sequence * input,
  bosdyn_msgs__msg__PickObjectInImage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__PickObjectInImage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__PickObjectInImage * data =
      (bosdyn_msgs__msg__PickObjectInImage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__PickObjectInImage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__PickObjectInImage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__PickObjectInImage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
