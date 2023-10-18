// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/WorldObject.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/world_object__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/world_object__functions.h"
#include "bosdyn_msgs/msg/detail/world_object__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `acquisition_time`
#include "builtin_interfaces/msg/time.h"
// Member `acquisition_time`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `transforms_snapshot`
#include "bosdyn_msgs/msg/frame_tree_snapshot.h"
// Member `transforms_snapshot`
#include "bosdyn_msgs/msg/detail/frame_tree_snapshot__rosidl_typesupport_introspection_c.h"
// Member `object_lifetime`
#include "builtin_interfaces/msg/duration.h"
// Member `object_lifetime`
#include "builtin_interfaces/msg/detail/duration__rosidl_typesupport_introspection_c.h"
// Member `drawable_properties`
#include "bosdyn_msgs/msg/drawable_properties.h"
// Member `drawable_properties`
#include "bosdyn_msgs/msg/detail/drawable_properties__rosidl_typesupport_introspection_c.h"
// Member `apriltag_properties`
#include "bosdyn_msgs/msg/april_tag_properties.h"
// Member `apriltag_properties`
#include "bosdyn_msgs/msg/detail/april_tag_properties__rosidl_typesupport_introspection_c.h"
// Member `nogo_region_properties`
#include "bosdyn_msgs/msg/no_go_region_properties.h"
// Member `nogo_region_properties`
#include "bosdyn_msgs/msg/detail/no_go_region_properties__rosidl_typesupport_introspection_c.h"
// Member `image_properties`
#include "bosdyn_msgs/msg/image_properties.h"
// Member `image_properties`
#include "bosdyn_msgs/msg/detail/image_properties__rosidl_typesupport_introspection_c.h"
// Member `dock_properties`
#include "bosdyn_msgs/msg/dock_properties.h"
// Member `dock_properties`
#include "bosdyn_msgs/msg/detail/dock_properties__rosidl_typesupport_introspection_c.h"
// Member `ray_properties`
#include "bosdyn_msgs/msg/ray_properties.h"
// Member `ray_properties`
#include "bosdyn_msgs/msg/detail/ray_properties__rosidl_typesupport_introspection_c.h"
// Member `bounding_box_properties`
#include "bosdyn_msgs/msg/bounding_box_properties.h"
// Member `bounding_box_properties`
#include "bosdyn_msgs/msg/detail/bounding_box_properties__rosidl_typesupport_introspection_c.h"
// Member `staircase_properties`
#include "bosdyn_msgs/msg/staircase_properties.h"
// Member `staircase_properties`
#include "bosdyn_msgs/msg/detail/staircase_properties__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__WorldObject__rosidl_typesupport_introspection_c__WorldObject_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__WorldObject__init(message_memory);
}

void bosdyn_msgs__msg__WorldObject__rosidl_typesupport_introspection_c__WorldObject_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__WorldObject__fini(message_memory);
}

size_t bosdyn_msgs__msg__WorldObject__rosidl_typesupport_introspection_c__size_function__WorldObject__drawable_properties(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__DrawableProperties__Sequence * member =
    (const bosdyn_msgs__msg__DrawableProperties__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__WorldObject__rosidl_typesupport_introspection_c__get_const_function__WorldObject__drawable_properties(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__DrawableProperties__Sequence * member =
    (const bosdyn_msgs__msg__DrawableProperties__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__WorldObject__rosidl_typesupport_introspection_c__get_function__WorldObject__drawable_properties(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__DrawableProperties__Sequence * member =
    (bosdyn_msgs__msg__DrawableProperties__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__WorldObject__rosidl_typesupport_introspection_c__fetch_function__WorldObject__drawable_properties(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__DrawableProperties * item =
    ((const bosdyn_msgs__msg__DrawableProperties *)
    bosdyn_msgs__msg__WorldObject__rosidl_typesupport_introspection_c__get_const_function__WorldObject__drawable_properties(untyped_member, index));
  bosdyn_msgs__msg__DrawableProperties * value =
    (bosdyn_msgs__msg__DrawableProperties *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__WorldObject__rosidl_typesupport_introspection_c__assign_function__WorldObject__drawable_properties(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__DrawableProperties * item =
    ((bosdyn_msgs__msg__DrawableProperties *)
    bosdyn_msgs__msg__WorldObject__rosidl_typesupport_introspection_c__get_function__WorldObject__drawable_properties(untyped_member, index));
  const bosdyn_msgs__msg__DrawableProperties * value =
    (const bosdyn_msgs__msg__DrawableProperties *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__WorldObject__rosidl_typesupport_introspection_c__resize_function__WorldObject__drawable_properties(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__DrawableProperties__Sequence * member =
    (bosdyn_msgs__msg__DrawableProperties__Sequence *)(untyped_member);
  bosdyn_msgs__msg__DrawableProperties__Sequence__fini(member);
  return bosdyn_msgs__msg__DrawableProperties__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__WorldObject__rosidl_typesupport_introspection_c__WorldObject_message_member_array[23] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__WorldObject, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__WorldObject, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acquisition_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__WorldObject, acquisition_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acquisition_time_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__WorldObject, acquisition_time_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "transforms_snapshot",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__WorldObject, transforms_snapshot),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "transforms_snapshot_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__WorldObject, transforms_snapshot_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "object_lifetime",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__WorldObject, object_lifetime),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "object_lifetime_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__WorldObject, object_lifetime_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "drawable_properties",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__WorldObject, drawable_properties),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__WorldObject__rosidl_typesupport_introspection_c__size_function__WorldObject__drawable_properties,  // size() function pointer
    bosdyn_msgs__msg__WorldObject__rosidl_typesupport_introspection_c__get_const_function__WorldObject__drawable_properties,  // get_const(index) function pointer
    bosdyn_msgs__msg__WorldObject__rosidl_typesupport_introspection_c__get_function__WorldObject__drawable_properties,  // get(index) function pointer
    bosdyn_msgs__msg__WorldObject__rosidl_typesupport_introspection_c__fetch_function__WorldObject__drawable_properties,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__WorldObject__rosidl_typesupport_introspection_c__assign_function__WorldObject__drawable_properties,  // assign(index, value) function pointer
    bosdyn_msgs__msg__WorldObject__rosidl_typesupport_introspection_c__resize_function__WorldObject__drawable_properties  // resize(index) function pointer
  },
  {
    "apriltag_properties",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__WorldObject, apriltag_properties),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "apriltag_properties_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__WorldObject, apriltag_properties_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nogo_region_properties",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__WorldObject, nogo_region_properties),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "nogo_region_properties_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__WorldObject, nogo_region_properties_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "image_properties",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__WorldObject, image_properties),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "image_properties_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__WorldObject, image_properties_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dock_properties",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__WorldObject, dock_properties),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dock_properties_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__WorldObject, dock_properties_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ray_properties",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__WorldObject, ray_properties),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ray_properties_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__WorldObject, ray_properties_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bounding_box_properties",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__WorldObject, bounding_box_properties),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bounding_box_properties_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__WorldObject, bounding_box_properties_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "staircase_properties",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__WorldObject, staircase_properties),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "staircase_properties_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__WorldObject, staircase_properties_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__WorldObject__rosidl_typesupport_introspection_c__WorldObject_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "WorldObject",  // message name
  23,  // number of fields
  sizeof(bosdyn_msgs__msg__WorldObject),
  bosdyn_msgs__msg__WorldObject__rosidl_typesupport_introspection_c__WorldObject_message_member_array,  // message members
  bosdyn_msgs__msg__WorldObject__rosidl_typesupport_introspection_c__WorldObject_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__WorldObject__rosidl_typesupport_introspection_c__WorldObject_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__WorldObject__rosidl_typesupport_introspection_c__WorldObject_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__WorldObject__rosidl_typesupport_introspection_c__WorldObject_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, WorldObject)() {
  bosdyn_msgs__msg__WorldObject__rosidl_typesupport_introspection_c__WorldObject_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  bosdyn_msgs__msg__WorldObject__rosidl_typesupport_introspection_c__WorldObject_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, FrameTreeSnapshot)();
  bosdyn_msgs__msg__WorldObject__rosidl_typesupport_introspection_c__WorldObject_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  bosdyn_msgs__msg__WorldObject__rosidl_typesupport_introspection_c__WorldObject_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, DrawableProperties)();
  bosdyn_msgs__msg__WorldObject__rosidl_typesupport_introspection_c__WorldObject_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, AprilTagProperties)();
  bosdyn_msgs__msg__WorldObject__rosidl_typesupport_introspection_c__WorldObject_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, NoGoRegionProperties)();
  bosdyn_msgs__msg__WorldObject__rosidl_typesupport_introspection_c__WorldObject_message_member_array[13].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ImageProperties)();
  bosdyn_msgs__msg__WorldObject__rosidl_typesupport_introspection_c__WorldObject_message_member_array[15].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, DockProperties)();
  bosdyn_msgs__msg__WorldObject__rosidl_typesupport_introspection_c__WorldObject_message_member_array[17].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, RayProperties)();
  bosdyn_msgs__msg__WorldObject__rosidl_typesupport_introspection_c__WorldObject_message_member_array[19].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, BoundingBoxProperties)();
  bosdyn_msgs__msg__WorldObject__rosidl_typesupport_introspection_c__WorldObject_message_member_array[21].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, StaircaseProperties)();
  if (!bosdyn_msgs__msg__WorldObject__rosidl_typesupport_introspection_c__WorldObject_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__WorldObject__rosidl_typesupport_introspection_c__WorldObject_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__WorldObject__rosidl_typesupport_introspection_c__WorldObject_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
