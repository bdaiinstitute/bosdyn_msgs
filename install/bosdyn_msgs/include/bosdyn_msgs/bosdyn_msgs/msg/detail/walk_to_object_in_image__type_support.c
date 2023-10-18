// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/WalkToObjectInImage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/walk_to_object_in_image__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/walk_to_object_in_image__functions.h"
#include "bosdyn_msgs/msg/detail/walk_to_object_in_image__struct.h"


// Include directives for member types
// Member `pixel_xy`
#include "bosdyn_msgs/msg/vec2.h"
// Member `pixel_xy`
#include "bosdyn_msgs/msg/detail/vec2__rosidl_typesupport_introspection_c.h"
// Member `transforms_snapshot_for_camera`
#include "bosdyn_msgs/msg/frame_tree_snapshot.h"
// Member `transforms_snapshot_for_camera`
#include "bosdyn_msgs/msg/detail/frame_tree_snapshot__rosidl_typesupport_introspection_c.h"
// Member `frame_name_image_sensor`
#include "rosidl_runtime_c/string_functions.h"
// Member `camera_model`
#include "bosdyn_msgs/msg/image_source_pinhole_model.h"
// Member `camera_model`
#include "bosdyn_msgs/msg/detail/image_source_pinhole_model__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__WalkToObjectInImage__rosidl_typesupport_introspection_c__WalkToObjectInImage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__WalkToObjectInImage__init(message_memory);
}

void bosdyn_msgs__msg__WalkToObjectInImage__rosidl_typesupport_introspection_c__WalkToObjectInImage_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__WalkToObjectInImage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__WalkToObjectInImage__rosidl_typesupport_introspection_c__WalkToObjectInImage_message_member_array[9] = {
  {
    "pixel_xy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__WalkToObjectInImage, pixel_xy),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pixel_xy_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__WalkToObjectInImage, pixel_xy_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "transforms_snapshot_for_camera",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__WalkToObjectInImage, transforms_snapshot_for_camera),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "transforms_snapshot_for_camera_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__WalkToObjectInImage, transforms_snapshot_for_camera_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "frame_name_image_sensor",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__WalkToObjectInImage, frame_name_image_sensor),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "camera_model",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__WalkToObjectInImage, camera_model),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "camera_model_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__WalkToObjectInImage, camera_model_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "offset_distance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__WalkToObjectInImage, offset_distance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "offset_distance_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__WalkToObjectInImage, offset_distance_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__WalkToObjectInImage__rosidl_typesupport_introspection_c__WalkToObjectInImage_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "WalkToObjectInImage",  // message name
  9,  // number of fields
  sizeof(bosdyn_msgs__msg__WalkToObjectInImage),
  bosdyn_msgs__msg__WalkToObjectInImage__rosidl_typesupport_introspection_c__WalkToObjectInImage_message_member_array,  // message members
  bosdyn_msgs__msg__WalkToObjectInImage__rosidl_typesupport_introspection_c__WalkToObjectInImage_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__WalkToObjectInImage__rosidl_typesupport_introspection_c__WalkToObjectInImage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__WalkToObjectInImage__rosidl_typesupport_introspection_c__WalkToObjectInImage_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__WalkToObjectInImage__rosidl_typesupport_introspection_c__WalkToObjectInImage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, WalkToObjectInImage)() {
  bosdyn_msgs__msg__WalkToObjectInImage__rosidl_typesupport_introspection_c__WalkToObjectInImage_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, Vec2)();
  bosdyn_msgs__msg__WalkToObjectInImage__rosidl_typesupport_introspection_c__WalkToObjectInImage_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, FrameTreeSnapshot)();
  bosdyn_msgs__msg__WalkToObjectInImage__rosidl_typesupport_introspection_c__WalkToObjectInImage_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ImageSourcePinholeModel)();
  if (!bosdyn_msgs__msg__WalkToObjectInImage__rosidl_typesupport_introspection_c__WalkToObjectInImage_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__WalkToObjectInImage__rosidl_typesupport_introspection_c__WalkToObjectInImage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__WalkToObjectInImage__rosidl_typesupport_introspection_c__WalkToObjectInImage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
