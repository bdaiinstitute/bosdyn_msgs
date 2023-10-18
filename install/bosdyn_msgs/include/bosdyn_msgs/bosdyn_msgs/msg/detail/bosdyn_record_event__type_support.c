// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/BosdynRecordEvent.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/bosdyn_record_event__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/bosdyn_record_event__functions.h"
#include "bosdyn_msgs/msg/detail/bosdyn_record_event__struct.h"


// Include directives for member types
// Member `service_name`
// Member `host`
#include "rosidl_runtime_c/string_functions.h"
// Member `event`
#include "bosdyn_msgs/msg/event.h"
// Member `event`
#include "bosdyn_msgs/msg/detail/event__rosidl_typesupport_introspection_c.h"
// Member `additional_parameters`
#include "bosdyn_msgs/msg/key_string_value_bosdyn_msgs_value.h"
// Member `additional_parameters`
#include "bosdyn_msgs/msg/detail/key_string_value_bosdyn_msgs_value__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__BosdynRecordEvent__rosidl_typesupport_introspection_c__BosdynRecordEvent_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__BosdynRecordEvent__init(message_memory);
}

void bosdyn_msgs__msg__BosdynRecordEvent__rosidl_typesupport_introspection_c__BosdynRecordEvent_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__BosdynRecordEvent__fini(message_memory);
}

size_t bosdyn_msgs__msg__BosdynRecordEvent__rosidl_typesupport_introspection_c__size_function__BosdynRecordEvent__additional_parameters(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__KeyStringValueBosdynMsgsValue__Sequence * member =
    (const bosdyn_msgs__msg__KeyStringValueBosdynMsgsValue__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__BosdynRecordEvent__rosidl_typesupport_introspection_c__get_const_function__BosdynRecordEvent__additional_parameters(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__KeyStringValueBosdynMsgsValue__Sequence * member =
    (const bosdyn_msgs__msg__KeyStringValueBosdynMsgsValue__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__BosdynRecordEvent__rosidl_typesupport_introspection_c__get_function__BosdynRecordEvent__additional_parameters(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsValue__Sequence * member =
    (bosdyn_msgs__msg__KeyStringValueBosdynMsgsValue__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__BosdynRecordEvent__rosidl_typesupport_introspection_c__fetch_function__BosdynRecordEvent__additional_parameters(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__KeyStringValueBosdynMsgsValue * item =
    ((const bosdyn_msgs__msg__KeyStringValueBosdynMsgsValue *)
    bosdyn_msgs__msg__BosdynRecordEvent__rosidl_typesupport_introspection_c__get_const_function__BosdynRecordEvent__additional_parameters(untyped_member, index));
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsValue * value =
    (bosdyn_msgs__msg__KeyStringValueBosdynMsgsValue *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__BosdynRecordEvent__rosidl_typesupport_introspection_c__assign_function__BosdynRecordEvent__additional_parameters(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsValue * item =
    ((bosdyn_msgs__msg__KeyStringValueBosdynMsgsValue *)
    bosdyn_msgs__msg__BosdynRecordEvent__rosidl_typesupport_introspection_c__get_function__BosdynRecordEvent__additional_parameters(untyped_member, index));
  const bosdyn_msgs__msg__KeyStringValueBosdynMsgsValue * value =
    (const bosdyn_msgs__msg__KeyStringValueBosdynMsgsValue *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__BosdynRecordEvent__rosidl_typesupport_introspection_c__resize_function__BosdynRecordEvent__additional_parameters(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsValue__Sequence * member =
    (bosdyn_msgs__msg__KeyStringValueBosdynMsgsValue__Sequence *)(untyped_member);
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsValue__Sequence__fini(member);
  return bosdyn_msgs__msg__KeyStringValueBosdynMsgsValue__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__BosdynRecordEvent__rosidl_typesupport_introspection_c__BosdynRecordEvent_message_member_array[6] = {
  {
    "service_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__BosdynRecordEvent, service_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "host",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__BosdynRecordEvent, host),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "event",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__BosdynRecordEvent, event),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "event_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__BosdynRecordEvent, event_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "succeed_early",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__BosdynRecordEvent, succeed_early),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "additional_parameters",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__BosdynRecordEvent, additional_parameters),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__BosdynRecordEvent__rosidl_typesupport_introspection_c__size_function__BosdynRecordEvent__additional_parameters,  // size() function pointer
    bosdyn_msgs__msg__BosdynRecordEvent__rosidl_typesupport_introspection_c__get_const_function__BosdynRecordEvent__additional_parameters,  // get_const(index) function pointer
    bosdyn_msgs__msg__BosdynRecordEvent__rosidl_typesupport_introspection_c__get_function__BosdynRecordEvent__additional_parameters,  // get(index) function pointer
    bosdyn_msgs__msg__BosdynRecordEvent__rosidl_typesupport_introspection_c__fetch_function__BosdynRecordEvent__additional_parameters,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__BosdynRecordEvent__rosidl_typesupport_introspection_c__assign_function__BosdynRecordEvent__additional_parameters,  // assign(index, value) function pointer
    bosdyn_msgs__msg__BosdynRecordEvent__rosidl_typesupport_introspection_c__resize_function__BosdynRecordEvent__additional_parameters  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__BosdynRecordEvent__rosidl_typesupport_introspection_c__BosdynRecordEvent_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "BosdynRecordEvent",  // message name
  6,  // number of fields
  sizeof(bosdyn_msgs__msg__BosdynRecordEvent),
  bosdyn_msgs__msg__BosdynRecordEvent__rosidl_typesupport_introspection_c__BosdynRecordEvent_message_member_array,  // message members
  bosdyn_msgs__msg__BosdynRecordEvent__rosidl_typesupport_introspection_c__BosdynRecordEvent_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__BosdynRecordEvent__rosidl_typesupport_introspection_c__BosdynRecordEvent_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__BosdynRecordEvent__rosidl_typesupport_introspection_c__BosdynRecordEvent_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__BosdynRecordEvent__rosidl_typesupport_introspection_c__BosdynRecordEvent_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, BosdynRecordEvent)() {
  bosdyn_msgs__msg__BosdynRecordEvent__rosidl_typesupport_introspection_c__BosdynRecordEvent_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, Event)();
  bosdyn_msgs__msg__BosdynRecordEvent__rosidl_typesupport_introspection_c__BosdynRecordEvent_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, KeyStringValueBosdynMsgsValue)();
  if (!bosdyn_msgs__msg__BosdynRecordEvent__rosidl_typesupport_introspection_c__BosdynRecordEvent_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__BosdynRecordEvent__rosidl_typesupport_introspection_c__BosdynRecordEvent_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__BosdynRecordEvent__rosidl_typesupport_introspection_c__BosdynRecordEvent_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
