// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/FileIndex.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/file_index__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/file_index__functions.h"
#include "bosdyn_msgs/msg/detail/file_index__struct.h"


// Include directives for member types
// Member `series_identifiers`
#include "bosdyn_msgs/msg/series_identifier.h"
// Member `series_identifiers`
#include "bosdyn_msgs/msg/detail/series_identifier__rosidl_typesupport_introspection_c.h"
// Member `series_block_index_offsets`
// Member `series_identifier_hashes`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__FileIndex__rosidl_typesupport_introspection_c__FileIndex_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__FileIndex__init(message_memory);
}

void bosdyn_msgs__msg__FileIndex__rosidl_typesupport_introspection_c__FileIndex_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__FileIndex__fini(message_memory);
}

size_t bosdyn_msgs__msg__FileIndex__rosidl_typesupport_introspection_c__size_function__FileIndex__series_identifiers(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__SeriesIdentifier__Sequence * member =
    (const bosdyn_msgs__msg__SeriesIdentifier__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__FileIndex__rosidl_typesupport_introspection_c__get_const_function__FileIndex__series_identifiers(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__SeriesIdentifier__Sequence * member =
    (const bosdyn_msgs__msg__SeriesIdentifier__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__FileIndex__rosidl_typesupport_introspection_c__get_function__FileIndex__series_identifiers(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__SeriesIdentifier__Sequence * member =
    (bosdyn_msgs__msg__SeriesIdentifier__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__FileIndex__rosidl_typesupport_introspection_c__fetch_function__FileIndex__series_identifiers(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__SeriesIdentifier * item =
    ((const bosdyn_msgs__msg__SeriesIdentifier *)
    bosdyn_msgs__msg__FileIndex__rosidl_typesupport_introspection_c__get_const_function__FileIndex__series_identifiers(untyped_member, index));
  bosdyn_msgs__msg__SeriesIdentifier * value =
    (bosdyn_msgs__msg__SeriesIdentifier *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__FileIndex__rosidl_typesupport_introspection_c__assign_function__FileIndex__series_identifiers(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__SeriesIdentifier * item =
    ((bosdyn_msgs__msg__SeriesIdentifier *)
    bosdyn_msgs__msg__FileIndex__rosidl_typesupport_introspection_c__get_function__FileIndex__series_identifiers(untyped_member, index));
  const bosdyn_msgs__msg__SeriesIdentifier * value =
    (const bosdyn_msgs__msg__SeriesIdentifier *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__FileIndex__rosidl_typesupport_introspection_c__resize_function__FileIndex__series_identifiers(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__SeriesIdentifier__Sequence * member =
    (bosdyn_msgs__msg__SeriesIdentifier__Sequence *)(untyped_member);
  bosdyn_msgs__msg__SeriesIdentifier__Sequence__fini(member);
  return bosdyn_msgs__msg__SeriesIdentifier__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__FileIndex__rosidl_typesupport_introspection_c__size_function__FileIndex__series_block_index_offsets(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__FileIndex__rosidl_typesupport_introspection_c__get_const_function__FileIndex__series_block_index_offsets(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__FileIndex__rosidl_typesupport_introspection_c__get_function__FileIndex__series_block_index_offsets(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__FileIndex__rosidl_typesupport_introspection_c__fetch_function__FileIndex__series_block_index_offsets(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint64_t * item =
    ((const uint64_t *)
    bosdyn_msgs__msg__FileIndex__rosidl_typesupport_introspection_c__get_const_function__FileIndex__series_block_index_offsets(untyped_member, index));
  uint64_t * value =
    (uint64_t *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__FileIndex__rosidl_typesupport_introspection_c__assign_function__FileIndex__series_block_index_offsets(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint64_t * item =
    ((uint64_t *)
    bosdyn_msgs__msg__FileIndex__rosidl_typesupport_introspection_c__get_function__FileIndex__series_block_index_offsets(untyped_member, index));
  const uint64_t * value =
    (const uint64_t *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__FileIndex__rosidl_typesupport_introspection_c__resize_function__FileIndex__series_block_index_offsets(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  rosidl_runtime_c__uint64__Sequence__fini(member);
  return rosidl_runtime_c__uint64__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__FileIndex__rosidl_typesupport_introspection_c__size_function__FileIndex__series_identifier_hashes(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__FileIndex__rosidl_typesupport_introspection_c__get_const_function__FileIndex__series_identifier_hashes(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__FileIndex__rosidl_typesupport_introspection_c__get_function__FileIndex__series_identifier_hashes(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__FileIndex__rosidl_typesupport_introspection_c__fetch_function__FileIndex__series_identifier_hashes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint64_t * item =
    ((const uint64_t *)
    bosdyn_msgs__msg__FileIndex__rosidl_typesupport_introspection_c__get_const_function__FileIndex__series_identifier_hashes(untyped_member, index));
  uint64_t * value =
    (uint64_t *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__FileIndex__rosidl_typesupport_introspection_c__assign_function__FileIndex__series_identifier_hashes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint64_t * item =
    ((uint64_t *)
    bosdyn_msgs__msg__FileIndex__rosidl_typesupport_introspection_c__get_function__FileIndex__series_identifier_hashes(untyped_member, index));
  const uint64_t * value =
    (const uint64_t *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__FileIndex__rosidl_typesupport_introspection_c__resize_function__FileIndex__series_identifier_hashes(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  rosidl_runtime_c__uint64__Sequence__fini(member);
  return rosidl_runtime_c__uint64__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__FileIndex__rosidl_typesupport_introspection_c__FileIndex_message_member_array[3] = {
  {
    "series_identifiers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__FileIndex, series_identifiers),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__FileIndex__rosidl_typesupport_introspection_c__size_function__FileIndex__series_identifiers,  // size() function pointer
    bosdyn_msgs__msg__FileIndex__rosidl_typesupport_introspection_c__get_const_function__FileIndex__series_identifiers,  // get_const(index) function pointer
    bosdyn_msgs__msg__FileIndex__rosidl_typesupport_introspection_c__get_function__FileIndex__series_identifiers,  // get(index) function pointer
    bosdyn_msgs__msg__FileIndex__rosidl_typesupport_introspection_c__fetch_function__FileIndex__series_identifiers,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__FileIndex__rosidl_typesupport_introspection_c__assign_function__FileIndex__series_identifiers,  // assign(index, value) function pointer
    bosdyn_msgs__msg__FileIndex__rosidl_typesupport_introspection_c__resize_function__FileIndex__series_identifiers  // resize(index) function pointer
  },
  {
    "series_block_index_offsets",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__FileIndex, series_block_index_offsets),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__FileIndex__rosidl_typesupport_introspection_c__size_function__FileIndex__series_block_index_offsets,  // size() function pointer
    bosdyn_msgs__msg__FileIndex__rosidl_typesupport_introspection_c__get_const_function__FileIndex__series_block_index_offsets,  // get_const(index) function pointer
    bosdyn_msgs__msg__FileIndex__rosidl_typesupport_introspection_c__get_function__FileIndex__series_block_index_offsets,  // get(index) function pointer
    bosdyn_msgs__msg__FileIndex__rosidl_typesupport_introspection_c__fetch_function__FileIndex__series_block_index_offsets,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__FileIndex__rosidl_typesupport_introspection_c__assign_function__FileIndex__series_block_index_offsets,  // assign(index, value) function pointer
    bosdyn_msgs__msg__FileIndex__rosidl_typesupport_introspection_c__resize_function__FileIndex__series_block_index_offsets  // resize(index) function pointer
  },
  {
    "series_identifier_hashes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__FileIndex, series_identifier_hashes),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__FileIndex__rosidl_typesupport_introspection_c__size_function__FileIndex__series_identifier_hashes,  // size() function pointer
    bosdyn_msgs__msg__FileIndex__rosidl_typesupport_introspection_c__get_const_function__FileIndex__series_identifier_hashes,  // get_const(index) function pointer
    bosdyn_msgs__msg__FileIndex__rosidl_typesupport_introspection_c__get_function__FileIndex__series_identifier_hashes,  // get(index) function pointer
    bosdyn_msgs__msg__FileIndex__rosidl_typesupport_introspection_c__fetch_function__FileIndex__series_identifier_hashes,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__FileIndex__rosidl_typesupport_introspection_c__assign_function__FileIndex__series_identifier_hashes,  // assign(index, value) function pointer
    bosdyn_msgs__msg__FileIndex__rosidl_typesupport_introspection_c__resize_function__FileIndex__series_identifier_hashes  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__FileIndex__rosidl_typesupport_introspection_c__FileIndex_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "FileIndex",  // message name
  3,  // number of fields
  sizeof(bosdyn_msgs__msg__FileIndex),
  bosdyn_msgs__msg__FileIndex__rosidl_typesupport_introspection_c__FileIndex_message_member_array,  // message members
  bosdyn_msgs__msg__FileIndex__rosidl_typesupport_introspection_c__FileIndex_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__FileIndex__rosidl_typesupport_introspection_c__FileIndex_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__FileIndex__rosidl_typesupport_introspection_c__FileIndex_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__FileIndex__rosidl_typesupport_introspection_c__FileIndex_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, FileIndex)() {
  bosdyn_msgs__msg__FileIndex__rosidl_typesupport_introspection_c__FileIndex_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, SeriesIdentifier)();
  if (!bosdyn_msgs__msg__FileIndex__rosidl_typesupport_introspection_c__FileIndex_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__FileIndex__rosidl_typesupport_introspection_c__FileIndex_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__FileIndex__rosidl_typesupport_introspection_c__FileIndex_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
