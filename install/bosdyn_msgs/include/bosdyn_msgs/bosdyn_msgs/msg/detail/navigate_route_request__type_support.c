// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/NavigateRouteRequest.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/navigate_route_request__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/navigate_route_request__functions.h"
#include "bosdyn_msgs/msg/detail/navigate_route_request__struct.h"


// Include directives for member types
// Member `header`
#include "bosdyn_msgs/msg/request_header.h"
// Member `header`
#include "bosdyn_msgs/msg/detail/request_header__rosidl_typesupport_introspection_c.h"
// Member `leases`
#include "bosdyn_msgs/msg/lease.h"
// Member `leases`
#include "bosdyn_msgs/msg/detail/lease__rosidl_typesupport_introspection_c.h"
// Member `route`
#include "bosdyn_msgs/msg/route.h"
// Member `route`
#include "bosdyn_msgs/msg/detail/route__rosidl_typesupport_introspection_c.h"
// Member `route_follow_params`
#include "bosdyn_msgs/msg/route_following_params.h"
// Member `route_follow_params`
#include "bosdyn_msgs/msg/detail/route_following_params__rosidl_typesupport_introspection_c.h"
// Member `travel_params`
#include "bosdyn_msgs/msg/travel_params.h"
// Member `travel_params`
#include "bosdyn_msgs/msg/detail/travel_params__rosidl_typesupport_introspection_c.h"
// Member `end_time`
#include "builtin_interfaces/msg/time.h"
// Member `end_time`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `clock_identifier`
#include "rosidl_runtime_c/string_functions.h"
// Member `destination_waypoint_tform_body_goal`
#include "bosdyn_msgs/msg/se2_pose.h"
// Member `destination_waypoint_tform_body_goal`
#include "bosdyn_msgs/msg/detail/se2_pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__NavigateRouteRequest__rosidl_typesupport_introspection_c__NavigateRouteRequest_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__NavigateRouteRequest__init(message_memory);
}

void bosdyn_msgs__msg__NavigateRouteRequest__rosidl_typesupport_introspection_c__NavigateRouteRequest_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__NavigateRouteRequest__fini(message_memory);
}

size_t bosdyn_msgs__msg__NavigateRouteRequest__rosidl_typesupport_introspection_c__size_function__NavigateRouteRequest__leases(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__Lease__Sequence * member =
    (const bosdyn_msgs__msg__Lease__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__NavigateRouteRequest__rosidl_typesupport_introspection_c__get_const_function__NavigateRouteRequest__leases(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__Lease__Sequence * member =
    (const bosdyn_msgs__msg__Lease__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__NavigateRouteRequest__rosidl_typesupport_introspection_c__get_function__NavigateRouteRequest__leases(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__Lease__Sequence * member =
    (bosdyn_msgs__msg__Lease__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__NavigateRouteRequest__rosidl_typesupport_introspection_c__fetch_function__NavigateRouteRequest__leases(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__Lease * item =
    ((const bosdyn_msgs__msg__Lease *)
    bosdyn_msgs__msg__NavigateRouteRequest__rosidl_typesupport_introspection_c__get_const_function__NavigateRouteRequest__leases(untyped_member, index));
  bosdyn_msgs__msg__Lease * value =
    (bosdyn_msgs__msg__Lease *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__NavigateRouteRequest__rosidl_typesupport_introspection_c__assign_function__NavigateRouteRequest__leases(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__Lease * item =
    ((bosdyn_msgs__msg__Lease *)
    bosdyn_msgs__msg__NavigateRouteRequest__rosidl_typesupport_introspection_c__get_function__NavigateRouteRequest__leases(untyped_member, index));
  const bosdyn_msgs__msg__Lease * value =
    (const bosdyn_msgs__msg__Lease *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__NavigateRouteRequest__rosidl_typesupport_introspection_c__resize_function__NavigateRouteRequest__leases(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__Lease__Sequence * member =
    (bosdyn_msgs__msg__Lease__Sequence *)(untyped_member);
  bosdyn_msgs__msg__Lease__Sequence__fini(member);
  return bosdyn_msgs__msg__Lease__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__NavigateRouteRequest__rosidl_typesupport_introspection_c__NavigateRouteRequest_message_member_array[15] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__NavigateRouteRequest, header),  // bytes offset in struct
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
    offsetof(bosdyn_msgs__msg__NavigateRouteRequest, header_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "leases",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__NavigateRouteRequest, leases),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__NavigateRouteRequest__rosidl_typesupport_introspection_c__size_function__NavigateRouteRequest__leases,  // size() function pointer
    bosdyn_msgs__msg__NavigateRouteRequest__rosidl_typesupport_introspection_c__get_const_function__NavigateRouteRequest__leases,  // get_const(index) function pointer
    bosdyn_msgs__msg__NavigateRouteRequest__rosidl_typesupport_introspection_c__get_function__NavigateRouteRequest__leases,  // get(index) function pointer
    bosdyn_msgs__msg__NavigateRouteRequest__rosidl_typesupport_introspection_c__fetch_function__NavigateRouteRequest__leases,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__NavigateRouteRequest__rosidl_typesupport_introspection_c__assign_function__NavigateRouteRequest__leases,  // assign(index, value) function pointer
    bosdyn_msgs__msg__NavigateRouteRequest__rosidl_typesupport_introspection_c__resize_function__NavigateRouteRequest__leases  // resize(index) function pointer
  },
  {
    "route",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__NavigateRouteRequest, route),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "route_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__NavigateRouteRequest, route_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "route_follow_params",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__NavigateRouteRequest, route_follow_params),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "route_follow_params_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__NavigateRouteRequest, route_follow_params_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "travel_params",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__NavigateRouteRequest, travel_params),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "travel_params_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__NavigateRouteRequest, travel_params_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "end_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__NavigateRouteRequest, end_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "end_time_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__NavigateRouteRequest, end_time_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "clock_identifier",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__NavigateRouteRequest, clock_identifier),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "destination_waypoint_tform_body_goal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__NavigateRouteRequest, destination_waypoint_tform_body_goal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "destination_waypoint_tform_body_goal_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__NavigateRouteRequest, destination_waypoint_tform_body_goal_is_set),  // bytes offset in struct
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
    offsetof(bosdyn_msgs__msg__NavigateRouteRequest, command_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__NavigateRouteRequest__rosidl_typesupport_introspection_c__NavigateRouteRequest_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "NavigateRouteRequest",  // message name
  15,  // number of fields
  sizeof(bosdyn_msgs__msg__NavigateRouteRequest),
  bosdyn_msgs__msg__NavigateRouteRequest__rosidl_typesupport_introspection_c__NavigateRouteRequest_message_member_array,  // message members
  bosdyn_msgs__msg__NavigateRouteRequest__rosidl_typesupport_introspection_c__NavigateRouteRequest_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__NavigateRouteRequest__rosidl_typesupport_introspection_c__NavigateRouteRequest_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__NavigateRouteRequest__rosidl_typesupport_introspection_c__NavigateRouteRequest_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__NavigateRouteRequest__rosidl_typesupport_introspection_c__NavigateRouteRequest_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, NavigateRouteRequest)() {
  bosdyn_msgs__msg__NavigateRouteRequest__rosidl_typesupport_introspection_c__NavigateRouteRequest_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, RequestHeader)();
  bosdyn_msgs__msg__NavigateRouteRequest__rosidl_typesupport_introspection_c__NavigateRouteRequest_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, Lease)();
  bosdyn_msgs__msg__NavigateRouteRequest__rosidl_typesupport_introspection_c__NavigateRouteRequest_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, Route)();
  bosdyn_msgs__msg__NavigateRouteRequest__rosidl_typesupport_introspection_c__NavigateRouteRequest_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, RouteFollowingParams)();
  bosdyn_msgs__msg__NavigateRouteRequest__rosidl_typesupport_introspection_c__NavigateRouteRequest_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, TravelParams)();
  bosdyn_msgs__msg__NavigateRouteRequest__rosidl_typesupport_introspection_c__NavigateRouteRequest_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  bosdyn_msgs__msg__NavigateRouteRequest__rosidl_typesupport_introspection_c__NavigateRouteRequest_message_member_array[12].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, SE2Pose)();
  if (!bosdyn_msgs__msg__NavigateRouteRequest__rosidl_typesupport_introspection_c__NavigateRouteRequest_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__NavigateRouteRequest__rosidl_typesupport_introspection_c__NavigateRouteRequest_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__NavigateRouteRequest__rosidl_typesupport_introspection_c__NavigateRouteRequest_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
