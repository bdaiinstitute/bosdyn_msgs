// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from bosdyn_msgs:msg/ServiceEntryOneOfServiceType.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "bosdyn_msgs/msg/detail/service_entry_one_of_service_type__struct.hpp"
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

void ServiceEntryOneOfServiceType_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) bosdyn_msgs::msg::ServiceEntryOneOfServiceType(_init);
}

void ServiceEntryOneOfServiceType_fini_function(void * message_memory)
{
  auto typed_message = static_cast<bosdyn_msgs::msg::ServiceEntryOneOfServiceType *>(message_memory);
  typed_message->~ServiceEntryOneOfServiceType();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ServiceEntryOneOfServiceType_message_member_array[2] = {
  {
    "type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::ServiceEntryOneOfServiceType, type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "service_type_choice",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::ServiceEntryOneOfServiceType, service_type_choice),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ServiceEntryOneOfServiceType_message_members = {
  "bosdyn_msgs::msg",  // message namespace
  "ServiceEntryOneOfServiceType",  // message name
  2,  // number of fields
  sizeof(bosdyn_msgs::msg::ServiceEntryOneOfServiceType),
  ServiceEntryOneOfServiceType_message_member_array,  // message members
  ServiceEntryOneOfServiceType_init_function,  // function to initialize message memory (memory has to be allocated)
  ServiceEntryOneOfServiceType_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ServiceEntryOneOfServiceType_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ServiceEntryOneOfServiceType_message_members,
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
get_message_type_support_handle<bosdyn_msgs::msg::ServiceEntryOneOfServiceType>()
{
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::ServiceEntryOneOfServiceType_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bosdyn_msgs, msg, ServiceEntryOneOfServiceType)() {
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::ServiceEntryOneOfServiceType_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
