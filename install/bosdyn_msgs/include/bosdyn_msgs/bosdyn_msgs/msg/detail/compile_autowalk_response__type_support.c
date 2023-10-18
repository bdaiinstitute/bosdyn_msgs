// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from bosdyn_msgs:msg/CompileAutowalkResponse.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "bosdyn_msgs/msg/detail/compile_autowalk_response__rosidl_typesupport_introspection_c.h"
#include "bosdyn_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "bosdyn_msgs/msg/detail/compile_autowalk_response__functions.h"
#include "bosdyn_msgs/msg/detail/compile_autowalk_response__struct.h"


// Include directives for member types
// Member `header`
#include "bosdyn_msgs/msg/response_header.h"
// Member `header`
#include "bosdyn_msgs/msg/detail/response_header__rosidl_typesupport_introspection_c.h"
// Member `status`
#include "bosdyn_msgs/msg/compile_autowalk_response_status.h"
// Member `status`
#include "bosdyn_msgs/msg/detail/compile_autowalk_response_status__rosidl_typesupport_introspection_c.h"
// Member `root`
#include "bosdyn_msgs/msg/node.h"
// Member `root`
#include "bosdyn_msgs/msg/detail/node__rosidl_typesupport_introspection_c.h"
// Member `element_identifiers`
#include "bosdyn_msgs/msg/element_identifiers.h"
// Member `element_identifiers`
#include "bosdyn_msgs/msg/detail/element_identifiers__rosidl_typesupport_introspection_c.h"
// Member `failed_elements`
#include "bosdyn_msgs/msg/key_int32_value_bosdyn_msgs_failed_element.h"
// Member `failed_elements`
#include "bosdyn_msgs/msg/detail/key_int32_value_bosdyn_msgs_failed_element__rosidl_typesupport_introspection_c.h"
// Member `docking_node`
// Member `loop_node`
#include "bosdyn_msgs/msg/node_identifier.h"
// Member `docking_node`
// Member `loop_node`
#include "bosdyn_msgs/msg/detail/node_identifier__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void bosdyn_msgs__msg__CompileAutowalkResponse__rosidl_typesupport_introspection_c__CompileAutowalkResponse_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  bosdyn_msgs__msg__CompileAutowalkResponse__init(message_memory);
}

void bosdyn_msgs__msg__CompileAutowalkResponse__rosidl_typesupport_introspection_c__CompileAutowalkResponse_fini_function(void * message_memory)
{
  bosdyn_msgs__msg__CompileAutowalkResponse__fini(message_memory);
}

size_t bosdyn_msgs__msg__CompileAutowalkResponse__rosidl_typesupport_introspection_c__size_function__CompileAutowalkResponse__element_identifiers(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__ElementIdentifiers__Sequence * member =
    (const bosdyn_msgs__msg__ElementIdentifiers__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__CompileAutowalkResponse__rosidl_typesupport_introspection_c__get_const_function__CompileAutowalkResponse__element_identifiers(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__ElementIdentifiers__Sequence * member =
    (const bosdyn_msgs__msg__ElementIdentifiers__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__CompileAutowalkResponse__rosidl_typesupport_introspection_c__get_function__CompileAutowalkResponse__element_identifiers(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__ElementIdentifiers__Sequence * member =
    (bosdyn_msgs__msg__ElementIdentifiers__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__CompileAutowalkResponse__rosidl_typesupport_introspection_c__fetch_function__CompileAutowalkResponse__element_identifiers(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__ElementIdentifiers * item =
    ((const bosdyn_msgs__msg__ElementIdentifiers *)
    bosdyn_msgs__msg__CompileAutowalkResponse__rosidl_typesupport_introspection_c__get_const_function__CompileAutowalkResponse__element_identifiers(untyped_member, index));
  bosdyn_msgs__msg__ElementIdentifiers * value =
    (bosdyn_msgs__msg__ElementIdentifiers *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__CompileAutowalkResponse__rosidl_typesupport_introspection_c__assign_function__CompileAutowalkResponse__element_identifiers(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__ElementIdentifiers * item =
    ((bosdyn_msgs__msg__ElementIdentifiers *)
    bosdyn_msgs__msg__CompileAutowalkResponse__rosidl_typesupport_introspection_c__get_function__CompileAutowalkResponse__element_identifiers(untyped_member, index));
  const bosdyn_msgs__msg__ElementIdentifiers * value =
    (const bosdyn_msgs__msg__ElementIdentifiers *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__CompileAutowalkResponse__rosidl_typesupport_introspection_c__resize_function__CompileAutowalkResponse__element_identifiers(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__ElementIdentifiers__Sequence * member =
    (bosdyn_msgs__msg__ElementIdentifiers__Sequence *)(untyped_member);
  bosdyn_msgs__msg__ElementIdentifiers__Sequence__fini(member);
  return bosdyn_msgs__msg__ElementIdentifiers__Sequence__init(member, size);
}

size_t bosdyn_msgs__msg__CompileAutowalkResponse__rosidl_typesupport_introspection_c__size_function__CompileAutowalkResponse__failed_elements(
  const void * untyped_member)
{
  const bosdyn_msgs__msg__KeyInt32ValueBosdynMsgsFailedElement__Sequence * member =
    (const bosdyn_msgs__msg__KeyInt32ValueBosdynMsgsFailedElement__Sequence *)(untyped_member);
  return member->size;
}

const void * bosdyn_msgs__msg__CompileAutowalkResponse__rosidl_typesupport_introspection_c__get_const_function__CompileAutowalkResponse__failed_elements(
  const void * untyped_member, size_t index)
{
  const bosdyn_msgs__msg__KeyInt32ValueBosdynMsgsFailedElement__Sequence * member =
    (const bosdyn_msgs__msg__KeyInt32ValueBosdynMsgsFailedElement__Sequence *)(untyped_member);
  return &member->data[index];
}

void * bosdyn_msgs__msg__CompileAutowalkResponse__rosidl_typesupport_introspection_c__get_function__CompileAutowalkResponse__failed_elements(
  void * untyped_member, size_t index)
{
  bosdyn_msgs__msg__KeyInt32ValueBosdynMsgsFailedElement__Sequence * member =
    (bosdyn_msgs__msg__KeyInt32ValueBosdynMsgsFailedElement__Sequence *)(untyped_member);
  return &member->data[index];
}

void bosdyn_msgs__msg__CompileAutowalkResponse__rosidl_typesupport_introspection_c__fetch_function__CompileAutowalkResponse__failed_elements(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bosdyn_msgs__msg__KeyInt32ValueBosdynMsgsFailedElement * item =
    ((const bosdyn_msgs__msg__KeyInt32ValueBosdynMsgsFailedElement *)
    bosdyn_msgs__msg__CompileAutowalkResponse__rosidl_typesupport_introspection_c__get_const_function__CompileAutowalkResponse__failed_elements(untyped_member, index));
  bosdyn_msgs__msg__KeyInt32ValueBosdynMsgsFailedElement * value =
    (bosdyn_msgs__msg__KeyInt32ValueBosdynMsgsFailedElement *)(untyped_value);
  *value = *item;
}

void bosdyn_msgs__msg__CompileAutowalkResponse__rosidl_typesupport_introspection_c__assign_function__CompileAutowalkResponse__failed_elements(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bosdyn_msgs__msg__KeyInt32ValueBosdynMsgsFailedElement * item =
    ((bosdyn_msgs__msg__KeyInt32ValueBosdynMsgsFailedElement *)
    bosdyn_msgs__msg__CompileAutowalkResponse__rosidl_typesupport_introspection_c__get_function__CompileAutowalkResponse__failed_elements(untyped_member, index));
  const bosdyn_msgs__msg__KeyInt32ValueBosdynMsgsFailedElement * value =
    (const bosdyn_msgs__msg__KeyInt32ValueBosdynMsgsFailedElement *)(untyped_value);
  *item = *value;
}

bool bosdyn_msgs__msg__CompileAutowalkResponse__rosidl_typesupport_introspection_c__resize_function__CompileAutowalkResponse__failed_elements(
  void * untyped_member, size_t size)
{
  bosdyn_msgs__msg__KeyInt32ValueBosdynMsgsFailedElement__Sequence * member =
    (bosdyn_msgs__msg__KeyInt32ValueBosdynMsgsFailedElement__Sequence *)(untyped_member);
  bosdyn_msgs__msg__KeyInt32ValueBosdynMsgsFailedElement__Sequence__fini(member);
  return bosdyn_msgs__msg__KeyInt32ValueBosdynMsgsFailedElement__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember bosdyn_msgs__msg__CompileAutowalkResponse__rosidl_typesupport_introspection_c__CompileAutowalkResponse_message_member_array[11] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__CompileAutowalkResponse, header),  // bytes offset in struct
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
    offsetof(bosdyn_msgs__msg__CompileAutowalkResponse, header_is_set),  // bytes offset in struct
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
    offsetof(bosdyn_msgs__msg__CompileAutowalkResponse, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "root",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__CompileAutowalkResponse, root),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "root_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__CompileAutowalkResponse, root_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "element_identifiers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__CompileAutowalkResponse, element_identifiers),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__CompileAutowalkResponse__rosidl_typesupport_introspection_c__size_function__CompileAutowalkResponse__element_identifiers,  // size() function pointer
    bosdyn_msgs__msg__CompileAutowalkResponse__rosidl_typesupport_introspection_c__get_const_function__CompileAutowalkResponse__element_identifiers,  // get_const(index) function pointer
    bosdyn_msgs__msg__CompileAutowalkResponse__rosidl_typesupport_introspection_c__get_function__CompileAutowalkResponse__element_identifiers,  // get(index) function pointer
    bosdyn_msgs__msg__CompileAutowalkResponse__rosidl_typesupport_introspection_c__fetch_function__CompileAutowalkResponse__element_identifiers,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__CompileAutowalkResponse__rosidl_typesupport_introspection_c__assign_function__CompileAutowalkResponse__element_identifiers,  // assign(index, value) function pointer
    bosdyn_msgs__msg__CompileAutowalkResponse__rosidl_typesupport_introspection_c__resize_function__CompileAutowalkResponse__element_identifiers  // resize(index) function pointer
  },
  {
    "failed_elements",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__CompileAutowalkResponse, failed_elements),  // bytes offset in struct
    NULL,  // default value
    bosdyn_msgs__msg__CompileAutowalkResponse__rosidl_typesupport_introspection_c__size_function__CompileAutowalkResponse__failed_elements,  // size() function pointer
    bosdyn_msgs__msg__CompileAutowalkResponse__rosidl_typesupport_introspection_c__get_const_function__CompileAutowalkResponse__failed_elements,  // get_const(index) function pointer
    bosdyn_msgs__msg__CompileAutowalkResponse__rosidl_typesupport_introspection_c__get_function__CompileAutowalkResponse__failed_elements,  // get(index) function pointer
    bosdyn_msgs__msg__CompileAutowalkResponse__rosidl_typesupport_introspection_c__fetch_function__CompileAutowalkResponse__failed_elements,  // fetch(index, &value) function pointer
    bosdyn_msgs__msg__CompileAutowalkResponse__rosidl_typesupport_introspection_c__assign_function__CompileAutowalkResponse__failed_elements,  // assign(index, value) function pointer
    bosdyn_msgs__msg__CompileAutowalkResponse__rosidl_typesupport_introspection_c__resize_function__CompileAutowalkResponse__failed_elements  // resize(index) function pointer
  },
  {
    "docking_node",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__CompileAutowalkResponse, docking_node),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "docking_node_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__CompileAutowalkResponse, docking_node_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "loop_node",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__CompileAutowalkResponse, loop_node),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "loop_node_is_set",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs__msg__CompileAutowalkResponse, loop_node_is_set),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers bosdyn_msgs__msg__CompileAutowalkResponse__rosidl_typesupport_introspection_c__CompileAutowalkResponse_message_members = {
  "bosdyn_msgs__msg",  // message namespace
  "CompileAutowalkResponse",  // message name
  11,  // number of fields
  sizeof(bosdyn_msgs__msg__CompileAutowalkResponse),
  bosdyn_msgs__msg__CompileAutowalkResponse__rosidl_typesupport_introspection_c__CompileAutowalkResponse_message_member_array,  // message members
  bosdyn_msgs__msg__CompileAutowalkResponse__rosidl_typesupport_introspection_c__CompileAutowalkResponse_init_function,  // function to initialize message memory (memory has to be allocated)
  bosdyn_msgs__msg__CompileAutowalkResponse__rosidl_typesupport_introspection_c__CompileAutowalkResponse_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t bosdyn_msgs__msg__CompileAutowalkResponse__rosidl_typesupport_introspection_c__CompileAutowalkResponse_message_type_support_handle = {
  0,
  &bosdyn_msgs__msg__CompileAutowalkResponse__rosidl_typesupport_introspection_c__CompileAutowalkResponse_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_bosdyn_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, CompileAutowalkResponse)() {
  bosdyn_msgs__msg__CompileAutowalkResponse__rosidl_typesupport_introspection_c__CompileAutowalkResponse_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ResponseHeader)();
  bosdyn_msgs__msg__CompileAutowalkResponse__rosidl_typesupport_introspection_c__CompileAutowalkResponse_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, CompileAutowalkResponseStatus)();
  bosdyn_msgs__msg__CompileAutowalkResponse__rosidl_typesupport_introspection_c__CompileAutowalkResponse_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, Node)();
  bosdyn_msgs__msg__CompileAutowalkResponse__rosidl_typesupport_introspection_c__CompileAutowalkResponse_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, ElementIdentifiers)();
  bosdyn_msgs__msg__CompileAutowalkResponse__rosidl_typesupport_introspection_c__CompileAutowalkResponse_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, KeyInt32ValueBosdynMsgsFailedElement)();
  bosdyn_msgs__msg__CompileAutowalkResponse__rosidl_typesupport_introspection_c__CompileAutowalkResponse_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, NodeIdentifier)();
  bosdyn_msgs__msg__CompileAutowalkResponse__rosidl_typesupport_introspection_c__CompileAutowalkResponse_message_member_array[9].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, bosdyn_msgs, msg, NodeIdentifier)();
  if (!bosdyn_msgs__msg__CompileAutowalkResponse__rosidl_typesupport_introspection_c__CompileAutowalkResponse_message_type_support_handle.typesupport_identifier) {
    bosdyn_msgs__msg__CompileAutowalkResponse__rosidl_typesupport_introspection_c__CompileAutowalkResponse_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &bosdyn_msgs__msg__CompileAutowalkResponse__rosidl_typesupport_introspection_c__CompileAutowalkResponse_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
