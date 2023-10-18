// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/SignalTick.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/signal_tick__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/signal_tick__functions.h"
#include "bosdyn_msgs/msg/detail/signal_tick__struct.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/time.h"
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `source`
#include "rosidl_runtime_c/string_functions.h"
// Member `encoding`
#include "bosdyn_msgs/msg/signal_tick_encoding.h"
// Member `encoding`
#include "bosdyn_msgs/msg/detail/signal_tick_encoding__rosidl_typesupport_introspection_c.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__SignalTick__rosidl_typesupport_introspection_c__SignalTick_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__SignalTick__init(message_memory);
}

void bosdyn_msgs__msg__SignalTick__rosidl_typesupport_introspection_c__SignalTick_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__SignalTick__fini(message_memory);
}

size_t bosdyn_msgs__msg__SignalTick__rosidl_typesupport_introspection_c__size_function__SignalTick__data(
  const void * untyped_member)
{
  const rosidl_runtime_c__octet__Sequence * member =
    (const rosidl_runtime_c__octet__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__SignalTick__rosidl_typesupport_introspection_c__get_const_function__SignalTick__data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__octet__Sequence * member =
    (const rosidl_runtime_c__octet__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__SignalTick__rosidl_typesupport_introspection_c__get_function__SignalTick__data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__octet__Sequence * member =
    (rosidl_runtime_c__octet__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__SignalTick__rosidl_typesupport_introspection_c__fetch_function__SignalTick__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    bosdyn_msgs__msg__SignalTick__rosidl_typesupport_introspection_c__get_const_function__SignalTick__data(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__SignalTick__rosidl_typesupport_introspection_c__assign_function__SignalTick__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    bosdyn_msgs__msg__SignalTick__rosidl_typesupport_introspection_c__get_function__SignalTick__data(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__SignalTick__rosidl_typesupport_introspection_c__resize_function__SignalTick__data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__octet__Sequence * member =
    (rosidl_runtime_c__octet__Sequence *)(untyped_member);
  rosidl_runtime_c__octet__Sequence__fini(member);
  return rosidl_runtime_c__octet__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__SignalTick__rosidl_typesupport_introspection_c__SignalTick_message_member_array[7] = {
  {
    "sequence_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__SignalTick, sequence_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__SignalTick, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timestamp_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__SignalTick, timestamp_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "source",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__SignalTick, source),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "schema_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__SignalTick, schema_id),  // bytes offset in struct
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
    offsetof(bosdyn_msgs__msg__SignalTick, encoding),  // bytes offset in struct
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
    offsetof(bosdyn_msgs__msg__SignalTick, data),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__SignalTick__rosidl_typesupport_introspection_c__size_function__SignalTick__data,  // size() function pointer
    bosdyn_msgs__msg__SignalTick__rosidl_typesupport_introspection_c__get_const_function__SignalTick__data,  // get_const(index) function pointer
    bosdyn_msgs__msg__SignalTick__rosidl_typesupport_introspection_c__get_function__SignalTick__data,  // get(index) function pointer
    bosdyn_msgs__msg__SignalTick__rosidl_typesupport_introspection_c__fetch_function__SignalTick__data,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__SignalTick__rosidl_typesupport_introspection_c__assign_function__SignalTick__data,  // assign(index, value) function pointer
    bosdyn_msgs__msg__SignalTick__rosidl_typesupport_introspection_c__resize_function__SignalTick__data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__SignalTick__rosidl_typesupport_introspection_c__SignalTick_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "SignalTick",  // message name
  7,  // number of fields
  sizeof(bosdyn_msgs__msg__SignalTick),
  bosdyn_msgs__msg__SignalTick__rosidl_typesupport_introspection_c__SignalTick_message_member_array,  // message members
  bosdyn_msgs__msg__SignalTick__rosidl_typesupport_introspection_c__SignalTick_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__SignalTick__rosidl_typesupport_introspection_c__SignalTick_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__SignalTick__rosidl_typesupport_introspection_c__SignalTick_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__SignalTick__rosidl_typesupport_introspection_c__SignalTick_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, SignalTick)() {
  bosdyn_msgs__msg__SignalTick__rosidl_typesupport_introspection_c__SignalTick_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  bosdyn_msgs__msg__SignalTick__rosidl_typesupport_introspection_c__SignalTick_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, SignalTickEncoding)();
  if (!bosdyn_msgs__msg__SignalTick__rosidl_typesupport_introspection_c__SignalTick_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__SignalTick__rosidl_typesupport_introspection_c__SignalTick_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__SignalTick__rosidl_typesupport_introspection_c__SignalTick_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
