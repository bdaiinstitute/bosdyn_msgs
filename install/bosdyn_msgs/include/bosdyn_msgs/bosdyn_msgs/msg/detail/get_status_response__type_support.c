// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/GetStatusResponse.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/get_status_response__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/get_status_response__functions.h"
#include "bosdyn_msgs/msg/detail/get_status_response__struct.h"


// Include directives for member types
// Member `header`
#include "bosdyn_msgs/msg/response_header.h"
// Member `header`
#include "bosdyn_msgs/msg/detail/response_header__rosidl_typesupport_introspection_c.h"
// Member `status`
#include "bosdyn_msgs/msg/get_status_response_status.h"
// Member `status`
#include "bosdyn_msgs/msg/detail/get_status_response_status__rosidl_typesupport_introspection_c.h"
// Member `data_saved`
#include "bosdyn_msgs/msg/data_identifier.h"
// Member `data_saved`
#include "bosdyn_msgs/msg/detail/data_identifier__rosidl_typesupport_introspection_c.h"
// Member `data_errors`
#include "bosdyn_msgs/msg/data_error.h"
// Member `data_errors`
#include "bosdyn_msgs/msg/detail/data_error__rosidl_typesupport_introspection_c.h"
// Member `service_errors`
#include "bosdyn_msgs/msg/plugin_service_error.h"
// Member `service_errors`
#include "bosdyn_msgs/msg/detail/plugin_service_error__rosidl_typesupport_introspection_c.h"
// Member `network_compute_errors`
#include "bosdyn_msgs/msg/network_compute_error.h"
// Member `network_compute_errors`
#include "bosdyn_msgs/msg/detail/network_compute_error__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__GetStatusResponse_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__GetStatusResponse__init(message_memory);
}

void bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__GetStatusResponse_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__GetStatusResponse__fini(message_memory);
}

size_t bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__size_function__GetStatusResponse__data_saved(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__DataIdentifier__Sequence * member =
    (const bosdyn_msgs__msg__DataIdentifier__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__get_const_function__GetStatusResponse__data_saved(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__DataIdentifier__Sequence * member =
    (const bosdyn_msgs__msg__DataIdentifier__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__get_function__GetStatusResponse__data_saved(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__DataIdentifier__Sequence * member =
    (bosdyn_msgs__msg__DataIdentifier__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__fetch_function__GetStatusResponse__data_saved(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__DataIdentifier * item =
    ((const bosdyn_msgs__msg__DataIdentifier *)
    bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__get_const_function__GetStatusResponse__data_saved(untyped_member, index));
  bosdyn_msgs__msg__DataIdentifier * value =
    (bosdyn_msgs__msg__DataIdentifier *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__assign_function__GetStatusResponse__data_saved(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__DataIdentifier * item =
    ((bosdyn_msgs__msg__DataIdentifier *)
    bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__get_function__GetStatusResponse__data_saved(untyped_member, index));
  const bosdyn_msgs__msg__DataIdentifier * value =
    (const bosdyn_msgs__msg__DataIdentifier *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__resize_function__GetStatusResponse__data_saved(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__DataIdentifier__Sequence * member =
    (bosdyn_msgs__msg__DataIdentifier__Sequence *)(untyped_member);
  bosdyn_msgs__msg__DataIdentifier__Sequence__fini(member);
  return bosdyn_msgs__msg__DataIdentifier__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__size_function__GetStatusResponse__data_errors(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__DataError__Sequence * member =
    (const bosdyn_msgs__msg__DataError__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__get_const_function__GetStatusResponse__data_errors(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__DataError__Sequence * member =
    (const bosdyn_msgs__msg__DataError__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__get_function__GetStatusResponse__data_errors(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__DataError__Sequence * member =
    (bosdyn_msgs__msg__DataError__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__fetch_function__GetStatusResponse__data_errors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__DataError * item =
    ((const bosdyn_msgs__msg__DataError *)
    bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__get_const_function__GetStatusResponse__data_errors(untyped_member, index));
  bosdyn_msgs__msg__DataError * value =
    (bosdyn_msgs__msg__DataError *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__assign_function__GetStatusResponse__data_errors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__DataError * item =
    ((bosdyn_msgs__msg__DataError *)
    bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__get_function__GetStatusResponse__data_errors(untyped_member, index));
  const bosdyn_msgs__msg__DataError * value =
    (const bosdyn_msgs__msg__DataError *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__resize_function__GetStatusResponse__data_errors(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__DataError__Sequence * member =
    (bosdyn_msgs__msg__DataError__Sequence *)(untyped_member);
  bosdyn_msgs__msg__DataError__Sequence__fini(member);
  return bosdyn_msgs__msg__DataError__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__size_function__GetStatusResponse__service_errors(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__PluginServiceError__Sequence * member =
    (const bosdyn_msgs__msg__PluginServiceError__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__get_const_function__GetStatusResponse__service_errors(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__PluginServiceError__Sequence * member =
    (const bosdyn_msgs__msg__PluginServiceError__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__get_function__GetStatusResponse__service_errors(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__PluginServiceError__Sequence * member =
    (bosdyn_msgs__msg__PluginServiceError__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__fetch_function__GetStatusResponse__service_errors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__PluginServiceError * item =
    ((const bosdyn_msgs__msg__PluginServiceError *)
    bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__get_const_function__GetStatusResponse__service_errors(untyped_member, index));
  bosdyn_msgs__msg__PluginServiceError * value =
    (bosdyn_msgs__msg__PluginServiceError *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__assign_function__GetStatusResponse__service_errors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__PluginServiceError * item =
    ((bosdyn_msgs__msg__PluginServiceError *)
    bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__get_function__GetStatusResponse__service_errors(untyped_member, index));
  const bosdyn_msgs__msg__PluginServiceError * value =
    (const bosdyn_msgs__msg__PluginServiceError *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__resize_function__GetStatusResponse__service_errors(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__PluginServiceError__Sequence * member =
    (bosdyn_msgs__msg__PluginServiceError__Sequence *)(untyped_member);
  bosdyn_msgs__msg__PluginServiceError__Sequence__fini(member);
  return bosdyn_msgs__msg__PluginServiceError__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__size_function__GetStatusResponse__network_compute_errors(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__NetworkComputeError__Sequence * member =
    (const bosdyn_msgs__msg__NetworkComputeError__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__get_const_function__GetStatusResponse__network_compute_errors(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__NetworkComputeError__Sequence * member =
    (const bosdyn_msgs__msg__NetworkComputeError__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__get_function__GetStatusResponse__network_compute_errors(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__NetworkComputeError__Sequence * member =
    (bosdyn_msgs__msg__NetworkComputeError__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__fetch_function__GetStatusResponse__network_compute_errors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__NetworkComputeError * item =
    ((const bosdyn_msgs__msg__NetworkComputeError *)
    bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__get_const_function__GetStatusResponse__network_compute_errors(untyped_member, index));
  bosdyn_msgs__msg__NetworkComputeError * value =
    (bosdyn_msgs__msg__NetworkComputeError *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__assign_function__GetStatusResponse__network_compute_errors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__NetworkComputeError * item =
    ((bosdyn_msgs__msg__NetworkComputeError *)
    bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__get_function__GetStatusResponse__network_compute_errors(untyped_member, index));
  const bosdyn_msgs__msg__NetworkComputeError * value =
    (const bosdyn_msgs__msg__NetworkComputeError *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__resize_function__GetStatusResponse__network_compute_errors(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__NetworkComputeError__Sequence * member =
    (bosdyn_msgs__msg__NetworkComputeError__Sequence *)(untyped_member);
  bosdyn_msgs__msg__NetworkComputeError__Sequence__fini(member);
  return bosdyn_msgs__msg__NetworkComputeError__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__GetStatusResponse_message_member_array[7] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__GetStatusResponse, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "header_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__GetStatusResponse, header_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__GetStatusResponse, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data_saved",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__GetStatusResponse, data_saved),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__size_function__GetStatusResponse__data_saved,  // size() function pointer
    bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__get_const_function__GetStatusResponse__data_saved,  // get_const(index) function pointer
    bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__get_function__GetStatusResponse__data_saved,  // get(index) function pointer
    bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__fetch_function__GetStatusResponse__data_saved,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__assign_function__GetStatusResponse__data_saved,  // assign(index, value) function pointer
    bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__resize_function__GetStatusResponse__data_saved  // resize(index) function pointer
  },
  {
    "data_errors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__GetStatusResponse, data_errors),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__size_function__GetStatusResponse__data_errors,  // size() function pointer
    bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__get_const_function__GetStatusResponse__data_errors,  // get_const(index) function pointer
    bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__get_function__GetStatusResponse__data_errors,  // get(index) function pointer
    bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__fetch_function__GetStatusResponse__data_errors,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__assign_function__GetStatusResponse__data_errors,  // assign(index, value) function pointer
    bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__resize_function__GetStatusResponse__data_errors  // resize(index) function pointer
  },
  {
    "service_errors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__GetStatusResponse, service_errors),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__size_function__GetStatusResponse__service_errors,  // size() function pointer
    bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__get_const_function__GetStatusResponse__service_errors,  // get_const(index) function pointer
    bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__get_function__GetStatusResponse__service_errors,  // get(index) function pointer
    bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__fetch_function__GetStatusResponse__service_errors,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__assign_function__GetStatusResponse__service_errors,  // assign(index, value) function pointer
    bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__resize_function__GetStatusResponse__service_errors  // resize(index) function pointer
  },
  {
    "network_compute_errors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__GetStatusResponse, network_compute_errors),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__size_function__GetStatusResponse__network_compute_errors,  // size() function pointer
    bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__get_const_function__GetStatusResponse__network_compute_errors,  // get_const(index) function pointer
    bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__get_function__GetStatusResponse__network_compute_errors,  // get(index) function pointer
    bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__fetch_function__GetStatusResponse__network_compute_errors,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__assign_function__GetStatusResponse__network_compute_errors,  // assign(index, value) function pointer
    bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__resize_function__GetStatusResponse__network_compute_errors  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__GetStatusResponse_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "GetStatusResponse",  // message name
  7,  // number of fields
  sizeof(bosdyn_msgs__msg__GetStatusResponse),
  bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__GetStatusResponse_message_member_array,  // message members
  bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__GetStatusResponse_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__GetStatusResponse_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__GetStatusResponse_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__GetStatusResponse_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, GetStatusResponse)() {
  bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__GetStatusResponse_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ResponseHeader)();
  bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__GetStatusResponse_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, GetStatusResponseStatus)();
  bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__GetStatusResponse_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, DataIdentifier)();
  bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__GetStatusResponse_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, DataError)();
  bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__GetStatusResponse_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, PluginServiceError)();
  bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__GetStatusResponse_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, NetworkComputeError)();
  if (!bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__GetStatusResponse_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__GetStatusResponse_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__GetStatusResponse__rosidl_typesupport_introspection_c__GetStatusResponse_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
