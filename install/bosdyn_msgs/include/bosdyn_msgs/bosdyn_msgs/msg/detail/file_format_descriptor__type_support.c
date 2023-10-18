// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/FileFormatDescriptor.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/file_format_descriptor__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/file_format_descriptor__functions.h"
#include "bosdyn_msgs/msg/detail/file_format_descriptor__struct.h"


// Include directives for member types
// Member `version`
#include "bosdyn_msgs/msg/file_format_version.h"
// Member `version`
#include "bosdyn_msgs/msg/detail/file_format_version__rosidl_typesupport_introspection_c.h"
// Member `annotations`
#include "bosdyn_msgs/msg/key_string_value_string.h"
// Member `annotations`
#include "bosdyn_msgs/msg/detail/key_string_value_string__rosidl_typesupport_introspection_c.h"
// Member `checksum_type`
#include "bosdyn_msgs/msg/file_format_descriptor_check_sum_type.h"
// Member `checksum_type`
#include "bosdyn_msgs/msg/detail/file_format_descriptor_check_sum_type__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__FileFormatDescriptor__rosidl_typesupport_introspection_c__FileFormatDescriptor_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__FileFormatDescriptor__init(message_memory);
}

void bosdyn_msgs__msg__FileFormatDescriptor__rosidl_typesupport_introspection_c__FileFormatDescriptor_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__FileFormatDescriptor__fini(message_memory);
}

size_t bosdyn_msgs__msg__FileFormatDescriptor__rosidl_typesupport_introspection_c__size_function__FileFormatDescriptor__annotations(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__KeyStringValueString__Sequence * member =
    (const bosdyn_msgs__msg__KeyStringValueString__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__FileFormatDescriptor__rosidl_typesupport_introspection_c__get_const_function__FileFormatDescriptor__annotations(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__KeyStringValueString__Sequence * member =
    (const bosdyn_msgs__msg__KeyStringValueString__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__FileFormatDescriptor__rosidl_typesupport_introspection_c__get_function__FileFormatDescriptor__annotations(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__KeyStringValueString__Sequence * member =
    (bosdyn_msgs__msg__KeyStringValueString__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__FileFormatDescriptor__rosidl_typesupport_introspection_c__fetch_function__FileFormatDescriptor__annotations(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__KeyStringValueString * item =
    ((const bosdyn_msgs__msg__KeyStringValueString *)
    bosdyn_msgs__msg__FileFormatDescriptor__rosidl_typesupport_introspection_c__get_const_function__FileFormatDescriptor__annotations(untyped_member, index));
  bosdyn_msgs__msg__KeyStringValueString * value =
    (bosdyn_msgs__msg__KeyStringValueString *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__FileFormatDescriptor__rosidl_typesupport_introspection_c__assign_function__FileFormatDescriptor__annotations(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__KeyStringValueString * item =
    ((bosdyn_msgs__msg__KeyStringValueString *)
    bosdyn_msgs__msg__FileFormatDescriptor__rosidl_typesupport_introspection_c__get_function__FileFormatDescriptor__annotations(untyped_member, index));
  const bosdyn_msgs__msg__KeyStringValueString * value =
    (const bosdyn_msgs__msg__KeyStringValueString *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__FileFormatDescriptor__rosidl_typesupport_introspection_c__resize_function__FileFormatDescriptor__annotations(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__KeyStringValueString__Sequence * member =
    (bosdyn_msgs__msg__KeyStringValueString__Sequence *)(untyped_member);
  bosdyn_msgs__msg__KeyStringValueString__Sequence__fini(member);
  return bosdyn_msgs__msg__KeyStringValueString__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__FileFormatDescriptor__rosidl_typesupport_introspection_c__FileFormatDescriptor_message_member_array[5] = {
  {
    "version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__FileFormatDescriptor, version),  // bytes offset in struct
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
    offsetof(bosdyn_msgs__msg__FileFormatDescriptor, version_is_set),  // bytes offset in struct
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
    offsetof(bosdyn_msgs__msg__FileFormatDescriptor, annotations),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__FileFormatDescriptor__rosidl_typesupport_introspection_c__size_function__FileFormatDescriptor__annotations,  // size() function pointer
    bosdyn_msgs__msg__FileFormatDescriptor__rosidl_typesupport_introspection_c__get_const_function__FileFormatDescriptor__annotations,  // get_const(index) function pointer
    bosdyn_msgs__msg__FileFormatDescriptor__rosidl_typesupport_introspection_c__get_function__FileFormatDescriptor__annotations,  // get(index) function pointer
    bosdyn_msgs__msg__FileFormatDescriptor__rosidl_typesupport_introspection_c__fetch_function__FileFormatDescriptor__annotations,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__FileFormatDescriptor__rosidl_typesupport_introspection_c__assign_function__FileFormatDescriptor__annotations,  // assign(index, value) function pointer
    bosdyn_msgs__msg__FileFormatDescriptor__rosidl_typesupport_introspection_c__resize_function__FileFormatDescriptor__annotations  // resize(index) function pointer
  },
  {
    "checksum_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__FileFormatDescriptor, checksum_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "checksum_num_bytes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__FileFormatDescriptor, checksum_num_bytes),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__FileFormatDescriptor__rosidl_typesupport_introspection_c__FileFormatDescriptor_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "FileFormatDescriptor",  // message name
  5,  // number of fields
  sizeof(bosdyn_msgs__msg__FileFormatDescriptor),
  bosdyn_msgs__msg__FileFormatDescriptor__rosidl_typesupport_introspection_c__FileFormatDescriptor_message_member_array,  // message members
  bosdyn_msgs__msg__FileFormatDescriptor__rosidl_typesupport_introspection_c__FileFormatDescriptor_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__FileFormatDescriptor__rosidl_typesupport_introspection_c__FileFormatDescriptor_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__FileFormatDescriptor__rosidl_typesupport_introspection_c__FileFormatDescriptor_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__FileFormatDescriptor__rosidl_typesupport_introspection_c__FileFormatDescriptor_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, FileFormatDescriptor)() {
  bosdyn_msgs__msg__FileFormatDescriptor__rosidl_typesupport_introspection_c__FileFormatDescriptor_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, FileFormatVersion)();
  bosdyn_msgs__msg__FileFormatDescriptor__rosidl_typesupport_introspection_c__FileFormatDescriptor_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, KeyStringValueString)();
  bosdyn_msgs__msg__FileFormatDescriptor__rosidl_typesupport_introspection_c__FileFormatDescriptor_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, FileFormatDescriptorCheckSumType)();
  if (!bosdyn_msgs__msg__FileFormatDescriptor__rosidl_typesupport_introspection_c__FileFormatDescriptor_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__FileFormatDescriptor__rosidl_typesupport_introspection_c__FileFormatDescriptor_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__FileFormatDescriptor__rosidl_typesupport_introspection_c__FileFormatDescriptor_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
