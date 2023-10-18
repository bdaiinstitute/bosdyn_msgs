// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/RobotSoftwareRelease.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/robot_software_release__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/robot_software_release__functions.h"
#include "bosdyn_msgs/msg/detail/robot_software_release__struct.h"


// Include directives for member types
// Member `version`
#include "bosdyn_msgs/msg/software_version.h"
// Member `version`
#include "bosdyn_msgs/msg/detail/software_version__rosidl_typesupport_introspection_c.h"
// Member `name`
// Member `type`
// Member `changeset`
// Member `api_version`
// Member `build_information`
#include "rosidl_runtime_c/string_functions.h"
// Member `changeset_date`
// Member `install_date`
#include "builtin_interfaces/msg/time.h"
// Member `changeset_date`
// Member `install_date`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `parameters`
#include "bosdyn_msgs/msg/parameter.h"
// Member `parameters`
#include "bosdyn_msgs/msg/detail/parameter__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__RobotSoftwareRelease__rosidl_typesupport_introspection_c__RobotSoftwareRelease_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__RobotSoftwareRelease__init(message_memory);
}

void bosdyn_msgs__msg__RobotSoftwareRelease__rosidl_typesupport_introspection_c__RobotSoftwareRelease_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__RobotSoftwareRelease__fini(message_memory);
}

size_t bosdyn_msgs__msg__RobotSoftwareRelease__rosidl_typesupport_introspection_c__size_function__RobotSoftwareRelease__parameters(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__Parameter__Sequence * member =
    (const bosdyn_msgs__msg__Parameter__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__RobotSoftwareRelease__rosidl_typesupport_introspection_c__get_const_function__RobotSoftwareRelease__parameters(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__Parameter__Sequence * member =
    (const bosdyn_msgs__msg__Parameter__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__RobotSoftwareRelease__rosidl_typesupport_introspection_c__get_function__RobotSoftwareRelease__parameters(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__Parameter__Sequence * member =
    (bosdyn_msgs__msg__Parameter__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__RobotSoftwareRelease__rosidl_typesupport_introspection_c__fetch_function__RobotSoftwareRelease__parameters(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__Parameter * item =
    ((const bosdyn_msgs__msg__Parameter *)
    bosdyn_msgs__msg__RobotSoftwareRelease__rosidl_typesupport_introspection_c__get_const_function__RobotSoftwareRelease__parameters(untyped_member, index));
  bosdyn_msgs__msg__Parameter * value =
    (bosdyn_msgs__msg__Parameter *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__RobotSoftwareRelease__rosidl_typesupport_introspection_c__assign_function__RobotSoftwareRelease__parameters(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__Parameter * item =
    ((bosdyn_msgs__msg__Parameter *)
    bosdyn_msgs__msg__RobotSoftwareRelease__rosidl_typesupport_introspection_c__get_function__RobotSoftwareRelease__parameters(untyped_member, index));
  const bosdyn_msgs__msg__Parameter * value =
    (const bosdyn_msgs__msg__Parameter *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__RobotSoftwareRelease__rosidl_typesupport_introspection_c__resize_function__RobotSoftwareRelease__parameters(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__Parameter__Sequence * member =
    (bosdyn_msgs__msg__Parameter__Sequence *)(untyped_member);
  bosdyn_msgs__msg__Parameter__Sequence__fini(member);
  return bosdyn_msgs__msg__Parameter__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__RobotSoftwareRelease__rosidl_typesupport_introspection_c__RobotSoftwareRelease_message_member_array[12] = {
  {
    "version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__RobotSoftwareRelease, version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "version_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__RobotSoftwareRelease, version_is_set),  // bytes offset in struct
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
    offsetof(bosdyn_msgs__msg__RobotSoftwareRelease, name),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__RobotSoftwareRelease, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "changeset_date",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__RobotSoftwareRelease, changeset_date),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "changeset_date_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__RobotSoftwareRelease, changeset_date_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "changeset",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__RobotSoftwareRelease, changeset),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "api_version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__RobotSoftwareRelease, api_version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "build_information",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__RobotSoftwareRelease, build_information),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "install_date",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__RobotSoftwareRelease, install_date),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "install_date_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__RobotSoftwareRelease, install_date_is_set),  // bytes offset in struct
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
    offsetof(bosdyn_msgs__msg__RobotSoftwareRelease, parameters),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__RobotSoftwareRelease__rosidl_typesupport_introspection_c__size_function__RobotSoftwareRelease__parameters,  // size() function pointer
    bosdyn_msgs__msg__RobotSoftwareRelease__rosidl_typesupport_introspection_c__get_const_function__RobotSoftwareRelease__parameters,  // get_const(index) function pointer
    bosdyn_msgs__msg__RobotSoftwareRelease__rosidl_typesupport_introspection_c__get_function__RobotSoftwareRelease__parameters,  // get(index) function pointer
    bosdyn_msgs__msg__RobotSoftwareRelease__rosidl_typesupport_introspection_c__fetch_function__RobotSoftwareRelease__parameters,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__RobotSoftwareRelease__rosidl_typesupport_introspection_c__assign_function__RobotSoftwareRelease__parameters,  // assign(index, value) function pointer
    bosdyn_msgs__msg__RobotSoftwareRelease__rosidl_typesupport_introspection_c__resize_function__RobotSoftwareRelease__parameters  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__RobotSoftwareRelease__rosidl_typesupport_introspection_c__RobotSoftwareRelease_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "RobotSoftwareRelease",  // message name
  12,  // number of fields
  sizeof(bosdyn_msgs__msg__RobotSoftwareRelease),
  bosdyn_msgs__msg__RobotSoftwareRelease__rosidl_typesupport_introspection_c__RobotSoftwareRelease_message_member_array,  // message members
  bosdyn_msgs__msg__RobotSoftwareRelease__rosidl_typesupport_introspection_c__RobotSoftwareRelease_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__RobotSoftwareRelease__rosidl_typesupport_introspection_c__RobotSoftwareRelease_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__RobotSoftwareRelease__rosidl_typesupport_introspection_c__RobotSoftwareRelease_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__RobotSoftwareRelease__rosidl_typesupport_introspection_c__RobotSoftwareRelease_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, RobotSoftwareRelease)() {
  bosdyn_msgs__msg__RobotSoftwareRelease__rosidl_typesupport_introspection_c__RobotSoftwareRelease_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, SoftwareVersion)();
  bosdyn_msgs__msg__RobotSoftwareRelease__rosidl_typesupport_introspection_c__RobotSoftwareRelease_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  bosdyn_msgs__msg__RobotSoftwareRelease__rosidl_typesupport_introspection_c__RobotSoftwareRelease_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  bosdyn_msgs__msg__RobotSoftwareRelease__rosidl_typesupport_introspection_c__RobotSoftwareRelease_message_member_array[11].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, Parameter)();
  if (!bosdyn_msgs__msg__RobotSoftwareRelease__rosidl_typesupport_introspection_c__RobotSoftwareRelease_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__RobotSoftwareRelease__rosidl_typesupport_introspection_c__RobotSoftwareRelease_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__RobotSoftwareRelease__rosidl_typesupport_introspection_c__RobotSoftwareRelease_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
