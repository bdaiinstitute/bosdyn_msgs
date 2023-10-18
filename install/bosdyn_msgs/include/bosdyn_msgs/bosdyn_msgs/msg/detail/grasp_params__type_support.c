// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/GraspParams.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/grasp_params__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/grasp_params__functions.h"
#include "bosdyn_msgs/msg/detail/grasp_params__struct.h"


// Include directives for member types
// Member `grasp_params_frame_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `allowable_orientation`
#include "bosdyn_msgs/msg/allowable_orientation.h"
// Member `allowable_orientation`
#include "bosdyn_msgs/msg/detail/allowable_orientation__rosidl_typesupport_introspection_c.h"
// Member `position_constraint`
#include "bosdyn_msgs/msg/grasp_position_constraint.h"
// Member `position_constraint`
#include "bosdyn_msgs/msg/detail/grasp_position_constraint__rosidl_typesupport_introspection_c.h"
// Member `manipulation_camera_source`
#include "bosdyn_msgs/msg/manipulation_camera_source.h"
// Member `manipulation_camera_source`
#include "bosdyn_msgs/msg/detail/manipulation_camera_source__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__GraspParams__rosidl_typesupport_introspection_c__GraspParams_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__GraspParams__init(message_memory);
}

void bosdyn_msgs__msg__GraspParams__rosidl_typesupport_introspection_c__GraspParams_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__GraspParams__fini(message_memory);
}

size_t bosdyn_msgs__msg__GraspParams__rosidl_typesupport_introspection_c__size_function__GraspParams__allowable_orientation(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__AllowableOrientation__Sequence * member =
    (const bosdyn_msgs__msg__AllowableOrientation__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__GraspParams__rosidl_typesupport_introspection_c__get_const_function__GraspParams__allowable_orientation(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__AllowableOrientation__Sequence * member =
    (const bosdyn_msgs__msg__AllowableOrientation__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__GraspParams__rosidl_typesupport_introspection_c__get_function__GraspParams__allowable_orientation(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__AllowableOrientation__Sequence * member =
    (bosdyn_msgs__msg__AllowableOrientation__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__GraspParams__rosidl_typesupport_introspection_c__fetch_function__GraspParams__allowable_orientation(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__AllowableOrientation * item =
    ((const bosdyn_msgs__msg__AllowableOrientation *)
    bosdyn_msgs__msg__GraspParams__rosidl_typesupport_introspection_c__get_const_function__GraspParams__allowable_orientation(untyped_member, index));
  bosdyn_msgs__msg__AllowableOrientation * value =
    (bosdyn_msgs__msg__AllowableOrientation *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__GraspParams__rosidl_typesupport_introspection_c__assign_function__GraspParams__allowable_orientation(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__AllowableOrientation * item =
    ((bosdyn_msgs__msg__AllowableOrientation *)
    bosdyn_msgs__msg__GraspParams__rosidl_typesupport_introspection_c__get_function__GraspParams__allowable_orientation(untyped_member, index));
  const bosdyn_msgs__msg__AllowableOrientation * value =
    (const bosdyn_msgs__msg__AllowableOrientation *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__GraspParams__rosidl_typesupport_introspection_c__resize_function__GraspParams__allowable_orientation(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__AllowableOrientation__Sequence * member =
    (bosdyn_msgs__msg__AllowableOrientation__Sequence *)(untyped_member);
  bosdyn_msgs__msg__AllowableOrientation__Sequence__fini(member);
  return bosdyn_msgs__msg__AllowableOrientation__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__GraspParams__rosidl_typesupport_introspection_c__GraspParams_message_member_array[5] = {
  {
    "grasp_palm_to_fingertip",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__GraspParams, grasp_palm_to_fingertip),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "grasp_params_frame_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__GraspParams, grasp_params_frame_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "allowable_orientation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__GraspParams, allowable_orientation),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__GraspParams__rosidl_typesupport_introspection_c__size_function__GraspParams__allowable_orientation,  // size() function pointer
    bosdyn_msgs__msg__GraspParams__rosidl_typesupport_introspection_c__get_const_function__GraspParams__allowable_orientation,  // get_const(index) function pointer
    bosdyn_msgs__msg__GraspParams__rosidl_typesupport_introspection_c__get_function__GraspParams__allowable_orientation,  // get(index) function pointer
    bosdyn_msgs__msg__GraspParams__rosidl_typesupport_introspection_c__fetch_function__GraspParams__allowable_orientation,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__GraspParams__rosidl_typesupport_introspection_c__assign_function__GraspParams__allowable_orientation,  // assign(index, value) function pointer
    bosdyn_msgs__msg__GraspParams__rosidl_typesupport_introspection_c__resize_function__GraspParams__allowable_orientation  // resize(index) function pointer
  },
  {
    "position_constraint",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__GraspParams, position_constraint),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "manipulation_camera_source",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__GraspParams, manipulation_camera_source),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__GraspParams__rosidl_typesupport_introspection_c__GraspParams_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "GraspParams",  // message name
  5,  // number of fields
  sizeof(bosdyn_msgs__msg__GraspParams),
  bosdyn_msgs__msg__GraspParams__rosidl_typesupport_introspection_c__GraspParams_message_member_array,  // message members
  bosdyn_msgs__msg__GraspParams__rosidl_typesupport_introspection_c__GraspParams_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__GraspParams__rosidl_typesupport_introspection_c__GraspParams_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__GraspParams__rosidl_typesupport_introspection_c__GraspParams_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__GraspParams__rosidl_typesupport_introspection_c__GraspParams_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, GraspParams)() {
  bosdyn_msgs__msg__GraspParams__rosidl_typesupport_introspection_c__GraspParams_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, AllowableOrientation)();
  bosdyn_msgs__msg__GraspParams__rosidl_typesupport_introspection_c__GraspParams_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, GraspPositionConstraint)();
  bosdyn_msgs__msg__GraspParams__rosidl_typesupport_introspection_c__GraspParams_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ManipulationCameraSource)();
  if (!bosdyn_msgs__msg__GraspParams__rosidl_typesupport_introspection_c__GraspParams_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__GraspParams__rosidl_typesupport_introspection_c__GraspParams_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__GraspParams__rosidl_typesupport_introspection_c__GraspParams_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
