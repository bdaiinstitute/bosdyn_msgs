// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/Payload.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/payload__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/payload__functions.h"
#include "bosdyn_msgs/msg/detail/payload__struct.h"


// Include directives for member types
// Member `guid`
// Member `name`
// Member `description`
// Member `label_prefix`
// Member `ipv4_address`
#include "rosidl_runtime_c/string_functions.h"
// Member `version`
#include "bosdyn_msgs/msg/software_version.h"
// Member `version`
#include "bosdyn_msgs/msg/detail/software_version__rosidl_typesupport_introspection_c.h"
// Member `body_tform_payload`
// Member `mount_tform_payload`
#include "geometry_msgs/msg/pose.h"
// Member `body_tform_payload`
// Member `mount_tform_payload`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"
// Member `mount_frame_name`
#include "bosdyn_msgs/msg/mount_frame_name.h"
// Member `mount_frame_name`
#include "bosdyn_msgs/msg/detail/mount_frame_name__rosidl_typesupport_introspection_c.h"
// Member `mass_volume_properties`
#include "bosdyn_msgs/msg/payload_mass_volume_properties.h"
// Member `mass_volume_properties`
#include "bosdyn_msgs/msg/detail/payload_mass_volume_properties__rosidl_typesupport_introspection_c.h"
// Member `preset_configurations`
#include "bosdyn_msgs/msg/payload_preset.h"
// Member `preset_configurations`
#include "bosdyn_msgs/msg/detail/payload_preset__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__Payload__rosidl_typesupport_introspection_c__Payload_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__Payload__init(message_memory);
}

void bosdyn_msgs__msg__Payload__rosidl_typesupport_introspection_c__Payload_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__Payload__fini(message_memory);
}

size_t bosdyn_msgs__msg__Payload__rosidl_typesupport_introspection_c__size_function__Payload__label_prefix(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__Payload__rosidl_typesupport_introspection_c__get_const_function__Payload__label_prefix(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__Payload__rosidl_typesupport_introspection_c__get_function__Payload__label_prefix(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__Payload__rosidl_typesupport_introspection_c__fetch_function__Payload__label_prefix(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    bosdyn_msgs__msg__Payload__rosidl_typesupport_introspection_c__get_const_function__Payload__label_prefix(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__Payload__rosidl_typesupport_introspection_c__assign_function__Payload__label_prefix(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    bosdyn_msgs__msg__Payload__rosidl_typesupport_introspection_c__get_function__Payload__label_prefix(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__Payload__rosidl_typesupport_introspection_c__resize_function__Payload__label_prefix(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__Payload__rosidl_typesupport_introspection_c__size_function__Payload__preset_configurations(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__PayloadPreset__Sequence * member =
    (const bosdyn_msgs__msg__PayloadPreset__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__Payload__rosidl_typesupport_introspection_c__get_const_function__Payload__preset_configurations(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__PayloadPreset__Sequence * member =
    (const bosdyn_msgs__msg__PayloadPreset__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__Payload__rosidl_typesupport_introspection_c__get_function__Payload__preset_configurations(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__PayloadPreset__Sequence * member =
    (bosdyn_msgs__msg__PayloadPreset__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__Payload__rosidl_typesupport_introspection_c__fetch_function__Payload__preset_configurations(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__PayloadPreset * item =
    ((const bosdyn_msgs__msg__PayloadPreset *)
    bosdyn_msgs__msg__Payload__rosidl_typesupport_introspection_c__get_const_function__Payload__preset_configurations(untyped_member, index));
  bosdyn_msgs__msg__PayloadPreset * value =
    (bosdyn_msgs__msg__PayloadPreset *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__Payload__rosidl_typesupport_introspection_c__assign_function__Payload__preset_configurations(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__PayloadPreset * item =
    ((bosdyn_msgs__msg__PayloadPreset *)
    bosdyn_msgs__msg__Payload__rosidl_typesupport_introspection_c__get_function__Payload__preset_configurations(untyped_member, index));
  const bosdyn_msgs__msg__PayloadPreset * value =
    (const bosdyn_msgs__msg__PayloadPreset *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__Payload__rosidl_typesupport_introspection_c__resize_function__Payload__preset_configurations(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__PayloadPreset__Sequence * member =
    (bosdyn_msgs__msg__PayloadPreset__Sequence *)(untyped_member);
  bosdyn_msgs__msg__PayloadPreset__Sequence__fini(member);
  return bosdyn_msgs__msg__PayloadPreset__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__Payload__rosidl_typesupport_introspection_c__Payload_message_member_array[20] = {
  {
    "guid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Payload, guid),  // bytes offset in struct
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
    offsetof(bosdyn_msgs__msg__Payload, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "description",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Payload, description),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "label_prefix",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Payload, label_prefix),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__Payload__rosidl_typesupport_introspection_c__size_function__Payload__label_prefix,  // size() function pointer
    bosdyn_msgs__msg__Payload__rosidl_typesupport_introspection_c__get_const_function__Payload__label_prefix,  // get_const(index) function pointer
    bosdyn_msgs__msg__Payload__rosidl_typesupport_introspection_c__get_function__Payload__label_prefix,  // get(index) function pointer
    bosdyn_msgs__msg__Payload__rosidl_typesupport_introspection_c__fetch_function__Payload__label_prefix,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__Payload__rosidl_typesupport_introspection_c__assign_function__Payload__label_prefix,  // assign(index, value) function pointer
    bosdyn_msgs__msg__Payload__rosidl_typesupport_introspection_c__resize_function__Payload__label_prefix  // resize(index) function pointer
  },
  {
    "is_authorized",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Payload, is_authorized),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_enabled",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Payload, is_enabled),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_noncompute_payload",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Payload, is_noncompute_payload),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Payload, version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "version_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Payload, version_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "body_tform_payload",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Payload, body_tform_payload),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "body_tform_payload_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Payload, body_tform_payload_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mount_tform_payload",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Payload, mount_tform_payload),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mount_tform_payload_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Payload, mount_tform_payload_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mount_frame_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Payload, mount_frame_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "liveness_timeout_secs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Payload, liveness_timeout_secs),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ipv4_address",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Payload, ipv4_address),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "link_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Payload, link_speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mass_volume_properties",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Payload, mass_volume_properties),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mass_volume_properties_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Payload, mass_volume_properties_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "preset_configurations",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Payload, preset_configurations),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__Payload__rosidl_typesupport_introspection_c__size_function__Payload__preset_configurations,  // size() function pointer
    bosdyn_msgs__msg__Payload__rosidl_typesupport_introspection_c__get_const_function__Payload__preset_configurations,  // get_const(index) function pointer
    bosdyn_msgs__msg__Payload__rosidl_typesupport_introspection_c__get_function__Payload__preset_configurations,  // get(index) function pointer
    bosdyn_msgs__msg__Payload__rosidl_typesupport_introspection_c__fetch_function__Payload__preset_configurations,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__Payload__rosidl_typesupport_introspection_c__assign_function__Payload__preset_configurations,  // assign(index, value) function pointer
    bosdyn_msgs__msg__Payload__rosidl_typesupport_introspection_c__resize_function__Payload__preset_configurations  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__Payload__rosidl_typesupport_introspection_c__Payload_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "Payload",  // message name
  20,  // number of fields
  sizeof(bosdyn_msgs__msg__Payload),
  bosdyn_msgs__msg__Payload__rosidl_typesupport_introspection_c__Payload_message_member_array,  // message members
  bosdyn_msgs__msg__Payload__rosidl_typesupport_introspection_c__Payload_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__Payload__rosidl_typesupport_introspection_c__Payload_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__Payload__rosidl_typesupport_introspection_c__Payload_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__Payload__rosidl_typesupport_introspection_c__Payload_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, Payload)() {
  bosdyn_msgs__msg__Payload__rosidl_typesupport_introspection_c__Payload_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, SoftwareVersion)();
  bosdyn_msgs__msg__Payload__rosidl_typesupport_introspection_c__Payload_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  bosdyn_msgs__msg__Payload__rosidl_typesupport_introspection_c__Payload_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  bosdyn_msgs__msg__Payload__rosidl_typesupport_introspection_c__Payload_message_member_array[13].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, MountFrameName)();
  bosdyn_msgs__msg__Payload__rosidl_typesupport_introspection_c__Payload_message_member_array[17].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, PayloadMassVolumeProperties)();
  bosdyn_msgs__msg__Payload__rosidl_typesupport_introspection_c__Payload_message_member_array[19].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, PayloadPreset)();
  if (!bosdyn_msgs__msg__Payload__rosidl_typesupport_introspection_c__Payload_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__Payload__rosidl_typesupport_introspection_c__Payload_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__Payload__rosidl_typesupport_introspection_c__Payload_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
