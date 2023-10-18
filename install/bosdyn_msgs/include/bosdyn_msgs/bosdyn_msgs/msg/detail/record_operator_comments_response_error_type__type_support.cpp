// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from bosdyn_msgs:msg/RecordOperatorCommentsResponseErrorType.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "bosdyn_msgs/msg/detail/record_operator_comments_response_error_type__struct.hpp"
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

void RecordOperatorCommentsResponseErrorType_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) bosdyn_msgs::msg::RecordOperatorCommentsResponseErrorType(_init);
}

void RecordOperatorCommentsResponseErrorType_fini_function(void * message_memory)
{
  auto typed_message = static_cast<bosdyn_msgs::msg::RecordOperatorCommentsResponseErrorType *>(message_memory);
  typed_message->~RecordOperatorCommentsResponseErrorType();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RecordOperatorCommentsResponseErrorType_message_member_array[1] = {
  {
    "value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::RecordOperatorCommentsResponseErrorType, value),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RecordOperatorCommentsResponseErrorType_message_members = {
  "bosdyn_msgs::msg",  // message namespace
  "RecordOperatorCommentsResponseErrorType",  // message name
  1,  // number of fields
  sizeof(bosdyn_msgs::msg::RecordOperatorCommentsResponseErrorType),
  RecordOperatorCommentsResponseErrorType_message_member_array,  // message members
  RecordOperatorCommentsResponseErrorType_init_function,  // function to initialize message memory (memory has to be allocated)
  RecordOperatorCommentsResponseErrorType_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RecordOperatorCommentsResponseErrorType_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RecordOperatorCommentsResponseErrorType_message_members,
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
get_message_type_support_handle<bosdyn_msgs::msg::RecordOperatorCommentsResponseErrorType>()
{
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::RecordOperatorCommentsResponseErrorType_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bosdyn_msgs, msg, RecordOperatorCommentsResponseErrorType)() {
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::RecordOperatorCommentsResponseErrorType_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
