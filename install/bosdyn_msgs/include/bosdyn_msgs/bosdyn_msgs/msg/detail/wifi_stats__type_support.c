// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/WifiStats.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/wifi_stats__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/wifi_stats__functions.h"
#include "bosdyn_msgs/msg/detail/wifi_stats__struct.h"


// Include directives for member types
// Member `hostname`
#include "rosidl_runtime_c/string_functions.h"
// Member `devices`
#include "bosdyn_msgs/msg/wifi_device.h"
// Member `devices`
#include "bosdyn_msgs/msg/detail/wifi_device__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__WifiStats__rosidl_typesupport_introspection_c__WifiStats_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__WifiStats__init(message_memory);
}

void bosdyn_msgs__msg__WifiStats__rosidl_typesupport_introspection_c__WifiStats_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__WifiStats__fini(message_memory);
}

size_t bosdyn_msgs__msg__WifiStats__rosidl_typesupport_introspection_c__size_function__WifiStats__devices(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__WifiDevice__Sequence * member =
    (const bosdyn_msgs__msg__WifiDevice__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__WifiStats__rosidl_typesupport_introspection_c__get_const_function__WifiStats__devices(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__WifiDevice__Sequence * member =
    (const bosdyn_msgs__msg__WifiDevice__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__WifiStats__rosidl_typesupport_introspection_c__get_function__WifiStats__devices(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__WifiDevice__Sequence * member =
    (bosdyn_msgs__msg__WifiDevice__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__WifiStats__rosidl_typesupport_introspection_c__fetch_function__WifiStats__devices(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__WifiDevice * item =
    ((const bosdyn_msgs__msg__WifiDevice *)
    bosdyn_msgs__msg__WifiStats__rosidl_typesupport_introspection_c__get_const_function__WifiStats__devices(untyped_member, index));
  bosdyn_msgs__msg__WifiDevice * value =
    (bosdyn_msgs__msg__WifiDevice *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__WifiStats__rosidl_typesupport_introspection_c__assign_function__WifiStats__devices(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__WifiDevice * item =
    ((bosdyn_msgs__msg__WifiDevice *)
    bosdyn_msgs__msg__WifiStats__rosidl_typesupport_introspection_c__get_function__WifiStats__devices(untyped_member, index));
  const bosdyn_msgs__msg__WifiDevice * value =
    (const bosdyn_msgs__msg__WifiDevice *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__WifiStats__rosidl_typesupport_introspection_c__resize_function__WifiStats__devices(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__WifiDevice__Sequence * member =
    (bosdyn_msgs__msg__WifiDevice__Sequence *)(untyped_member);
  bosdyn_msgs__msg__WifiDevice__Sequence__fini(member);
  return bosdyn_msgs__msg__WifiDevice__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__WifiStats__rosidl_typesupport_introspection_c__WifiStats_message_member_array[2] = {
  {
    "hostname",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__WifiStats, hostname),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "devices",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__WifiStats, devices),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__WifiStats__rosidl_typesupport_introspection_c__size_function__WifiStats__devices,  // size() function pointer
    bosdyn_msgs__msg__WifiStats__rosidl_typesupport_introspection_c__get_const_function__WifiStats__devices,  // get_const(index) function pointer
    bosdyn_msgs__msg__WifiStats__rosidl_typesupport_introspection_c__get_function__WifiStats__devices,  // get(index) function pointer
    bosdyn_msgs__msg__WifiStats__rosidl_typesupport_introspection_c__fetch_function__WifiStats__devices,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__WifiStats__rosidl_typesupport_introspection_c__assign_function__WifiStats__devices,  // assign(index, value) function pointer
    bosdyn_msgs__msg__WifiStats__rosidl_typesupport_introspection_c__resize_function__WifiStats__devices  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__WifiStats__rosidl_typesupport_introspection_c__WifiStats_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "WifiStats",  // message name
  2,  // number of fields
  sizeof(bosdyn_msgs__msg__WifiStats),
  bosdyn_msgs__msg__WifiStats__rosidl_typesupport_introspection_c__WifiStats_message_member_array,  // message members
  bosdyn_msgs__msg__WifiStats__rosidl_typesupport_introspection_c__WifiStats_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__WifiStats__rosidl_typesupport_introspection_c__WifiStats_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__WifiStats__rosidl_typesupport_introspection_c__WifiStats_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__WifiStats__rosidl_typesupport_introspection_c__WifiStats_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, WifiStats)() {
  bosdyn_msgs__msg__WifiStats__rosidl_typesupport_introspection_c__WifiStats_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, WifiDevice)();
  if (!bosdyn_msgs__msg__WifiStats__rosidl_typesupport_introspection_c__WifiStats_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__WifiStats__rosidl_typesupport_introspection_c__WifiStats_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__WifiStats__rosidl_typesupport_introspection_c__WifiStats_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
