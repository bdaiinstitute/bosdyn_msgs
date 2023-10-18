// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/AreaCallbackErrorOneOfResponseError.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/area_callback_error_one_of_response_error__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/area_callback_error_one_of_response_error__functions.h"
#include "bosdyn_msgs/msg/detail/area_callback_error_one_of_response_error__struct.h"


// Include directives for member types
// Member `begin_callback`
#include "bosdyn_msgs/msg/begin_callback_response.h"
// Member `begin_callback`
#include "bosdyn_msgs/msg/detail/begin_callback_response__rosidl_typesupport_introspection_c.h"
// Member `begin_control`
#include "bosdyn_msgs/msg/begin_control_response.h"
// Member `begin_control`
#include "bosdyn_msgs/msg/detail/begin_control_response__rosidl_typesupport_introspection_c.h"
// Member `update_callback`
#include "bosdyn_msgs/msg/update_callback_response.h"
// Member `update_callback`
#include "bosdyn_msgs/msg/detail/update_callback_response__rosidl_typesupport_introspection_c.h"
// Member `end_callback`
#include "bosdyn_msgs/msg/end_callback_response.h"
// Member `end_callback`
#include "bosdyn_msgs/msg/detail/end_callback_response__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError__rosidl_typesupport_introspection_c__AreaCallbackErrorOneOfResponseError_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError__init(message_memory);
}

void bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError__rosidl_typesupport_introspection_c__AreaCallbackErrorOneOfResponseError_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError__rosidl_typesupport_introspection_c__AreaCallbackErrorOneOfResponseError_message_member_array[5] = {
  {
    "begin_callback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError, begin_callback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "begin_control",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError, begin_control),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "update_callback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError, update_callback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "end_callback",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError, end_callback),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "response_error_choice",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError, response_error_choice),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError__rosidl_typesupport_introspection_c__AreaCallbackErrorOneOfResponseError_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "AreaCallbackErrorOneOfResponseError",  // message name
  5,  // number of fields
  sizeof(bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError),
  bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError__rosidl_typesupport_introspection_c__AreaCallbackErrorOneOfResponseError_message_member_array,  // message members
  bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError__rosidl_typesupport_introspection_c__AreaCallbackErrorOneOfResponseError_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError__rosidl_typesupport_introspection_c__AreaCallbackErrorOneOfResponseError_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError__rosidl_typesupport_introspection_c__AreaCallbackErrorOneOfResponseError_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError__rosidl_typesupport_introspection_c__AreaCallbackErrorOneOfResponseError_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, AreaCallbackErrorOneOfResponseError)() {
  bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError__rosidl_typesupport_introspection_c__AreaCallbackErrorOneOfResponseError_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, BeginCallbackResponse)();
  bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError__rosidl_typesupport_introspection_c__AreaCallbackErrorOneOfResponseError_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, BeginControlResponse)();
  bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError__rosidl_typesupport_introspection_c__AreaCallbackErrorOneOfResponseError_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, UpdateCallbackResponse)();
  bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError__rosidl_typesupport_introspection_c__AreaCallbackErrorOneOfResponseError_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, EndCallbackResponse)();
  if (!bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError__rosidl_typesupport_introspection_c__AreaCallbackErrorOneOfResponseError_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError__rosidl_typesupport_introspection_c__AreaCallbackErrorOneOfResponseError_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__AreaCallbackErrorOneOfResponseError__rosidl_typesupport_introspection_c__AreaCallbackErrorOneOfResponseError_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
