// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from bosdyn_msgs:msg/InverseKinematicsRequestOneOfToolSpecification.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "bosdyn_msgs/msg/detail/inverse_kinematics_request_one_of_tool_specification__struct.hpp"
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

void InverseKinematicsRequestOneOfToolSpecification_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) bosdyn_msgs::msg::InverseKinematicsRequestOneOfToolSpecification(_init);
}

void InverseKinematicsRequestOneOfToolSpecification_fini_function(void * message_memory)
{
  auto typed_message = static_cast<bosdyn_msgs::msg::InverseKinematicsRequestOneOfToolSpecification *>(message_memory);
  typed_message->~InverseKinematicsRequestOneOfToolSpecification();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember InverseKinematicsRequestOneOfToolSpecification_message_member_array[3] = {
  {
    "wrist_mounted_tool",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::InverseKinematicsRequestWristMountedTool>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::InverseKinematicsRequestOneOfToolSpecification, wrist_mounted_tool),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "body_mounted_tool",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::InverseKinematicsRequestBodyMountedTool>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::InverseKinematicsRequestOneOfToolSpecification, body_mounted_tool),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tool_specification_choice",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::InverseKinematicsRequestOneOfToolSpecification, tool_specification_choice),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers InverseKinematicsRequestOneOfToolSpecification_message_members = {
  "bosdyn_msgs::msg",  // message namespace
  "InverseKinematicsRequestOneOfToolSpecification",  // message name
  3,  // number of fields
  sizeof(bosdyn_msgs::msg::InverseKinematicsRequestOneOfToolSpecification),
  InverseKinematicsRequestOneOfToolSpecification_message_member_array,  // message members
  InverseKinematicsRequestOneOfToolSpecification_init_function,  // function to initialize message memory (memory has to be allocated)
  InverseKinematicsRequestOneOfToolSpecification_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t InverseKinematicsRequestOneOfToolSpecification_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &InverseKinematicsRequestOneOfToolSpecification_message_members,
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
get_message_type_support_handle<bosdyn_msgs::msg::InverseKinematicsRequestOneOfToolSpecification>()
{
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::InverseKinematicsRequestOneOfToolSpecification_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bosdyn_msgs, msg, InverseKinematicsRequestOneOfToolSpecification)() {
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::InverseKinematicsRequestOneOfToolSpecification_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
