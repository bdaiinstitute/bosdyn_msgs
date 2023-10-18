// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/ActionWrapperSpotCamAlignment.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/action_wrapper_spot_cam_alignment__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/action_wrapper_spot_cam_alignment__functions.h"
#include "bosdyn_msgs/msg/detail/action_wrapper_spot_cam_alignment__struct.h"


// Include directives for member types
// Member `alignments`
#include "bosdyn_msgs/msg/action_wrapper_spot_cam_alignment_alignment.h"
// Member `alignments`
#include "bosdyn_msgs/msg/detail/action_wrapper_spot_cam_alignment_alignment__rosidl_typesupport_introspection_c.h"
// Member `target_tform_sensor`
#include "geometry_msgs/msg/pose.h"
// Member `target_tform_sensor`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `target_sensor_ids`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__rosidl_typesupport_introspection_c__ActionWrapperSpotCamAlignment_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__init(message_memory);
}

void bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__rosidl_typesupport_introspection_c__ActionWrapperSpotCamAlignment_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__fini(message_memory);
}

size_t bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__rosidl_typesupport_introspection_c__size_function__ActionWrapperSpotCamAlignment__alignments(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__ActionWrapperSpotCamAlignmentAlignment__Sequence * member =
    (const bosdyn_msgs__msg__ActionWrapperSpotCamAlignmentAlignment__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__rosidl_typesupport_introspection_c__get_const_function__ActionWrapperSpotCamAlignment__alignments(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__ActionWrapperSpotCamAlignmentAlignment__Sequence * member =
    (const bosdyn_msgs__msg__ActionWrapperSpotCamAlignmentAlignment__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__rosidl_typesupport_introspection_c__get_function__ActionWrapperSpotCamAlignment__alignments(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__ActionWrapperSpotCamAlignmentAlignment__Sequence * member =
    (bosdyn_msgs__msg__ActionWrapperSpotCamAlignmentAlignment__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__rosidl_typesupport_introspection_c__fetch_function__ActionWrapperSpotCamAlignment__alignments(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__ActionWrapperSpotCamAlignmentAlignment * item =
    ((const bosdyn_msgs__msg__ActionWrapperSpotCamAlignmentAlignment *)
    bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__rosidl_typesupport_introspection_c__get_const_function__ActionWrapperSpotCamAlignment__alignments(untyped_member, index));
  bosdyn_msgs__msg__ActionWrapperSpotCamAlignmentAlignment * value =
    (bosdyn_msgs__msg__ActionWrapperSpotCamAlignmentAlignment *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__rosidl_typesupport_introspection_c__assign_function__ActionWrapperSpotCamAlignment__alignments(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__ActionWrapperSpotCamAlignmentAlignment * item =
    ((bosdyn_msgs__msg__ActionWrapperSpotCamAlignmentAlignment *)
    bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__rosidl_typesupport_introspection_c__get_function__ActionWrapperSpotCamAlignment__alignments(untyped_member, index));
  const bosdyn_msgs__msg__ActionWrapperSpotCamAlignmentAlignment * value =
    (const bosdyn_msgs__msg__ActionWrapperSpotCamAlignmentAlignment *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__rosidl_typesupport_introspection_c__resize_function__ActionWrapperSpotCamAlignment__alignments(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__ActionWrapperSpotCamAlignmentAlignment__Sequence * member =
    (bosdyn_msgs__msg__ActionWrapperSpotCamAlignmentAlignment__Sequence *)(untyped_member);
  bosdyn_msgs__msg__ActionWrapperSpotCamAlignmentAlignment__Sequence__fini(member);
  return bosdyn_msgs__msg__ActionWrapperSpotCamAlignmentAlignment__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__rosidl_typesupport_introspection_c__size_function__ActionWrapperSpotCamAlignment__target_sensor_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__rosidl_typesupport_introspection_c__get_const_function__ActionWrapperSpotCamAlignment__target_sensor_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__rosidl_typesupport_introspection_c__get_function__ActionWrapperSpotCamAlignment__target_sensor_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__rosidl_typesupport_introspection_c__fetch_function__ActionWrapperSpotCamAlignment__target_sensor_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__rosidl_typesupport_introspection_c__get_const_function__ActionWrapperSpotCamAlignment__target_sensor_ids(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__rosidl_typesupport_introspection_c__assign_function__ActionWrapperSpotCamAlignment__target_sensor_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__rosidl_typesupport_introspection_c__get_function__ActionWrapperSpotCamAlignment__target_sensor_ids(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__rosidl_typesupport_introspection_c__resize_function__ActionWrapperSpotCamAlignment__target_sensor_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__rosidl_typesupport_introspection_c__ActionWrapperSpotCamAlignment_message_member_array[5] = {
  {
    "alignments",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ActionWrapperSpotCamAlignment, alignments),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__rosidl_typesupport_introspection_c__size_function__ActionWrapperSpotCamAlignment__alignments,  // size() function pointer
    bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__rosidl_typesupport_introspection_c__get_const_function__ActionWrapperSpotCamAlignment__alignments,  // get_const(index) function pointer
    bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__rosidl_typesupport_introspection_c__get_function__ActionWrapperSpotCamAlignment__alignments,  // get(index) function pointer
    bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__rosidl_typesupport_introspection_c__fetch_function__ActionWrapperSpotCamAlignment__alignments,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__rosidl_typesupport_introspection_c__assign_function__ActionWrapperSpotCamAlignment__alignments,  // assign(index, value) function pointer
    bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__rosidl_typesupport_introspection_c__resize_function__ActionWrapperSpotCamAlignment__alignments  // resize(index) function pointer
  },
  {
    "target_tform_sensor",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ActionWrapperSpotCamAlignment, target_tform_sensor),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_tform_sensor_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ActionWrapperSpotCamAlignment, target_tform_sensor_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "final_zoom",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ActionWrapperSpotCamAlignment, final_zoom),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_sensor_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ActionWrapperSpotCamAlignment, target_sensor_ids),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__rosidl_typesupport_introspection_c__size_function__ActionWrapperSpotCamAlignment__target_sensor_ids,  // size() function pointer
    bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__rosidl_typesupport_introspection_c__get_const_function__ActionWrapperSpotCamAlignment__target_sensor_ids,  // get_const(index) function pointer
    bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__rosidl_typesupport_introspection_c__get_function__ActionWrapperSpotCamAlignment__target_sensor_ids,  // get(index) function pointer
    bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__rosidl_typesupport_introspection_c__fetch_function__ActionWrapperSpotCamAlignment__target_sensor_ids,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__rosidl_typesupport_introspection_c__assign_function__ActionWrapperSpotCamAlignment__target_sensor_ids,  // assign(index, value) function pointer
    bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__rosidl_typesupport_introspection_c__resize_function__ActionWrapperSpotCamAlignment__target_sensor_ids  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__rosidl_typesupport_introspection_c__ActionWrapperSpotCamAlignment_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "ActionWrapperSpotCamAlignment",  // message name
  5,  // number of fields
  sizeof(bosdyn_msgs__msg__ActionWrapperSpotCamAlignment),
  bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__rosidl_typesupport_introspection_c__ActionWrapperSpotCamAlignment_message_member_array,  // message members
  bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__rosidl_typesupport_introspection_c__ActionWrapperSpotCamAlignment_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__rosidl_typesupport_introspection_c__ActionWrapperSpotCamAlignment_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__rosidl_typesupport_introspection_c__ActionWrapperSpotCamAlignment_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__rosidl_typesupport_introspection_c__ActionWrapperSpotCamAlignment_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ActionWrapperSpotCamAlignment)() {
  bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__rosidl_typesupport_introspection_c__ActionWrapperSpotCamAlignment_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ActionWrapperSpotCamAlignmentAlignment)();
  bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__rosidl_typesupport_introspection_c__ActionWrapperSpotCamAlignment_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__rosidl_typesupport_introspection_c__ActionWrapperSpotCamAlignment_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__rosidl_typesupport_introspection_c__ActionWrapperSpotCamAlignment_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__ActionWrapperSpotCamAlignment__rosidl_typesupport_introspection_c__ActionWrapperSpotCamAlignment_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
