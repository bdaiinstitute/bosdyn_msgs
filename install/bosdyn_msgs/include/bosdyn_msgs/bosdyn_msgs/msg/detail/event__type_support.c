// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/Event.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/event__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/event__functions.h"
#include "bosdyn_msgs/msg/detail/event__struct.h"


// Include directives for member types
// Member `type`
// Member `description`
// Member `source`
// Member `id`
#include "rosidl_runtime_c/string_functions.h"
// Member `start_time`
// Member `end_time`
#include "builtin_interfaces/msg/time.h"
// Member `start_time`
// Member `end_time`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `level`
#include "bosdyn_msgs/msg/event_level.h"
// Member `level`
#include "bosdyn_msgs/msg/detail/event_level__rosidl_typesupport_introspection_c.h"
// Member `parameters`
#include "bosdyn_msgs/msg/parameter.h"
// Member `parameters`
#include "bosdyn_msgs/msg/detail/parameter__rosidl_typesupport_introspection_c.h"
// Member `log_preserve_hint`
#include "bosdyn_msgs/msg/event_log_preserve_hint.h"
// Member `log_preserve_hint`
#include "bosdyn_msgs/msg/detail/event_log_preserve_hint__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__Event__rosidl_typesupport_introspection_c__Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__Event__init(message_memory);
}

void bosdyn_msgs__msg__Event__rosidl_typesupport_introspection_c__Event_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__Event__fini(message_memory);
}

size_t bosdyn_msgs__msg__Event__rosidl_typesupport_introspection_c__size_function__Event__parameters(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__Parameter__Sequence * member =
    (const bosdyn_msgs__msg__Parameter__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__Event__rosidl_typesupport_introspection_c__get_const_function__Event__parameters(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__Parameter__Sequence * member =
    (const bosdyn_msgs__msg__Parameter__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__Event__rosidl_typesupport_introspection_c__get_function__Event__parameters(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__Parameter__Sequence * member =
    (bosdyn_msgs__msg__Parameter__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__Event__rosidl_typesupport_introspection_c__fetch_function__Event__parameters(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__Parameter * item =
    ((const bosdyn_msgs__msg__Parameter *)
    bosdyn_msgs__msg__Event__rosidl_typesupport_introspection_c__get_const_function__Event__parameters(untyped_member, index));
  bosdyn_msgs__msg__Parameter * value =
    (bosdyn_msgs__msg__Parameter *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__Event__rosidl_typesupport_introspection_c__assign_function__Event__parameters(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__Parameter * item =
    ((bosdyn_msgs__msg__Parameter *)
    bosdyn_msgs__msg__Event__rosidl_typesupport_introspection_c__get_function__Event__parameters(untyped_member, index));
  const bosdyn_msgs__msg__Parameter * value =
    (const bosdyn_msgs__msg__Parameter *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__Event__rosidl_typesupport_introspection_c__resize_function__Event__parameters(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__Parameter__Sequence * member =
    (bosdyn_msgs__msg__Parameter__Sequence *)(untyped_member);
  bosdyn_msgs__msg__Parameter__Sequence__fini(member);
  return bosdyn_msgs__msg__Parameter__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__Event__rosidl_typesupport_introspection_c__Event_message_member_array[11] = {
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Event, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "description",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Event, description),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "source",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Event, source),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Event, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "start_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Event, start_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "start_time_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Event, start_time_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "end_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Event, end_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "end_time_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Event, end_time_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "level",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Event, level),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "parameters",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Event, parameters),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__Event__rosidl_typesupport_introspection_c__size_function__Event__parameters,  // size() function pointer
    bosdyn_msgs__msg__Event__rosidl_typesupport_introspection_c__get_const_function__Event__parameters,  // get_const(index) function pointer
    bosdyn_msgs__msg__Event__rosidl_typesupport_introspection_c__get_function__Event__parameters,  // get(index) function pointer
    bosdyn_msgs__msg__Event__rosidl_typesupport_introspection_c__fetch_function__Event__parameters,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__Event__rosidl_typesupport_introspection_c__assign_function__Event__parameters,  // assign(index, value) function pointer
    bosdyn_msgs__msg__Event__rosidl_typesupport_introspection_c__resize_function__Event__parameters  // resize(index) function pointer
  },
  {
    "log_preserve_hint",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__Event, log_preserve_hint),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__Event__rosidl_typesupport_introspection_c__Event_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "Event",  // message name
  11,  // number of fields
  sizeof(bosdyn_msgs__msg__Event),
  bosdyn_msgs__msg__Event__rosidl_typesupport_introspection_c__Event_message_member_array,  // message members
  bosdyn_msgs__msg__Event__rosidl_typesupport_introspection_c__Event_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__Event__rosidl_typesupport_introspection_c__Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__Event__rosidl_typesupport_introspection_c__Event_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__Event__rosidl_typesupport_introspection_c__Event_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, Event)() {
  bosdyn_msgs__msg__Event__rosidl_typesupport_introspection_c__Event_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  bosdyn_msgs__msg__Event__rosidl_typesupport_introspection_c__Event_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  bosdyn_msgs__msg__Event__rosidl_typesupport_introspection_c__Event_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, EventLevel)();
  bosdyn_msgs__msg__Event__rosidl_typesupport_introspection_c__Event_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, Parameter)();
  bosdyn_msgs__msg__Event__rosidl_typesupport_introspection_c__Event_message_member_array[10].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, EventLogPreserveHint)();
  if (!bosdyn_msgs__msg__Event__rosidl_typesupport_introspection_c__Event_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__Event__rosidl_typesupport_introspection_c__Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__Event__rosidl_typesupport_introspection_c__Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
