// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/WifiDevice.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/wifi_device__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/wifi_device__functions.h"
#include "bosdyn_msgs/msg/detail/wifi_device__struct.h"


// Include directives for member types
// Member `type`
#include "bosdyn_msgs/msg/wifi_device_type.h"
// Member `type`
#include "bosdyn_msgs/msg/detail/wifi_device_type__rosidl_typesupport_introspection_c.h"
// Member `name`
// Member `mac_address`
// Member `ssid`
#include "rosidl_runtime_c/string_functions.h"
// Member `associations`
#include "bosdyn_msgs/msg/association.h"
// Member `associations`
#include "bosdyn_msgs/msg/detail/association__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__WifiDevice__rosidl_typesupport_introspection_c__WifiDevice_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__WifiDevice__init(message_memory);
}

void bosdyn_msgs__msg__WifiDevice__rosidl_typesupport_introspection_c__WifiDevice_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__WifiDevice__fini(message_memory);
}

size_t bosdyn_msgs__msg__WifiDevice__rosidl_typesupport_introspection_c__size_function__WifiDevice__associations(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__Association__Sequence * member =
    (const bosdyn_msgs__msg__Association__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__WifiDevice__rosidl_typesupport_introspection_c__get_const_function__WifiDevice__associations(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__Association__Sequence * member =
    (const bosdyn_msgs__msg__Association__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__WifiDevice__rosidl_typesupport_introspection_c__get_function__WifiDevice__associations(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__Association__Sequence * member =
    (bosdyn_msgs__msg__Association__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__WifiDevice__rosidl_typesupport_introspection_c__fetch_function__WifiDevice__associations(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__Association * item =
    ((const bosdyn_msgs__msg__Association *)
    bosdyn_msgs__msg__WifiDevice__rosidl_typesupport_introspection_c__get_const_function__WifiDevice__associations(untyped_member, index));
  bosdyn_msgs__msg__Association * value =
    (bosdyn_msgs__msg__Association *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__WifiDevice__rosidl_typesupport_introspection_c__assign_function__WifiDevice__associations(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__Association * item =
    ((bosdyn_msgs__msg__Association *)
    bosdyn_msgs__msg__WifiDevice__rosidl_typesupport_introspection_c__get_function__WifiDevice__associations(untyped_member, index));
  const bosdyn_msgs__msg__Association * value =
    (const bosdyn_msgs__msg__Association *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__WifiDevice__rosidl_typesupport_introspection_c__resize_function__WifiDevice__associations(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__Association__Sequence * member =
    (bosdyn_msgs__msg__Association__Sequence *)(untyped_member);
  bosdyn_msgs__msg__Association__Sequence__fini(member);
  return bosdyn_msgs__msg__Association__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__WifiDevice__rosidl_typesupport_introspection_c__WifiDevice_message_member_array[6] = {
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__WifiDevice, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__WifiDevice, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mac_address",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__WifiDevice, mac_address),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ssid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__WifiDevice, ssid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tx_power_dbm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__WifiDevice, tx_power_dbm),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "associations",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__WifiDevice, associations),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__WifiDevice__rosidl_typesupport_introspection_c__size_function__WifiDevice__associations,  // size() function pointer
    bosdyn_msgs__msg__WifiDevice__rosidl_typesupport_introspection_c__get_const_function__WifiDevice__associations,  // get_const(index) function pointer
    bosdyn_msgs__msg__WifiDevice__rosidl_typesupport_introspection_c__get_function__WifiDevice__associations,  // get(index) function pointer
    bosdyn_msgs__msg__WifiDevice__rosidl_typesupport_introspection_c__fetch_function__WifiDevice__associations,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__WifiDevice__rosidl_typesupport_introspection_c__assign_function__WifiDevice__associations,  // assign(index, value) function pointer
    bosdyn_msgs__msg__WifiDevice__rosidl_typesupport_introspection_c__resize_function__WifiDevice__associations  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__WifiDevice__rosidl_typesupport_introspection_c__WifiDevice_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "WifiDevice",  // message name
  6,  // number of fields
  sizeof(bosdyn_msgs__msg__WifiDevice),
  bosdyn_msgs__msg__WifiDevice__rosidl_typesupport_introspection_c__WifiDevice_message_member_array,  // message members
  bosdyn_msgs__msg__WifiDevice__rosidl_typesupport_introspection_c__WifiDevice_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__WifiDevice__rosidl_typesupport_introspection_c__WifiDevice_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__WifiDevice__rosidl_typesupport_introspection_c__WifiDevice_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__WifiDevice__rosidl_typesupport_introspection_c__WifiDevice_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, WifiDevice)() {
  bosdyn_msgs__msg__WifiDevice__rosidl_typesupport_introspection_c__WifiDevice_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, WifiDeviceType)();
  bosdyn_msgs__msg__WifiDevice__rosidl_typesupport_introspection_c__WifiDevice_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, Association)();
  if (!bosdyn_msgs__msg__WifiDevice__rosidl_typesupport_introspection_c__WifiDevice_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__WifiDevice__rosidl_typesupport_introspection_c__WifiDevice_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__WifiDevice__rosidl_typesupport_introspection_c__WifiDevice_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
