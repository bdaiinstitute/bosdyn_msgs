// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/NavigateRouteResponse.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/navigate_route_response__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/navigate_route_response__functions.h"
#include "bosdyn_msgs/msg/detail/navigate_route_response__struct.h"


// Include directives for member types
// Member `header`
#include "bosdyn_msgs/msg/response_header.h"
// Member `header`
#include "bosdyn_msgs/msg/detail/response_header__rosidl_typesupport_introspection_c.h"
// Member `lease_use_results`
#include "bosdyn_msgs/msg/lease_use_result.h"
// Member `lease_use_results`
#include "bosdyn_msgs/msg/detail/lease_use_result__rosidl_typesupport_introspection_c.h"
// Member `status`
#include "bosdyn_msgs/msg/navigate_route_response_status.h"
// Member `status`
#include "bosdyn_msgs/msg/detail/navigate_route_response_status__rosidl_typesupport_introspection_c.h"
// Member `impaired_state`
#include "bosdyn_msgs/msg/robot_impaired_state.h"
// Member `impaired_state`
#include "bosdyn_msgs/msg/detail/robot_impaired_state__rosidl_typesupport_introspection_c.h"
// Member `error_waypoint_ids`
#include "rosidl_runtime_c/string_functions.h"
// Member `error_edge_ids`
#include "bosdyn_msgs/msg/edge_id.h"
// Member `error_edge_ids`
#include "bosdyn_msgs/msg/detail/edge_id__rosidl_typesupport_introspection_c.h"
// Member `area_callback_error`
#include "bosdyn_msgs/msg/area_callback_service_error.h"
// Member `area_callback_error`
#include "bosdyn_msgs/msg/detail/area_callback_service_error__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__NavigateRouteResponse__rosidl_typesupport_introspection_c__NavigateRouteResponse_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__NavigateRouteResponse__init(message_memory);
}

void bosdyn_msgs__msg__NavigateRouteResponse__rosidl_typesupport_introspection_c__NavigateRouteResponse_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__NavigateRouteResponse__fini(message_memory);
}

size_t bosdyn_msgs__msg__NavigateRouteResponse__rosidl_typesupport_introspection_c__size_function__NavigateRouteResponse__lease_use_results(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__LeaseUseResult__Sequence * member =
    (const bosdyn_msgs__msg__LeaseUseResult__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__NavigateRouteResponse__rosidl_typesupport_introspection_c__get_const_function__NavigateRouteResponse__lease_use_results(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__LeaseUseResult__Sequence * member =
    (const bosdyn_msgs__msg__LeaseUseResult__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__NavigateRouteResponse__rosidl_typesupport_introspection_c__get_function__NavigateRouteResponse__lease_use_results(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__LeaseUseResult__Sequence * member =
    (bosdyn_msgs__msg__LeaseUseResult__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__NavigateRouteResponse__rosidl_typesupport_introspection_c__fetch_function__NavigateRouteResponse__lease_use_results(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__LeaseUseResult * item =
    ((const bosdyn_msgs__msg__LeaseUseResult *)
    bosdyn_msgs__msg__NavigateRouteResponse__rosidl_typesupport_introspection_c__get_const_function__NavigateRouteResponse__lease_use_results(untyped_member, index));
  bosdyn_msgs__msg__LeaseUseResult * value =
    (bosdyn_msgs__msg__LeaseUseResult *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__NavigateRouteResponse__rosidl_typesupport_introspection_c__assign_function__NavigateRouteResponse__lease_use_results(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__LeaseUseResult * item =
    ((bosdyn_msgs__msg__LeaseUseResult *)
    bosdyn_msgs__msg__NavigateRouteResponse__rosidl_typesupport_introspection_c__get_function__NavigateRouteResponse__lease_use_results(untyped_member, index));
  const bosdyn_msgs__msg__LeaseUseResult * value =
    (const bosdyn_msgs__msg__LeaseUseResult *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__NavigateRouteResponse__rosidl_typesupport_introspection_c__resize_function__NavigateRouteResponse__lease_use_results(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__LeaseUseResult__Sequence * member =
    (bosdyn_msgs__msg__LeaseUseResult__Sequence *)(untyped_member);
  bosdyn_msgs__msg__LeaseUseResult__Sequence__fini(member);
  return bosdyn_msgs__msg__LeaseUseResult__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__NavigateRouteResponse__rosidl_typesupport_introspection_c__size_function__NavigateRouteResponse__error_waypoint_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__NavigateRouteResponse__rosidl_typesupport_introspection_c__get_const_function__NavigateRouteResponse__error_waypoint_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__NavigateRouteResponse__rosidl_typesupport_introspection_c__get_function__NavigateRouteResponse__error_waypoint_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__NavigateRouteResponse__rosidl_typesupport_introspection_c__fetch_function__NavigateRouteResponse__error_waypoint_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    bosdyn_msgs__msg__NavigateRouteResponse__rosidl_typesupport_introspection_c__get_const_function__NavigateRouteResponse__error_waypoint_ids(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__NavigateRouteResponse__rosidl_typesupport_introspection_c__assign_function__NavigateRouteResponse__error_waypoint_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    bosdyn_msgs__msg__NavigateRouteResponse__rosidl_typesupport_introspection_c__get_function__NavigateRouteResponse__error_waypoint_ids(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__NavigateRouteResponse__rosidl_typesupport_introspection_c__resize_function__NavigateRouteResponse__error_waypoint_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__NavigateRouteResponse__rosidl_typesupport_introspection_c__size_function__NavigateRouteResponse__error_edge_ids(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__EdgeId__Sequence * member =
    (const bosdyn_msgs__msg__EdgeId__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__NavigateRouteResponse__rosidl_typesupport_introspection_c__get_const_function__NavigateRouteResponse__error_edge_ids(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__EdgeId__Sequence * member =
    (const bosdyn_msgs__msg__EdgeId__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__NavigateRouteResponse__rosidl_typesupport_introspection_c__get_function__NavigateRouteResponse__error_edge_ids(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__EdgeId__Sequence * member =
    (bosdyn_msgs__msg__EdgeId__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__NavigateRouteResponse__rosidl_typesupport_introspection_c__fetch_function__NavigateRouteResponse__error_edge_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__EdgeId * item =
    ((const bosdyn_msgs__msg__EdgeId *)
    bosdyn_msgs__msg__NavigateRouteResponse__rosidl_typesupport_introspection_c__get_const_function__NavigateRouteResponse__error_edge_ids(untyped_member, index));
  bosdyn_msgs__msg__EdgeId * value =
    (bosdyn_msgs__msg__EdgeId *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__NavigateRouteResponse__rosidl_typesupport_introspection_c__assign_function__NavigateRouteResponse__error_edge_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__EdgeId * item =
    ((bosdyn_msgs__msg__EdgeId *)
    bosdyn_msgs__msg__NavigateRouteResponse__rosidl_typesupport_introspection_c__get_function__NavigateRouteResponse__error_edge_ids(untyped_member, index));
  const bosdyn_msgs__msg__EdgeId * value =
    (const bosdyn_msgs__msg__EdgeId *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__NavigateRouteResponse__rosidl_typesupport_introspection_c__resize_function__NavigateRouteResponse__error_edge_ids(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__EdgeId__Sequence * member =
    (bosdyn_msgs__msg__EdgeId__Sequence *)(untyped_member);
  bosdyn_msgs__msg__EdgeId__Sequence__fini(member);
  return bosdyn_msgs__msg__EdgeId__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__NavigateRouteResponse__rosidl_typesupport_introspection_c__NavigateRouteResponse_message_member_array[11] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__NavigateRouteResponse, header),  // bytes offset in struct
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
    offsetof(bosdyn_msgs__msg__NavigateRouteResponse, header_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lease_use_results",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__NavigateRouteResponse, lease_use_results),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__NavigateRouteResponse__rosidl_typesupport_introspection_c__size_function__NavigateRouteResponse__lease_use_results,  // size() function pointer
    bosdyn_msgs__msg__NavigateRouteResponse__rosidl_typesupport_introspection_c__get_const_function__NavigateRouteResponse__lease_use_results,  // get_const(index) function pointer
    bosdyn_msgs__msg__NavigateRouteResponse__rosidl_typesupport_introspection_c__get_function__NavigateRouteResponse__lease_use_results,  // get(index) function pointer
    bosdyn_msgs__msg__NavigateRouteResponse__rosidl_typesupport_introspection_c__fetch_function__NavigateRouteResponse__lease_use_results,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__NavigateRouteResponse__rosidl_typesupport_introspection_c__assign_function__NavigateRouteResponse__lease_use_results,  // assign(index, value) function pointer
    bosdyn_msgs__msg__NavigateRouteResponse__rosidl_typesupport_introspection_c__resize_function__NavigateRouteResponse__lease_use_results  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__NavigateRouteResponse, status),  // bytes offset in struct
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
    offsetof(bosdyn_msgs__msg__NavigateRouteResponse, impaired_state),  // bytes offset in struct
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
    offsetof(bosdyn_msgs__msg__NavigateRouteResponse, impaired_state_is_set),  // bytes offset in struct
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
    offsetof(bosdyn_msgs__msg__NavigateRouteResponse, command_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_waypoint_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__NavigateRouteResponse, error_waypoint_ids),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__NavigateRouteResponse__rosidl_typesupport_introspection_c__size_function__NavigateRouteResponse__error_waypoint_ids,  // size() function pointer
    bosdyn_msgs__msg__NavigateRouteResponse__rosidl_typesupport_introspection_c__get_const_function__NavigateRouteResponse__error_waypoint_ids,  // get_const(index) function pointer
    bosdyn_msgs__msg__NavigateRouteResponse__rosidl_typesupport_introspection_c__get_function__NavigateRouteResponse__error_waypoint_ids,  // get(index) function pointer
    bosdyn_msgs__msg__NavigateRouteResponse__rosidl_typesupport_introspection_c__fetch_function__NavigateRouteResponse__error_waypoint_ids,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__NavigateRouteResponse__rosidl_typesupport_introspection_c__assign_function__NavigateRouteResponse__error_waypoint_ids,  // assign(index, value) function pointer
    bosdyn_msgs__msg__NavigateRouteResponse__rosidl_typesupport_introspection_c__resize_function__NavigateRouteResponse__error_waypoint_ids  // resize(index) function pointer
  },
  {
    "error_edge_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__NavigateRouteResponse, error_edge_ids),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__NavigateRouteResponse__rosidl_typesupport_introspection_c__size_function__NavigateRouteResponse__error_edge_ids,  // size() function pointer
    bosdyn_msgs__msg__NavigateRouteResponse__rosidl_typesupport_introspection_c__get_const_function__NavigateRouteResponse__error_edge_ids,  // get_const(index) function pointer
    bosdyn_msgs__msg__NavigateRouteResponse__rosidl_typesupport_introspection_c__get_function__NavigateRouteResponse__error_edge_ids,  // get(index) function pointer
    bosdyn_msgs__msg__NavigateRouteResponse__rosidl_typesupport_introspection_c__fetch_function__NavigateRouteResponse__error_edge_ids,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__NavigateRouteResponse__rosidl_typesupport_introspection_c__assign_function__NavigateRouteResponse__error_edge_ids,  // assign(index, value) function pointer
    bosdyn_msgs__msg__NavigateRouteResponse__rosidl_typesupport_introspection_c__resize_function__NavigateRouteResponse__error_edge_ids  // resize(index) function pointer
  },
  {
    "area_callback_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__NavigateRouteResponse, area_callback_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "area_callback_error_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__NavigateRouteResponse, area_callback_error_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__NavigateRouteResponse__rosidl_typesupport_introspection_c__NavigateRouteResponse_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "NavigateRouteResponse",  // message name
  11,  // number of fields
  sizeof(bosdyn_msgs__msg__NavigateRouteResponse),
  bosdyn_msgs__msg__NavigateRouteResponse__rosidl_typesupport_introspection_c__NavigateRouteResponse_message_member_array,  // message members
  bosdyn_msgs__msg__NavigateRouteResponse__rosidl_typesupport_introspection_c__NavigateRouteResponse_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__NavigateRouteResponse__rosidl_typesupport_introspection_c__NavigateRouteResponse_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__NavigateRouteResponse__rosidl_typesupport_introspection_c__NavigateRouteResponse_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__NavigateRouteResponse__rosidl_typesupport_introspection_c__NavigateRouteResponse_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, NavigateRouteResponse)() {
  bosdyn_msgs__msg__NavigateRouteResponse__rosidl_typesupport_introspection_c__NavigateRouteResponse_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ResponseHeader)();
  bosdyn_msgs__msg__NavigateRouteResponse__rosidl_typesupport_introspection_c__NavigateRouteResponse_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, LeaseUseResult)();
  bosdyn_msgs__msg__NavigateRouteResponse__rosidl_typesupport_introspection_c__NavigateRouteResponse_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, NavigateRouteResponseStatus)();
  bosdyn_msgs__msg__NavigateRouteResponse__rosidl_typesupport_introspection_c__NavigateRouteResponse_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, RobotImpairedState)();
  bosdyn_msgs__msg__NavigateRouteResponse__rosidl_typesupport_introspection_c__NavigateRouteResponse_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, EdgeId)();
  bosdyn_msgs__msg__NavigateRouteResponse__rosidl_typesupport_introspection_c__NavigateRouteResponse_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, AreaCallbackServiceError)();
  if (!bosdyn_msgs__msg__NavigateRouteResponse__rosidl_typesupport_introspection_c__NavigateRouteResponse_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__NavigateRouteResponse__rosidl_typesupport_introspection_c__NavigateRouteResponse_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__NavigateRouteResponse__rosidl_typesupport_introspection_c__NavigateRouteResponse_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
