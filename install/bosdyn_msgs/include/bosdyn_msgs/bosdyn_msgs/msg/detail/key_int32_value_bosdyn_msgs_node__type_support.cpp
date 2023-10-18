// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from bosdyn_msgs:msg/KeyInt32ValueBosdynMsgsNode.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "bosdyn_msgs/msg/detail/key_int32_value_bosdyn_msgs_node__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace bosdyn_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void KeyInt32ValueBosdynMsgsNode_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) bosdyn_msgs::msg::KeyInt32ValueBosdynMsgsNode(_init);
}

void KeyInt32ValueBosdynMsgsNode_fini_function(void * message_memory)
{
  auto typed_message = static_cast<bosdyn_msgs::msg::KeyInt32ValueBosdynMsgsNode *>(message_memory);
  typed_message->~KeyInt32ValueBosdynMsgsNode();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember KeyInt32ValueBosdynMsgsNode_message_member_array[2] = {
  {
    "key",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::KeyInt32ValueBosdynMsgsNode, key),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::Node>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::KeyInt32ValueBosdynMsgsNode, value),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers KeyInt32ValueBosdynMsgsNode_message_members = {
  "bosdyn_msgs::msg",  // message namespace
  "KeyInt32ValueBosdynMsgsNode",  // message name
  2,  // number of fields
  sizeof(bosdyn_msgs::msg::KeyInt32ValueBosdynMsgsNode),
  KeyInt32ValueBosdynMsgsNode_message_member_array,  // message members
  KeyInt32ValueBosdynMsgsNode_init_function,  // function to initialize message memory (memory has to be allocated)
  KeyInt32ValueBosdynMsgsNode_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t KeyInt32ValueBosdynMsgsNode_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &KeyInt32ValueBosdynMsgsNode_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace bosdyn_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<bosdyn_msgs::msg::KeyInt32ValueBosdynMsgsNode>()
{
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::KeyInt32ValueBosdynMsgsNode_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bosdyn_msgs, msg, KeyInt32ValueBosdynMsgsNode)() {
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::KeyInt32ValueBosdynMsgsNode_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
