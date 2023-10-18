// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/LocalGrid.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/local_grid__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/local_grid__functions.h"
#include "bosdyn_msgs/msg/detail/local_grid__struct.h"


// Include directives for member types
// Member `local_grid_type_name`
// Member `frame_name_local_grid_data`
#include "rosidl_runtime_c/string_functions.h"
// Member `acquisition_time`
#include "builtin_interfaces/msg/time.h"
// Member `acquisition_time`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `transforms_snapshot`
#include "bosdyn_msgs/msg/frame_tree_snapshot.h"
// Member `transforms_snapshot`
#include "bosdyn_msgs/msg/detail/frame_tree_snapshot__rosidl_typesupport_introspection_c.h"
// Member `extent`
#include "bosdyn_msgs/msg/local_grid_extent.h"
// Member `extent`
#include "bosdyn_msgs/msg/detail/local_grid_extent__rosidl_typesupport_introspection_c.h"
// Member `cell_format`
#include "bosdyn_msgs/msg/local_grid_cell_format.h"
// Member `cell_format`
#include "bosdyn_msgs/msg/detail/local_grid_cell_format__rosidl_typesupport_introspection_c.h"
// Member `encoding`
#include "bosdyn_msgs/msg/local_grid_encoding.h"
// Member `encoding`
#include "bosdyn_msgs/msg/detail/local_grid_encoding__rosidl_typesupport_introspection_c.h"
// Member `data`
// Member `rle_counts`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__LocalGrid__rosidl_typesupport_introspection_c__LocalGrid_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__LocalGrid__init(message_memory);
}

void bosdyn_msgs__msg__LocalGrid__rosidl_typesupport_introspection_c__LocalGrid_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__LocalGrid__fini(message_memory);
}

size_t bosdyn_msgs__msg__LocalGrid__rosidl_typesupport_introspection_c__size_function__LocalGrid__data(
  const void * untyped_member)
{
  const rosidl_runtime_c__octet__Sequence * member =
    (const rosidl_runtime_c__octet__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__LocalGrid__rosidl_typesupport_introspection_c__get_const_function__LocalGrid__data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__octet__Sequence * member =
    (const rosidl_runtime_c__octet__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__LocalGrid__rosidl_typesupport_introspection_c__get_function__LocalGrid__data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__octet__Sequence * member =
    (rosidl_runtime_c__octet__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__LocalGrid__rosidl_typesupport_introspection_c__fetch_function__LocalGrid__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    bosdyn_msgs__msg__LocalGrid__rosidl_typesupport_introspection_c__get_const_function__LocalGrid__data(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__LocalGrid__rosidl_typesupport_introspection_c__assign_function__LocalGrid__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    bosdyn_msgs__msg__LocalGrid__rosidl_typesupport_introspection_c__get_function__LocalGrid__data(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__LocalGrid__rosidl_typesupport_introspection_c__resize_function__LocalGrid__data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__octet__Sequence * member =
    (rosidl_runtime_c__octet__Sequence *)(untyped_member);
  rosidl_runtime_c__octet__Sequence__fini(member);
  return rosidl_runtime_c__octet__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__LocalGrid__rosidl_typesupport_introspection_c__size_function__LocalGrid__rle_counts(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__LocalGrid__rosidl_typesupport_introspection_c__get_const_function__LocalGrid__rle_counts(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__LocalGrid__rosidl_typesupport_introspection_c__get_function__LocalGrid__rle_counts(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__LocalGrid__rosidl_typesupport_introspection_c__fetch_function__LocalGrid__rle_counts(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    bosdyn_msgs__msg__LocalGrid__rosidl_typesupport_introspection_c__get_const_function__LocalGrid__rle_counts(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__LocalGrid__rosidl_typesupport_introspection_c__assign_function__LocalGrid__rle_counts(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    bosdyn_msgs__msg__LocalGrid__rosidl_typesupport_introspection_c__get_function__LocalGrid__rle_counts(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__LocalGrid__rosidl_typesupport_introspection_c__resize_function__LocalGrid__rle_counts(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__LocalGrid__rosidl_typesupport_introspection_c__LocalGrid_message_member_array[14] = {
  {
    "local_grid_type_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__LocalGrid, local_grid_type_name),  // bytes offset in struct
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
    offsetof(bosdyn_msgs__msg__LocalGrid, acquisition_time),  // bytes offset in struct
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
    offsetof(bosdyn_msgs__msg__LocalGrid, acquisition_time_is_set),  // bytes offset in struct
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
    offsetof(bosdyn_msgs__msg__LocalGrid, transforms_snapshot),  // bytes offset in struct
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
    offsetof(bosdyn_msgs__msg__LocalGrid, transforms_snapshot_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "frame_name_local_grid_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__LocalGrid, frame_name_local_grid_data),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "extent",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__LocalGrid, extent),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "extent_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__LocalGrid, extent_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cell_format",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__LocalGrid, cell_format),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "encoding",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__LocalGrid, encoding),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_OCTET,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__LocalGrid, data),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__LocalGrid__rosidl_typesupport_introspection_c__size_function__LocalGrid__data,  // size() function pointer
    bosdyn_msgs__msg__LocalGrid__rosidl_typesupport_introspection_c__get_const_function__LocalGrid__data,  // get_const(index) function pointer
    bosdyn_msgs__msg__LocalGrid__rosidl_typesupport_introspection_c__get_function__LocalGrid__data,  // get(index) function pointer
    bosdyn_msgs__msg__LocalGrid__rosidl_typesupport_introspection_c__fetch_function__LocalGrid__data,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__LocalGrid__rosidl_typesupport_introspection_c__assign_function__LocalGrid__data,  // assign(index, value) function pointer
    bosdyn_msgs__msg__LocalGrid__rosidl_typesupport_introspection_c__resize_function__LocalGrid__data  // resize(index) function pointer
  },
  {
    "rle_counts",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__LocalGrid, rle_counts),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__LocalGrid__rosidl_typesupport_introspection_c__size_function__LocalGrid__rle_counts,  // size() function pointer
    bosdyn_msgs__msg__LocalGrid__rosidl_typesupport_introspection_c__get_const_function__LocalGrid__rle_counts,  // get_const(index) function pointer
    bosdyn_msgs__msg__LocalGrid__rosidl_typesupport_introspection_c__get_function__LocalGrid__rle_counts,  // get(index) function pointer
    bosdyn_msgs__msg__LocalGrid__rosidl_typesupport_introspection_c__fetch_function__LocalGrid__rle_counts,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__LocalGrid__rosidl_typesupport_introspection_c__assign_function__LocalGrid__rle_counts,  // assign(index, value) function pointer
    bosdyn_msgs__msg__LocalGrid__rosidl_typesupport_introspection_c__resize_function__LocalGrid__rle_counts  // resize(index) function pointer
  },
  {
    "cell_value_scale",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__LocalGrid, cell_value_scale),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cell_value_offset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__LocalGrid, cell_value_offset),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__LocalGrid__rosidl_typesupport_introspection_c__LocalGrid_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "LocalGrid",  // message name
  14,  // number of fields
  sizeof(bosdyn_msgs__msg__LocalGrid),
  bosdyn_msgs__msg__LocalGrid__rosidl_typesupport_introspection_c__LocalGrid_message_member_array,  // message members
  bosdyn_msgs__msg__LocalGrid__rosidl_typesupport_introspection_c__LocalGrid_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__LocalGrid__rosidl_typesupport_introspection_c__LocalGrid_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__LocalGrid__rosidl_typesupport_introspection_c__LocalGrid_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__LocalGrid__rosidl_typesupport_introspection_c__LocalGrid_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, LocalGrid)() {
  bosdyn_msgs__msg__LocalGrid__rosidl_typesupport_introspection_c__LocalGrid_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  bosdyn_msgs__msg__LocalGrid__rosidl_typesupport_introspection_c__LocalGrid_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, FrameTreeSnapshot)();
  bosdyn_msgs__msg__LocalGrid__rosidl_typesupport_introspection_c__LocalGrid_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, LocalGridExtent)();
  bosdyn_msgs__msg__LocalGrid__rosidl_typesupport_introspection_c__LocalGrid_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, LocalGridCellFormat)();
  bosdyn_msgs__msg__LocalGrid__rosidl_typesupport_introspection_c__LocalGrid_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, LocalGridEncoding)();
  if (!bosdyn_msgs__msg__LocalGrid__rosidl_typesupport_introspection_c__LocalGrid_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__LocalGrid__rosidl_typesupport_introspection_c__LocalGrid_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__LocalGrid__rosidl_typesupport_introspection_c__LocalGrid_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
