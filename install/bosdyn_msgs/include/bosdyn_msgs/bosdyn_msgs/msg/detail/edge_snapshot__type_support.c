// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/EdgeSnapshot.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/edge_snapshot__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/edge_snapshot__functions.h"
#include "bosdyn_msgs/msg/detail/edge_snapshot__struct.h"


// Include directives for member types
// Member `id`
#include "rosidl_runtime_c/string_functions.h"
// Member `stances`
#include "bosdyn_msgs/msg/edge_snapshot_stance.h"
// Member `stances`
#include "bosdyn_msgs/msg/detail/edge_snapshot_stance__rosidl_typesupport_introspection_c.h"
// Member `area_callbacks`
#include "bosdyn_msgs/msg/key_string_value_bosdyn_msgs_area_callback_data.h"
// Member `area_callbacks`
#include "bosdyn_msgs/msg/detail/key_string_value_bosdyn_msgs_area_callback_data__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__EdgeSnapshot__rosidl_typesupport_introspection_c__EdgeSnapshot_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__EdgeSnapshot__init(message_memory);
}

void bosdyn_msgs__msg__EdgeSnapshot__rosidl_typesupport_introspection_c__EdgeSnapshot_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__EdgeSnapshot__fini(message_memory);
}

size_t bosdyn_msgs__msg__EdgeSnapshot__rosidl_typesupport_introspection_c__size_function__EdgeSnapshot__stances(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__EdgeSnapshotStance__Sequence * member =
    (const bosdyn_msgs__msg__EdgeSnapshotStance__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__EdgeSnapshot__rosidl_typesupport_introspection_c__get_const_function__EdgeSnapshot__stances(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__EdgeSnapshotStance__Sequence * member =
    (const bosdyn_msgs__msg__EdgeSnapshotStance__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__EdgeSnapshot__rosidl_typesupport_introspection_c__get_function__EdgeSnapshot__stances(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__EdgeSnapshotStance__Sequence * member =
    (bosdyn_msgs__msg__EdgeSnapshotStance__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__EdgeSnapshot__rosidl_typesupport_introspection_c__fetch_function__EdgeSnapshot__stances(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__EdgeSnapshotStance * item =
    ((const bosdyn_msgs__msg__EdgeSnapshotStance *)
    bosdyn_msgs__msg__EdgeSnapshot__rosidl_typesupport_introspection_c__get_const_function__EdgeSnapshot__stances(untyped_member, index));
  bosdyn_msgs__msg__EdgeSnapshotStance * value =
    (bosdyn_msgs__msg__EdgeSnapshotStance *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__EdgeSnapshot__rosidl_typesupport_introspection_c__assign_function__EdgeSnapshot__stances(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__EdgeSnapshotStance * item =
    ((bosdyn_msgs__msg__EdgeSnapshotStance *)
    bosdyn_msgs__msg__EdgeSnapshot__rosidl_typesupport_introspection_c__get_function__EdgeSnapshot__stances(untyped_member, index));
  const bosdyn_msgs__msg__EdgeSnapshotStance * value =
    (const bosdyn_msgs__msg__EdgeSnapshotStance *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__EdgeSnapshot__rosidl_typesupport_introspection_c__resize_function__EdgeSnapshot__stances(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__EdgeSnapshotStance__Sequence * member =
    (bosdyn_msgs__msg__EdgeSnapshotStance__Sequence *)(untyped_member);
  bosdyn_msgs__msg__EdgeSnapshotStance__Sequence__fini(member);
  return bosdyn_msgs__msg__EdgeSnapshotStance__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__EdgeSnapshot__rosidl_typesupport_introspection_c__size_function__EdgeSnapshot__area_callbacks(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__KeyStringValueBosdynMsgsAreaCallbackData__Sequence * member =
    (const bosdyn_msgs__msg__KeyStringValueBosdynMsgsAreaCallbackData__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__EdgeSnapshot__rosidl_typesupport_introspection_c__get_const_function__EdgeSnapshot__area_callbacks(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__KeyStringValueBosdynMsgsAreaCallbackData__Sequence * member =
    (const bosdyn_msgs__msg__KeyStringValueBosdynMsgsAreaCallbackData__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__EdgeSnapshot__rosidl_typesupport_introspection_c__get_function__EdgeSnapshot__area_callbacks(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsAreaCallbackData__Sequence * member =
    (bosdyn_msgs__msg__KeyStringValueBosdynMsgsAreaCallbackData__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__EdgeSnapshot__rosidl_typesupport_introspection_c__fetch_function__EdgeSnapshot__area_callbacks(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__KeyStringValueBosdynMsgsAreaCallbackData * item =
    ((const bosdyn_msgs__msg__KeyStringValueBosdynMsgsAreaCallbackData *)
    bosdyn_msgs__msg__EdgeSnapshot__rosidl_typesupport_introspection_c__get_const_function__EdgeSnapshot__area_callbacks(untyped_member, index));
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsAreaCallbackData * value =
    (bosdyn_msgs__msg__KeyStringValueBosdynMsgsAreaCallbackData *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__EdgeSnapshot__rosidl_typesupport_introspection_c__assign_function__EdgeSnapshot__area_callbacks(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsAreaCallbackData * item =
    ((bosdyn_msgs__msg__KeyStringValueBosdynMsgsAreaCallbackData *)
    bosdyn_msgs__msg__EdgeSnapshot__rosidl_typesupport_introspection_c__get_function__EdgeSnapshot__area_callbacks(untyped_member, index));
  const bosdyn_msgs__msg__KeyStringValueBosdynMsgsAreaCallbackData * value =
    (const bosdyn_msgs__msg__KeyStringValueBosdynMsgsAreaCallbackData *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__EdgeSnapshot__rosidl_typesupport_introspection_c__resize_function__EdgeSnapshot__area_callbacks(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsAreaCallbackData__Sequence * member =
    (bosdyn_msgs__msg__KeyStringValueBosdynMsgsAreaCallbackData__Sequence *)(untyped_member);
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsAreaCallbackData__Sequence__fini(member);
  return bosdyn_msgs__msg__KeyStringValueBosdynMsgsAreaCallbackData__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__EdgeSnapshot__rosidl_typesupport_introspection_c__EdgeSnapshot_message_member_array[3] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__EdgeSnapshot, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stances",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__EdgeSnapshot, stances),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__EdgeSnapshot__rosidl_typesupport_introspection_c__size_function__EdgeSnapshot__stances,  // size() function pointer
    bosdyn_msgs__msg__EdgeSnapshot__rosidl_typesupport_introspection_c__get_const_function__EdgeSnapshot__stances,  // get_const(index) function pointer
    bosdyn_msgs__msg__EdgeSnapshot__rosidl_typesupport_introspection_c__get_function__EdgeSnapshot__stances,  // get(index) function pointer
    bosdyn_msgs__msg__EdgeSnapshot__rosidl_typesupport_introspection_c__fetch_function__EdgeSnapshot__stances,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__EdgeSnapshot__rosidl_typesupport_introspection_c__assign_function__EdgeSnapshot__stances,  // assign(index, value) function pointer
    bosdyn_msgs__msg__EdgeSnapshot__rosidl_typesupport_introspection_c__resize_function__EdgeSnapshot__stances  // resize(index) function pointer
  },
  {
    "area_callbacks",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__EdgeSnapshot, area_callbacks),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__EdgeSnapshot__rosidl_typesupport_introspection_c__size_function__EdgeSnapshot__area_callbacks,  // size() function pointer
    bosdyn_msgs__msg__EdgeSnapshot__rosidl_typesupport_introspection_c__get_const_function__EdgeSnapshot__area_callbacks,  // get_const(index) function pointer
    bosdyn_msgs__msg__EdgeSnapshot__rosidl_typesupport_introspection_c__get_function__EdgeSnapshot__area_callbacks,  // get(index) function pointer
    bosdyn_msgs__msg__EdgeSnapshot__rosidl_typesupport_introspection_c__fetch_function__EdgeSnapshot__area_callbacks,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__EdgeSnapshot__rosidl_typesupport_introspection_c__assign_function__EdgeSnapshot__area_callbacks,  // assign(index, value) function pointer
    bosdyn_msgs__msg__EdgeSnapshot__rosidl_typesupport_introspection_c__resize_function__EdgeSnapshot__area_callbacks  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__EdgeSnapshot__rosidl_typesupport_introspection_c__EdgeSnapshot_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "EdgeSnapshot",  // message name
  3,  // number of fields
  sizeof(bosdyn_msgs__msg__EdgeSnapshot),
  bosdyn_msgs__msg__EdgeSnapshot__rosidl_typesupport_introspection_c__EdgeSnapshot_message_member_array,  // message members
  bosdyn_msgs__msg__EdgeSnapshot__rosidl_typesupport_introspection_c__EdgeSnapshot_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__EdgeSnapshot__rosidl_typesupport_introspection_c__EdgeSnapshot_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__EdgeSnapshot__rosidl_typesupport_introspection_c__EdgeSnapshot_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__EdgeSnapshot__rosidl_typesupport_introspection_c__EdgeSnapshot_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, EdgeSnapshot)() {
  bosdyn_msgs__msg__EdgeSnapshot__rosidl_typesupport_introspection_c__EdgeSnapshot_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, EdgeSnapshotStance)();
  bosdyn_msgs__msg__EdgeSnapshot__rosidl_typesupport_introspection_c__EdgeSnapshot_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, KeyStringValueBosdynMsgsAreaCallbackData)();
  if (!bosdyn_msgs__msg__EdgeSnapshot__rosidl_typesupport_introspection_c__EdgeSnapshot_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__EdgeSnapshot__rosidl_typesupport_introspection_c__EdgeSnapshot_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__EdgeSnapshot__rosidl_typesupport_introspection_c__EdgeSnapshot_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
