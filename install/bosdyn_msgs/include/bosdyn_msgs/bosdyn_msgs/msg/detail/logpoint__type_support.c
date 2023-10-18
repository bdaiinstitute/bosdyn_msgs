// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/Logpoint.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/logpoint__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/logpoint__functions.h"
#include "bosdyn_msgs/msg/detail/logpoint__struct.h"


// Include directives for member types
// Member `name`
// Member `tag`
#include "rosidl_runtime_c/string_functions.h"
// Member `type`
#include "bosdyn_msgs/msg/logpoint_record_type.h"
// Member `type`
#include "bosdyn_msgs/msg/detail/logpoint_record_type__rosidl_typesupport_introspection_c.h"
// Member `status`
#include "bosdyn_msgs/msg/logpoint_log_status.h"
// Member `status`
#include "bosdyn_msgs/msg/detail/logpoint_log_status__rosidl_typesupport_introspection_c.h"
// Member `queue_status`
#include "bosdyn_msgs/msg/logpoint_queue_status.h"
// Member `queue_status`
#include "bosdyn_msgs/msg/detail/logpoint_queue_status__rosidl_typesupport_introspection_c.h"
// Member `timestamp`
#include "builtin_interfaces/msg/time.h"
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `image_params`
#include "bosdyn_msgs/msg/logpoint_image_params.h"
// Member `image_params`
#include "bosdyn_msgs/msg/detail/logpoint_image_params__rosidl_typesupport_introspection_c.h"
// Member `calibration`
#include "bosdyn_msgs/msg/logpoint_calibration.h"
// Member `calibration`
#include "bosdyn_msgs/msg/detail/logpoint_calibration__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__Logpoint__rosidl_typesupport_introspection_c__Logpoint_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__Logpoint__init(message_memory);
}

void bosdyn_msgs__msg__Logpoint__rosidl_typesupport_introspection_c__Logpoint_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__Logpoint__fini(message_memory);
}

size_t bosdyn_msgs__msg__Logpoint__rosidl_typesupport_introspection_c__size_function__Logpoint__calibration(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__LogpointCalibration__Sequence * member =
    (const bosdyn_msgs__msg__LogpointCalibration__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__Logpoint__rosidl_typesupport_introspection_c__get_const_function__Logpoint__calibration(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__LogpointCalibration__Sequence * member =
    (const bosdyn_msgs__msg__LogpointCalibration__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__Logpoint__rosidl_typesupport_introspection_c__get_function__Logpoint__calibration(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__LogpointCalibration__Sequence * member =
    (bosdyn_msgs__msg__LogpointCalibration__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__Logpoint__rosidl_typesupport_introspection_c__fetch_function__Logpoint__calibration(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__LogpointCalibration * item =
    ((const bosdyn_msgs__msg__LogpointCalibration *)
    bosdyn_msgs__msg__Logpoint__rosidl_typesupport_introspection_c__get_const_function__Logpoint__calibration(untyped_member, index));
  bosdyn_msgs__msg__LogpointCalibration * value =
    (bosdyn_msgs__msg__LogpointCalibration *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__Logpoint__rosidl_typesupport_introspection_c__assign_function__Logpoint__calibration(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__LogpointCalibration * item =
    ((bosdyn_msgs__msg__LogpointCalibration *)
    bosdyn_msgs__msg__Logpoint__rosidl_typesupport_introspection_c__get_function__Logpoint__calibration(untyped_member, index));
  const bosdyn_msgs__msg__LogpointCalibration * value =
    (const bosdyn_msgs__msg__LogpointCalibration *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__Logpoint__rosidl_typesupport_introspection_c__resize_function__Logpoint__calibration(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__LogpointCalibration__Sequence * member =
    (bosdyn_msgs__msg__LogpointCalibration__Sequence *)(untyped_member);
  bosdyn_msgs__msg__LogpointCalibration__Sequence__fini(member);
  return bosdyn_msgs__msg__LogpointCalibration__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__Logpoint__rosidl_typesupport_introspection_c__Logpoint_message_member_array[10] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Logpoint, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Logpoint, type),  // bytes offset in struct
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
    offsetof(bosdyn_msgs__msg__Logpoint, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "queue_status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Logpoint, queue_status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tag",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Logpoint, tag),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Logpoint, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timestamp_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Logpoint, timestamp_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "image_params",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Logpoint, image_params),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "image_params_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Logpoint, image_params_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "calibration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Logpoint, calibration),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__Logpoint__rosidl_typesupport_introspection_c__size_function__Logpoint__calibration,  // size() function pointer
    bosdyn_msgs__msg__Logpoint__rosidl_typesupport_introspection_c__get_const_function__Logpoint__calibration,  // get_const(index) function pointer
    bosdyn_msgs__msg__Logpoint__rosidl_typesupport_introspection_c__get_function__Logpoint__calibration,  // get(index) function pointer
    bosdyn_msgs__msg__Logpoint__rosidl_typesupport_introspection_c__fetch_function__Logpoint__calibration,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__Logpoint__rosidl_typesupport_introspection_c__assign_function__Logpoint__calibration,  // assign(index, value) function pointer
    bosdyn_msgs__msg__Logpoint__rosidl_typesupport_introspection_c__resize_function__Logpoint__calibration  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__Logpoint__rosidl_typesupport_introspection_c__Logpoint_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "Logpoint",  // message name
  10,  // number of fields
  sizeof(bosdyn_msgs__msg__Logpoint),
  bosdyn_msgs__msg__Logpoint__rosidl_typesupport_introspection_c__Logpoint_message_member_array,  // message members
  bosdyn_msgs__msg__Logpoint__rosidl_typesupport_introspection_c__Logpoint_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__Logpoint__rosidl_typesupport_introspection_c__Logpoint_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__Logpoint__rosidl_typesupport_introspection_c__Logpoint_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__Logpoint__rosidl_typesupport_introspection_c__Logpoint_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, Logpoint)() {
  bosdyn_msgs__msg__Logpoint__rosidl_typesupport_introspection_c__Logpoint_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, LogpointRecordType)();
  bosdyn_msgs__msg__Logpoint__rosidl_typesupport_introspection_c__Logpoint_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, LogpointLogStatus)();
  bosdyn_msgs__msg__Logpoint__rosidl_typesupport_introspection_c__Logpoint_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, LogpointQueueStatus)();
  bosdyn_msgs__msg__Logpoint__rosidl_typesupport_introspection_c__Logpoint_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  bosdyn_msgs__msg__Logpoint__rosidl_typesupport_introspection_c__Logpoint_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, LogpointImageParams)();
  bosdyn_msgs__msg__Logpoint__rosidl_typesupport_introspection_c__Logpoint_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, LogpointCalibration)();
  if (!bosdyn_msgs__msg__Logpoint__rosidl_typesupport_introspection_c__Logpoint_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__Logpoint__rosidl_typesupport_introspection_c__Logpoint_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__Logpoint__rosidl_typesupport_introspection_c__Logpoint_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
