// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/CustomParamSpecOneOfSpec.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/custom_param_spec_one_of_spec__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/custom_param_spec_one_of_spec__functions.h"
#include "bosdyn_msgs/msg/detail/custom_param_spec_one_of_spec__struct.h"


// Include directives for member types
// Member `dict_spec`
#include "bosdyn_msgs/msg/serialized_message.h"
// Member `dict_spec`
#include "bosdyn_msgs/msg/detail/serialized_message__rosidl_typesupport_introspection_c.h"
// Member `list_spec`
#include "bosdyn_msgs/msg/list_param_spec.h"
// Member `list_spec`
#include "bosdyn_msgs/msg/detail/list_param_spec__rosidl_typesupport_introspection_c.h"
// Member `int_spec`
#include "bosdyn_msgs/msg/int64_param_spec.h"
// Member `int_spec`
#include "bosdyn_msgs/msg/detail/int64_param_spec__rosidl_typesupport_introspection_c.h"
// Member `double_spec`
#include "bosdyn_msgs/msg/double_param_spec.h"
// Member `double_spec`
#include "bosdyn_msgs/msg/detail/double_param_spec__rosidl_typesupport_introspection_c.h"
// Member `string_spec`
#include "bosdyn_msgs/msg/string_param_spec.h"
// Member `string_spec`
#include "bosdyn_msgs/msg/detail/string_param_spec__rosidl_typesupport_introspection_c.h"
// Member `roi_spec`
#include "bosdyn_msgs/msg/region_of_interest_param_spec.h"
// Member `roi_spec`
#include "bosdyn_msgs/msg/detail/region_of_interest_param_spec__rosidl_typesupport_introspection_c.h"
// Member `bool_spec`
#include "bosdyn_msgs/msg/bool_param_spec.h"
// Member `bool_spec`
#include "bosdyn_msgs/msg/detail/bool_param_spec__rosidl_typesupport_introspection_c.h"
// Member `one_of_spec`
#include "bosdyn_msgs/msg/one_of_param_spec.h"
// Member `one_of_spec`
#include "bosdyn_msgs/msg/detail/one_of_param_spec__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__CustomParamSpecOneOfSpec__rosidl_typesupport_introspection_c__CustomParamSpecOneOfSpec_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__CustomParamSpecOneOfSpec__init(message_memory);
}

void bosdyn_msgs__msg__CustomParamSpecOneOfSpec__rosidl_typesupport_introspection_c__CustomParamSpecOneOfSpec_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__CustomParamSpecOneOfSpec__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__CustomParamSpecOneOfSpec__rosidl_typesupport_introspection_c__CustomParamSpecOneOfSpec_message_member_array[9] = {
  {
    "dict_spec",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__CustomParamSpecOneOfSpec, dict_spec),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "list_spec",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__CustomParamSpecOneOfSpec, list_spec),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "int_spec",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__CustomParamSpecOneOfSpec, int_spec),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "double_spec",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__CustomParamSpecOneOfSpec, double_spec),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "string_spec",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__CustomParamSpecOneOfSpec, string_spec),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "roi_spec",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__CustomParamSpecOneOfSpec, roi_spec),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bool_spec",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__CustomParamSpecOneOfSpec, bool_spec),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "one_of_spec",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__CustomParamSpecOneOfSpec, one_of_spec),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "spec_choice",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__CustomParamSpecOneOfSpec, spec_choice),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__CustomParamSpecOneOfSpec__rosidl_typesupport_introspection_c__CustomParamSpecOneOfSpec_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "CustomParamSpecOneOfSpec",  // message name
  9,  // number of fields
  sizeof(bosdyn_msgs__msg__CustomParamSpecOneOfSpec),
  bosdyn_msgs__msg__CustomParamSpecOneOfSpec__rosidl_typesupport_introspection_c__CustomParamSpecOneOfSpec_message_member_array,  // message members
  bosdyn_msgs__msg__CustomParamSpecOneOfSpec__rosidl_typesupport_introspection_c__CustomParamSpecOneOfSpec_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__CustomParamSpecOneOfSpec__rosidl_typesupport_introspection_c__CustomParamSpecOneOfSpec_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__CustomParamSpecOneOfSpec__rosidl_typesupport_introspection_c__CustomParamSpecOneOfSpec_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__CustomParamSpecOneOfSpec__rosidl_typesupport_introspection_c__CustomParamSpecOneOfSpec_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, CustomParamSpecOneOfSpec)() {
  bosdyn_msgs__msg__CustomParamSpecOneOfSpec__rosidl_typesupport_introspection_c__CustomParamSpecOneOfSpec_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, SerializedMessage)();
  bosdyn_msgs__msg__CustomParamSpecOneOfSpec__rosidl_typesupport_introspection_c__CustomParamSpecOneOfSpec_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ListParamSpec)();
  bosdyn_msgs__msg__CustomParamSpecOneOfSpec__rosidl_typesupport_introspection_c__CustomParamSpecOneOfSpec_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, Int64ParamSpec)();
  bosdyn_msgs__msg__CustomParamSpecOneOfSpec__rosidl_typesupport_introspection_c__CustomParamSpecOneOfSpec_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, DoubleParamSpec)();
  bosdyn_msgs__msg__CustomParamSpecOneOfSpec__rosidl_typesupport_introspection_c__CustomParamSpecOneOfSpec_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, StringParamSpec)();
  bosdyn_msgs__msg__CustomParamSpecOneOfSpec__rosidl_typesupport_introspection_c__CustomParamSpecOneOfSpec_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, RegionOfInterestParamSpec)();
  bosdyn_msgs__msg__CustomParamSpecOneOfSpec__rosidl_typesupport_introspection_c__CustomParamSpecOneOfSpec_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, BoolParamSpec)();
  bosdyn_msgs__msg__CustomParamSpecOneOfSpec__rosidl_typesupport_introspection_c__CustomParamSpecOneOfSpec_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, OneOfParamSpec)();
  if (!bosdyn_msgs__msg__CustomParamSpecOneOfSpec__rosidl_typesupport_introspection_c__CustomParamSpecOneOfSpec_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__CustomParamSpecOneOfSpec__rosidl_typesupport_introspection_c__CustomParamSpecOneOfSpec_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__CustomParamSpecOneOfSpec__rosidl_typesupport_introspection_c__CustomParamSpecOneOfSpec_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
