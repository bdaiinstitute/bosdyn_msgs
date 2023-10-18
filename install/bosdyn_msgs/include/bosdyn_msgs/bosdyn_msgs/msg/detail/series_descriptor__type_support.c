// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/SeriesDescriptor.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/series_descriptor__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/series_descriptor__functions.h"
#include "bosdyn_msgs/msg/detail/series_descriptor__struct.h"


// Include directives for member types
// Member `series_identifier`
#include "bosdyn_msgs/msg/series_identifier.h"
// Member `series_identifier`
#include "bosdyn_msgs/msg/detail/series_identifier__rosidl_typesupport_introspection_c.h"
// Member `data_type`
#include "bosdyn_msgs/msg/series_descriptor_one_of_data_type.h"
// Member `data_type`
#include "bosdyn_msgs/msg/detail/series_descriptor_one_of_data_type__rosidl_typesupport_introspection_c.h"
// Member `annotations`
#include "bosdyn_msgs/msg/key_string_value_string.h"
// Member `annotations`
#include "bosdyn_msgs/msg/detail/key_string_value_string__rosidl_typesupport_introspection_c.h"
// Member `additional_index_names`
// Member `description`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__SeriesDescriptor__rosidl_typesupport_introspection_c__SeriesDescriptor_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__SeriesDescriptor__init(message_memory);
}

void bosdyn_msgs__msg__SeriesDescriptor__rosidl_typesupport_introspection_c__SeriesDescriptor_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__SeriesDescriptor__fini(message_memory);
}

size_t bosdyn_msgs__msg__SeriesDescriptor__rosidl_typesupport_introspection_c__size_function__SeriesDescriptor__annotations(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__KeyStringValueString__Sequence * member =
    (const bosdyn_msgs__msg__KeyStringValueString__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__SeriesDescriptor__rosidl_typesupport_introspection_c__get_const_function__SeriesDescriptor__annotations(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__KeyStringValueString__Sequence * member =
    (const bosdyn_msgs__msg__KeyStringValueString__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__SeriesDescriptor__rosidl_typesupport_introspection_c__get_function__SeriesDescriptor__annotations(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__KeyStringValueString__Sequence * member =
    (bosdyn_msgs__msg__KeyStringValueString__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__SeriesDescriptor__rosidl_typesupport_introspection_c__fetch_function__SeriesDescriptor__annotations(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__KeyStringValueString * item =
    ((const bosdyn_msgs__msg__KeyStringValueString *)
    bosdyn_msgs__msg__SeriesDescriptor__rosidl_typesupport_introspection_c__get_const_function__SeriesDescriptor__annotations(untyped_member, index));
  bosdyn_msgs__msg__KeyStringValueString * value =
    (bosdyn_msgs__msg__KeyStringValueString *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__SeriesDescriptor__rosidl_typesupport_introspection_c__assign_function__SeriesDescriptor__annotations(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__KeyStringValueString * item =
    ((bosdyn_msgs__msg__KeyStringValueString *)
    bosdyn_msgs__msg__SeriesDescriptor__rosidl_typesupport_introspection_c__get_function__SeriesDescriptor__annotations(untyped_member, index));
  const bosdyn_msgs__msg__KeyStringValueString * value =
    (const bosdyn_msgs__msg__KeyStringValueString *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__SeriesDescriptor__rosidl_typesupport_introspection_c__resize_function__SeriesDescriptor__annotations(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__KeyStringValueString__Sequence * member =
    (bosdyn_msgs__msg__KeyStringValueString__Sequence *)(untyped_member);
  bosdyn_msgs__msg__KeyStringValueString__Sequence__fini(member);
  return bosdyn_msgs__msg__KeyStringValueString__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__SeriesDescriptor__rosidl_typesupport_introspection_c__size_function__SeriesDescriptor__additional_index_names(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__SeriesDescriptor__rosidl_typesupport_introspection_c__get_const_function__SeriesDescriptor__additional_index_names(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__SeriesDescriptor__rosidl_typesupport_introspection_c__get_function__SeriesDescriptor__additional_index_names(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__SeriesDescriptor__rosidl_typesupport_introspection_c__fetch_function__SeriesDescriptor__additional_index_names(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    bosdyn_msgs__msg__SeriesDescriptor__rosidl_typesupport_introspection_c__get_const_function__SeriesDescriptor__additional_index_names(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__SeriesDescriptor__rosidl_typesupport_introspection_c__assign_function__SeriesDescriptor__additional_index_names(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    bosdyn_msgs__msg__SeriesDescriptor__rosidl_typesupport_introspection_c__get_function__SeriesDescriptor__additional_index_names(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__SeriesDescriptor__rosidl_typesupport_introspection_c__resize_function__SeriesDescriptor__additional_index_names(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__SeriesDescriptor__rosidl_typesupport_introspection_c__SeriesDescriptor_message_member_array[8] = {
  {
    "series_index",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__SeriesDescriptor, series_index),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "series_identifier",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__SeriesDescriptor, series_identifier),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "series_identifier_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__SeriesDescriptor, series_identifier_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "identifier_hash",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__SeriesDescriptor, identifier_hash),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__SeriesDescriptor, data_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "annotations",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__SeriesDescriptor, annotations),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__SeriesDescriptor__rosidl_typesupport_introspection_c__size_function__SeriesDescriptor__annotations,  // size() function pointer
    bosdyn_msgs__msg__SeriesDescriptor__rosidl_typesupport_introspection_c__get_const_function__SeriesDescriptor__annotations,  // get_const(index) function pointer
    bosdyn_msgs__msg__SeriesDescriptor__rosidl_typesupport_introspection_c__get_function__SeriesDescriptor__annotations,  // get(index) function pointer
    bosdyn_msgs__msg__SeriesDescriptor__rosidl_typesupport_introspection_c__fetch_function__SeriesDescriptor__annotations,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__SeriesDescriptor__rosidl_typesupport_introspection_c__assign_function__SeriesDescriptor__annotations,  // assign(index, value) function pointer
    bosdyn_msgs__msg__SeriesDescriptor__rosidl_typesupport_introspection_c__resize_function__SeriesDescriptor__annotations  // resize(index) function pointer
  },
  {
    "additional_index_names",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__SeriesDescriptor, additional_index_names),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__SeriesDescriptor__rosidl_typesupport_introspection_c__size_function__SeriesDescriptor__additional_index_names,  // size() function pointer
    bosdyn_msgs__msg__SeriesDescriptor__rosidl_typesupport_introspection_c__get_const_function__SeriesDescriptor__additional_index_names,  // get_const(index) function pointer
    bosdyn_msgs__msg__SeriesDescriptor__rosidl_typesupport_introspection_c__get_function__SeriesDescriptor__additional_index_names,  // get(index) function pointer
    bosdyn_msgs__msg__SeriesDescriptor__rosidl_typesupport_introspection_c__fetch_function__SeriesDescriptor__additional_index_names,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__SeriesDescriptor__rosidl_typesupport_introspection_c__assign_function__SeriesDescriptor__additional_index_names,  // assign(index, value) function pointer
    bosdyn_msgs__msg__SeriesDescriptor__rosidl_typesupport_introspection_c__resize_function__SeriesDescriptor__additional_index_names  // resize(index) function pointer
  },
  {
    "description",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__SeriesDescriptor, description),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__SeriesDescriptor__rosidl_typesupport_introspection_c__SeriesDescriptor_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "SeriesDescriptor",  // message name
  8,  // number of fields
  sizeof(bosdyn_msgs__msg__SeriesDescriptor),
  bosdyn_msgs__msg__SeriesDescriptor__rosidl_typesupport_introspection_c__SeriesDescriptor_message_member_array,  // message members
  bosdyn_msgs__msg__SeriesDescriptor__rosidl_typesupport_introspection_c__SeriesDescriptor_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__SeriesDescriptor__rosidl_typesupport_introspection_c__SeriesDescriptor_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__SeriesDescriptor__rosidl_typesupport_introspection_c__SeriesDescriptor_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__SeriesDescriptor__rosidl_typesupport_introspection_c__SeriesDescriptor_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, SeriesDescriptor)() {
  bosdyn_msgs__msg__SeriesDescriptor__rosidl_typesupport_introspection_c__SeriesDescriptor_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, SeriesIdentifier)();
  bosdyn_msgs__msg__SeriesDescriptor__rosidl_typesupport_introspection_c__SeriesDescriptor_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, SeriesDescriptorOneOfDataType)();
  bosdyn_msgs__msg__SeriesDescriptor__rosidl_typesupport_introspection_c__SeriesDescriptor_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, KeyStringValueString)();
  if (!bosdyn_msgs__msg__SeriesDescriptor__rosidl_typesupport_introspection_c__SeriesDescriptor_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__SeriesDescriptor__rosidl_typesupport_introspection_c__SeriesDescriptor_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__SeriesDescriptor__rosidl_typesupport_introspection_c__SeriesDescriptor_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
