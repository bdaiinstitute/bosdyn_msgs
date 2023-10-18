// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/SystemFaultState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/system_fault_state__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/system_fault_state__functions.h"
#include "bosdyn_msgs/msg/detail/system_fault_state__struct.h"


// Include directives for member types
// Member `faults`
// Member `historical_faults`
#include "bosdyn_msgs/msg/system_fault.h"
// Member `faults`
// Member `historical_faults`
#include "bosdyn_msgs/msg/detail/system_fault__rosidl_typesupport_introspection_c.h"
// Member `aggregated`
#include "bosdyn_msgs/msg/key_string_value_bosdyn_msgs_system_fault_severity.h"
// Member `aggregated`
#include "bosdyn_msgs/msg/detail/key_string_value_bosdyn_msgs_system_fault_severity__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__SystemFaultState__rosidl_typesupport_introspection_c__SystemFaultState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__SystemFaultState__init(message_memory);
}

void bosdyn_msgs__msg__SystemFaultState__rosidl_typesupport_introspection_c__SystemFaultState_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__SystemFaultState__fini(message_memory);
}

size_t bosdyn_msgs__msg__SystemFaultState__rosidl_typesupport_introspection_c__size_function__SystemFaultState__faults(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__SystemFault__Sequence * member =
    (const bosdyn_msgs__msg__SystemFault__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__SystemFaultState__rosidl_typesupport_introspection_c__get_const_function__SystemFaultState__faults(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__SystemFault__Sequence * member =
    (const bosdyn_msgs__msg__SystemFault__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__SystemFaultState__rosidl_typesupport_introspection_c__get_function__SystemFaultState__faults(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__SystemFault__Sequence * member =
    (bosdyn_msgs__msg__SystemFault__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__SystemFaultState__rosidl_typesupport_introspection_c__fetch_function__SystemFaultState__faults(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__SystemFault * item =
    ((const bosdyn_msgs__msg__SystemFault *)
    bosdyn_msgs__msg__SystemFaultState__rosidl_typesupport_introspection_c__get_const_function__SystemFaultState__faults(untyped_member, index));
  bosdyn_msgs__msg__SystemFault * value =
    (bosdyn_msgs__msg__SystemFault *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__SystemFaultState__rosidl_typesupport_introspection_c__assign_function__SystemFaultState__faults(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__SystemFault * item =
    ((bosdyn_msgs__msg__SystemFault *)
    bosdyn_msgs__msg__SystemFaultState__rosidl_typesupport_introspection_c__get_function__SystemFaultState__faults(untyped_member, index));
  const bosdyn_msgs__msg__SystemFault * value =
    (const bosdyn_msgs__msg__SystemFault *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__SystemFaultState__rosidl_typesupport_introspection_c__resize_function__SystemFaultState__faults(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__SystemFault__Sequence * member =
    (bosdyn_msgs__msg__SystemFault__Sequence *)(untyped_member);
  bosdyn_msgs__msg__SystemFault__Sequence__fini(member);
  return bosdyn_msgs__msg__SystemFault__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__SystemFaultState__rosidl_typesupport_introspection_c__size_function__SystemFaultState__historical_faults(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__SystemFault__Sequence * member =
    (const bosdyn_msgs__msg__SystemFault__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__SystemFaultState__rosidl_typesupport_introspection_c__get_const_function__SystemFaultState__historical_faults(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__SystemFault__Sequence * member =
    (const bosdyn_msgs__msg__SystemFault__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__SystemFaultState__rosidl_typesupport_introspection_c__get_function__SystemFaultState__historical_faults(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__SystemFault__Sequence * member =
    (bosdyn_msgs__msg__SystemFault__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__SystemFaultState__rosidl_typesupport_introspection_c__fetch_function__SystemFaultState__historical_faults(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__SystemFault * item =
    ((const bosdyn_msgs__msg__SystemFault *)
    bosdyn_msgs__msg__SystemFaultState__rosidl_typesupport_introspection_c__get_const_function__SystemFaultState__historical_faults(untyped_member, index));
  bosdyn_msgs__msg__SystemFault * value =
    (bosdyn_msgs__msg__SystemFault *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__SystemFaultState__rosidl_typesupport_introspection_c__assign_function__SystemFaultState__historical_faults(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__SystemFault * item =
    ((bosdyn_msgs__msg__SystemFault *)
    bosdyn_msgs__msg__SystemFaultState__rosidl_typesupport_introspection_c__get_function__SystemFaultState__historical_faults(untyped_member, index));
  const bosdyn_msgs__msg__SystemFault * value =
    (const bosdyn_msgs__msg__SystemFault *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__SystemFaultState__rosidl_typesupport_introspection_c__resize_function__SystemFaultState__historical_faults(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__SystemFault__Sequence * member =
    (bosdyn_msgs__msg__SystemFault__Sequence *)(untyped_member);
  bosdyn_msgs__msg__SystemFault__Sequence__fini(member);
  return bosdyn_msgs__msg__SystemFault__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__SystemFaultState__rosidl_typesupport_introspection_c__size_function__SystemFaultState__aggregated(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__KeyStringValueBosdynMsgsSystemFaultSeverity__Sequence * member =
    (const bosdyn_msgs__msg__KeyStringValueBosdynMsgsSystemFaultSeverity__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__SystemFaultState__rosidl_typesupport_introspection_c__get_const_function__SystemFaultState__aggregated(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__KeyStringValueBosdynMsgsSystemFaultSeverity__Sequence * member =
    (const bosdyn_msgs__msg__KeyStringValueBosdynMsgsSystemFaultSeverity__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__SystemFaultState__rosidl_typesupport_introspection_c__get_function__SystemFaultState__aggregated(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsSystemFaultSeverity__Sequence * member =
    (bosdyn_msgs__msg__KeyStringValueBosdynMsgsSystemFaultSeverity__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__SystemFaultState__rosidl_typesupport_introspection_c__fetch_function__SystemFaultState__aggregated(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__KeyStringValueBosdynMsgsSystemFaultSeverity * item =
    ((const bosdyn_msgs__msg__KeyStringValueBosdynMsgsSystemFaultSeverity *)
    bosdyn_msgs__msg__SystemFaultState__rosidl_typesupport_introspection_c__get_const_function__SystemFaultState__aggregated(untyped_member, index));
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsSystemFaultSeverity * value =
    (bosdyn_msgs__msg__KeyStringValueBosdynMsgsSystemFaultSeverity *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__SystemFaultState__rosidl_typesupport_introspection_c__assign_function__SystemFaultState__aggregated(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsSystemFaultSeverity * item =
    ((bosdyn_msgs__msg__KeyStringValueBosdynMsgsSystemFaultSeverity *)
    bosdyn_msgs__msg__SystemFaultState__rosidl_typesupport_introspection_c__get_function__SystemFaultState__aggregated(untyped_member, index));
  const bosdyn_msgs__msg__KeyStringValueBosdynMsgsSystemFaultSeverity * value =
    (const bosdyn_msgs__msg__KeyStringValueBosdynMsgsSystemFaultSeverity *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__SystemFaultState__rosidl_typesupport_introspection_c__resize_function__SystemFaultState__aggregated(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsSystemFaultSeverity__Sequence * member =
    (bosdyn_msgs__msg__KeyStringValueBosdynMsgsSystemFaultSeverity__Sequence *)(untyped_member);
  bosdyn_msgs__msg__KeyStringValueBosdynMsgsSystemFaultSeverity__Sequence__fini(member);
  return bosdyn_msgs__msg__KeyStringValueBosdynMsgsSystemFaultSeverity__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__SystemFaultState__rosidl_typesupport_introspection_c__SystemFaultState_message_member_array[3] = {
  {
    "faults",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__SystemFaultState, faults),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__SystemFaultState__rosidl_typesupport_introspection_c__size_function__SystemFaultState__faults,  // size() function pointer
    bosdyn_msgs__msg__SystemFaultState__rosidl_typesupport_introspection_c__get_const_function__SystemFaultState__faults,  // get_const(index) function pointer
    bosdyn_msgs__msg__SystemFaultState__rosidl_typesupport_introspection_c__get_function__SystemFaultState__faults,  // get(index) function pointer
    bosdyn_msgs__msg__SystemFaultState__rosidl_typesupport_introspection_c__fetch_function__SystemFaultState__faults,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__SystemFaultState__rosidl_typesupport_introspection_c__assign_function__SystemFaultState__faults,  // assign(index, value) function pointer
    bosdyn_msgs__msg__SystemFaultState__rosidl_typesupport_introspection_c__resize_function__SystemFaultState__faults  // resize(index) function pointer
  },
  {
    "historical_faults",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__SystemFaultState, historical_faults),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__SystemFaultState__rosidl_typesupport_introspection_c__size_function__SystemFaultState__historical_faults,  // size() function pointer
    bosdyn_msgs__msg__SystemFaultState__rosidl_typesupport_introspection_c__get_const_function__SystemFaultState__historical_faults,  // get_const(index) function pointer
    bosdyn_msgs__msg__SystemFaultState__rosidl_typesupport_introspection_c__get_function__SystemFaultState__historical_faults,  // get(index) function pointer
    bosdyn_msgs__msg__SystemFaultState__rosidl_typesupport_introspection_c__fetch_function__SystemFaultState__historical_faults,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__SystemFaultState__rosidl_typesupport_introspection_c__assign_function__SystemFaultState__historical_faults,  // assign(index, value) function pointer
    bosdyn_msgs__msg__SystemFaultState__rosidl_typesupport_introspection_c__resize_function__SystemFaultState__historical_faults  // resize(index) function pointer
  },
  {
    "aggregated",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__SystemFaultState, aggregated),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__SystemFaultState__rosidl_typesupport_introspection_c__size_function__SystemFaultState__aggregated,  // size() function pointer
    bosdyn_msgs__msg__SystemFaultState__rosidl_typesupport_introspection_c__get_const_function__SystemFaultState__aggregated,  // get_const(index) function pointer
    bosdyn_msgs__msg__SystemFaultState__rosidl_typesupport_introspection_c__get_function__SystemFaultState__aggregated,  // get(index) function pointer
    bosdyn_msgs__msg__SystemFaultState__rosidl_typesupport_introspection_c__fetch_function__SystemFaultState__aggregated,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__SystemFaultState__rosidl_typesupport_introspection_c__assign_function__SystemFaultState__aggregated,  // assign(index, value) function pointer
    bosdyn_msgs__msg__SystemFaultState__rosidl_typesupport_introspection_c__resize_function__SystemFaultState__aggregated  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__SystemFaultState__rosidl_typesupport_introspection_c__SystemFaultState_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "SystemFaultState",  // message name
  3,  // number of fields
  sizeof(bosdyn_msgs__msg__SystemFaultState),
  bosdyn_msgs__msg__SystemFaultState__rosidl_typesupport_introspection_c__SystemFaultState_message_member_array,  // message members
  bosdyn_msgs__msg__SystemFaultState__rosidl_typesupport_introspection_c__SystemFaultState_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__SystemFaultState__rosidl_typesupport_introspection_c__SystemFaultState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__SystemFaultState__rosidl_typesupport_introspection_c__SystemFaultState_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__SystemFaultState__rosidl_typesupport_introspection_c__SystemFaultState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, SystemFaultState)() {
  bosdyn_msgs__msg__SystemFaultState__rosidl_typesupport_introspection_c__SystemFaultState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, SystemFault)();
  bosdyn_msgs__msg__SystemFaultState__rosidl_typesupport_introspection_c__SystemFaultState_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, SystemFault)();
  bosdyn_msgs__msg__SystemFaultState__rosidl_typesupport_introspection_c__SystemFaultState_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, KeyStringValueBosdynMsgsSystemFaultSeverity)();
  if (!bosdyn_msgs__msg__SystemFaultState__rosidl_typesupport_introspection_c__SystemFaultState_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__SystemFaultState__rosidl_typesupport_introspection_c__SystemFaultState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__SystemFaultState__rosidl_typesupport_introspection_c__SystemFaultState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
