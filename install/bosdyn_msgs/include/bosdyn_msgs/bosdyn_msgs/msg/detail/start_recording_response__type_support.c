// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/StartRecordingResponse.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/start_recording_response__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/start_recording_response__functions.h"
#include "bosdyn_msgs/msg/detail/start_recording_response__struct.h"


// Include directives for member types
// Member `header`
#include "bosdyn_msgs/msg/response_header.h"
// Member `header`
#include "bosdyn_msgs/msg/detail/response_header__rosidl_typesupport_introspection_c.h"
// Member `created_waypoint`
#include "bosdyn_msgs/msg/waypoint.h"
// Member `created_waypoint`
#include "bosdyn_msgs/msg/detail/waypoint__rosidl_typesupport_introspection_c.h"
// Member `lease_use_result`
#include "bosdyn_msgs/msg/lease_use_result.h"
// Member `lease_use_result`
#include "bosdyn_msgs/msg/detail/lease_use_result__rosidl_typesupport_introspection_c.h"
// Member `status`
#include "bosdyn_msgs/msg/start_recording_response_status.h"
// Member `status`
#include "bosdyn_msgs/msg/detail/start_recording_response_status__rosidl_typesupport_introspection_c.h"
// Member `missing_fiducials`
// Member `bad_pose_fiducials`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `license_status`
#include "bosdyn_msgs/msg/license_info_status.h"
// Member `license_status`
#include "bosdyn_msgs/msg/detail/license_info_status__rosidl_typesupport_introspection_c.h"
// Member `impaired_state`
#include "bosdyn_msgs/msg/robot_impaired_state.h"
// Member `impaired_state`
#include "bosdyn_msgs/msg/detail/robot_impaired_state__rosidl_typesupport_introspection_c.h"
// Member `session_start_time`
#include "builtin_interfaces/msg/time.h"
// Member `session_start_time`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `map_stats`
#include "bosdyn_msgs/msg/map_stats.h"
// Member `map_stats`
#include "bosdyn_msgs/msg/detail/map_stats__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__StartRecordingResponse__rosidl_typesupport_introspection_c__StartRecordingResponse_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__StartRecordingResponse__init(message_memory);
}

void bosdyn_msgs__msg__StartRecordingResponse__rosidl_typesupport_introspection_c__StartRecordingResponse_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__StartRecordingResponse__fini(message_memory);
}

size_t bosdyn_msgs__msg__StartRecordingResponse__rosidl_typesupport_introspection_c__size_function__StartRecordingResponse__missing_fiducials(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__StartRecordingResponse__rosidl_typesupport_introspection_c__get_const_function__StartRecordingResponse__missing_fiducials(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__StartRecordingResponse__rosidl_typesupport_introspection_c__get_function__StartRecordingResponse__missing_fiducials(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__StartRecordingResponse__rosidl_typesupport_introspection_c__fetch_function__StartRecordingResponse__missing_fiducials(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    bosdyn_msgs__msg__StartRecordingResponse__rosidl_typesupport_introspection_c__get_const_function__StartRecordingResponse__missing_fiducials(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__StartRecordingResponse__rosidl_typesupport_introspection_c__assign_function__StartRecordingResponse__missing_fiducials(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    bosdyn_msgs__msg__StartRecordingResponse__rosidl_typesupport_introspection_c__get_function__StartRecordingResponse__missing_fiducials(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__StartRecordingResponse__rosidl_typesupport_introspection_c__resize_function__StartRecordingResponse__missing_fiducials(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__StartRecordingResponse__rosidl_typesupport_introspection_c__size_function__StartRecordingResponse__bad_pose_fiducials(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__StartRecordingResponse__rosidl_typesupport_introspection_c__get_const_function__StartRecordingResponse__bad_pose_fiducials(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__StartRecordingResponse__rosidl_typesupport_introspection_c__get_function__StartRecordingResponse__bad_pose_fiducials(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__StartRecordingResponse__rosidl_typesupport_introspection_c__fetch_function__StartRecordingResponse__bad_pose_fiducials(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    bosdyn_msgs__msg__StartRecordingResponse__rosidl_typesupport_introspection_c__get_const_function__StartRecordingResponse__bad_pose_fiducials(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__StartRecordingResponse__rosidl_typesupport_introspection_c__assign_function__StartRecordingResponse__bad_pose_fiducials(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    bosdyn_msgs__msg__StartRecordingResponse__rosidl_typesupport_introspection_c__get_function__StartRecordingResponse__bad_pose_fiducials(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__StartRecordingResponse__rosidl_typesupport_introspection_c__resize_function__StartRecordingResponse__bad_pose_fiducials(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__StartRecordingResponse__rosidl_typesupport_introspection_c__StartRecordingResponse_message_member_array[16] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__StartRecordingResponse, header),  // bytes offset in struct
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
    offsetof(bosdyn_msgs__msg__StartRecordingResponse, header_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "created_waypoint",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__StartRecordingResponse, created_waypoint),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "created_waypoint_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__StartRecordingResponse, created_waypoint_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lease_use_result",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__StartRecordingResponse, lease_use_result),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lease_use_result_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__StartRecordingResponse, lease_use_result_is_set),  // bytes offset in struct
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
    offsetof(bosdyn_msgs__msg__StartRecordingResponse, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "missing_fiducials",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__StartRecordingResponse, missing_fiducials),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__StartRecordingResponse__rosidl_typesupport_introspection_c__size_function__StartRecordingResponse__missing_fiducials,  // size() function pointer
    bosdyn_msgs__msg__StartRecordingResponse__rosidl_typesupport_introspection_c__get_const_function__StartRecordingResponse__missing_fiducials,  // get_const(index) function pointer
    bosdyn_msgs__msg__StartRecordingResponse__rosidl_typesupport_introspection_c__get_function__StartRecordingResponse__missing_fiducials,  // get(index) function pointer
    bosdyn_msgs__msg__StartRecordingResponse__rosidl_typesupport_introspection_c__fetch_function__StartRecordingResponse__missing_fiducials,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__StartRecordingResponse__rosidl_typesupport_introspection_c__assign_function__StartRecordingResponse__missing_fiducials,  // assign(index, value) function pointer
    bosdyn_msgs__msg__StartRecordingResponse__rosidl_typesupport_introspection_c__resize_function__StartRecordingResponse__missing_fiducials  // resize(index) function pointer
  },
  {
    "bad_pose_fiducials",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__StartRecordingResponse, bad_pose_fiducials),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__StartRecordingResponse__rosidl_typesupport_introspection_c__size_function__StartRecordingResponse__bad_pose_fiducials,  // size() function pointer
    bosdyn_msgs__msg__StartRecordingResponse__rosidl_typesupport_introspection_c__get_const_function__StartRecordingResponse__bad_pose_fiducials,  // get_const(index) function pointer
    bosdyn_msgs__msg__StartRecordingResponse__rosidl_typesupport_introspection_c__get_function__StartRecordingResponse__bad_pose_fiducials,  // get(index) function pointer
    bosdyn_msgs__msg__StartRecordingResponse__rosidl_typesupport_introspection_c__fetch_function__StartRecordingResponse__bad_pose_fiducials,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__StartRecordingResponse__rosidl_typesupport_introspection_c__assign_function__StartRecordingResponse__bad_pose_fiducials,  // assign(index, value) function pointer
    bosdyn_msgs__msg__StartRecordingResponse__rosidl_typesupport_introspection_c__resize_function__StartRecordingResponse__bad_pose_fiducials  // resize(index) function pointer
  },
  {
    "license_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__StartRecordingResponse, license_status),  // bytes offset in struct
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
    offsetof(bosdyn_msgs__msg__StartRecordingResponse, impaired_state),  // bytes offset in struct
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
    offsetof(bosdyn_msgs__msg__StartRecordingResponse, impaired_state_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "session_start_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__StartRecordingResponse, session_start_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "session_start_time_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__StartRecordingResponse, session_start_time_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "map_stats",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__StartRecordingResponse, map_stats),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "map_stats_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__StartRecordingResponse, map_stats_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__StartRecordingResponse__rosidl_typesupport_introspection_c__StartRecordingResponse_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "StartRecordingResponse",  // message name
  16,  // number of fields
  sizeof(bosdyn_msgs__msg__StartRecordingResponse),
  bosdyn_msgs__msg__StartRecordingResponse__rosidl_typesupport_introspection_c__StartRecordingResponse_message_member_array,  // message members
  bosdyn_msgs__msg__StartRecordingResponse__rosidl_typesupport_introspection_c__StartRecordingResponse_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__StartRecordingResponse__rosidl_typesupport_introspection_c__StartRecordingResponse_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__StartRecordingResponse__rosidl_typesupport_introspection_c__StartRecordingResponse_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__StartRecordingResponse__rosidl_typesupport_introspection_c__StartRecordingResponse_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, StartRecordingResponse)() {
  bosdyn_msgs__msg__StartRecordingResponse__rosidl_typesupport_introspection_c__StartRecordingResponse_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ResponseHeader)();
  bosdyn_msgs__msg__StartRecordingResponse__rosidl_typesupport_introspection_c__StartRecordingResponse_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, Waypoint)();
  bosdyn_msgs__msg__StartRecordingResponse__rosidl_typesupport_introspection_c__StartRecordingResponse_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, LeaseUseResult)();
  bosdyn_msgs__msg__StartRecordingResponse__rosidl_typesupport_introspection_c__StartRecordingResponse_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, StartRecordingResponseStatus)();
  bosdyn_msgs__msg__StartRecordingResponse__rosidl_typesupport_introspection_c__StartRecordingResponse_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, LicenseInfoStatus)();
  bosdyn_msgs__msg__StartRecordingResponse__rosidl_typesupport_introspection_c__StartRecordingResponse_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, RobotImpairedState)();
  bosdyn_msgs__msg__StartRecordingResponse__rosidl_typesupport_introspection_c__StartRecordingResponse_message_member_array[12].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  bosdyn_msgs__msg__StartRecordingResponse__rosidl_typesupport_introspection_c__StartRecordingResponse_message_member_array[14].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, MapStats)();
  if (!bosdyn_msgs__msg__StartRecordingResponse__rosidl_typesupport_introspection_c__StartRecordingResponse_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__StartRecordingResponse__rosidl_typesupport_introspection_c__StartRecordingResponse_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__StartRecordingResponse__rosidl_typesupport_introspection_c__StartRecordingResponse_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
