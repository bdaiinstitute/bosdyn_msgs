// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/WaypointAnnotationsLocalizeRegionOneOfRegion.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/waypoint_annotations_localize_region_one_of_region__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/waypoint_annotations_localize_region_one_of_region__functions.h"
#include "bosdyn_msgs/msg/detail/waypoint_annotations_localize_region_one_of_region__struct.h"


// Include directives for member types
// Member `default_region`
#include "bosdyn_msgs/msg/waypoint_annotations_localize_region_default.h"
// Member `default_region`
#include "bosdyn_msgs/msg/detail/waypoint_annotations_localize_region_default__rosidl_typesupport_introspection_c.h"
// Member `empty`
#include "bosdyn_msgs/msg/waypoint_annotations_localize_region_empty.h"
// Member `empty`
#include "bosdyn_msgs/msg/detail/waypoint_annotations_localize_region_empty__rosidl_typesupport_introspection_c.h"
// Member `circle`
#include "bosdyn_msgs/msg/waypoint_annotations_localize_region_circle2_d.h"
// Member `circle`
#include "bosdyn_msgs/msg/detail/waypoint_annotations_localize_region_circle2_d__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion__rosidl_typesupport_introspection_c__WaypointAnnotationsLocalizeRegionOneOfRegion_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion__init(message_memory);
}

void bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion__rosidl_typesupport_introspection_c__WaypointAnnotationsLocalizeRegionOneOfRegion_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion__rosidl_typesupport_introspection_c__WaypointAnnotationsLocalizeRegionOneOfRegion_message_member_array[4] = {
  {
    "default_region",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion, default_region),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "empty",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion, empty),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "circle",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion, circle),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "region_choice",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion, region_choice),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion__rosidl_typesupport_introspection_c__WaypointAnnotationsLocalizeRegionOneOfRegion_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "WaypointAnnotationsLocalizeRegionOneOfRegion",  // message name
  4,  // number of fields
  sizeof(bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion),
  bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion__rosidl_typesupport_introspection_c__WaypointAnnotationsLocalizeRegionOneOfRegion_message_member_array,  // message members
  bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion__rosidl_typesupport_introspection_c__WaypointAnnotationsLocalizeRegionOneOfRegion_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion__rosidl_typesupport_introspection_c__WaypointAnnotationsLocalizeRegionOneOfRegion_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion__rosidl_typesupport_introspection_c__WaypointAnnotationsLocalizeRegionOneOfRegion_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion__rosidl_typesupport_introspection_c__WaypointAnnotationsLocalizeRegionOneOfRegion_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, WaypointAnnotationsLocalizeRegionOneOfRegion)() {
  bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion__rosidl_typesupport_introspection_c__WaypointAnnotationsLocalizeRegionOneOfRegion_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, WaypointAnnotationsLocalizeRegionDefault)();
  bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion__rosidl_typesupport_introspection_c__WaypointAnnotationsLocalizeRegionOneOfRegion_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, WaypointAnnotationsLocalizeRegionEmpty)();
  bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion__rosidl_typesupport_introspection_c__WaypointAnnotationsLocalizeRegionOneOfRegion_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, WaypointAnnotationsLocalizeRegionCircle2D)();
  if (!bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion__rosidl_typesupport_introspection_c__WaypointAnnotationsLocalizeRegionOneOfRegion_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion__rosidl_typesupport_introspection_c__WaypointAnnotationsLocalizeRegionOneOfRegion_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__WaypointAnnotationsLocalizeRegionOneOfRegion__rosidl_typesupport_introspection_c__WaypointAnnotationsLocalizeRegionOneOfRegion_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
