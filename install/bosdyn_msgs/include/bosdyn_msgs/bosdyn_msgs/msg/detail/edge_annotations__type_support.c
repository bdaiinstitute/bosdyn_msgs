// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/EdgeAnnotations.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/edge_annotations__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/edge_annotations__functions.h"
#include "bosdyn_msgs/msg/detail/edge_annotations__struct.h"


// Include directives for member types
// Member `stairs`
#include "bosdyn_msgs/msg/edge_annotations_stair_data.h"
// Member `stairs`
#include "bosdyn_msgs/msg/detail/edge_annotations_stair_data__rosidl_typesupport_introspection_c.h"
// Member `direction_constraint`
#include "bosdyn_msgs/msg/edge_annotations_direction_constraint.h"
// Member `direction_constraint`
#include "bosdyn_msgs/msg/detail/edge_annotations_direction_constraint__rosidl_typesupport_introspection_c.h"
// Member `mobility_params`
#include "bosdyn_msgs/msg/mobility_params.h"
// Member `mobility_params`
#include "bosdyn_msgs/msg/detail/mobility_params__rosidl_typesupport_introspection_c.h"
// Member `edge_source`
#include "bosdyn_msgs/msg/edge_edge_source.h"
// Member `edge_source`
#include "bosdyn_msgs/msg/detail/edge_edge_source__rosidl_typesupport_introspection_c.h"
// Member `path_following_mode`
#include "bosdyn_msgs/msg/edge_annotations_path_following_mode.h"
// Member `path_following_mode`
#include "bosdyn_msgs/msg/detail/edge_annotations_path_following_mode__rosidl_typesupport_introspection_c.h"
// Member `area_callbacks`
#include "bosdyn_msgs/msg/key_string_value_bosdyn_msgs_area_callback_region.h"
// Member `area_callbacks`
#include "bosdyn_msgs/msg/detail/key_string_value_bosdyn_msgs_area_callback_region__rosidl_typesupport_introspection_c.h"
// Member `ground_clutter_mode`
#include "bosdyn_msgs/msg/edge_annotations_ground_clutter_avoidance_mode.h"
// Member `ground_clutter_mode`
#include "bosdyn_msgs/msg/detail/edge_annotations_ground_clutter_avoidance_mode__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__EdgeAnnotations__rosidl_typesupport_introspection_c__EdgeAnnotations_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__EdgeAnnotations__init(message_memory);
}

void bosdyn_msgs__msg__EdgeAnnotations__rosidl_typesupport_introspection_c__EdgeAnnotations_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__EdgeAnnotations__fini(message_memory);
}

size_t bosdyn_msgs__msg__EdgeAnnotations__rosidl_typesupport_introspection_c__size_function__EdgeAnnotations__area_callbacks(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__KeyStringValueBosdynMsgsAreaCallbackRegion__Sequence * member =
    (const bosdyn_msgs__msg__KeyStringValueBosdynMsgsAreaCallbackRegion__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__EdgeAnnotations__rosidl_typesupport_introspection_c__get_const_function__EdgeAnnotations__area_callbacks(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__KeyStringValueBosdynMsgsAreaCallbackRegion__Sequence * member =
    (const bosdyn_msgs__msg__KeyStringValueBosdynMsgsAreaCallbackRegion__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__EdgeAnnotations__rosidl_typesupport_introspection_c__get_function__EdgeAnnotations__area_callbacks(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsAreaCallbackRegion__Sequence * member =
    (bosdyn_msgs__msg__KeyStringValueBosdynMsgsAreaCallbackRegion__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__EdgeAnnotations__rosidl_typesupport_introspection_c__fetch_function__EdgeAnnotations__area_callbacks(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__KeyStringValueBosdynMsgsAreaCallbackRegion * item =
    ((const bosdyn_msgs__msg__KeyStringValueBosdynMsgsAreaCallbackRegion *)
    bosdyn_msgs__msg__EdgeAnnotations__rosidl_typesupport_introspection_c__get_const_function__EdgeAnnotations__area_callbacks(untyped_member, index));
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsAreaCallbackRegion * value =
    (bosdyn_msgs__msg__KeyStringValueBosdynMsgsAreaCallbackRegion *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__EdgeAnnotations__rosidl_typesupport_introspection_c__assign_function__EdgeAnnotations__area_callbacks(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsAreaCallbackRegion * item =
    ((bosdyn_msgs__msg__KeyStringValueBosdynMsgsAreaCallbackRegion *)
    bosdyn_msgs__msg__EdgeAnnotations__rosidl_typesupport_introspection_c__get_function__EdgeAnnotations__area_callbacks(untyped_member, index));
  const bosdyn_msgs__msg__KeyStringValueBosdynMsgsAreaCallbackRegion * value =
    (const bosdyn_msgs__msg__KeyStringValueBosdynMsgsAreaCallbackRegion *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__EdgeAnnotations__rosidl_typesupport_introspection_c__resize_function__EdgeAnnotations__area_callbacks(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsAreaCallbackRegion__Sequence * member =
    (bosdyn_msgs__msg__KeyStringValueBosdynMsgsAreaCallbackRegion__Sequence *)(untyped_member);
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsAreaCallbackRegion__Sequence__fini(member);
  return bosdyn_msgs__msg__KeyStringValueBosdynMsgsAreaCallbackRegion__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__EdgeAnnotations__rosidl_typesupport_introspection_c__EdgeAnnotations_message_member_array[15] = {
  {
    "stairs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__EdgeAnnotations, stairs),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stairs_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__EdgeAnnotations, stairs_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "direction_constraint",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__EdgeAnnotations, direction_constraint),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "require_alignment",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__EdgeAnnotations, require_alignment),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "require_alignment_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__EdgeAnnotations, require_alignment_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mobility_params",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__EdgeAnnotations, mobility_params),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mobility_params_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__EdgeAnnotations, mobility_params_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cost",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__EdgeAnnotations, cost),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cost_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__EdgeAnnotations, cost_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "edge_source",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__EdgeAnnotations, edge_source),  // bytes offset in struct
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
    offsetof(bosdyn_msgs__msg__EdgeAnnotations, disable_alternate_route_finding),  // bytes offset in struct
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
    offsetof(bosdyn_msgs__msg__EdgeAnnotations, path_following_mode),  // bytes offset in struct
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
    offsetof(bosdyn_msgs__msg__EdgeAnnotations, disable_directed_exploration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "area_callbacks",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__EdgeAnnotations, area_callbacks),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__EdgeAnnotations__rosidl_typesupport_introspection_c__size_function__EdgeAnnotations__area_callbacks,  // size() function pointer
    bosdyn_msgs__msg__EdgeAnnotations__rosidl_typesupport_introspection_c__get_const_function__EdgeAnnotations__area_callbacks,  // get_const(index) function pointer
    bosdyn_msgs__msg__EdgeAnnotations__rosidl_typesupport_introspection_c__get_function__EdgeAnnotations__area_callbacks,  // get(index) function pointer
    bosdyn_msgs__msg__EdgeAnnotations__rosidl_typesupport_introspection_c__fetch_function__EdgeAnnotations__area_callbacks,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__EdgeAnnotations__rosidl_typesupport_introspection_c__assign_function__EdgeAnnotations__area_callbacks,  // assign(index, value) function pointer
    bosdyn_msgs__msg__EdgeAnnotations__rosidl_typesupport_introspection_c__resize_function__EdgeAnnotations__area_callbacks  // resize(index) function pointer
  },
  {
    "ground_clutter_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__EdgeAnnotations, ground_clutter_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__EdgeAnnotations__rosidl_typesupport_introspection_c__EdgeAnnotations_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "EdgeAnnotations",  // message name
  15,  // number of fields
  sizeof(bosdyn_msgs__msg__EdgeAnnotations),
  bosdyn_msgs__msg__EdgeAnnotations__rosidl_typesupport_introspection_c__EdgeAnnotations_message_member_array,  // message members
  bosdyn_msgs__msg__EdgeAnnotations__rosidl_typesupport_introspection_c__EdgeAnnotations_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__EdgeAnnotations__rosidl_typesupport_introspection_c__EdgeAnnotations_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__EdgeAnnotations__rosidl_typesupport_introspection_c__EdgeAnnotations_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__EdgeAnnotations__rosidl_typesupport_introspection_c__EdgeAnnotations_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, EdgeAnnotations)() {
  bosdyn_msgs__msg__EdgeAnnotations__rosidl_typesupport_introspection_c__EdgeAnnotations_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, EdgeAnnotationsStairData)();
  bosdyn_msgs__msg__EdgeAnnotations__rosidl_typesupport_introspection_c__EdgeAnnotations_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, EdgeAnnotationsDirectionConstraint)();
  bosdyn_msgs__msg__EdgeAnnotations__rosidl_typesupport_introspection_c__EdgeAnnotations_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, MobilityParams)();
  bosdyn_msgs__msg__EdgeAnnotations__rosidl_typesupport_introspection_c__EdgeAnnotations_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, EdgeEdgeSource)();
  bosdyn_msgs__msg__EdgeAnnotations__rosidl_typesupport_introspection_c__EdgeAnnotations_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, EdgeAnnotationsPathFollowingMode)();
  bosdyn_msgs__msg__EdgeAnnotations__rosidl_typesupport_introspection_c__EdgeAnnotations_message_member_array[13].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, KeyStringValueBosdynMsgsAreaCallbackRegion)();
  bosdyn_msgs__msg__EdgeAnnotations__rosidl_typesupport_introspection_c__EdgeAnnotations_message_member_array[14].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, EdgeAnnotationsGroundClutterAvoidanceMode)();
  if (!bosdyn_msgs__msg__EdgeAnnotations__rosidl_typesupport_introspection_c__EdgeAnnotations_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__EdgeAnnotations__rosidl_typesupport_introspection_c__EdgeAnnotations_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__EdgeAnnotations__rosidl_typesupport_introspection_c__EdgeAnnotations_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
