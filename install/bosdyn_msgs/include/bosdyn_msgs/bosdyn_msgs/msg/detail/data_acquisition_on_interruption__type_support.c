// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/DataAcquisitionOnInterruption.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/data_acquisition_on_interruption__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/data_acquisition_on_interruption__functions.h"
#include "bosdyn_msgs/msg/detail/data_acquisition_on_interruption__struct.h"


// Include directives for member types
// Member `child`
#include "bosdyn_msgs/msg/node.h"
// Member `child`
#include "bosdyn_msgs/msg/detail/node__rosidl_typesupport_introspection_c.h"
// Member `request_when_interrupted`
#include "bosdyn_msgs/msg/data_acquisition.h"
// Member `request_when_interrupted`
#include "bosdyn_msgs/msg/detail/data_acquisition__rosidl_typesupport_introspection_c.h"
// Member `pause_mission_metadata`
// Member `restart_mission_metadata`
// Member `load_mission_metadata`
// Member `stop_mission_metadata`
// Member `lease_use_error_metadata`
// Member `play_mission_timeout_metadata`
// Member `child_node_error_metadata`
// Member `child_node_exception_metadata`
// Member `default_metadata`
#include "bosdyn_msgs/msg/metadata.h"
// Member `pause_mission_metadata`
// Member `restart_mission_metadata`
// Member `load_mission_metadata`
// Member `stop_mission_metadata`
// Member `lease_use_error_metadata`
// Member `play_mission_timeout_metadata`
// Member `child_node_error_metadata`
// Member `child_node_exception_metadata`
// Member `default_metadata`
#include "bosdyn_msgs/msg/detail/metadata__rosidl_typesupport_introspection_c.h"
// Member `keys_for_lease_use_error_message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__DataAcquisitionOnInterruption__rosidl_typesupport_introspection_c__DataAcquisitionOnInterruption_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__DataAcquisitionOnInterruption__init(message_memory);
}

void bosdyn_msgs__msg__DataAcquisitionOnInterruption__rosidl_typesupport_introspection_c__DataAcquisitionOnInterruption_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__DataAcquisitionOnInterruption__fini(message_memory);
}

size_t bosdyn_msgs__msg__DataAcquisitionOnInterruption__rosidl_typesupport_introspection_c__size_function__DataAcquisitionOnInterruption__keys_for_lease_use_error_message(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__DataAcquisitionOnInterruption__rosidl_typesupport_introspection_c__get_const_function__DataAcquisitionOnInterruption__keys_for_lease_use_error_message(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__DataAcquisitionOnInterruption__rosidl_typesupport_introspection_c__get_function__DataAcquisitionOnInterruption__keys_for_lease_use_error_message(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__DataAcquisitionOnInterruption__rosidl_typesupport_introspection_c__fetch_function__DataAcquisitionOnInterruption__keys_for_lease_use_error_message(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    bosdyn_msgs__msg__DataAcquisitionOnInterruption__rosidl_typesupport_introspection_c__get_const_function__DataAcquisitionOnInterruption__keys_for_lease_use_error_message(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__DataAcquisitionOnInterruption__rosidl_typesupport_introspection_c__assign_function__DataAcquisitionOnInterruption__keys_for_lease_use_error_message(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    bosdyn_msgs__msg__DataAcquisitionOnInterruption__rosidl_typesupport_introspection_c__get_function__DataAcquisitionOnInterruption__keys_for_lease_use_error_message(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__DataAcquisitionOnInterruption__rosidl_typesupport_introspection_c__resize_function__DataAcquisitionOnInterruption__keys_for_lease_use_error_message(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__DataAcquisitionOnInterruption__rosidl_typesupport_introspection_c__DataAcquisitionOnInterruption_message_member_array[23] = {
  {
    "child",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__DataAcquisitionOnInterruption, child),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "child_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__DataAcquisitionOnInterruption, child_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request_when_interrupted",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__DataAcquisitionOnInterruption, request_when_interrupted),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request_when_interrupted_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__DataAcquisitionOnInterruption, request_when_interrupted_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pause_mission_metadata",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__DataAcquisitionOnInterruption, pause_mission_metadata),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pause_mission_metadata_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__DataAcquisitionOnInterruption, pause_mission_metadata_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "restart_mission_metadata",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__DataAcquisitionOnInterruption, restart_mission_metadata),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "restart_mission_metadata_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__DataAcquisitionOnInterruption, restart_mission_metadata_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "load_mission_metadata",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__DataAcquisitionOnInterruption, load_mission_metadata),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "load_mission_metadata_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__DataAcquisitionOnInterruption, load_mission_metadata_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stop_mission_metadata",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__DataAcquisitionOnInterruption, stop_mission_metadata),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stop_mission_metadata_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__DataAcquisitionOnInterruption, stop_mission_metadata_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lease_use_error_metadata",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__DataAcquisitionOnInterruption, lease_use_error_metadata),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lease_use_error_metadata_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__DataAcquisitionOnInterruption, lease_use_error_metadata_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "play_mission_timeout_metadata",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__DataAcquisitionOnInterruption, play_mission_timeout_metadata),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "play_mission_timeout_metadata_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__DataAcquisitionOnInterruption, play_mission_timeout_metadata_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "child_node_error_metadata",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__DataAcquisitionOnInterruption, child_node_error_metadata),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "child_node_error_metadata_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__DataAcquisitionOnInterruption, child_node_error_metadata_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "child_node_exception_metadata",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__DataAcquisitionOnInterruption, child_node_exception_metadata),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "child_node_exception_metadata_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__DataAcquisitionOnInterruption, child_node_exception_metadata_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "default_metadata",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__DataAcquisitionOnInterruption, default_metadata),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "default_metadata_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__DataAcquisitionOnInterruption, default_metadata_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "keys_for_lease_use_error_message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__DataAcquisitionOnInterruption, keys_for_lease_use_error_message),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__DataAcquisitionOnInterruption__rosidl_typesupport_introspection_c__size_function__DataAcquisitionOnInterruption__keys_for_lease_use_error_message,  // size() function pointer
    bosdyn_msgs__msg__DataAcquisitionOnInterruption__rosidl_typesupport_introspection_c__get_const_function__DataAcquisitionOnInterruption__keys_for_lease_use_error_message,  // get_const(index) function pointer
    bosdyn_msgs__msg__DataAcquisitionOnInterruption__rosidl_typesupport_introspection_c__get_function__DataAcquisitionOnInterruption__keys_for_lease_use_error_message,  // get(index) function pointer
    bosdyn_msgs__msg__DataAcquisitionOnInterruption__rosidl_typesupport_introspection_c__fetch_function__DataAcquisitionOnInterruption__keys_for_lease_use_error_message,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__DataAcquisitionOnInterruption__rosidl_typesupport_introspection_c__assign_function__DataAcquisitionOnInterruption__keys_for_lease_use_error_message,  // assign(index, value) function pointer
    bosdyn_msgs__msg__DataAcquisitionOnInterruption__rosidl_typesupport_introspection_c__resize_function__DataAcquisitionOnInterruption__keys_for_lease_use_error_message  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__DataAcquisitionOnInterruption__rosidl_typesupport_introspection_c__DataAcquisitionOnInterruption_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "DataAcquisitionOnInterruption",  // message name
  23,  // number of fields
  sizeof(bosdyn_msgs__msg__DataAcquisitionOnInterruption),
  bosdyn_msgs__msg__DataAcquisitionOnInterruption__rosidl_typesupport_introspection_c__DataAcquisitionOnInterruption_message_member_array,  // message members
  bosdyn_msgs__msg__DataAcquisitionOnInterruption__rosidl_typesupport_introspection_c__DataAcquisitionOnInterruption_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__DataAcquisitionOnInterruption__rosidl_typesupport_introspection_c__DataAcquisitionOnInterruption_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__DataAcquisitionOnInterruption__rosidl_typesupport_introspection_c__DataAcquisitionOnInterruption_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__DataAcquisitionOnInterruption__rosidl_typesupport_introspection_c__DataAcquisitionOnInterruption_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, DataAcquisitionOnInterruption)() {
  bosdyn_msgs__msg__DataAcquisitionOnInterruption__rosidl_typesupport_introspection_c__DataAcquisitionOnInterruption_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, Node)();
  bosdyn_msgs__msg__DataAcquisitionOnInterruption__rosidl_typesupport_introspection_c__DataAcquisitionOnInterruption_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, DataAcquisition)();
  bosdyn_msgs__msg__DataAcquisitionOnInterruption__rosidl_typesupport_introspection_c__DataAcquisitionOnInterruption_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, Metadata)();
  bosdyn_msgs__msg__DataAcquisitionOnInterruption__rosidl_typesupport_introspection_c__DataAcquisitionOnInterruption_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, Metadata)();
  bosdyn_msgs__msg__DataAcquisitionOnInterruption__rosidl_typesupport_introspection_c__DataAcquisitionOnInterruption_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, Metadata)();
  bosdyn_msgs__msg__DataAcquisitionOnInterruption__rosidl_typesupport_introspection_c__DataAcquisitionOnInterruption_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, Metadata)();
  bosdyn_msgs__msg__DataAcquisitionOnInterruption__rosidl_typesupport_introspection_c__DataAcquisitionOnInterruption_message_member_array[12].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, Metadata)();
  bosdyn_msgs__msg__DataAcquisitionOnInterruption__rosidl_typesupport_introspection_c__DataAcquisitionOnInterruption_message_member_array[14].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, Metadata)();
  bosdyn_msgs__msg__DataAcquisitionOnInterruption__rosidl_typesupport_introspection_c__DataAcquisitionOnInterruption_message_member_array[16].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, Metadata)();
  bosdyn_msgs__msg__DataAcquisitionOnInterruption__rosidl_typesupport_introspection_c__DataAcquisitionOnInterruption_message_member_array[18].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, Metadata)();
  bosdyn_msgs__msg__DataAcquisitionOnInterruption__rosidl_typesupport_introspection_c__DataAcquisitionOnInterruption_message_member_array[20].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, Metadata)();
  if (!bosdyn_msgs__msg__DataAcquisitionOnInterruption__rosidl_typesupport_introspection_c__DataAcquisitionOnInterruption_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__DataAcquisitionOnInterruption__rosidl_typesupport_introspection_c__DataAcquisitionOnInterruption_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__DataAcquisitionOnInterruption__rosidl_typesupport_introspection_c__DataAcquisitionOnInterruption_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
