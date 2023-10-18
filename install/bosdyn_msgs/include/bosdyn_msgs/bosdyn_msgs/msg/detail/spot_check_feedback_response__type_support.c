// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/SpotCheckFeedbackResponse.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/spot_check_feedback_response__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/spot_check_feedback_response__functions.h"
#include "bosdyn_msgs/msg/detail/spot_check_feedback_response__struct.h"


// Include directives for member types
// Member `header`
#include "bosdyn_msgs/msg/response_header.h"
// Member `header`
#include "bosdyn_msgs/msg/detail/response_header__rosidl_typesupport_introspection_c.h"
// Member `state`
#include "bosdyn_msgs/msg/spot_check_feedback_response_state.h"
// Member `state`
#include "bosdyn_msgs/msg/detail/spot_check_feedback_response_state__rosidl_typesupport_introspection_c.h"
// Member `last_command`
#include "bosdyn_msgs/msg/spot_check_command_request_command.h"
// Member `last_command`
#include "bosdyn_msgs/msg/detail/spot_check_command_request_command__rosidl_typesupport_introspection_c.h"
// Member `error`
#include "bosdyn_msgs/msg/spot_check_feedback_response_error.h"
// Member `error`
#include "bosdyn_msgs/msg/detail/spot_check_feedback_response_error__rosidl_typesupport_introspection_c.h"
// Member `camera_results`
#include "bosdyn_msgs/msg/key_string_value_bosdyn_msgs_depth_plane_spot_check_result.h"
// Member `camera_results`
#include "bosdyn_msgs/msg/detail/key_string_value_bosdyn_msgs_depth_plane_spot_check_result__rosidl_typesupport_introspection_c.h"
// Member `load_cell_results`
#include "bosdyn_msgs/msg/key_string_value_bosdyn_msgs_load_cell_spot_check_result.h"
// Member `load_cell_results`
#include "bosdyn_msgs/msg/detail/key_string_value_bosdyn_msgs_load_cell_spot_check_result__rosidl_typesupport_introspection_c.h"
// Member `kinematic_cal_results`
#include "bosdyn_msgs/msg/key_string_value_bosdyn_msgs_joint_kinematic_check_result.h"
// Member `kinematic_cal_results`
#include "bosdyn_msgs/msg/detail/key_string_value_bosdyn_msgs_joint_kinematic_check_result__rosidl_typesupport_introspection_c.h"
// Member `payload_result`
#include "bosdyn_msgs/msg/payload_check_result.h"
// Member `payload_result`
#include "bosdyn_msgs/msg/detail/payload_check_result__rosidl_typesupport_introspection_c.h"
// Member `hip_range_of_motion_results`
#include "bosdyn_msgs/msg/key_string_value_bosdyn_msgs_hip_range_of_motion_result.h"
// Member `hip_range_of_motion_results`
#include "bosdyn_msgs/msg/detail/key_string_value_bosdyn_msgs_hip_range_of_motion_result__rosidl_typesupport_introspection_c.h"
// Member `last_cal_timestamp`
#include "builtin_interfaces/msg/time.h"
// Member `last_cal_timestamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__SpotCheckFeedbackResponse_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__SpotCheckFeedbackResponse__init(message_memory);
}

void bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__SpotCheckFeedbackResponse_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__SpotCheckFeedbackResponse__fini(message_memory);
}

size_t bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__size_function__SpotCheckFeedbackResponse__camera_results(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__KeyStringValueBosdynMsgsDepthPlaneSpotCheckResult__Sequence * member =
    (const bosdyn_msgs__msg__KeyStringValueBosdynMsgsDepthPlaneSpotCheckResult__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__get_const_function__SpotCheckFeedbackResponse__camera_results(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__KeyStringValueBosdynMsgsDepthPlaneSpotCheckResult__Sequence * member =
    (const bosdyn_msgs__msg__KeyStringValueBosdynMsgsDepthPlaneSpotCheckResult__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__get_function__SpotCheckFeedbackResponse__camera_results(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsDepthPlaneSpotCheckResult__Sequence * member =
    (bosdyn_msgs__msg__KeyStringValueBosdynMsgsDepthPlaneSpotCheckResult__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__fetch_function__SpotCheckFeedbackResponse__camera_results(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__KeyStringValueBosdynMsgsDepthPlaneSpotCheckResult * item =
    ((const bosdyn_msgs__msg__KeyStringValueBosdynMsgsDepthPlaneSpotCheckResult *)
    bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__get_const_function__SpotCheckFeedbackResponse__camera_results(untyped_member, index));
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsDepthPlaneSpotCheckResult * value =
    (bosdyn_msgs__msg__KeyStringValueBosdynMsgsDepthPlaneSpotCheckResult *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__assign_function__SpotCheckFeedbackResponse__camera_results(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsDepthPlaneSpotCheckResult * item =
    ((bosdyn_msgs__msg__KeyStringValueBosdynMsgsDepthPlaneSpotCheckResult *)
    bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__get_function__SpotCheckFeedbackResponse__camera_results(untyped_member, index));
  const bosdyn_msgs__msg__KeyStringValueBosdynMsgsDepthPlaneSpotCheckResult * value =
    (const bosdyn_msgs__msg__KeyStringValueBosdynMsgsDepthPlaneSpotCheckResult *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__resize_function__SpotCheckFeedbackResponse__camera_results(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsDepthPlaneSpotCheckResult__Sequence * member =
    (bosdyn_msgs__msg__KeyStringValueBosdynMsgsDepthPlaneSpotCheckResult__Sequence *)(untyped_member);
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsDepthPlaneSpotCheckResult__Sequence__fini(member);
  return bosdyn_msgs__msg__KeyStringValueBosdynMsgsDepthPlaneSpotCheckResult__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__size_function__SpotCheckFeedbackResponse__load_cell_results(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__KeyStringValueBosdynMsgsLoadCellSpotCheckResult__Sequence * member =
    (const bosdyn_msgs__msg__KeyStringValueBosdynMsgsLoadCellSpotCheckResult__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__get_const_function__SpotCheckFeedbackResponse__load_cell_results(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__KeyStringValueBosdynMsgsLoadCellSpotCheckResult__Sequence * member =
    (const bosdyn_msgs__msg__KeyStringValueBosdynMsgsLoadCellSpotCheckResult__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__get_function__SpotCheckFeedbackResponse__load_cell_results(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsLoadCellSpotCheckResult__Sequence * member =
    (bosdyn_msgs__msg__KeyStringValueBosdynMsgsLoadCellSpotCheckResult__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__fetch_function__SpotCheckFeedbackResponse__load_cell_results(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__KeyStringValueBosdynMsgsLoadCellSpotCheckResult * item =
    ((const bosdyn_msgs__msg__KeyStringValueBosdynMsgsLoadCellSpotCheckResult *)
    bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__get_const_function__SpotCheckFeedbackResponse__load_cell_results(untyped_member, index));
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsLoadCellSpotCheckResult * value =
    (bosdyn_msgs__msg__KeyStringValueBosdynMsgsLoadCellSpotCheckResult *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__assign_function__SpotCheckFeedbackResponse__load_cell_results(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsLoadCellSpotCheckResult * item =
    ((bosdyn_msgs__msg__KeyStringValueBosdynMsgsLoadCellSpotCheckResult *)
    bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__get_function__SpotCheckFeedbackResponse__load_cell_results(untyped_member, index));
  const bosdyn_msgs__msg__KeyStringValueBosdynMsgsLoadCellSpotCheckResult * value =
    (const bosdyn_msgs__msg__KeyStringValueBosdynMsgsLoadCellSpotCheckResult *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__resize_function__SpotCheckFeedbackResponse__load_cell_results(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsLoadCellSpotCheckResult__Sequence * member =
    (bosdyn_msgs__msg__KeyStringValueBosdynMsgsLoadCellSpotCheckResult__Sequence *)(untyped_member);
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsLoadCellSpotCheckResult__Sequence__fini(member);
  return bosdyn_msgs__msg__KeyStringValueBosdynMsgsLoadCellSpotCheckResult__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__size_function__SpotCheckFeedbackResponse__kinematic_cal_results(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__KeyStringValueBosdynMsgsJointKinematicCheckResult__Sequence * member =
    (const bosdyn_msgs__msg__KeyStringValueBosdynMsgsJointKinematicCheckResult__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__get_const_function__SpotCheckFeedbackResponse__kinematic_cal_results(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__KeyStringValueBosdynMsgsJointKinematicCheckResult__Sequence * member =
    (const bosdyn_msgs__msg__KeyStringValueBosdynMsgsJointKinematicCheckResult__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__get_function__SpotCheckFeedbackResponse__kinematic_cal_results(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsJointKinematicCheckResult__Sequence * member =
    (bosdyn_msgs__msg__KeyStringValueBosdynMsgsJointKinematicCheckResult__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__fetch_function__SpotCheckFeedbackResponse__kinematic_cal_results(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__KeyStringValueBosdynMsgsJointKinematicCheckResult * item =
    ((const bosdyn_msgs__msg__KeyStringValueBosdynMsgsJointKinematicCheckResult *)
    bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__get_const_function__SpotCheckFeedbackResponse__kinematic_cal_results(untyped_member, index));
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsJointKinematicCheckResult * value =
    (bosdyn_msgs__msg__KeyStringValueBosdynMsgsJointKinematicCheckResult *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__assign_function__SpotCheckFeedbackResponse__kinematic_cal_results(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsJointKinematicCheckResult * item =
    ((bosdyn_msgs__msg__KeyStringValueBosdynMsgsJointKinematicCheckResult *)
    bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__get_function__SpotCheckFeedbackResponse__kinematic_cal_results(untyped_member, index));
  const bosdyn_msgs__msg__KeyStringValueBosdynMsgsJointKinematicCheckResult * value =
    (const bosdyn_msgs__msg__KeyStringValueBosdynMsgsJointKinematicCheckResult *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__resize_function__SpotCheckFeedbackResponse__kinematic_cal_results(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsJointKinematicCheckResult__Sequence * member =
    (bosdyn_msgs__msg__KeyStringValueBosdynMsgsJointKinematicCheckResult__Sequence *)(untyped_member);
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsJointKinematicCheckResult__Sequence__fini(member);
  return bosdyn_msgs__msg__KeyStringValueBosdynMsgsJointKinematicCheckResult__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__size_function__SpotCheckFeedbackResponse__hip_range_of_motion_results(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__KeyStringValueBosdynMsgsHipRangeOfMotionResult__Sequence * member =
    (const bosdyn_msgs__msg__KeyStringValueBosdynMsgsHipRangeOfMotionResult__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__get_const_function__SpotCheckFeedbackResponse__hip_range_of_motion_results(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__KeyStringValueBosdynMsgsHipRangeOfMotionResult__Sequence * member =
    (const bosdyn_msgs__msg__KeyStringValueBosdynMsgsHipRangeOfMotionResult__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__get_function__SpotCheckFeedbackResponse__hip_range_of_motion_results(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsHipRangeOfMotionResult__Sequence * member =
    (bosdyn_msgs__msg__KeyStringValueBosdynMsgsHipRangeOfMotionResult__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__fetch_function__SpotCheckFeedbackResponse__hip_range_of_motion_results(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__KeyStringValueBosdynMsgsHipRangeOfMotionResult * item =
    ((const bosdyn_msgs__msg__KeyStringValueBosdynMsgsHipRangeOfMotionResult *)
    bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__get_const_function__SpotCheckFeedbackResponse__hip_range_of_motion_results(untyped_member, index));
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsHipRangeOfMotionResult * value =
    (bosdyn_msgs__msg__KeyStringValueBosdynMsgsHipRangeOfMotionResult *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__assign_function__SpotCheckFeedbackResponse__hip_range_of_motion_results(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsHipRangeOfMotionResult * item =
    ((bosdyn_msgs__msg__KeyStringValueBosdynMsgsHipRangeOfMotionResult *)
    bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__get_function__SpotCheckFeedbackResponse__hip_range_of_motion_results(untyped_member, index));
  const bosdyn_msgs__msg__KeyStringValueBosdynMsgsHipRangeOfMotionResult * value =
    (const bosdyn_msgs__msg__KeyStringValueBosdynMsgsHipRangeOfMotionResult *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__resize_function__SpotCheckFeedbackResponse__hip_range_of_motion_results(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsHipRangeOfMotionResult__Sequence * member =
    (bosdyn_msgs__msg__KeyStringValueBosdynMsgsHipRangeOfMotionResult__Sequence *)(untyped_member);
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsHipRangeOfMotionResult__Sequence__fini(member);
  return bosdyn_msgs__msg__KeyStringValueBosdynMsgsHipRangeOfMotionResult__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__SpotCheckFeedbackResponse_message_member_array[14] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__SpotCheckFeedbackResponse, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "header_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__SpotCheckFeedbackResponse, header_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__SpotCheckFeedbackResponse, state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "last_command",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__SpotCheckFeedbackResponse, last_command),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__SpotCheckFeedbackResponse, error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "camera_results",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__SpotCheckFeedbackResponse, camera_results),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__size_function__SpotCheckFeedbackResponse__camera_results,  // size() function pointer
    bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__get_const_function__SpotCheckFeedbackResponse__camera_results,  // get_const(index) function pointer
    bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__get_function__SpotCheckFeedbackResponse__camera_results,  // get(index) function pointer
    bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__fetch_function__SpotCheckFeedbackResponse__camera_results,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__assign_function__SpotCheckFeedbackResponse__camera_results,  // assign(index, value) function pointer
    bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__resize_function__SpotCheckFeedbackResponse__camera_results  // resize(index) function pointer
  },
  {
    "load_cell_results",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__SpotCheckFeedbackResponse, load_cell_results),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__size_function__SpotCheckFeedbackResponse__load_cell_results,  // size() function pointer
    bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__get_const_function__SpotCheckFeedbackResponse__load_cell_results,  // get_const(index) function pointer
    bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__get_function__SpotCheckFeedbackResponse__load_cell_results,  // get(index) function pointer
    bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__fetch_function__SpotCheckFeedbackResponse__load_cell_results,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__assign_function__SpotCheckFeedbackResponse__load_cell_results,  // assign(index, value) function pointer
    bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__resize_function__SpotCheckFeedbackResponse__load_cell_results  // resize(index) function pointer
  },
  {
    "kinematic_cal_results",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__SpotCheckFeedbackResponse, kinematic_cal_results),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__size_function__SpotCheckFeedbackResponse__kinematic_cal_results,  // size() function pointer
    bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__get_const_function__SpotCheckFeedbackResponse__kinematic_cal_results,  // get_const(index) function pointer
    bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__get_function__SpotCheckFeedbackResponse__kinematic_cal_results,  // get(index) function pointer
    bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__fetch_function__SpotCheckFeedbackResponse__kinematic_cal_results,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__assign_function__SpotCheckFeedbackResponse__kinematic_cal_results,  // assign(index, value) function pointer
    bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__resize_function__SpotCheckFeedbackResponse__kinematic_cal_results  // resize(index) function pointer
  },
  {
    "payload_result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__SpotCheckFeedbackResponse, payload_result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "payload_result_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__SpotCheckFeedbackResponse, payload_result_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "hip_range_of_motion_results",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__SpotCheckFeedbackResponse, hip_range_of_motion_results),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__size_function__SpotCheckFeedbackResponse__hip_range_of_motion_results,  // size() function pointer
    bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__get_const_function__SpotCheckFeedbackResponse__hip_range_of_motion_results,  // get_const(index) function pointer
    bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__get_function__SpotCheckFeedbackResponse__hip_range_of_motion_results,  // get(index) function pointer
    bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__fetch_function__SpotCheckFeedbackResponse__hip_range_of_motion_results,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__assign_function__SpotCheckFeedbackResponse__hip_range_of_motion_results,  // assign(index, value) function pointer
    bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__resize_function__SpotCheckFeedbackResponse__hip_range_of_motion_results  // resize(index) function pointer
  },
  {
    "progress",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__SpotCheckFeedbackResponse, progress),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "last_cal_timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__SpotCheckFeedbackResponse, last_cal_timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "last_cal_timestamp_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__SpotCheckFeedbackResponse, last_cal_timestamp_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__SpotCheckFeedbackResponse_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "SpotCheckFeedbackResponse",  // message name
  14,  // number of fields
  sizeof(bosdyn_msgs__msg__SpotCheckFeedbackResponse),
  bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__SpotCheckFeedbackResponse_message_member_array,  // message members
  bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__SpotCheckFeedbackResponse_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__SpotCheckFeedbackResponse_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__SpotCheckFeedbackResponse_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__SpotCheckFeedbackResponse_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, SpotCheckFeedbackResponse)() {
  bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__SpotCheckFeedbackResponse_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ResponseHeader)();
  bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__SpotCheckFeedbackResponse_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, SpotCheckFeedbackResponseState)();
  bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__SpotCheckFeedbackResponse_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, SpotCheckCommandRequestCommand)();
  bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__SpotCheckFeedbackResponse_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, SpotCheckFeedbackResponseError)();
  bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__SpotCheckFeedbackResponse_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, KeyStringValueBosdynMsgsDepthPlaneSpotCheckResult)();
  bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__SpotCheckFeedbackResponse_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, KeyStringValueBosdynMsgsLoadCellSpotCheckResult)();
  bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__SpotCheckFeedbackResponse_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, KeyStringValueBosdynMsgsJointKinematicCheckResult)();
  bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__SpotCheckFeedbackResponse_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, PayloadCheckResult)();
  bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__SpotCheckFeedbackResponse_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, KeyStringValueBosdynMsgsHipRangeOfMotionResult)();
  bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__SpotCheckFeedbackResponse_message_member_array[12].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__SpotCheckFeedbackResponse_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__SpotCheckFeedbackResponse_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__SpotCheckFeedbackResponse__rosidl_typesupport_introspection_c__SpotCheckFeedbackResponse_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
