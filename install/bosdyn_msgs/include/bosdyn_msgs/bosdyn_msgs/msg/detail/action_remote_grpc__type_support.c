// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/ActionRemoteGrpc.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/action_remote_grpc__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/action_remote_grpc__functions.h"
#include "bosdyn_msgs/msg/detail/action_remote_grpc__struct.h"


// Include directives for member types
// Member `service_name`
// Member `lease_resources`
#include "rosidl_runtime_c/string_functions.h"
// Member `rpc_timeout`
#include "builtin_interfaces/msg/duration.h"
// Member `rpc_timeout`
#include "builtin_interfaces/msg/detail/duration__rosidl_typesupport_introspection_c.h"
// Member `parameters`
#include "bosdyn_msgs/msg/custom_param_collection.h"
// Member `parameters`
#include "bosdyn_msgs/msg/detail/custom_param_collection__rosidl_typesupport_introspection_c.h"
// Member `record_time_images`
#include "bosdyn_msgs/msg/image_capture_and_source.h"
// Member `record_time_images`
#include "bosdyn_msgs/msg/detail/image_capture_and_source__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__ActionRemoteGrpc__rosidl_typesupport_introspection_c__ActionRemoteGrpc_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__ActionRemoteGrpc__init(message_memory);
}

void bosdyn_msgs__msg__ActionRemoteGrpc__rosidl_typesupport_introspection_c__ActionRemoteGrpc_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__ActionRemoteGrpc__fini(message_memory);
}

size_t bosdyn_msgs__msg__ActionRemoteGrpc__rosidl_typesupport_introspection_c__size_function__ActionRemoteGrpc__lease_resources(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__ActionRemoteGrpc__rosidl_typesupport_introspection_c__get_const_function__ActionRemoteGrpc__lease_resources(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__ActionRemoteGrpc__rosidl_typesupport_introspection_c__get_function__ActionRemoteGrpc__lease_resources(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__ActionRemoteGrpc__rosidl_typesupport_introspection_c__fetch_function__ActionRemoteGrpc__lease_resources(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    bosdyn_msgs__msg__ActionRemoteGrpc__rosidl_typesupport_introspection_c__get_const_function__ActionRemoteGrpc__lease_resources(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__ActionRemoteGrpc__rosidl_typesupport_introspection_c__assign_function__ActionRemoteGrpc__lease_resources(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    bosdyn_msgs__msg__ActionRemoteGrpc__rosidl_typesupport_introspection_c__get_function__ActionRemoteGrpc__lease_resources(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__ActionRemoteGrpc__rosidl_typesupport_introspection_c__resize_function__ActionRemoteGrpc__lease_resources(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__ActionRemoteGrpc__rosidl_typesupport_introspection_c__size_function__ActionRemoteGrpc__record_time_images(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__ImageCaptureAndSource__Sequence * member =
    (const bosdyn_msgs__msg__ImageCaptureAndSource__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__ActionRemoteGrpc__rosidl_typesupport_introspection_c__get_const_function__ActionRemoteGrpc__record_time_images(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__ImageCaptureAndSource__Sequence * member =
    (const bosdyn_msgs__msg__ImageCaptureAndSource__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__ActionRemoteGrpc__rosidl_typesupport_introspection_c__get_function__ActionRemoteGrpc__record_time_images(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__ImageCaptureAndSource__Sequence * member =
    (bosdyn_msgs__msg__ImageCaptureAndSource__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__ActionRemoteGrpc__rosidl_typesupport_introspection_c__fetch_function__ActionRemoteGrpc__record_time_images(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__ImageCaptureAndSource * item =
    ((const bosdyn_msgs__msg__ImageCaptureAndSource *)
    bosdyn_msgs__msg__ActionRemoteGrpc__rosidl_typesupport_introspection_c__get_const_function__ActionRemoteGrpc__record_time_images(untyped_member, index));
  bosdyn_msgs__msg__ImageCaptureAndSource * value =
    (bosdyn_msgs__msg__ImageCaptureAndSource *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__ActionRemoteGrpc__rosidl_typesupport_introspection_c__assign_function__ActionRemoteGrpc__record_time_images(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__ImageCaptureAndSource * item =
    ((bosdyn_msgs__msg__ImageCaptureAndSource *)
    bosdyn_msgs__msg__ActionRemoteGrpc__rosidl_typesupport_introspection_c__get_function__ActionRemoteGrpc__record_time_images(untyped_member, index));
  const bosdyn_msgs__msg__ImageCaptureAndSource * value =
    (const bosdyn_msgs__msg__ImageCaptureAndSource *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__ActionRemoteGrpc__rosidl_typesupport_introspection_c__resize_function__ActionRemoteGrpc__record_time_images(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__ImageCaptureAndSource__Sequence * member =
    (bosdyn_msgs__msg__ImageCaptureAndSource__Sequence *)(untyped_member);
  bosdyn_msgs__msg__ImageCaptureAndSource__Sequence__fini(member);
  return bosdyn_msgs__msg__ImageCaptureAndSource__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__ActionRemoteGrpc__rosidl_typesupport_introspection_c__ActionRemoteGrpc_message_member_array[7] = {
  {
    "service_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ActionRemoteGrpc, service_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rpc_timeout",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ActionRemoteGrpc, rpc_timeout),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rpc_timeout_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ActionRemoteGrpc, rpc_timeout_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lease_resources",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ActionRemoteGrpc, lease_resources),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__ActionRemoteGrpc__rosidl_typesupport_introspection_c__size_function__ActionRemoteGrpc__lease_resources,  // size() function pointer
    bosdyn_msgs__msg__ActionRemoteGrpc__rosidl_typesupport_introspection_c__get_const_function__ActionRemoteGrpc__lease_resources,  // get_const(index) function pointer
    bosdyn_msgs__msg__ActionRemoteGrpc__rosidl_typesupport_introspection_c__get_function__ActionRemoteGrpc__lease_resources,  // get(index) function pointer
    bosdyn_msgs__msg__ActionRemoteGrpc__rosidl_typesupport_introspection_c__fetch_function__ActionRemoteGrpc__lease_resources,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__ActionRemoteGrpc__rosidl_typesupport_introspection_c__assign_function__ActionRemoteGrpc__lease_resources,  // assign(index, value) function pointer
    bosdyn_msgs__msg__ActionRemoteGrpc__rosidl_typesupport_introspection_c__resize_function__ActionRemoteGrpc__lease_resources  // resize(index) function pointer
  },
  {
    "parameters",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ActionRemoteGrpc, parameters),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "parameters_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ActionRemoteGrpc, parameters_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "record_time_images",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__ActionRemoteGrpc, record_time_images),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__ActionRemoteGrpc__rosidl_typesupport_introspection_c__size_function__ActionRemoteGrpc__record_time_images,  // size() function pointer
    bosdyn_msgs__msg__ActionRemoteGrpc__rosidl_typesupport_introspection_c__get_const_function__ActionRemoteGrpc__record_time_images,  // get_const(index) function pointer
    bosdyn_msgs__msg__ActionRemoteGrpc__rosidl_typesupport_introspection_c__get_function__ActionRemoteGrpc__record_time_images,  // get(index) function pointer
    bosdyn_msgs__msg__ActionRemoteGrpc__rosidl_typesupport_introspection_c__fetch_function__ActionRemoteGrpc__record_time_images,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__ActionRemoteGrpc__rosidl_typesupport_introspection_c__assign_function__ActionRemoteGrpc__record_time_images,  // assign(index, value) function pointer
    bosdyn_msgs__msg__ActionRemoteGrpc__rosidl_typesupport_introspection_c__resize_function__ActionRemoteGrpc__record_time_images  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__ActionRemoteGrpc__rosidl_typesupport_introspection_c__ActionRemoteGrpc_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "ActionRemoteGrpc",  // message name
  7,  // number of fields
  sizeof(bosdyn_msgs__msg__ActionRemoteGrpc),
  bosdyn_msgs__msg__ActionRemoteGrpc__rosidl_typesupport_introspection_c__ActionRemoteGrpc_message_member_array,  // message members
  bosdyn_msgs__msg__ActionRemoteGrpc__rosidl_typesupport_introspection_c__ActionRemoteGrpc_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__ActionRemoteGrpc__rosidl_typesupport_introspection_c__ActionRemoteGrpc_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__ActionRemoteGrpc__rosidl_typesupport_introspection_c__ActionRemoteGrpc_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__ActionRemoteGrpc__rosidl_typesupport_introspection_c__ActionRemoteGrpc_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ActionRemoteGrpc)() {
  bosdyn_msgs__msg__ActionRemoteGrpc__rosidl_typesupport_introspection_c__ActionRemoteGrpc_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  bosdyn_msgs__msg__ActionRemoteGrpc__rosidl_typesupport_introspection_c__ActionRemoteGrpc_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, CustomParamCollection)();
  bosdyn_msgs__msg__ActionRemoteGrpc__rosidl_typesupport_introspection_c__ActionRemoteGrpc_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ImageCaptureAndSource)();
  if (!bosdyn_msgs__msg__ActionRemoteGrpc__rosidl_typesupport_introspection_c__ActionRemoteGrpc_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__ActionRemoteGrpc__rosidl_typesupport_introspection_c__ActionRemoteGrpc_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__ActionRemoteGrpc__rosidl_typesupport_introspection_c__ActionRemoteGrpc_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
