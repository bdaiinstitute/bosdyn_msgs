// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/StartRecordingRequest.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/start_recording_request__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/start_recording_request__functions.h"
#include "bosdyn_msgs/msg/detail/start_recording_request__struct.h"


// Include directives for member types
// Member `header`
#include "bosdyn_msgs/msg/request_header.h"
// Member `header`
#include "bosdyn_msgs/msg/detail/request_header__rosidl_typesupport_introspection_c.h"
// Member `lease`
#include "bosdyn_msgs/msg/lease.h"
// Member `lease`
#include "bosdyn_msgs/msg/detail/lease__rosidl_typesupport_introspection_c.h"
// Member `recording_environment`
#include "bosdyn_msgs/msg/recording_environment.h"
// Member `recording_environment`
#include "bosdyn_msgs/msg/detail/recording_environment__rosidl_typesupport_introspection_c.h"
// Member `require_fiducials`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `session_start_time`
#include "builtin_interfaces/msg/time.h"
// Member `session_start_time`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__StartRecordingRequest__rosidl_typesupport_introspection_c__StartRecordingRequest_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__StartRecordingRequest__init(message_memory);
}

void bosdyn_msgs__msg__StartRecordingRequest__rosidl_typesupport_introspection_c__StartRecordingRequest_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__StartRecordingRequest__fini(message_memory);
}

size_t bosdyn_msgs__msg__StartRecordingRequest__rosidl_typesupport_introspection_c__size_function__StartRecordingRequest__require_fiducials(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__StartRecordingRequest__rosidl_typesupport_introspection_c__get_const_function__StartRecordingRequest__require_fiducials(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__StartRecordingRequest__rosidl_typesupport_introspection_c__get_function__StartRecordingRequest__require_fiducials(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__StartRecordingRequest__rosidl_typesupport_introspection_c__fetch_function__StartRecordingRequest__require_fiducials(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    bosdyn_msgs__msg__StartRecordingRequest__rosidl_typesupport_introspection_c__get_const_function__StartRecordingRequest__require_fiducials(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__StartRecordingRequest__rosidl_typesupport_introspection_c__assign_function__StartRecordingRequest__require_fiducials(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    bosdyn_msgs__msg__StartRecordingRequest__rosidl_typesupport_introspection_c__get_function__StartRecordingRequest__require_fiducials(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__StartRecordingRequest__rosidl_typesupport_introspection_c__resize_function__StartRecordingRequest__require_fiducials(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__StartRecordingRequest__rosidl_typesupport_introspection_c__StartRecordingRequest_message_member_array[9] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__StartRecordingRequest, header),  // bytes offset in struct
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
    offsetof(bosdyn_msgs__msg__StartRecordingRequest, header_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lease",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__StartRecordingRequest, lease),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lease_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__StartRecordingRequest, lease_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "recording_environment",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__StartRecordingRequest, recording_environment),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "recording_environment_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__StartRecordingRequest, recording_environment_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "require_fiducials",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__StartRecordingRequest, require_fiducials),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__StartRecordingRequest__rosidl_typesupport_introspection_c__size_function__StartRecordingRequest__require_fiducials,  // size() function pointer
    bosdyn_msgs__msg__StartRecordingRequest__rosidl_typesupport_introspection_c__get_const_function__StartRecordingRequest__require_fiducials,  // get_const(index) function pointer
    bosdyn_msgs__msg__StartRecordingRequest__rosidl_typesupport_introspection_c__get_function__StartRecordingRequest__require_fiducials,  // get(index) function pointer
    bosdyn_msgs__msg__StartRecordingRequest__rosidl_typesupport_introspection_c__fetch_function__StartRecordingRequest__require_fiducials,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__StartRecordingRequest__rosidl_typesupport_introspection_c__assign_function__StartRecordingRequest__require_fiducials,  // assign(index, value) function pointer
    bosdyn_msgs__msg__StartRecordingRequest__rosidl_typesupport_introspection_c__resize_function__StartRecordingRequest__require_fiducials  // resize(index) function pointer
  },
  {
    "session_start_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__StartRecordingRequest, session_start_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "session_start_time_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__StartRecordingRequest, session_start_time_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__StartRecordingRequest__rosidl_typesupport_introspection_c__StartRecordingRequest_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "StartRecordingRequest",  // message name
  9,  // number of fields
  sizeof(bosdyn_msgs__msg__StartRecordingRequest),
  bosdyn_msgs__msg__StartRecordingRequest__rosidl_typesupport_introspection_c__StartRecordingRequest_message_member_array,  // message members
  bosdyn_msgs__msg__StartRecordingRequest__rosidl_typesupport_introspection_c__StartRecordingRequest_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__StartRecordingRequest__rosidl_typesupport_introspection_c__StartRecordingRequest_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__StartRecordingRequest__rosidl_typesupport_introspection_c__StartRecordingRequest_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__StartRecordingRequest__rosidl_typesupport_introspection_c__StartRecordingRequest_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, StartRecordingRequest)() {
  bosdyn_msgs__msg__StartRecordingRequest__rosidl_typesupport_introspection_c__StartRecordingRequest_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, RequestHeader)();
  bosdyn_msgs__msg__StartRecordingRequest__rosidl_typesupport_introspection_c__StartRecordingRequest_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, Lease)();
  bosdyn_msgs__msg__StartRecordingRequest__rosidl_typesupport_introspection_c__StartRecordingRequest_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, RecordingEnvironment)();
  bosdyn_msgs__msg__StartRecordingRequest__rosidl_typesupport_introspection_c__StartRecordingRequest_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!bosdyn_msgs__msg__StartRecordingRequest__rosidl_typesupport_introspection_c__StartRecordingRequest_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__StartRecordingRequest__rosidl_typesupport_introspection_c__StartRecordingRequest_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__StartRecordingRequest__rosidl_typesupport_introspection_c__StartRecordingRequest_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
