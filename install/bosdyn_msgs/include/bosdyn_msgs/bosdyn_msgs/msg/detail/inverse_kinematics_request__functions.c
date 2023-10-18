// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/InverseKinematicsRequest.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/inverse_kinematics_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "bosdyn_msgs/msg/detail/request_header__functions.h"
// Member `root_frame_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `root_tform_scene`
// Member `scene_tform_task`
// Member `scene_tform_body_nominal`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `nominal_arm_configuration`
#include "bosdyn_msgs/msg/detail/inverse_kinematics_request_named_arm_configuration__functions.h"
// Member `nominal_arm_configuration_overrides`
#include "bosdyn_msgs/msg/detail/arm_joint_position__functions.h"
// Member `stance_specification`
#include "bosdyn_msgs/msg/detail/inverse_kinematics_request_one_of_stance_specification__functions.h"
// Member `tool_specification`
#include "bosdyn_msgs/msg/detail/inverse_kinematics_request_one_of_tool_specification__functions.h"
// Member `task_specification`
#include "bosdyn_msgs/msg/detail/inverse_kinematics_request_one_of_task_specification__functions.h"

bool
bosdyn_msgs__msg__InverseKinematicsRequest__init(bosdyn_msgs__msg__InverseKinematicsRequest * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__RequestHeader__init(&msg->header)) {
    bosdyn_msgs__msg__InverseKinematicsRequest__fini(msg);
    return false;
  }
  // header_is_set
  // root_frame_name
  if (!rosidl_runtime_c__String__init(&msg->root_frame_name)) {
    bosdyn_msgs__msg__InverseKinematicsRequest__fini(msg);
    return false;
  }
  // root_tform_scene
  if (!geometry_msgs__msg__Pose__init(&msg->root_tform_scene)) {
    bosdyn_msgs__msg__InverseKinematicsRequest__fini(msg);
    return false;
  }
  // root_tform_scene_is_set
  // scene_tform_task
  if (!geometry_msgs__msg__Pose__init(&msg->scene_tform_task)) {
    bosdyn_msgs__msg__InverseKinematicsRequest__fini(msg);
    return false;
  }
  // scene_tform_task_is_set
  // nominal_arm_configuration
  if (!bosdyn_msgs__msg__InverseKinematicsRequestNamedArmConfiguration__init(&msg->nominal_arm_configuration)) {
    bosdyn_msgs__msg__InverseKinematicsRequest__fini(msg);
    return false;
  }
  // nominal_arm_configuration_overrides
  if (!bosdyn_msgs__msg__ArmJointPosition__init(&msg->nominal_arm_configuration_overrides)) {
    bosdyn_msgs__msg__InverseKinematicsRequest__fini(msg);
    return false;
  }
  // nominal_arm_configuration_overrides_is_set
  // scene_tform_body_nominal
  if (!geometry_msgs__msg__Pose__init(&msg->scene_tform_body_nominal)) {
    bosdyn_msgs__msg__InverseKinematicsRequest__fini(msg);
    return false;
  }
  // scene_tform_body_nominal_is_set
  // stance_specification
  if (!bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification__init(&msg->stance_specification)) {
    bosdyn_msgs__msg__InverseKinematicsRequest__fini(msg);
    return false;
  }
  // tool_specification
  if (!bosdyn_msgs__msg__InverseKinematicsRequestOneOfToolSpecification__init(&msg->tool_specification)) {
    bosdyn_msgs__msg__InverseKinematicsRequest__fini(msg);
    return false;
  }
  // task_specification
  if (!bosdyn_msgs__msg__InverseKinematicsRequestOneOfTaskSpecification__init(&msg->task_specification)) {
    bosdyn_msgs__msg__InverseKinematicsRequest__fini(msg);
    return false;
  }
  return true;
}

void
bosdyn_msgs__msg__InverseKinematicsRequest__fini(bosdyn_msgs__msg__InverseKinematicsRequest * msg)
{
  if (!msg) {
    return;
  }
  // header
  bosdyn_msgs__msg__RequestHeader__fini(&msg->header);
  // header_is_set
  // root_frame_name
  rosidl_runtime_c__String__fini(&msg->root_frame_name);
  // root_tform_scene
  geometry_msgs__msg__Pose__fini(&msg->root_tform_scene);
  // root_tform_scene_is_set
  // scene_tform_task
  geometry_msgs__msg__Pose__fini(&msg->scene_tform_task);
  // scene_tform_task_is_set
  // nominal_arm_configuration
  bosdyn_msgs__msg__InverseKinematicsRequestNamedArmConfiguration__fini(&msg->nominal_arm_configuration);
  // nominal_arm_configuration_overrides
  bosdyn_msgs__msg__ArmJointPosition__fini(&msg->nominal_arm_configuration_overrides);
  // nominal_arm_configuration_overrides_is_set
  // scene_tform_body_nominal
  geometry_msgs__msg__Pose__fini(&msg->scene_tform_body_nominal);
  // scene_tform_body_nominal_is_set
  // stance_specification
  bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification__fini(&msg->stance_specification);
  // tool_specification
  bosdyn_msgs__msg__InverseKinematicsRequestOneOfToolSpecification__fini(&msg->tool_specification);
  // task_specification
  bosdyn_msgs__msg__InverseKinematicsRequestOneOfTaskSpecification__fini(&msg->task_specification);
}

bool
bosdyn_msgs__msg__InverseKinematicsRequest__are_equal(const bosdyn_msgs__msg__InverseKinematicsRequest * lhs, const bosdyn_msgs__msg__InverseKinematicsRequest * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__RequestHeader__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // header_is_set
  if (lhs->header_is_set != rhs->header_is_set) {
    return false;
  }
  // root_frame_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->root_frame_name), &(rhs->root_frame_name)))
  {
    return false;
  }
  // root_tform_scene
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->root_tform_scene), &(rhs->root_tform_scene)))
  {
    return false;
  }
  // root_tform_scene_is_set
  if (lhs->root_tform_scene_is_set != rhs->root_tform_scene_is_set) {
    return false;
  }
  // scene_tform_task
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->scene_tform_task), &(rhs->scene_tform_task)))
  {
    return false;
  }
  // scene_tform_task_is_set
  if (lhs->scene_tform_task_is_set != rhs->scene_tform_task_is_set) {
    return false;
  }
  // nominal_arm_configuration
  if (!bosdyn_msgs__msg__InverseKinematicsRequestNamedArmConfiguration__are_equal(
      &(lhs->nominal_arm_configuration), &(rhs->nominal_arm_configuration)))
  {
    return false;
  }
  // nominal_arm_configuration_overrides
  if (!bosdyn_msgs__msg__ArmJointPosition__are_equal(
      &(lhs->nominal_arm_configuration_overrides), &(rhs->nominal_arm_configuration_overrides)))
  {
    return false;
  }
  // nominal_arm_configuration_overrides_is_set
  if (lhs->nominal_arm_configuration_overrides_is_set != rhs->nominal_arm_configuration_overrides_is_set) {
    return false;
  }
  // scene_tform_body_nominal
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->scene_tform_body_nominal), &(rhs->scene_tform_body_nominal)))
  {
    return false;
  }
  // scene_tform_body_nominal_is_set
  if (lhs->scene_tform_body_nominal_is_set != rhs->scene_tform_body_nominal_is_set) {
    return false;
  }
  // stance_specification
  if (!bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification__are_equal(
      &(lhs->stance_specification), &(rhs->stance_specification)))
  {
    return false;
  }
  // tool_specification
  if (!bosdyn_msgs__msg__InverseKinematicsRequestOneOfToolSpecification__are_equal(
      &(lhs->tool_specification), &(rhs->tool_specification)))
  {
    return false;
  }
  // task_specification
  if (!bosdyn_msgs__msg__InverseKinematicsRequestOneOfTaskSpecification__are_equal(
      &(lhs->task_specification), &(rhs->task_specification)))
  {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__InverseKinematicsRequest__copy(
  const bosdyn_msgs__msg__InverseKinematicsRequest * input,
  bosdyn_msgs__msg__InverseKinematicsRequest * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!bosdyn_msgs__msg__RequestHeader__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // header_is_set
  output->header_is_set = input->header_is_set;
  // root_frame_name
  if (!rosidl_runtime_c__String__copy(
      &(input->root_frame_name), &(output->root_frame_name)))
  {
    return false;
  }
  // root_tform_scene
  if (!geometry_msgs__msg__Pose__copy(
      &(input->root_tform_scene), &(output->root_tform_scene)))
  {
    return false;
  }
  // root_tform_scene_is_set
  output->root_tform_scene_is_set = input->root_tform_scene_is_set;
  // scene_tform_task
  if (!geometry_msgs__msg__Pose__copy(
      &(input->scene_tform_task), &(output->scene_tform_task)))
  {
    return false;
  }
  // scene_tform_task_is_set
  output->scene_tform_task_is_set = input->scene_tform_task_is_set;
  // nominal_arm_configuration
  if (!bosdyn_msgs__msg__InverseKinematicsRequestNamedArmConfiguration__copy(
      &(input->nominal_arm_configuration), &(output->nominal_arm_configuration)))
  {
    return false;
  }
  // nominal_arm_configuration_overrides
  if (!bosdyn_msgs__msg__ArmJointPosition__copy(
      &(input->nominal_arm_configuration_overrides), &(output->nominal_arm_configuration_overrides)))
  {
    return false;
  }
  // nominal_arm_configuration_overrides_is_set
  output->nominal_arm_configuration_overrides_is_set = input->nominal_arm_configuration_overrides_is_set;
  // scene_tform_body_nominal
  if (!geometry_msgs__msg__Pose__copy(
      &(input->scene_tform_body_nominal), &(output->scene_tform_body_nominal)))
  {
    return false;
  }
  // scene_tform_body_nominal_is_set
  output->scene_tform_body_nominal_is_set = input->scene_tform_body_nominal_is_set;
  // stance_specification
  if (!bosdyn_msgs__msg__InverseKinematicsRequestOneOfStanceSpecification__copy(
      &(input->stance_specification), &(output->stance_specification)))
  {
    return false;
  }
  // tool_specification
  if (!bosdyn_msgs__msg__InverseKinematicsRequestOneOfToolSpecification__copy(
      &(input->tool_specification), &(output->tool_specification)))
  {
    return false;
  }
  // task_specification
  if (!bosdyn_msgs__msg__InverseKinematicsRequestOneOfTaskSpecification__copy(
      &(input->task_specification), &(output->task_specification)))
  {
    return false;
  }
  return true;
}

bosdyn_msgs__msg__InverseKinematicsRequest *
bosdyn_msgs__msg__InverseKinematicsRequest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__InverseKinematicsRequest * msg = (bosdyn_msgs__msg__InverseKinematicsRequest *)allocator.allocate(sizeof(bosdyn_msgs__msg__InverseKinematicsRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__InverseKinematicsRequest));
  bool success = bosdyn_msgs__msg__InverseKinematicsRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__InverseKinematicsRequest__destroy(bosdyn_msgs__msg__InverseKinematicsRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__InverseKinematicsRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__InverseKinematicsRequest__Sequence__init(bosdyn_msgs__msg__InverseKinematicsRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__InverseKinematicsRequest * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__InverseKinematicsRequest *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__InverseKinematicsRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__InverseKinematicsRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__InverseKinematicsRequest__fini(&data[i - 1]);
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
bosdyn_msgs__msg__InverseKinematicsRequest__Sequence__fini(bosdyn_msgs__msg__InverseKinematicsRequest__Sequence * array)
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
      bosdyn_msgs__msg__InverseKinematicsRequest__fini(&array->data[i]);
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

bosdyn_msgs__msg__InverseKinematicsRequest__Sequence *
bosdyn_msgs__msg__InverseKinematicsRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__InverseKinematicsRequest__Sequence * array = (bosdyn_msgs__msg__InverseKinematicsRequest__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__InverseKinematicsRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__InverseKinematicsRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__InverseKinematicsRequest__Sequence__destroy(bosdyn_msgs__msg__InverseKinematicsRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__InverseKinematicsRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__InverseKinematicsRequest__Sequence__are_equal(const bosdyn_msgs__msg__InverseKinematicsRequest__Sequence * lhs, const bosdyn_msgs__msg__InverseKinematicsRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__InverseKinematicsRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__InverseKinematicsRequest__Sequence__copy(
  const bosdyn_msgs__msg__InverseKinematicsRequest__Sequence * input,
  bosdyn_msgs__msg__InverseKinematicsRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__InverseKinematicsRequest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__InverseKinematicsRequest * data =
      (bosdyn_msgs__msg__InverseKinematicsRequest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__InverseKinematicsRequest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__InverseKinematicsRequest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__InverseKinematicsRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
