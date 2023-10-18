// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/SetEstopConfigResponse.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/set_estop_config_response__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/set_estop_config_response__functions.h"
#include "bosdyn_msgs/msg/detail/set_estop_config_response__struct.h"


// Include directives for member types
// Member `header`
#include "bosdyn_msgs/msg/response_header.h"
// Member `header`
#include "bosdyn_msgs/msg/detail/response_header__rosidl_typesupport_introspection_c.h"
// Member `request`
#include "bosdyn_msgs/msg/set_estop_config_request.h"
// Member `request`
#include "bosdyn_msgs/msg/detail/set_estop_config_request__rosidl_typesupport_introspection_c.h"
// Member `active_config`
#include "bosdyn_msgs/msg/estop_config.h"
// Member `active_config`
#include "bosdyn_msgs/msg/detail/estop_config__rosidl_typesupport_introspection_c.h"
// Member `status`
#include "bosdyn_msgs/msg/set_estop_config_response_status.h"
// Member `status`
#include "bosdyn_msgs/msg/detail/set_estop_config_response_status__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__SetEstopConfigResponse__rosidl_typesupport_introspection_c__SetEstopConfigResponse_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__SetEstopConfigResponse__init(message_memory);
}

void bosdyn_msgs__msg__SetEstopConfigResponse__rosidl_typesupport_introspection_c__SetEstopConfigResponse_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__SetEstopConfigResponse__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__SetEstopConfigResponse__rosidl_typesupport_introspection_c__SetEstopConfigResponse_message_member_array[7] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__SetEstopConfigResponse, header),  // bytes offset in struct
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
    offsetof(bosdyn_msgs__msg__SetEstopConfigResponse, header_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__SetEstopConfigResponse, request),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__SetEstopConfigResponse, request_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "active_config",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__SetEstopConfigResponse, active_config),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "active_config_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__SetEstopConfigResponse, active_config_is_set),  // bytes offset in struct
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
    offsetof(bosdyn_msgs__msg__SetEstopConfigResponse, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__SetEstopConfigResponse__rosidl_typesupport_introspection_c__SetEstopConfigResponse_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "SetEstopConfigResponse",  // message name
  7,  // number of fields
  sizeof(bosdyn_msgs__msg__SetEstopConfigResponse),
  bosdyn_msgs__msg__SetEstopConfigResponse__rosidl_typesupport_introspection_c__SetEstopConfigResponse_message_member_array,  // message members
  bosdyn_msgs__msg__SetEstopConfigResponse__rosidl_typesupport_introspection_c__SetEstopConfigResponse_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__SetEstopConfigResponse__rosidl_typesupport_introspection_c__SetEstopConfigResponse_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__SetEstopConfigResponse__rosidl_typesupport_introspection_c__SetEstopConfigResponse_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__SetEstopConfigResponse__rosidl_typesupport_introspection_c__SetEstopConfigResponse_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, SetEstopConfigResponse)() {
  bosdyn_msgs__msg__SetEstopConfigResponse__rosidl_typesupport_introspection_c__SetEstopConfigResponse_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ResponseHeader)();
  bosdyn_msgs__msg__SetEstopConfigResponse__rosidl_typesupport_introspection_c__SetEstopConfigResponse_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, SetEstopConfigRequest)();
  bosdyn_msgs__msg__SetEstopConfigResponse__rosidl_typesupport_introspection_c__SetEstopConfigResponse_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, EstopConfig)();
  bosdyn_msgs__msg__SetEstopConfigResponse__rosidl_typesupport_introspection_c__SetEstopConfigResponse_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, SetEstopConfigResponseStatus)();
  if (!bosdyn_msgs__msg__SetEstopConfigResponse__rosidl_typesupport_introspection_c__SetEstopConfigResponse_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__SetEstopConfigResponse__rosidl_typesupport_introspection_c__SetEstopConfigResponse_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__SetEstopConfigResponse__rosidl_typesupport_introspection_c__SetEstopConfigResponse_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
