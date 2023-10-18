// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from bosdyn_msgs:msg/ListServiceEntriesResponse.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "bosdyn_msgs/msg/detail/list_service_entries_response__struct.hpp"
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

void ListServiceEntriesResponse_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) bosdyn_msgs::msg::ListServiceEntriesResponse(_init);
}

void ListServiceEntriesResponse_fini_function(void * message_memory)
{
  auto typed_message = static_cast<bosdyn_msgs::msg::ListServiceEntriesResponse *>(message_memory);
  typed_message->~ListServiceEntriesResponse();
}

size_t size_function__ListServiceEntriesResponse__service_entries(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bosdyn_msgs::msg::ServiceEntry> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ListServiceEntriesResponse__service_entries(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<bosdyn_msgs::msg::ServiceEntry> *>(untyped_member);
  return &member[index];
}

void * get_function__ListServiceEntriesResponse__service_entries(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<bosdyn_msgs::msg::ServiceEntry> *>(untyped_member);
  return &member[index];
}

void fetch_function__ListServiceEntriesResponse__service_entries(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bosdyn_msgs::msg::ServiceEntry *>(
    get_const_function__ListServiceEntriesResponse__service_entries(untyped_member, index));
  auto & value = *reinterpret_cast<bosdyn_msgs::msg::ServiceEntry *>(untyped_value);
  value = item;
}

void assign_function__ListServiceEntriesResponse__service_entries(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bosdyn_msgs::msg::ServiceEntry *>(
    get_function__ListServiceEntriesResponse__service_entries(untyped_member, index));
  const auto & value = *reinterpret_cast<const bosdyn_msgs::msg::ServiceEntry *>(untyped_value);
  item = value;
}

void resize_function__ListServiceEntriesResponse__service_entries(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bosdyn_msgs::msg::ServiceEntry> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ListServiceEntriesResponse_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::ResponseHeader>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::ListServiceEntriesResponse, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "header_is_set",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::ListServiceEntriesResponse, header_is_set),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "service_entries",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::ServiceEntry>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::ListServiceEntriesResponse, service_entries),  // bytes offset in struct
    nullptr,  // default value
    size_function__ListServiceEntriesResponse__service_entries,  // size() function pointer
    get_const_function__ListServiceEntriesResponse__service_entries,  // get_const(index) function pointer
    get_function__ListServiceEntriesResponse__service_entries,  // get(index) function pointer
    fetch_function__ListServiceEntriesResponse__service_entries,  // fetch(index, &value) function pointer
    assign_function__ListServiceEntriesResponse__service_entries,  // assign(index, value) function pointer
    resize_function__ListServiceEntriesResponse__service_entries  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ListServiceEntriesResponse_message_members = {
  "bosdyn_msgs::msg",  // message namespace
  "ListServiceEntriesResponse",  // message name
  3,  // number of fields
  sizeof(bosdyn_msgs::msg::ListServiceEntriesResponse),
  ListServiceEntriesResponse_message_member_array,  // message members
  ListServiceEntriesResponse_init_function,  // function to initialize message memory (memory has to be allocated)
  ListServiceEntriesResponse_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ListServiceEntriesResponse_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ListServiceEntriesResponse_message_members,
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
get_message_type_support_handle<bosdyn_msgs::msg::ListServiceEntriesResponse>()
{
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::ListServiceEntriesResponse_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bosdyn_msgs, msg, ListServiceEntriesResponse)() {
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::ListServiceEntriesResponse_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
