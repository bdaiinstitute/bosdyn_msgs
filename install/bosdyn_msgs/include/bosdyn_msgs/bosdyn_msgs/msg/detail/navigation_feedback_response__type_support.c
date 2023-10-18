// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/NavigationFeedbackResponse.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/navigation_feedback_response__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/navigation_feedback_response__functions.h"
#include "bosdyn_msgs/msg/detail/navigation_feedback_response__struct.h"


// Include directives for member types
// Member `header`
#include "bosdyn_msgs/msg/response_header.h"
// Member `header`
#include "bosdyn_msgs/msg/detail/response_header__rosidl_typesupport_introspection_c.h"
// Member `status`
#include "bosdyn_msgs/msg/navigation_feedback_response_status.h"
// Member `status`
#include "bosdyn_msgs/msg/detail/navigation_feedback_response_status__rosidl_typesupport_introspection_c.h"
// Member `impaired_state`
#include "bosdyn_msgs/msg/robot_impaired_state.h"
// Member `impaired_state`
#include "bosdyn_msgs/msg/detail/robot_impaired_state__rosidl_typesupport_introspection_c.h"
// Member `area_callback_errors`
#include "bosdyn_msgs/msg/key_string_value_bosdyn_msgs_area_callback_error.h"
// Member `area_callback_errors`
#include "bosdyn_msgs/msg/detail/key_string_value_bosdyn_msgs_area_callback_error__rosidl_typesupport_introspection_c.h"
// Member `remaining_route`
#include "bosdyn_msgs/msg/route.h"
// Member `remaining_route`
#include "bosdyn_msgs/msg/detail/route__rosidl_typesupport_introspection_c.h"
// Member `last_ko_tform_goal`
#include "geometry_msgs/msg/pose.h"
// Member `last_ko_tform_goal`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `body_movement_status`
#include "bosdyn_msgs/msg/se2_trajectory_command_feedback_body_movement_status.h"
// Member `body_movement_status`
#include "bosdyn_msgs/msg/detail/se2_trajectory_command_feedback_body_movement_status__rosidl_typesupport_introspection_c.h"
// Member `path_following_mode`
#include "bosdyn_msgs/msg/edge_annotations_path_following_mode.h"
// Member `path_following_mode`
#include "bosdyn_msgs/msg/detail/edge_annotations_path_following_mode__rosidl_typesupport_introspection_c.h"
// Member `active_region_information`
#include "bosdyn_msgs/msg/key_string_value_bosdyn_msgs_navigation_feedback_response_active_region_information.h"
// Member `active_region_information`
#include "bosdyn_msgs/msg/detail/key_string_value_bosdyn_msgs_navigation_feedback_response_active_region_information__rosidl_typesupport_introspection_c.h"
// Member `route_following_status`
#include "bosdyn_msgs/msg/navigation_feedback_response_route_following_status.h"
// Member `route_following_status`
#include "bosdyn_msgs/msg/detail/navigation_feedback_response_route_following_status__rosidl_typesupport_introspection_c.h"
// Member `blockage_status`
#include "bosdyn_msgs/msg/navigation_feedback_response_blockage_status.h"
// Member `blockage_status`
#include "bosdyn_msgs/msg/detail/navigation_feedback_response_blockage_status__rosidl_typesupport_introspection_c.h"
// Member `stuck_reason`
#include "bosdyn_msgs/msg/navigation_feedback_response_stuck_reason.h"
// Member `stuck_reason`
#include "bosdyn_msgs/msg/detail/navigation_feedback_response_stuck_reason__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__NavigationFeedbackResponse__rosidl_typesupport_introspection_c__NavigationFeedbackResponse_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__NavigationFeedbackResponse__init(message_memory);
}

void bosdyn_msgs__msg__NavigationFeedbackResponse__rosidl_typesupport_introspection_c__NavigationFeedbackResponse_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__NavigationFeedbackResponse__fini(message_memory);
}

size_t bosdyn_msgs__msg__NavigationFeedbackResponse__rosidl_typesupport_introspection_c__size_function__NavigationFeedbackResponse__area_callback_errors(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__KeyStringValueBosdynMsgsAreaCallbackError__Sequence * member =
    (const bosdyn_msgs__msg__KeyStringValueBosdynMsgsAreaCallbackError__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__NavigationFeedbackResponse__rosidl_typesupport_introspection_c__get_const_function__NavigationFeedbackResponse__area_callback_errors(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__KeyStringValueBosdynMsgsAreaCallbackError__Sequence * member =
    (const bosdyn_msgs__msg__KeyStringValueBosdynMsgsAreaCallbackError__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__NavigationFeedbackResponse__rosidl_typesupport_introspection_c__get_function__NavigationFeedbackResponse__area_callback_errors(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsAreaCallbackError__Sequence * member =
    (bosdyn_msgs__msg__KeyStringValueBosdynMsgsAreaCallbackError__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__NavigationFeedbackResponse__rosidl_typesupport_introspection_c__fetch_function__NavigationFeedbackResponse__area_callback_errors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__KeyStringValueBosdynMsgsAreaCallbackError * item =
    ((const bosdyn_msgs__msg__KeyStringValueBosdynMsgsAreaCallbackError *)
    bosdyn_msgs__msg__NavigationFeedbackResponse__rosidl_typesupport_introspection_c__get_const_function__NavigationFeedbackResponse__area_callback_errors(untyped_member, index));
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsAreaCallbackError * value =
    (bosdyn_msgs__msg__KeyStringValueBosdynMsgsAreaCallbackError *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__NavigationFeedbackResponse__rosidl_typesupport_introspection_c__assign_function__NavigationFeedbackResponse__area_callback_errors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsAreaCallbackError * item =
    ((bosdyn_msgs__msg__KeyStringValueBosdynMsgsAreaCallbackError *)
    bosdyn_msgs__msg__NavigationFeedbackResponse__rosidl_typesupport_introspection_c__get_function__NavigationFeedbackResponse__area_callback_errors(untyped_member, index));
  const bosdyn_msgs__msg__KeyStringValueBosdynMsgsAreaCallbackError * value =
    (const bosdyn_msgs__msg__KeyStringValueBosdynMsgsAreaCallbackError *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__NavigationFeedbackResponse__rosidl_typesupport_introspection_c__resize_function__NavigationFeedbackResponse__area_callback_errors(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsAreaCallbackError__Sequence * member =
    (bosdyn_msgs__msg__KeyStringValueBosdynMsgsAreaCallbackError__Sequence *)(untyped_member);
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsAreaCallbackError__Sequence__fini(member);
  return bosdyn_msgs__msg__KeyStringValueBosdynMsgsAreaCallbackError__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__NavigationFeedbackResponse__rosidl_typesupport_introspection_c__size_function__NavigationFeedbackResponse__active_region_information(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__KeyStringValueBosdynMsgsNavigationFeedbackResponseActiveRegionInformation__Sequence * member =
    (const bosdyn_msgs__msg__KeyStringValueBosdynMsgsNavigationFeedbackResponseActiveRegionInformation__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__NavigationFeedbackResponse__rosidl_typesupport_introspection_c__get_const_function__NavigationFeedbackResponse__active_region_information(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__KeyStringValueBosdynMsgsNavigationFeedbackResponseActiveRegionInformation__Sequence * member =
    (const bosdyn_msgs__msg__KeyStringValueBosdynMsgsNavigationFeedbackResponseActiveRegionInformation__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__NavigationFeedbackResponse__rosidl_typesupport_introspection_c__get_function__NavigationFeedbackResponse__active_region_information(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsNavigationFeedbackResponseActiveRegionInformation__Sequence * member =
    (bosdyn_msgs__msg__KeyStringValueBosdynMsgsNavigationFeedbackResponseActiveRegionInformation__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__NavigationFeedbackResponse__rosidl_typesupport_introspection_c__fetch_function__NavigationFeedbackResponse__active_region_information(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__KeyStringValueBosdynMsgsNavigationFeedbackResponseActiveRegionInformation * item =
    ((const bosdyn_msgs__msg__KeyStringValueBosdynMsgsNavigationFeedbackResponseActiveRegionInformation *)
    bosdyn_msgs__msg__NavigationFeedbackResponse__rosidl_typesupport_introspection_c__get_const_function__NavigationFeedbackResponse__active_region_information(untyped_member, index));
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsNavigationFeedbackResponseActiveRegionInformation * value =
    (bosdyn_msgs__msg__KeyStringValueBosdynMsgsNavigationFeedbackResponseActiveRegionInformation *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__NavigationFeedbackResponse__rosidl_typesupport_introspection_c__assign_function__NavigationFeedbackResponse__active_region_information(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsNavigationFeedbackResponseActiveRegionInformation * item =
    ((bosdyn_msgs__msg__KeyStringValueBosdynMsgsNavigationFeedbackResponseActiveRegionInformation *)
    bosdyn_msgs__msg__NavigationFeedbackResponse__rosidl_typesupport_introspection_c__get_function__NavigationFeedbackResponse__active_region_information(untyped_member, index));
  const bosdyn_msgs__msg__KeyStringValueBosdynMsgsNavigationFeedbackResponseActiveRegionInformation * value =
    (const bosdyn_msgs__msg__KeyStringValueBosdynMsgsNavigationFeedbackResponseActiveRegionInformation *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__NavigationFeedbackResponse__rosidl_typesupport_introspection_c__resize_function__NavigationFeedbackResponse__active_region_information(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsNavigationFeedbackResponseActiveRegionInformation__Sequence * member =
    (bosdyn_msgs__msg__KeyStringValueBosdynMsgsNavigationFeedbackResponseActiveRegionInformation__Sequence *)(untyped_member);
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsNavigationFeedbackResponseActiveRegionInformation__Sequence__fini(member);
  return bosdyn_msgs__msg__KeyStringValueBosdynMsgsNavigationFeedbackResponseActiveRegionInformation__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__NavigationFeedbackResponse__rosidl_typesupport_introspection_c__NavigationFeedbackResponse_message_member_array[17] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__NavigationFeedbackResponse, header),  // bytes offset in struct
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
    offsetof(bosdyn_msgs__msg__NavigationFeedbackResponse, header_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__NavigationFeedbackResponse, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "impaired_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__NavigationFeedbackResponse, impaired_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "impaired_state_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__NavigationFeedbackResponse, impaired_state_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "area_callback_errors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__NavigationFeedbackResponse, area_callback_errors),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__NavigationFeedbackResponse__rosidl_typesupport_introspection_c__size_function__NavigationFeedbackResponse__area_callback_errors,  // size() function pointer
    bosdyn_msgs__msg__NavigationFeedbackResponse__rosidl_typesupport_introspection_c__get_const_function__NavigationFeedbackResponse__area_callback_errors,  // get_const(index) function pointer
    bosdyn_msgs__msg__NavigationFeedbackResponse__rosidl_typesupport_introspection_c__get_function__NavigationFeedbackResponse__area_callback_errors,  // get(index) function pointer
    bosdyn_msgs__msg__NavigationFeedbackResponse__rosidl_typesupport_introspection_c__fetch_function__NavigationFeedbackResponse__area_callback_errors,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__NavigationFeedbackResponse__rosidl_typesupport_introspection_c__assign_function__NavigationFeedbackResponse__area_callback_errors,  // assign(index, value) function pointer
    bosdyn_msgs__msg__NavigationFeedbackResponse__rosidl_typesupport_introspection_c__resize_function__NavigationFeedbackResponse__area_callback_errors  // resize(index) function pointer
  },
  {
    "remaining_route",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__NavigationFeedbackResponse, remaining_route),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "remaining_route_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__NavigationFeedbackResponse, remaining_route_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "command_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__NavigationFeedbackResponse, command_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "last_ko_tform_goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__NavigationFeedbackResponse, last_ko_tform_goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "last_ko_tform_goal_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__NavigationFeedbackResponse, last_ko_tform_goal_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "body_movement_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__NavigationFeedbackResponse, body_movement_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "path_following_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__NavigationFeedbackResponse, path_following_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "active_region_information",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__NavigationFeedbackResponse, active_region_information),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__NavigationFeedbackResponse__rosidl_typesupport_introspection_c__size_function__NavigationFeedbackResponse__active_region_information,  // size() function pointer
    bosdyn_msgs__msg__NavigationFeedbackResponse__rosidl_typesupport_introspection_c__get_const_function__NavigationFeedbackResponse__active_region_information,  // get_const(index) function pointer
    bosdyn_msgs__msg__NavigationFeedbackResponse__rosidl_typesupport_introspection_c__get_function__NavigationFeedbackResponse__active_region_information,  // get(index) function pointer
    bosdyn_msgs__msg__NavigationFeedbackResponse__rosidl_typesupport_introspection_c__fetch_function__NavigationFeedbackResponse__active_region_information,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__NavigationFeedbackResponse__rosidl_typesupport_introspection_c__assign_function__NavigationFeedbackResponse__active_region_information,  // assign(index, value) function pointer
    bosdyn_msgs__msg__NavigationFeedbackResponse__rosidl_typesupport_introspection_c__resize_function__NavigationFeedbackResponse__active_region_information  // resize(index) function pointer
  },
  {
    "route_following_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__NavigationFeedbackResponse, route_following_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "blockage_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__NavigationFeedbackResponse, blockage_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stuck_reason",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__NavigationFeedbackResponse, stuck_reason),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__NavigationFeedbackResponse__rosidl_typesupport_introspection_c__NavigationFeedbackResponse_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "NavigationFeedbackResponse",  // message name
  17,  // number of fields
  sizeof(bosdyn_msgs__msg__NavigationFeedbackResponse),
  bosdyn_msgs__msg__NavigationFeedbackResponse__rosidl_typesupport_introspection_c__NavigationFeedbackResponse_message_member_array,  // message members
  bosdyn_msgs__msg__NavigationFeedbackResponse__rosidl_typesupport_introspection_c__NavigationFeedbackResponse_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__NavigationFeedbackResponse__rosidl_typesupport_introspection_c__NavigationFeedbackResponse_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__NavigationFeedbackResponse__rosidl_typesupport_introspection_c__NavigationFeedbackResponse_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__NavigationFeedbackResponse__rosidl_typesupport_introspection_c__NavigationFeedbackResponse_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, NavigationFeedbackResponse)() {
  bosdyn_msgs__msg__NavigationFeedbackResponse__rosidl_typesupport_introspection_c__NavigationFeedbackResponse_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ResponseHeader)();
  bosdyn_msgs__msg__NavigationFeedbackResponse__rosidl_typesupport_introspection_c__NavigationFeedbackResponse_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, NavigationFeedbackResponseStatus)();
  bosdyn_msgs__msg__NavigationFeedbackResponse__rosidl_typesupport_introspection_c__NavigationFeedbackResponse_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, RobotImpairedState)();
  bosdyn_msgs__msg__NavigationFeedbackResponse__rosidl_typesupport_introspection_c__NavigationFeedbackResponse_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, KeyStringValueBosdynMsgsAreaCallbackError)();
  bosdyn_msgs__msg__NavigationFeedbackResponse__rosidl_typesupport_introspection_c__NavigationFeedbackResponse_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, Route)();
  bosdyn_msgs__msg__NavigationFeedbackResponse__rosidl_typesupport_introspection_c__NavigationFeedbackResponse_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  bosdyn_msgs__msg__NavigationFeedbackResponse__rosidl_typesupport_introspection_c__NavigationFeedbackResponse_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, SE2TrajectoryCommandFeedbackBodyMovementStatus)();
  bosdyn_msgs__msg__NavigationFeedbackResponse__rosidl_typesupport_introspection_c__NavigationFeedbackResponse_message_member_array[12].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, EdgeAnnotationsPathFollowingMode)();
  bosdyn_msgs__msg__NavigationFeedbackResponse__rosidl_typesupport_introspection_c__NavigationFeedbackResponse_message_member_array[13].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, KeyStringValueBosdynMsgsNavigationFeedbackResponseActiveRegionInformation)();
  bosdyn_msgs__msg__NavigationFeedbackResponse__rosidl_typesupport_introspection_c__NavigationFeedbackResponse_message_member_array[14].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, NavigationFeedbackResponseRouteFollowingStatus)();
  bosdyn_msgs__msg__NavigationFeedbackResponse__rosidl_typesupport_introspection_c__NavigationFeedbackResponse_message_member_array[15].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, NavigationFeedbackResponseBlockageStatus)();
  bosdyn_msgs__msg__NavigationFeedbackResponse__rosidl_typesupport_introspection_c__NavigationFeedbackResponse_message_member_array[16].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, NavigationFeedbackResponseStuckReason)();
  if (!bosdyn_msgs__msg__NavigationFeedbackResponse__rosidl_typesupport_introspection_c__NavigationFeedbackResponse_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__NavigationFeedbackResponse__rosidl_typesupport_introspection_c__NavigationFeedbackResponse_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__NavigationFeedbackResponse__rosidl_typesupport_introspection_c__NavigationFeedbackResponse_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
