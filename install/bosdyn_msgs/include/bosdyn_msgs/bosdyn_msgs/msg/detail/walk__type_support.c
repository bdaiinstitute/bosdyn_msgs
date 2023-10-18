// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/Walk.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/walk__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/walk__functions.h"
#include "bosdyn_msgs/msg/detail/walk__struct.h"


// Include directives for member types
// Member `global_parameters`
#include "bosdyn_msgs/msg/global_parameters.h"
// Member `global_parameters`
#include "bosdyn_msgs/msg/detail/global_parameters__rosidl_typesupport_introspection_c.h"
// Member `playback_mode`
#include "bosdyn_msgs/msg/playback_mode.h"
// Member `playback_mode`
#include "bosdyn_msgs/msg/detail/playback_mode__rosidl_typesupport_introspection_c.h"
// Member `map_name`
// Member `mission_name`
// Member `id`
#include "rosidl_runtime_c/string_functions.h"
// Member `elements`
#include "bosdyn_msgs/msg/element.h"
// Member `elements`
#include "bosdyn_msgs/msg/detail/element__rosidl_typesupport_introspection_c.h"
// Member `docks`
#include "bosdyn_msgs/msg/dock.h"
// Member `docks`
#include "bosdyn_msgs/msg/detail/dock__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__Walk__rosidl_typesupport_introspection_c__Walk_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__Walk__init(message_memory);
}

void bosdyn_msgs__msg__Walk__rosidl_typesupport_introspection_c__Walk_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__Walk__fini(message_memory);
}

size_t bosdyn_msgs__msg__Walk__rosidl_typesupport_introspection_c__size_function__Walk__elements(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__Element__Sequence * member =
    (const bosdyn_msgs__msg__Element__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__Walk__rosidl_typesupport_introspection_c__get_const_function__Walk__elements(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__Element__Sequence * member =
    (const bosdyn_msgs__msg__Element__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__Walk__rosidl_typesupport_introspection_c__get_function__Walk__elements(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__Element__Sequence * member =
    (bosdyn_msgs__msg__Element__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__Walk__rosidl_typesupport_introspection_c__fetch_function__Walk__elements(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__Element * item =
    ((const bosdyn_msgs__msg__Element *)
    bosdyn_msgs__msg__Walk__rosidl_typesupport_introspection_c__get_const_function__Walk__elements(untyped_member, index));
  bosdyn_msgs__msg__Element * value =
    (bosdyn_msgs__msg__Element *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__Walk__rosidl_typesupport_introspection_c__assign_function__Walk__elements(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__Element * item =
    ((bosdyn_msgs__msg__Element *)
    bosdyn_msgs__msg__Walk__rosidl_typesupport_introspection_c__get_function__Walk__elements(untyped_member, index));
  const bosdyn_msgs__msg__Element * value =
    (const bosdyn_msgs__msg__Element *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__Walk__rosidl_typesupport_introspection_c__resize_function__Walk__elements(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__Element__Sequence * member =
    (bosdyn_msgs__msg__Element__Sequence *)(untyped_member);
  bosdyn_msgs__msg__Element__Sequence__fini(member);
  return bosdyn_msgs__msg__Element__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__Walk__rosidl_typesupport_introspection_c__size_function__Walk__docks(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__Dock__Sequence * member =
    (const bosdyn_msgs__msg__Dock__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__Walk__rosidl_typesupport_introspection_c__get_const_function__Walk__docks(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__Dock__Sequence * member =
    (const bosdyn_msgs__msg__Dock__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__Walk__rosidl_typesupport_introspection_c__get_function__Walk__docks(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__Dock__Sequence * member =
    (bosdyn_msgs__msg__Dock__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__Walk__rosidl_typesupport_introspection_c__fetch_function__Walk__docks(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__Dock * item =
    ((const bosdyn_msgs__msg__Dock *)
    bosdyn_msgs__msg__Walk__rosidl_typesupport_introspection_c__get_const_function__Walk__docks(untyped_member, index));
  bosdyn_msgs__msg__Dock * value =
    (bosdyn_msgs__msg__Dock *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__Walk__rosidl_typesupport_introspection_c__assign_function__Walk__docks(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__Dock * item =
    ((bosdyn_msgs__msg__Dock *)
    bosdyn_msgs__msg__Walk__rosidl_typesupport_introspection_c__get_function__Walk__docks(untyped_member, index));
  const bosdyn_msgs__msg__Dock * value =
    (const bosdyn_msgs__msg__Dock *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__Walk__rosidl_typesupport_introspection_c__resize_function__Walk__docks(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__Dock__Sequence * member =
    (bosdyn_msgs__msg__Dock__Sequence *)(untyped_member);
  bosdyn_msgs__msg__Dock__Sequence__fini(member);
  return bosdyn_msgs__msg__Dock__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__Walk__rosidl_typesupport_introspection_c__Walk_message_member_array[9] = {
  {
    "global_parameters",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Walk, global_parameters),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "global_parameters_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Walk, global_parameters_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "playback_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Walk, playback_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "playback_mode_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Walk, playback_mode_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "map_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Walk, map_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mission_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Walk, mission_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "elements",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Walk, elements),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__Walk__rosidl_typesupport_introspection_c__size_function__Walk__elements,  // size() function pointer
    bosdyn_msgs__msg__Walk__rosidl_typesupport_introspection_c__get_const_function__Walk__elements,  // get_const(index) function pointer
    bosdyn_msgs__msg__Walk__rosidl_typesupport_introspection_c__get_function__Walk__elements,  // get(index) function pointer
    bosdyn_msgs__msg__Walk__rosidl_typesupport_introspection_c__fetch_function__Walk__elements,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__Walk__rosidl_typesupport_introspection_c__assign_function__Walk__elements,  // assign(index, value) function pointer
    bosdyn_msgs__msg__Walk__rosidl_typesupport_introspection_c__resize_function__Walk__elements  // resize(index) function pointer
  },
  {
    "docks",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Walk, docks),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__Walk__rosidl_typesupport_introspection_c__size_function__Walk__docks,  // size() function pointer
    bosdyn_msgs__msg__Walk__rosidl_typesupport_introspection_c__get_const_function__Walk__docks,  // get_const(index) function pointer
    bosdyn_msgs__msg__Walk__rosidl_typesupport_introspection_c__get_function__Walk__docks,  // get(index) function pointer
    bosdyn_msgs__msg__Walk__rosidl_typesupport_introspection_c__fetch_function__Walk__docks,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__Walk__rosidl_typesupport_introspection_c__assign_function__Walk__docks,  // assign(index, value) function pointer
    bosdyn_msgs__msg__Walk__rosidl_typesupport_introspection_c__resize_function__Walk__docks  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Walk, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__Walk__rosidl_typesupport_introspection_c__Walk_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "Walk",  // message name
  9,  // number of fields
  sizeof(bosdyn_msgs__msg__Walk),
  bosdyn_msgs__msg__Walk__rosidl_typesupport_introspection_c__Walk_message_member_array,  // message members
  bosdyn_msgs__msg__Walk__rosidl_typesupport_introspection_c__Walk_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__Walk__rosidl_typesupport_introspection_c__Walk_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__Walk__rosidl_typesupport_introspection_c__Walk_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__Walk__rosidl_typesupport_introspection_c__Walk_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, Walk)() {
  bosdyn_msgs__msg__Walk__rosidl_typesupport_introspection_c__Walk_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, GlobalParameters)();
  bosdyn_msgs__msg__Walk__rosidl_typesupport_introspection_c__Walk_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, PlaybackMode)();
  bosdyn_msgs__msg__Walk__rosidl_typesupport_introspection_c__Walk_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, Element)();
  bosdyn_msgs__msg__Walk__rosidl_typesupport_introspection_c__Walk_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, Dock)();
  if (!bosdyn_msgs__msg__Walk__rosidl_typesupport_introspection_c__Walk_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__Walk__rosidl_typesupport_introspection_c__Walk_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__Walk__rosidl_typesupport_introspection_c__Walk_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
