// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from bosdyn_msgs:msg/ActionWrapper.idl
// generated code does not contain a copyright notice
#include "bosdyn_msgs/msg/detail/action_wrapper__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `robot_body_sit`
#include "bosdyn_msgs/msg/detail/action_wrapper_robot_body_sit__functions.h"
// Member `robot_body_pose`
#include "bosdyn_msgs/msg/detail/action_wrapper_robot_body_pose__functions.h"
// Member `spot_cam_led`
#include "bosdyn_msgs/msg/detail/action_wrapper_spot_cam_led__functions.h"
// Member `spot_cam_ptz`
#include "bosdyn_msgs/msg/detail/action_wrapper_spot_cam_ptz__functions.h"
// Member `arm_sensor_pointing`
#include "bosdyn_msgs/msg/detail/action_wrapper_arm_sensor_pointing__functions.h"
// Member `spot_cam_alignment`
#include "bosdyn_msgs/msg/detail/action_wrapper_spot_cam_alignment__functions.h"
// Member `gripper_camera_params`
#include "bosdyn_msgs/msg/detail/action_wrapper_gripper_camera_params__functions.h"
// Member `gripper_command`
#include "bosdyn_msgs/msg/detail/action_wrapper_gripper_command__functions.h"

bool
bosdyn_msgs__msg__ActionWrapper__init(bosdyn_msgs__msg__ActionWrapper * msg)
{
  if (!msg) {
    return false;
  }
  // robot_body_sit
  if (!bosdyn_msgs__msg__ActionWrapperRobotBodySit__init(&msg->robot_body_sit)) {
    bosdyn_msgs__msg__ActionWrapper__fini(msg);
    return false;
  }
  // robot_body_sit_is_set
  // robot_body_pose
  if (!bosdyn_msgs__msg__ActionWrapperRobotBodyPose__init(&msg->robot_body_pose)) {
    bosdyn_msgs__msg__ActionWrapper__fini(msg);
    return false;
  }
  // robot_body_pose_is_set
  // spot_cam_led
  if (!bosdyn_msgs__msg__ActionWrapperSpotCamLed__init(&msg->spot_cam_led)) {
    bosdyn_msgs__msg__ActionWrapper__fini(msg);
    return false;
  }
  // spot_cam_led_is_set
  // spot_cam_ptz
  if (!bosdyn_msgs__msg__ActionWrapperSpotCamPtz__init(&msg->spot_cam_ptz)) {
    bosdyn_msgs__msg__ActionWrapper__fini(msg);
    return false;
  }
  // spot_cam_ptz_is_set
  // arm_sensor_pointing
  if (!bosdyn_msgs__msg__ActionWrapperArmSensorPointing__init(&msg->arm_sensor_pointing)) {
    bosdyn_msgs__msg__ActionWrapper__fini(msg);
    return false;
  }
  // arm_sensor_pointing_is_set
  // spot_cam_alignment
  if (!bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__init(&msg->spot_cam_alignment)) {
    bosdyn_msgs__msg__ActionWrapper__fini(msg);
    return false;
  }
  // spot_cam_alignment_is_set
  // gripper_camera_params
  if (!bosdyn_msgs__msg__ActionWrapperGripperCameraParams__init(&msg->gripper_camera_params)) {
    bosdyn_msgs__msg__ActionWrapper__fini(msg);
    return false;
  }
  // gripper_camera_params_is_set
  // gripper_command
  if (!bosdyn_msgs__msg__ActionWrapperGripperCommand__init(&msg->gripper_command)) {
    bosdyn_msgs__msg__ActionWrapper__fini(msg);
    return false;
  }
  // gripper_command_is_set
  return true;
}

void
bosdyn_msgs__msg__ActionWrapper__fini(bosdyn_msgs__msg__ActionWrapper * msg)
{
  if (!msg) {
    return;
  }
  // robot_body_sit
  bosdyn_msgs__msg__ActionWrapperRobotBodySit__fini(&msg->robot_body_sit);
  // robot_body_sit_is_set
  // robot_body_pose
  bosdyn_msgs__msg__ActionWrapperRobotBodyPose__fini(&msg->robot_body_pose);
  // robot_body_pose_is_set
  // spot_cam_led
  bosdyn_msgs__msg__ActionWrapperSpotCamLed__fini(&msg->spot_cam_led);
  // spot_cam_led_is_set
  // spot_cam_ptz
  bosdyn_msgs__msg__ActionWrapperSpotCamPtz__fini(&msg->spot_cam_ptz);
  // spot_cam_ptz_is_set
  // arm_sensor_pointing
  bosdyn_msgs__msg__ActionWrapperArmSensorPointing__fini(&msg->arm_sensor_pointing);
  // arm_sensor_pointing_is_set
  // spot_cam_alignment
  bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__fini(&msg->spot_cam_alignment);
  // spot_cam_alignment_is_set
  // gripper_camera_params
  bosdyn_msgs__msg__ActionWrapperGripperCameraParams__fini(&msg->gripper_camera_params);
  // gripper_camera_params_is_set
  // gripper_command
  bosdyn_msgs__msg__ActionWrapperGripperCommand__fini(&msg->gripper_command);
  // gripper_command_is_set
}

bool
bosdyn_msgs__msg__ActionWrapper__are_equal(const bosdyn_msgs__msg__ActionWrapper * lhs, const bosdyn_msgs__msg__ActionWrapper * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // robot_body_sit
  if (!bosdyn_msgs__msg__ActionWrapperRobotBodySit__are_equal(
      &(lhs->robot_body_sit), &(rhs->robot_body_sit)))
  {
    return false;
  }
  // robot_body_sit_is_set
  if (lhs->robot_body_sit_is_set != rhs->robot_body_sit_is_set) {
    return false;
  }
  // robot_body_pose
  if (!bosdyn_msgs__msg__ActionWrapperRobotBodyPose__are_equal(
      &(lhs->robot_body_pose), &(rhs->robot_body_pose)))
  {
    return false;
  }
  // robot_body_pose_is_set
  if (lhs->robot_body_pose_is_set != rhs->robot_body_pose_is_set) {
    return false;
  }
  // spot_cam_led
  if (!bosdyn_msgs__msg__ActionWrapperSpotCamLed__are_equal(
      &(lhs->spot_cam_led), &(rhs->spot_cam_led)))
  {
    return false;
  }
  // spot_cam_led_is_set
  if (lhs->spot_cam_led_is_set != rhs->spot_cam_led_is_set) {
    return false;
  }
  // spot_cam_ptz
  if (!bosdyn_msgs__msg__ActionWrapperSpotCamPtz__are_equal(
      &(lhs->spot_cam_ptz), &(rhs->spot_cam_ptz)))
  {
    return false;
  }
  // spot_cam_ptz_is_set
  if (lhs->spot_cam_ptz_is_set != rhs->spot_cam_ptz_is_set) {
    return false;
  }
  // arm_sensor_pointing
  if (!bosdyn_msgs__msg__ActionWrapperArmSensorPointing__are_equal(
      &(lhs->arm_sensor_pointing), &(rhs->arm_sensor_pointing)))
  {
    return false;
  }
  // arm_sensor_pointing_is_set
  if (lhs->arm_sensor_pointing_is_set != rhs->arm_sensor_pointing_is_set) {
    return false;
  }
  // spot_cam_alignment
  if (!bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__are_equal(
      &(lhs->spot_cam_alignment), &(rhs->spot_cam_alignment)))
  {
    return false;
  }
  // spot_cam_alignment_is_set
  if (lhs->spot_cam_alignment_is_set != rhs->spot_cam_alignment_is_set) {
    return false;
  }
  // gripper_camera_params
  if (!bosdyn_msgs__msg__ActionWrapperGripperCameraParams__are_equal(
      &(lhs->gripper_camera_params), &(rhs->gripper_camera_params)))
  {
    return false;
  }
  // gripper_camera_params_is_set
  if (lhs->gripper_camera_params_is_set != rhs->gripper_camera_params_is_set) {
    return false;
  }
  // gripper_command
  if (!bosdyn_msgs__msg__ActionWrapperGripperCommand__are_equal(
      &(lhs->gripper_command), &(rhs->gripper_command)))
  {
    return false;
  }
  // gripper_command_is_set
  if (lhs->gripper_command_is_set != rhs->gripper_command_is_set) {
    return false;
  }
  return true;
}

bool
bosdyn_msgs__msg__ActionWrapper__copy(
  const bosdyn_msgs__msg__ActionWrapper * input,
  bosdyn_msgs__msg__ActionWrapper * output)
{
  if (!input || !output) {
    return false;
  }
  // robot_body_sit
  if (!bosdyn_msgs__msg__ActionWrapperRobotBodySit__copy(
      &(input->robot_body_sit), &(output->robot_body_sit)))
  {
    return false;
  }
  // robot_body_sit_is_set
  output->robot_body_sit_is_set = input->robot_body_sit_is_set;
  // robot_body_pose
  if (!bosdyn_msgs__msg__ActionWrapperRobotBodyPose__copy(
      &(input->robot_body_pose), &(output->robot_body_pose)))
  {
    return false;
  }
  // robot_body_pose_is_set
  output->robot_body_pose_is_set = input->robot_body_pose_is_set;
  // spot_cam_led
  if (!bosdyn_msgs__msg__ActionWrapperSpotCamLed__copy(
      &(input->spot_cam_led), &(output->spot_cam_led)))
  {
    return false;
  }
  // spot_cam_led_is_set
  output->spot_cam_led_is_set = input->spot_cam_led_is_set;
  // spot_cam_ptz
  if (!bosdyn_msgs__msg__ActionWrapperSpotCamPtz__copy(
      &(input->spot_cam_ptz), &(output->spot_cam_ptz)))
  {
    return false;
  }
  // spot_cam_ptz_is_set
  output->spot_cam_ptz_is_set = input->spot_cam_ptz_is_set;
  // arm_sensor_pointing
  if (!bosdyn_msgs__msg__ActionWrapperArmSensorPointing__copy(
      &(input->arm_sensor_pointing), &(output->arm_sensor_pointing)))
  {
    return false;
  }
  // arm_sensor_pointing_is_set
  output->arm_sensor_pointing_is_set = input->arm_sensor_pointing_is_set;
  // spot_cam_alignment
  if (!bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__copy(
      &(input->spot_cam_alignment), &(output->spot_cam_alignment)))
  {
    return false;
  }
  // spot_cam_alignment_is_set
  output->spot_cam_alignment_is_set = input->spot_cam_alignment_is_set;
  // gripper_camera_params
  if (!bosdyn_msgs__msg__ActionWrapperGripperCameraParams__copy(
      &(input->gripper_camera_params), &(output->gripper_camera_params)))
  {
    return false;
  }
  // gripper_camera_params_is_set
  output->gripper_camera_params_is_set = input->gripper_camera_params_is_set;
  // gripper_command
  if (!bosdyn_msgs__msg__ActionWrapperGripperCommand__copy(
      &(input->gripper_command), &(output->gripper_command)))
  {
    return false;
  }
  // gripper_command_is_set
  output->gripper_command_is_set = input->gripper_command_is_set;
  return true;
}

bosdyn_msgs__msg__ActionWrapper *
bosdyn_msgs__msg__ActionWrapper__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ActionWrapper * msg = (bosdyn_msgs__msg__ActionWrapper *)allocator.allocate(sizeof(bosdyn_msgs__msg__ActionWrapper), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(bosdyn_msgs__msg__ActionWrapper));
  bool success = bosdyn_msgs__msg__ActionWrapper__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
bosdyn_msgs__msg__ActionWrapper__destroy(bosdyn_msgs__msg__ActionWrapper * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    bosdyn_msgs__msg__ActionWrapper__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
bosdyn_msgs__msg__ActionWrapper__Sequence__init(bosdyn_msgs__msg__ActionWrapper__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ActionWrapper * data = NULL;

  if (size) {
    data = (bosdyn_msgs__msg__ActionWrapper *)allocator.zero_allocate(size, sizeof(bosdyn_msgs__msg__ActionWrapper), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = bosdyn_msgs__msg__ActionWrapper__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        bosdyn_msgs__msg__ActionWrapper__fini(&data[i - 1]);
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
bosdyn_msgs__msg__ActionWrapper__Sequence__fini(bosdyn_msgs__msg__ActionWrapper__Sequence * array)
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
      bosdyn_msgs__msg__ActionWrapper__fini(&array->data[i]);
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

bosdyn_msgs__msg__ActionWrapper__Sequence *
bosdyn_msgs__msg__ActionWrapper__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  bosdyn_msgs__msg__ActionWrapper__Sequence * array = (bosdyn_msgs__msg__ActionWrapper__Sequence *)allocator.allocate(sizeof(bosdyn_msgs__msg__ActionWrapper__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = bosdyn_msgs__msg__ActionWrapper__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
bosdyn_msgs__msg__ActionWrapper__Sequence__destroy(bosdyn_msgs__msg__ActionWrapper__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    bosdyn_msgs__msg__ActionWrapper__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
bosdyn_msgs__msg__ActionWrapper__Sequence__are_equal(const bosdyn_msgs__msg__ActionWrapper__Sequence * lhs, const bosdyn_msgs__msg__ActionWrapper__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!bosdyn_msgs__msg__ActionWrapper__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
bosdyn_msgs__msg__ActionWrapper__Sequence__copy(
  const bosdyn_msgs__msg__ActionWrapper__Sequence * input,
  bosdyn_msgs__msg__ActionWrapper__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(bosdyn_msgs__msg__ActionWrapper);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    bosdyn_msgs__msg__ActionWrapper * data =
      (bosdyn_msgs__msg__ActionWrapper *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!bosdyn_msgs__msg__ActionWrapper__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          bosdyn_msgs__msg__ActionWrapper__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!bosdyn_msgs__msg__ActionWrapper__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
