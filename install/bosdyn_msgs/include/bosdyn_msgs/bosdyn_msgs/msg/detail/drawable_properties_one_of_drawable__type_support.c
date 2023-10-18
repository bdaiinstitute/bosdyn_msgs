// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/DrawablePropertiesOneOfDrawable.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/drawable_properties_one_of_drawable__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/drawable_properties_one_of_drawable__functions.h"
#include "bosdyn_msgs/msg/detail/drawable_properties_one_of_drawable__struct.h"


// Include directives for member types
// Member `frame`
#include "bosdyn_msgs/msg/drawable_frame.h"
// Member `frame`
#include "bosdyn_msgs/msg/detail/drawable_frame__rosidl_typesupport_introspection_c.h"
// Member `sphere`
#include "bosdyn_msgs/msg/drawable_sphere.h"
// Member `sphere`
#include "bosdyn_msgs/msg/detail/drawable_sphere__rosidl_typesupport_introspection_c.h"
// Member `box`
#include "bosdyn_msgs/msg/drawable_box.h"
// Member `box`
#include "bosdyn_msgs/msg/detail/drawable_box__rosidl_typesupport_introspection_c.h"
// Member `arrow`
#include "bosdyn_msgs/msg/drawable_arrow.h"
// Member `arrow`
#include "bosdyn_msgs/msg/detail/drawable_arrow__rosidl_typesupport_introspection_c.h"
// Member `capsule`
#include "bosdyn_msgs/msg/drawable_capsule.h"
// Member `capsule`
#include "bosdyn_msgs/msg/detail/drawable_capsule__rosidl_typesupport_introspection_c.h"
// Member `cylinder`
#include "bosdyn_msgs/msg/drawable_cylinder.h"
// Member `cylinder`
#include "bosdyn_msgs/msg/detail/drawable_cylinder__rosidl_typesupport_introspection_c.h"
// Member `linestrip`
#include "bosdyn_msgs/msg/drawable_line_strip.h"
// Member `linestrip`
#include "bosdyn_msgs/msg/detail/drawable_line_strip__rosidl_typesupport_introspection_c.h"
// Member `points`
#include "bosdyn_msgs/msg/drawable_points.h"
// Member `points`
#include "bosdyn_msgs/msg/detail/drawable_points__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__rosidl_typesupport_introspection_c__DrawablePropertiesOneOfDrawable_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__init(message_memory);
}

void bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__rosidl_typesupport_introspection_c__DrawablePropertiesOneOfDrawable_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__rosidl_typesupport_introspection_c__DrawablePropertiesOneOfDrawable_message_member_array[9] = {
  {
    "frame",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable, frame),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sphere",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable, sphere),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "box",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable, box),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "arrow",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable, arrow),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "capsule",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable, capsule),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cylinder",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable, cylinder),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "linestrip",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable, linestrip),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "points",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable, points),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "drawable_choice",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable, drawable_choice),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__rosidl_typesupport_introspection_c__DrawablePropertiesOneOfDrawable_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "DrawablePropertiesOneOfDrawable",  // message name
  9,  // number of fields
  sizeof(bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable),
  bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__rosidl_typesupport_introspection_c__DrawablePropertiesOneOfDrawable_message_member_array,  // message members
  bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__rosidl_typesupport_introspection_c__DrawablePropertiesOneOfDrawable_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__rosidl_typesupport_introspection_c__DrawablePropertiesOneOfDrawable_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__rosidl_typesupport_introspection_c__DrawablePropertiesOneOfDrawable_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__rosidl_typesupport_introspection_c__DrawablePropertiesOneOfDrawable_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, DrawablePropertiesOneOfDrawable)() {
  bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__rosidl_typesupport_introspection_c__DrawablePropertiesOneOfDrawable_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, DrawableFrame)();
  bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__rosidl_typesupport_introspection_c__DrawablePropertiesOneOfDrawable_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, DrawableSphere)();
  bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__rosidl_typesupport_introspection_c__DrawablePropertiesOneOfDrawable_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, DrawableBox)();
  bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__rosidl_typesupport_introspection_c__DrawablePropertiesOneOfDrawable_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, DrawableArrow)();
  bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__rosidl_typesupport_introspection_c__DrawablePropertiesOneOfDrawable_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, DrawableCapsule)();
  bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__rosidl_typesupport_introspection_c__DrawablePropertiesOneOfDrawable_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, DrawableCylinder)();
  bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__rosidl_typesupport_introspection_c__DrawablePropertiesOneOfDrawable_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, DrawableLineStrip)();
  bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__rosidl_typesupport_introspection_c__DrawablePropertiesOneOfDrawable_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, DrawablePoints)();
  if (!bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__rosidl_typesupport_introspection_c__DrawablePropertiesOneOfDrawable_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__rosidl_typesupport_introspection_c__DrawablePropertiesOneOfDrawable_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__DrawablePropertiesOneOfDrawable__rosidl_typesupport_introspection_c__DrawablePropertiesOneOfDrawable_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
