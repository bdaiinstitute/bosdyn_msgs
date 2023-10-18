// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from bosdyn_msgs:msg/StoreMetadataOneOfData.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "bosdyn_msgs/msg/detail/store_metadata_one_of_data__struct.hpp"
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

void StoreMetadataOneOfData_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) bosdyn_msgs::msg::StoreMetadataOneOfData(_init);
}

void StoreMetadataOneOfData_fini_function(void * message_memory)
{
  auto typed_message = static_cast<bosdyn_msgs::msg::StoreMetadataOneOfData *>(message_memory);
  typed_message->~StoreMetadataOneOfData();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember StoreMetadataOneOfData_message_member_array[2] = {
  {
    "metadata_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::StoreMetadataOneOfData, metadata_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "data_choice",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::StoreMetadataOneOfData, data_choice),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers StoreMetadataOneOfData_message_members = {
  "bosdyn_msgs::msg",  // message namespace
  "StoreMetadataOneOfData",  // message name
  2,  // number of fields
  sizeof(bosdyn_msgs::msg::StoreMetadataOneOfData),
  StoreMetadataOneOfData_message_member_array,  // message members
  StoreMetadataOneOfData_init_function,  // function to initialize message memory (memory has to be allocated)
  StoreMetadataOneOfData_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t StoreMetadataOneOfData_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &StoreMetadataOneOfData_message_members,
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
get_message_type_support_handle<bosdyn_msgs::msg::StoreMetadataOneOfData>()
{
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::StoreMetadataOneOfData_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bosdyn_msgs, msg, StoreMetadataOneOfData)() {
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::StoreMetadataOneOfData_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
