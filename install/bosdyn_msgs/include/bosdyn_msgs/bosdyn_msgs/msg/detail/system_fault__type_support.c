// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/SystemFault.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/system_fault__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/system_fault__functions.h"
#include "bosdyn_msgs/msg/detail/system_fault__struct.h"


// Include directives for member types
// Member `name`
// Member `error_message`
// Member `attributes`
#include "rosidl_runtime_c/string_functions.h"
// Member `onset_timestamp`
#include "builtin_interfaces/msg/time.h"
// Member `onset_timestamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `duration`
#include "builtin_interfaces/msg/duration.h"
// Member `duration`
#include "builtin_interfaces/msg/detail/duration__rosidl_typesupport_introspection_c.h"
// Member `severity`
#include "bosdyn_msgs/msg/system_fault_severity.h"
// Member `severity`
#include "bosdyn_msgs/msg/detail/system_fault_severity__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__SystemFault__rosidl_typesupport_introspection_c__SystemFault_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__SystemFault__init(message_memory);
}

void bosdyn_msgs__msg__SystemFault__rosidl_typesupport_introspection_c__SystemFault_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__SystemFault__fini(message_memory);
}

size_t bosdyn_msgs__msg__SystemFault__rosidl_typesupport_introspection_c__size_function__SystemFault__attributes(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__SystemFault__rosidl_typesupport_introspection_c__get_const_function__SystemFault__attributes(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__SystemFault__rosidl_typesupport_introspection_c__get_function__SystemFault__attributes(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__SystemFault__rosidl_typesupport_introspection_c__fetch_function__SystemFault__attributes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    bosdyn_msgs__msg__SystemFault__rosidl_typesupport_introspection_c__get_const_function__SystemFault__attributes(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__SystemFault__rosidl_typesupport_introspection_c__assign_function__SystemFault__attributes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    bosdyn_msgs__msg__SystemFault__rosidl_typesupport_introspection_c__get_function__SystemFault__attributes(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__SystemFault__rosidl_typesupport_introspection_c__resize_function__SystemFault__attributes(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__SystemFault__rosidl_typesupport_introspection_c__SystemFault_message_member_array[10] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__SystemFault, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "onset_timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__SystemFault, onset_timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "onset_timestamp_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__SystemFault, onset_timestamp_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "duration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__SystemFault, duration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "duration_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__SystemFault, duration_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "code",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__SystemFault, code),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "uid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__SystemFault, uid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__SystemFault, error_message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "attributes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__SystemFault, attributes),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__SystemFault__rosidl_typesupport_introspection_c__size_function__SystemFault__attributes,  // size() function pointer
    bosdyn_msgs__msg__SystemFault__rosidl_typesupport_introspection_c__get_const_function__SystemFault__attributes,  // get_const(index) function pointer
    bosdyn_msgs__msg__SystemFault__rosidl_typesupport_introspection_c__get_function__SystemFault__attributes,  // get(index) function pointer
    bosdyn_msgs__msg__SystemFault__rosidl_typesupport_introspection_c__fetch_function__SystemFault__attributes,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__SystemFault__rosidl_typesupport_introspection_c__assign_function__SystemFault__attributes,  // assign(index, value) function pointer
    bosdyn_msgs__msg__SystemFault__rosidl_typesupport_introspection_c__resize_function__SystemFault__attributes  // resize(index) function pointer
  },
  {
    "severity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__SystemFault, severity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__SystemFault__rosidl_typesupport_introspection_c__SystemFault_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "SystemFault",  // message name
  10,  // number of fields
  sizeof(bosdyn_msgs__msg__SystemFault),
  bosdyn_msgs__msg__SystemFault__rosidl_typesupport_introspection_c__SystemFault_message_member_array,  // message members
  bosdyn_msgs__msg__SystemFault__rosidl_typesupport_introspection_c__SystemFault_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__SystemFault__rosidl_typesupport_introspection_c__SystemFault_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__SystemFault__rosidl_typesupport_introspection_c__SystemFault_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__SystemFault__rosidl_typesupport_introspection_c__SystemFault_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, SystemFault)() {
  bosdyn_msgs__msg__SystemFault__rosidl_typesupport_introspection_c__SystemFault_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  bosdyn_msgs__msg__SystemFault__rosidl_typesupport_introspection_c__SystemFault_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  bosdyn_msgs__msg__SystemFault__rosidl_typesupport_introspection_c__SystemFault_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, SystemFaultSeverity)();
  if (!bosdyn_msgs__msg__SystemFault__rosidl_typesupport_introspection_c__SystemFault_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__SystemFault__rosidl_typesupport_introspection_c__SystemFault_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__SystemFault__rosidl_typesupport_introspection_c__SystemFault_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
