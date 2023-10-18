// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/AprilTagProperties.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/april_tag_properties__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `dimensions`
#include "bosdyn_msgs/msg/detail/vec2__functions.h"
// Member `frame_name_fiducial`
// Member `frame_name_fiducial_filtered`
// Member `frame_name_camera`
// Member `detection_covariance_reference_frame`
#include "rosidl_runtime_c/string_functions.h"
// Member `fiducial_pose_status`
// Member `fiducial_filtered_pose_status`
#include "bosdyn_msgs/msg/detail/april_tag_properties_april_tag_pose_status__functions.h"
// Member `detection_covariance`
#include "bosdyn_msgs/msg/detail/se3_covariance__functions.h"

bool
bosdyn_msgs__msg__AprilTagProperties__init(bosdyn_msgs__msg__AprilTagProperties * msg)
{
  if (!msg) {
    return false;
  }
  // tag_id
  // dimensions
  if (!bosdyn_msgs__msg__Vec2__init(&msg->dimensions)) {
    bosdyn_msgs__msg__AprilTagProperties__fini(msg);
    return false;
  }
  // dimensions_is_set
  // frame_name_fiducial
  if (!rosidl_runtime_c__String__init(&msg->frame_name_fiducial)) {
    bosdyn_msgs__msg__AprilTagProperties__fini(msg);
    return false;
  }
  // fiducial_pose_status
  if (!bosdyn_msgs__msg__AprilTagPropertiesAprilTagPoseStatus__init(&msg->fiducial_pose_status)) {
    bosdyn_msgs__msg__AprilTagProperties__fini(msg);
    return false;
  }
  // frame_name_fiducial_filtered
  if (!rosidl_runtime_c__String__init(&msg->frame_name_fiducial_filtered)) {
    bosdyn_msgs__msg__AprilTagProperties__fini(msg);
    return false;
  }
  // fiducial_filtered_pose_status
  if (!bosdyn_msgs__msg__AprilTagPropertiesAprilTagPoseStatus__init(&msg->fiducial_filtered_pose_status)) {
    bosdyn_msgs__msg__AprilTagProperties__fini(msg);
    return false;
  }
  // frame_name_camera
  if (!rosidl_runtime_c__String__init(&msg->frame_name_camera)) {
    bosdyn_msgs__msg__AprilTagProperties__fini(msg);
    return false;
  }
  // detection_covariance
  if (!bosdyn_msgs__msg__SE3Covariance__init(&msg->detection_covariance)) {
    bosdyn_msgs__msg__AprilTagProperties__fini(msg);
    return false;
  }
  // detection_covariance_is_set
  // detection_covariance_reference_frame
  if (!rosidl_runtime_c__String__init(&msg->detection_covariance_reference_frame)) {
    bosdyn_msgs__msg__AprilTagProperties__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__AprilTagProperties__fini(bosdyn_msgs__msg__AprilTagProperties * msg)
{
  if (!msg) {
    return;
  }
  // tag_id
  // dimensions
  bosdyn_msgs__msg__Vec2__fini(&msg->dimensions);
  // dimensions_is_set
  // frame_name_fiducial
  rosidl_runtime_c__String__fini(&msg->frame_name_fiducial);
  // fiducial_pose_status
  bosdyn_msgs__msg__AprilTagPropertiesAprilTagPoseStatus__fini(&msg->fiducial_pose_status);
  // frame_name_fiducial_filtered
  rosidl_runtime_c__String__fini(&msg->frame_name_fiducial_filtered);
  // fiducial_filtered_pose_status
  bosdyn_msgs__msg__AprilTagPropertiesAprilTagPoseStatus__fini(&msg->fiducial_filtered_pose_status);
  // frame_name_camera
  rosidl_runtime_c__String__fini(&msg->frame_name_camera);
  // detection_covariance
  bosdyn_msgs__msg__SE3Covariance__fini(&msg->detection_covariance);
  // detection_covariance_is_set
  // detection_covariance_reference_frame
  rosidl_runtime_c__String__fini(&msg->detection_covariance_reference_frame);
}

bool
bosdyn_msgs__msg__AprilTagProperties__are_equal(const bosdyn_msgs__msg__AprilTagProperties * lhs, const bosdyn_msgs__msg__AprilTagProperties * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // tag_id
  if (lhs->tag_id != rhs->tag_id) {
    return false;
  }
  // dimensions
  if (!bosdyn_msgs__msg__Vec2__are_equal(
      &(lhs->dimensions), &(rhs->dimensions)))
  {
    return false;
  }
  // dimensions_is_set
  if (lhs->dimensions_is_set != rhs->dimensions_is_set) {
    return false;
  }
  // frame_name_fiducial
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->frame_name_fiducial), &(rhs->frame_name_fiducial)))
  {
    return false;
  }
  // fiducial_pose_status
  if (!bosdyn_msgs__msg__AprilTagPropertiesAprilTagPoseStatus__are_equal(
      &(lhs->fiducial_pose_status), &(rhs->fiducial_pose_status)))
  {
    return false;
  }
  // frame_name_fiducial_filtered
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->frame_name_fiducial_filtered), &(rhs->frame_name_fiducial_filtered)))
  {
    return false;
  }
  // fiducial_filtered_pose_status
  if (!bosdyn_msgs__msg__AprilTagPropertiesAprilTagPoseStatus__are_equal(
      &(lhs->fiducial_filtered_pose_status), &(rhs->fiducial_filtered_pose_status)))
  {
    return false;
  }
  // frame_name_camera
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->frame_name_camera), &(rhs->frame_name_camera)))
  {
    return false;
  }
  // detection_covariance
  if (!bosdyn_msgs__msg__SE3Covariance__are_equal(
      &(lhs->detection_covariance), &(rhs->detection_covariance)))
  {
    return false;
  }
  // detection_covariance_is_set
  if (lhs->detection_covariance_is_set != rhs->detection_covariance_is_set) {
    return false;
  }
  // detection_covariance_reference_frame
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->detection_covariance_reference_frame), &(rhs->detection_covariance_reference_frame)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__AprilTagProperties__copy(
  const bosdyn_msgs__msg__AprilTagProperties * input,
  bosdyn_msgs__msg__AprilTagProperties * output)
{
  if (!input || !output) {
    return false;
  }
  // tag_id
  output->tag_id = input->tag_id;
  // dimensions
  if (!bosdyn_msgs__msg__Vec2__copy(
      &(input->dimensions), &(output->dimensions)))
  {
    return false;
  }
  // dimensions_is_set
  output->dimensions_is_set = input->dimensions_is_set;
  // frame_name_fiducial
  if (!rosidl_runtime_c__String__copy(
      &(input->frame_name_fiducial), &(output->frame_name_fiducial)))
  {
    return false;
  }
  // fiducial_pose_status
  if (!bosdyn_msgs__msg__AprilTagPropertiesAprilTagPoseStatus__copy(
      &(input->fiducial_pose_status), &(output->fiducial_pose_status)))
  {
    return false;
  }
  // frame_name_fiducial_filtered
  if (!rosidl_runtime_c__String__copy(
      &(input->frame_name_fiducial_filtered), &(output->frame_name_fiducial_filtered)))
  {
    return false;
  }
  // fiducial_filtered_pose_status
  if (!bosdyn_msgs__msg__AprilTagPropertiesAprilTagPoseStatus__copy(
      &(input->fiducial_filtered_pose_status), &(output->fiducial_filtered_pose_status)))
  {
    return false;
  }
  // frame_name_camera
  if (!rosidl_runtime_c__String__copy(
      &(input->frame_name_camera), &(output->frame_name_camera)))
  {
    return false;
  }
  // detection_covariance
  if (!bosdyn_msgs__msg__SE3Covariance__copy(
      &(input->detection_covariance), &(output->detection_covariance)))
  {
    return false;
  }
  // detection_covariance_is_set
  output->detection_covariance_is_set = input->detection_covariance_is_set;
  // detection_covariance_reference_frame
  if (!rosidl_runtime_c__String__copy(
      &(input->detection_covariance_reference_frame), &(output->detection_covariance_reference_frame)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__AprilTagProperties *
bosdyn_msgs__msg__AprilTagProperties__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__AprilTagProperties * msg = (bosdyn_msgs__msg__AprilTagProperties *)allocator.allocate(sizeof(bosdyn_msgs__msg__AprilTagProperties), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__AprilTagProperties));
  bool success = bosdyn_msgs__msg__AprilTagProperties__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__AprilTagProperties__destroy(bosdyn_msgs__msg__AprilTagProperties * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__AprilTagProperties__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__AprilTagProperties__Sequence__init(bosdyn_msgs__msg__AprilTagProperties__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__AprilTagProperties * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__AprilTagProperties *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__AprilTagProperties), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__AprilTagProperties__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__AprilTagProperties__fini(&data[i - 1]);
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
bosdyn_msgs__msg__AprilTagProperties__Sequence__fini(bosdyn_msgs__msg__AprilTagProperties__Sequence * array)
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
      bosdyn_msgs__msg__AprilTagProperties__fini(&array->data[i]);
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

bosdyn_msgs__msg__AprilTagProperties__Sequence *
bosdyn_msgs__msg__AprilTagProperties__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__AprilTagProperties__Sequence * array = (bosdyn_msgs__msg__AprilTagProperties__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__AprilTagProperties__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__AprilTagProperties__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__AprilTagProperties__Sequence__destroy(bosdyn_msgs__msg__AprilTagProperties__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__AprilTagProperties__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__AprilTagProperties__Sequence__are_equal(const bosdyn_msgs__msg__AprilTagProperties__Sequence * lhs, const bosdyn_msgs__msg__AprilTagProperties__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__AprilTagProperties__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__AprilTagProperties__Sequence__copy(
  const bosdyn_msgs__msg__AprilTagProperties__Sequence * input,
  bosdyn_msgs__msg__AprilTagProperties__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__AprilTagProperties);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__AprilTagProperties * data =
      (bosdyn_msgs__msg__AprilTagProperties *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__AprilTagProperties__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__AprilTagProperties__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__AprilTagProperties__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
