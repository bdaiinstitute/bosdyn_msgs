// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/PlaySettings.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/play_settings__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/play_settings__functions.h"
#include "bosdyn_msgs/msg/detail/play_settings__struct.h"


// Include directives for member types
// Member `velocity_limit`
#include "bosdyn_msgs/msg/se2_velocity_limit.h"
// Member `velocity_limit`
#include "bosdyn_msgs/msg/detail/se2_velocity_limit__rosidl_typesupport_introspection_c.h"
// Member `path_following_mode`
#include "bosdyn_msgs/msg/edge_annotations_path_following_mode.h"
// Member `path_following_mode`
#include "bosdyn_msgs/msg/detail/edge_annotations_path_following_mode__rosidl_typesupport_introspection_c.h"
// Member `ground_clutter_mode`
#include "bosdyn_msgs/msg/edge_annotations_ground_clutter_avoidance_mode.h"
// Member `ground_clutter_mode`
#include "bosdyn_msgs/msg/detail/edge_annotations_ground_clutter_avoidance_mode__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__PlaySettings__rosidl_typesupport_introspection_c__PlaySettings_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__PlaySettings__init(message_memory);
}

void bosdyn_msgs__msg__PlaySettings__rosidl_typesupport_introspection_c__PlaySettings_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__PlaySettings__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__PlaySettings__rosidl_typesupport_introspection_c__PlaySettings_message_member_array[6] = {
  {
    "velocity_limit",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__PlaySettings, velocity_limit),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity_limit_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__PlaySettings, velocity_limit_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "disable_directed_exploration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__PlaySettings, disable_directed_exploration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "disable_alternate_route_finding",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__PlaySettings, disable_alternate_route_finding),  // bytes offset in struct
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
    offsetof(bosdyn_msgs__msg__PlaySettings, path_following_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ground_clutter_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__PlaySettings, ground_clutter_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__PlaySettings__rosidl_typesupport_introspection_c__PlaySettings_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "PlaySettings",  // message name
  6,  // number of fields
  sizeof(bosdyn_msgs__msg__PlaySettings),
  bosdyn_msgs__msg__PlaySettings__rosidl_typesupport_introspection_c__PlaySettings_message_member_array,  // message members
  bosdyn_msgs__msg__PlaySettings__rosidl_typesupport_introspection_c__PlaySettings_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__PlaySettings__rosidl_typesupport_introspection_c__PlaySettings_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__PlaySettings__rosidl_typesupport_introspection_c__PlaySettings_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__PlaySettings__rosidl_typesupport_introspection_c__PlaySettings_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, PlaySettings)() {
  bosdyn_msgs__msg__PlaySettings__rosidl_typesupport_introspection_c__PlaySettings_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, SE2VelocityLimit)();
  bosdyn_msgs__msg__PlaySettings__rosidl_typesupport_introspection_c__PlaySettings_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, EdgeAnnotationsPathFollowingMode)();
  bosdyn_msgs__msg__PlaySettings__rosidl_typesupport_introspection_c__PlaySettings_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, EdgeAnnotationsGroundClutterAvoidanceMode)();
  if (!bosdyn_msgs__msg__PlaySettings__rosidl_typesupport_introspection_c__PlaySettings_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__PlaySettings__rosidl_typesupport_introspection_c__PlaySettings_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__PlaySettings__rosidl_typesupport_introspection_c__PlaySettings_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
