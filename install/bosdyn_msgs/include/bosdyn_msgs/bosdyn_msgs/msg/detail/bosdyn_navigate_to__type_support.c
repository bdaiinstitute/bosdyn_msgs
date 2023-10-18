// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/BosdynNavigateTo.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/bosdyn_navigate_to__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/bosdyn_navigate_to__functions.h"
#include "bosdyn_msgs/msg/detail/bosdyn_navigate_to__struct.h"


// Include directives for member types
// Member `service_name`
// Member `host`
// Member `destination_waypoint_id`
// Member `navigation_feedback_response_blackboard_key`
// Member `navigate_to_response_blackboard_key`
#include "rosidl_runtime_c/string_functions.h"
// Member `route_gen_params`
#include "bosdyn_msgs/msg/route_gen_params.h"
// Member `route_gen_params`
#include "bosdyn_msgs/msg/detail/route_gen_params__rosidl_typesupport_introspection_c.h"
// Member `travel_params`
#include "bosdyn_msgs/msg/travel_params.h"
// Member `travel_params`
#include "bosdyn_msgs/msg/detail/travel_params__rosidl_typesupport_introspection_c.h"
// Member `route_blocked_behavior`
#include "bosdyn_msgs/msg/route_following_params_route_blocked_behavior.h"
// Member `route_blocked_behavior`
#include "bosdyn_msgs/msg/detail/route_following_params_route_blocked_behavior__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__BosdynNavigateTo__rosidl_typesupport_introspection_c__BosdynNavigateTo_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__BosdynNavigateTo__init(message_memory);
}

void bosdyn_msgs__msg__BosdynNavigateTo__rosidl_typesupport_introspection_c__BosdynNavigateTo_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__BosdynNavigateTo__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__BosdynNavigateTo__rosidl_typesupport_introspection_c__BosdynNavigateTo_message_member_array[10] = {
  {
    "service_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__BosdynNavigateTo, service_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "host",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__BosdynNavigateTo, host),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "destination_waypoint_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__BosdynNavigateTo, destination_waypoint_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "route_gen_params",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__BosdynNavigateTo, route_gen_params),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "route_gen_params_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__BosdynNavigateTo, route_gen_params_is_set),  // bytes offset in struct
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
    offsetof(bosdyn_msgs__msg__BosdynNavigateTo, travel_params),  // bytes offset in struct
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
    offsetof(bosdyn_msgs__msg__BosdynNavigateTo, travel_params_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "navigation_feedback_response_blackboard_key",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__BosdynNavigateTo, navigation_feedback_response_blackboard_key),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "navigate_to_response_blackboard_key",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__BosdynNavigateTo, navigate_to_response_blackboard_key),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "route_blocked_behavior",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__BosdynNavigateTo, route_blocked_behavior),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__BosdynNavigateTo__rosidl_typesupport_introspection_c__BosdynNavigateTo_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "BosdynNavigateTo",  // message name
  10,  // number of fields
  sizeof(bosdyn_msgs__msg__BosdynNavigateTo),
  bosdyn_msgs__msg__BosdynNavigateTo__rosidl_typesupport_introspection_c__BosdynNavigateTo_message_member_array,  // message members
  bosdyn_msgs__msg__BosdynNavigateTo__rosidl_typesupport_introspection_c__BosdynNavigateTo_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__BosdynNavigateTo__rosidl_typesupport_introspection_c__BosdynNavigateTo_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__BosdynNavigateTo__rosidl_typesupport_introspection_c__BosdynNavigateTo_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__BosdynNavigateTo__rosidl_typesupport_introspection_c__BosdynNavigateTo_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, BosdynNavigateTo)() {
  bosdyn_msgs__msg__BosdynNavigateTo__rosidl_typesupport_introspection_c__BosdynNavigateTo_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, RouteGenParams)();
  bosdyn_msgs__msg__BosdynNavigateTo__rosidl_typesupport_introspection_c__BosdynNavigateTo_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, TravelParams)();
  bosdyn_msgs__msg__BosdynNavigateTo__rosidl_typesupport_introspection_c__BosdynNavigateTo_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, RouteFollowingParamsRouteBlockedBehavior)();
  if (!bosdyn_msgs__msg__BosdynNavigateTo__rosidl_typesupport_introspection_c__BosdynNavigateTo_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__BosdynNavigateTo__rosidl_typesupport_introspection_c__BosdynNavigateTo_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__BosdynNavigateTo__rosidl_typesupport_introspection_c__BosdynNavigateTo_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
