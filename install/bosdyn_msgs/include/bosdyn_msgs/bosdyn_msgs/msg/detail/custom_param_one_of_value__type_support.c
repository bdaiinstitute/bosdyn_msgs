// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/CustomParamOneOfValue.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/custom_param_one_of_value__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/custom_param_one_of_value__functions.h"
#include "bosdyn_msgs/msg/detail/custom_param_one_of_value__struct.h"


// Include directives for member types
// Member `dict_value`
#include "bosdyn_msgs/msg/serialized_message.h"
// Member `dict_value`
#include "bosdyn_msgs/msg/detail/serialized_message__rosidl_typesupport_introspection_c.h"
// Member `list_value`
#include "bosdyn_msgs/msg/list_param.h"
// Member `list_value`
#include "bosdyn_msgs/msg/detail/list_param__rosidl_typesupport_introspection_c.h"
// Member `int_value`
#include "bosdyn_msgs/msg/int64_param.h"
// Member `int_value`
#include "bosdyn_msgs/msg/detail/int64_param__rosidl_typesupport_introspection_c.h"
// Member `double_value`
#include "bosdyn_msgs/msg/double_param.h"
// Member `double_value`
#include "bosdyn_msgs/msg/detail/double_param__rosidl_typesupport_introspection_c.h"
// Member `string_value`
#include "bosdyn_msgs/msg/string_param.h"
// Member `string_value`
#include "bosdyn_msgs/msg/detail/string_param__rosidl_typesupport_introspection_c.h"
// Member `roi_value`
#include "bosdyn_msgs/msg/region_of_interest_param.h"
// Member `roi_value`
#include "bosdyn_msgs/msg/detail/region_of_interest_param__rosidl_typesupport_introspection_c.h"
// Member `bool_value`
#include "bosdyn_msgs/msg/bool_param.h"
// Member `bool_value`
#include "bosdyn_msgs/msg/detail/bool_param__rosidl_typesupport_introspection_c.h"
// Member `one_of_value`
#include "bosdyn_msgs/msg/one_of_param.h"
// Member `one_of_value`
#include "bosdyn_msgs/msg/detail/one_of_param__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__CustomParamOneOfValue__rosidl_typesupport_introspection_c__CustomParamOneOfValue_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__CustomParamOneOfValue__init(message_memory);
}

void bosdyn_msgs__msg__CustomParamOneOfValue__rosidl_typesupport_introspection_c__CustomParamOneOfValue_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__CustomParamOneOfValue__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__CustomParamOneOfValue__rosidl_typesupport_introspection_c__CustomParamOneOfValue_message_member_array[9] = {
  {
    "dict_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__CustomParamOneOfValue, dict_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "list_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__CustomParamOneOfValue, list_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "int_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__CustomParamOneOfValue, int_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "double_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__CustomParamOneOfValue, double_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "string_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__CustomParamOneOfValue, string_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "roi_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__CustomParamOneOfValue, roi_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bool_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__CustomParamOneOfValue, bool_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "one_of_value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__CustomParamOneOfValue, one_of_value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "value_choice",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__CustomParamOneOfValue, value_choice),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__CustomParamOneOfValue__rosidl_typesupport_introspection_c__CustomParamOneOfValue_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "CustomParamOneOfValue",  // message name
  9,  // number of fields
  sizeof(bosdyn_msgs__msg__CustomParamOneOfValue),
  bosdyn_msgs__msg__CustomParamOneOfValue__rosidl_typesupport_introspection_c__CustomParamOneOfValue_message_member_array,  // message members
  bosdyn_msgs__msg__CustomParamOneOfValue__rosidl_typesupport_introspection_c__CustomParamOneOfValue_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__CustomParamOneOfValue__rosidl_typesupport_introspection_c__CustomParamOneOfValue_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__CustomParamOneOfValue__rosidl_typesupport_introspection_c__CustomParamOneOfValue_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__CustomParamOneOfValue__rosidl_typesupport_introspection_c__CustomParamOneOfValue_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, CustomParamOneOfValue)() {
  bosdyn_msgs__msg__CustomParamOneOfValue__rosidl_typesupport_introspection_c__CustomParamOneOfValue_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, SerializedMessage)();
  bosdyn_msgs__msg__CustomParamOneOfValue__rosidl_typesupport_introspection_c__CustomParamOneOfValue_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ListParam)();
  bosdyn_msgs__msg__CustomParamOneOfValue__rosidl_typesupport_introspection_c__CustomParamOneOfValue_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, Int64Param)();
  bosdyn_msgs__msg__CustomParamOneOfValue__rosidl_typesupport_introspection_c__CustomParamOneOfValue_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, DoubleParam)();
  bosdyn_msgs__msg__CustomParamOneOfValue__rosidl_typesupport_introspection_c__CustomParamOneOfValue_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, StringParam)();
  bosdyn_msgs__msg__CustomParamOneOfValue__rosidl_typesupport_introspection_c__CustomParamOneOfValue_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, RegionOfInterestParam)();
  bosdyn_msgs__msg__CustomParamOneOfValue__rosidl_typesupport_introspection_c__CustomParamOneOfValue_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, BoolParam)();
  bosdyn_msgs__msg__CustomParamOneOfValue__rosidl_typesupport_introspection_c__CustomParamOneOfValue_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, OneOfParam)();
  if (!bosdyn_msgs__msg__CustomParamOneOfValue__rosidl_typesupport_introspection_c__CustomParamOneOfValue_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__CustomParamOneOfValue__rosidl_typesupport_introspection_c__CustomParamOneOfValue_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__CustomParamOneOfValue__rosidl_typesupport_introspection_c__CustomParamOneOfValue_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
