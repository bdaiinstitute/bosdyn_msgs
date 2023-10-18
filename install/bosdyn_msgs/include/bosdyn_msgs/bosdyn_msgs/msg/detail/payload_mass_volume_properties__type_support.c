// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/PayloadMassVolumeProperties.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/payload_mass_volume_properties__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/payload_mass_volume_properties__functions.h"
#include "bosdyn_msgs/msg/detail/payload_mass_volume_properties__struct.h"


// Include directives for member types
// Member `com_pos_rt_payload`
#include "geometry_msgs/msg/vector3.h"
// Member `com_pos_rt_payload`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"
// Member `moi_tensor`
#include "bosdyn_msgs/msg/moment_of_intertia.h"
// Member `moi_tensor`
#include "bosdyn_msgs/msg/detail/moment_of_intertia__rosidl_typesupport_introspection_c.h"
// Member `bounding_box`
#include "bosdyn_msgs/msg/box3_with_frame.h"
// Member `bounding_box`
#include "bosdyn_msgs/msg/detail/box3_with_frame__rosidl_typesupport_introspection_c.h"
// Member `joint_limits`
#include "bosdyn_msgs/msg/joint_limits.h"
// Member `joint_limits`
#include "bosdyn_msgs/msg/detail/joint_limits__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__PayloadMassVolumeProperties__rosidl_typesupport_introspection_c__PayloadMassVolumeProperties_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__PayloadMassVolumeProperties__init(message_memory);
}

void bosdyn_msgs__msg__PayloadMassVolumeProperties__rosidl_typesupport_introspection_c__PayloadMassVolumeProperties_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__PayloadMassVolumeProperties__fini(message_memory);
}

size_t bosdyn_msgs__msg__PayloadMassVolumeProperties__rosidl_typesupport_introspection_c__size_function__PayloadMassVolumeProperties__bounding_box(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__Box3WithFrame__Sequence * member =
    (const bosdyn_msgs__msg__Box3WithFrame__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__PayloadMassVolumeProperties__rosidl_typesupport_introspection_c__get_const_function__PayloadMassVolumeProperties__bounding_box(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__Box3WithFrame__Sequence * member =
    (const bosdyn_msgs__msg__Box3WithFrame__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__PayloadMassVolumeProperties__rosidl_typesupport_introspection_c__get_function__PayloadMassVolumeProperties__bounding_box(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__Box3WithFrame__Sequence * member =
    (bosdyn_msgs__msg__Box3WithFrame__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__PayloadMassVolumeProperties__rosidl_typesupport_introspection_c__fetch_function__PayloadMassVolumeProperties__bounding_box(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__Box3WithFrame * item =
    ((const bosdyn_msgs__msg__Box3WithFrame *)
    bosdyn_msgs__msg__PayloadMassVolumeProperties__rosidl_typesupport_introspection_c__get_const_function__PayloadMassVolumeProperties__bounding_box(untyped_member, index));
  bosdyn_msgs__msg__Box3WithFrame * value =
    (bosdyn_msgs__msg__Box3WithFrame *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__PayloadMassVolumeProperties__rosidl_typesupport_introspection_c__assign_function__PayloadMassVolumeProperties__bounding_box(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__Box3WithFrame * item =
    ((bosdyn_msgs__msg__Box3WithFrame *)
    bosdyn_msgs__msg__PayloadMassVolumeProperties__rosidl_typesupport_introspection_c__get_function__PayloadMassVolumeProperties__bounding_box(untyped_member, index));
  const bosdyn_msgs__msg__Box3WithFrame * value =
    (const bosdyn_msgs__msg__Box3WithFrame *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__PayloadMassVolumeProperties__rosidl_typesupport_introspection_c__resize_function__PayloadMassVolumeProperties__bounding_box(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__Box3WithFrame__Sequence * member =
    (bosdyn_msgs__msg__Box3WithFrame__Sequence *)(untyped_member);
  bosdyn_msgs__msg__Box3WithFrame__Sequence__fini(member);
  return bosdyn_msgs__msg__Box3WithFrame__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__PayloadMassVolumeProperties__rosidl_typesupport_introspection_c__size_function__PayloadMassVolumeProperties__joint_limits(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__JointLimits__Sequence * member =
    (const bosdyn_msgs__msg__JointLimits__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__PayloadMassVolumeProperties__rosidl_typesupport_introspection_c__get_const_function__PayloadMassVolumeProperties__joint_limits(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__JointLimits__Sequence * member =
    (const bosdyn_msgs__msg__JointLimits__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__PayloadMassVolumeProperties__rosidl_typesupport_introspection_c__get_function__PayloadMassVolumeProperties__joint_limits(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__JointLimits__Sequence * member =
    (bosdyn_msgs__msg__JointLimits__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__PayloadMassVolumeProperties__rosidl_typesupport_introspection_c__fetch_function__PayloadMassVolumeProperties__joint_limits(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__JointLimits * item =
    ((const bosdyn_msgs__msg__JointLimits *)
    bosdyn_msgs__msg__PayloadMassVolumeProperties__rosidl_typesupport_introspection_c__get_const_function__PayloadMassVolumeProperties__joint_limits(untyped_member, index));
  bosdyn_msgs__msg__JointLimits * value =
    (bosdyn_msgs__msg__JointLimits *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__PayloadMassVolumeProperties__rosidl_typesupport_introspection_c__assign_function__PayloadMassVolumeProperties__joint_limits(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__JointLimits * item =
    ((bosdyn_msgs__msg__JointLimits *)
    bosdyn_msgs__msg__PayloadMassVolumeProperties__rosidl_typesupport_introspection_c__get_function__PayloadMassVolumeProperties__joint_limits(untyped_member, index));
  const bosdyn_msgs__msg__JointLimits * value =
    (const bosdyn_msgs__msg__JointLimits *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__PayloadMassVolumeProperties__rosidl_typesupport_introspection_c__resize_function__PayloadMassVolumeProperties__joint_limits(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__JointLimits__Sequence * member =
    (bosdyn_msgs__msg__JointLimits__Sequence *)(untyped_member);
  bosdyn_msgs__msg__JointLimits__Sequence__fini(member);
  return bosdyn_msgs__msg__JointLimits__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__PayloadMassVolumeProperties__rosidl_typesupport_introspection_c__PayloadMassVolumeProperties_message_member_array[7] = {
  {
    "total_mass",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__PayloadMassVolumeProperties, total_mass),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "com_pos_rt_payload",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__PayloadMassVolumeProperties, com_pos_rt_payload),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "com_pos_rt_payload_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__PayloadMassVolumeProperties, com_pos_rt_payload_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "moi_tensor",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__PayloadMassVolumeProperties, moi_tensor),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "moi_tensor_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__PayloadMassVolumeProperties, moi_tensor_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bounding_box",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__PayloadMassVolumeProperties, bounding_box),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__PayloadMassVolumeProperties__rosidl_typesupport_introspection_c__size_function__PayloadMassVolumeProperties__bounding_box,  // size() function pointer
    bosdyn_msgs__msg__PayloadMassVolumeProperties__rosidl_typesupport_introspection_c__get_const_function__PayloadMassVolumeProperties__bounding_box,  // get_const(index) function pointer
    bosdyn_msgs__msg__PayloadMassVolumeProperties__rosidl_typesupport_introspection_c__get_function__PayloadMassVolumeProperties__bounding_box,  // get(index) function pointer
    bosdyn_msgs__msg__PayloadMassVolumeProperties__rosidl_typesupport_introspection_c__fetch_function__PayloadMassVolumeProperties__bounding_box,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__PayloadMassVolumeProperties__rosidl_typesupport_introspection_c__assign_function__PayloadMassVolumeProperties__bounding_box,  // assign(index, value) function pointer
    bosdyn_msgs__msg__PayloadMassVolumeProperties__rosidl_typesupport_introspection_c__resize_function__PayloadMassVolumeProperties__bounding_box  // resize(index) function pointer
  },
  {
    "joint_limits",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__PayloadMassVolumeProperties, joint_limits),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__PayloadMassVolumeProperties__rosidl_typesupport_introspection_c__size_function__PayloadMassVolumeProperties__joint_limits,  // size() function pointer
    bosdyn_msgs__msg__PayloadMassVolumeProperties__rosidl_typesupport_introspection_c__get_const_function__PayloadMassVolumeProperties__joint_limits,  // get_const(index) function pointer
    bosdyn_msgs__msg__PayloadMassVolumeProperties__rosidl_typesupport_introspection_c__get_function__PayloadMassVolumeProperties__joint_limits,  // get(index) function pointer
    bosdyn_msgs__msg__PayloadMassVolumeProperties__rosidl_typesupport_introspection_c__fetch_function__PayloadMassVolumeProperties__joint_limits,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__PayloadMassVolumeProperties__rosidl_typesupport_introspection_c__assign_function__PayloadMassVolumeProperties__joint_limits,  // assign(index, value) function pointer
    bosdyn_msgs__msg__PayloadMassVolumeProperties__rosidl_typesupport_introspection_c__resize_function__PayloadMassVolumeProperties__joint_limits  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__PayloadMassVolumeProperties__rosidl_typesupport_introspection_c__PayloadMassVolumeProperties_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "PayloadMassVolumeProperties",  // message name
  7,  // number of fields
  sizeof(bosdyn_msgs__msg__PayloadMassVolumeProperties),
  bosdyn_msgs__msg__PayloadMassVolumeProperties__rosidl_typesupport_introspection_c__PayloadMassVolumeProperties_message_member_array,  // message members
  bosdyn_msgs__msg__PayloadMassVolumeProperties__rosidl_typesupport_introspection_c__PayloadMassVolumeProperties_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__PayloadMassVolumeProperties__rosidl_typesupport_introspection_c__PayloadMassVolumeProperties_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__PayloadMassVolumeProperties__rosidl_typesupport_introspection_c__PayloadMassVolumeProperties_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__PayloadMassVolumeProperties__rosidl_typesupport_introspection_c__PayloadMassVolumeProperties_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, PayloadMassVolumeProperties)() {
  bosdyn_msgs__msg__PayloadMassVolumeProperties__rosidl_typesupport_introspection_c__PayloadMassVolumeProperties_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  bosdyn_msgs__msg__PayloadMassVolumeProperties__rosidl_typesupport_introspection_c__PayloadMassVolumeProperties_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, MomentOfIntertia)();
  bosdyn_msgs__msg__PayloadMassVolumeProperties__rosidl_typesupport_introspection_c__PayloadMassVolumeProperties_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, Box3WithFrame)();
  bosdyn_msgs__msg__PayloadMassVolumeProperties__rosidl_typesupport_introspection_c__PayloadMassVolumeProperties_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, JointLimits)();
  if (!bosdyn_msgs__msg__PayloadMassVolumeProperties__rosidl_typesupport_introspection_c__PayloadMassVolumeProperties_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__PayloadMassVolumeProperties__rosidl_typesupport_introspection_c__PayloadMassVolumeProperties_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__PayloadMassVolumeProperties__rosidl_typesupport_introspection_c__PayloadMassVolumeProperties_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
