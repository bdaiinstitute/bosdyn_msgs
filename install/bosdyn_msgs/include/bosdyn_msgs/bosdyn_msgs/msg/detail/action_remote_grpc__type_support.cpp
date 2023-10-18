// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from bosdyn_msgs:msg/ActionRemoteGrpc.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "bosdyn_msgs/msg/detail/action_remote_grpc__struct.hpp"
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

void ActionRemoteGrpc_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) bosdyn_msgs::msg::ActionRemoteGrpc(_init);
}

void ActionRemoteGrpc_fini_function(void * message_memory)
{
  auto typed_message = static_cast<bosdyn_msgs::msg::ActionRemoteGrpc *>(message_memory);
  typed_message->~ActionRemoteGrpc();
}

size_t size_function__ActionRemoteGrpc__lease_resources(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ActionRemoteGrpc__lease_resources(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__ActionRemoteGrpc__lease_resources(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__ActionRemoteGrpc__lease_resources(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__ActionRemoteGrpc__lease_resources(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__ActionRemoteGrpc__lease_resources(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__ActionRemoteGrpc__lease_resources(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__ActionRemoteGrpc__lease_resources(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ActionRemoteGrpc__record_time_images(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bosdyn_msgs::msg::ImageCaptureAndSource> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ActionRemoteGrpc__record_time_images(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<bosdyn_msgs::msg::ImageCaptureAndSource> *>(untyped_member);
  return &member[index];
}

void * get_function__ActionRemoteGrpc__record_time_images(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<bosdyn_msgs::msg::ImageCaptureAndSource> *>(untyped_member);
  return &member[index];
}

void fetch_function__ActionRemoteGrpc__record_time_images(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bosdyn_msgs::msg::ImageCaptureAndSource *>(
    get_const_function__ActionRemoteGrpc__record_time_images(untyped_member, index));
  auto & value = *reinterpret_cast<bosdyn_msgs::msg::ImageCaptureAndSource *>(untyped_value);
  value = item;
}

void assign_function__ActionRemoteGrpc__record_time_images(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bosdyn_msgs::msg::ImageCaptureAndSource *>(
    get_function__ActionRemoteGrpc__record_time_images(untyped_member, index));
  const auto & value = *reinterpret_cast<const bosdyn_msgs::msg::ImageCaptureAndSource *>(untyped_value);
  item = value;
}

void resize_function__ActionRemoteGrpc__record_time_images(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bosdyn_msgs::msg::ImageCaptureAndSource> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ActionRemoteGrpc_message_member_array[7] = {
  {
    "service_name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::ActionRemoteGrpc, service_name),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "rpc_timeout",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Duration>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::ActionRemoteGrpc, rpc_timeout),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "rpc_timeout_is_set",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::ActionRemoteGrpc, rpc_timeout_is_set),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lease_resources",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::ActionRemoteGrpc, lease_resources),  // bytes offset in struct
    nullptr,  // default value
    size_function__ActionRemoteGrpc__lease_resources,  // size() function pointer
    get_const_function__ActionRemoteGrpc__lease_resources,  // get_const(index) function pointer
    get_function__ActionRemoteGrpc__lease_resources,  // get(index) function pointer
    fetch_function__ActionRemoteGrpc__lease_resources,  // fetch(index, &value) function pointer
    assign_function__ActionRemoteGrpc__lease_resources,  // assign(index, value) function pointer
    resize_function__ActionRemoteGrpc__lease_resources  // resize(index) function pointer
  },
  {
    "parameters",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::CustomParamCollection>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::ActionRemoteGrpc, parameters),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "parameters_is_set",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::ActionRemoteGrpc, parameters_is_set),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "record_time_images",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::ImageCaptureAndSource>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::ActionRemoteGrpc, record_time_images),  // bytes offset in struct
    nullptr,  // default value
    size_function__ActionRemoteGrpc__record_time_images,  // size() function pointer
    get_const_function__ActionRemoteGrpc__record_time_images,  // get_const(index) function pointer
    get_function__ActionRemoteGrpc__record_time_images,  // get(index) function pointer
    fetch_function__ActionRemoteGrpc__record_time_images,  // fetch(index, &value) function pointer
    assign_function__ActionRemoteGrpc__record_time_images,  // assign(index, value) function pointer
    resize_function__ActionRemoteGrpc__record_time_images  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ActionRemoteGrpc_message_members = {
  "bosdyn_msgs::msg",  // message namespace
  "ActionRemoteGrpc",  // message name
  7,  // number of fields
  sizeof(bosdyn_msgs::msg::ActionRemoteGrpc),
  ActionRemoteGrpc_message_member_array,  // message members
  ActionRemoteGrpc_init_function,  // function to initialize message memory (memory has to be allocated)
  ActionRemoteGrpc_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ActionRemoteGrpc_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ActionRemoteGrpc_message_members,
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
get_message_type_support_handle<bosdyn_msgs::msg::ActionRemoteGrpc>()
{
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::ActionRemoteGrpc_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bosdyn_msgs, msg, ActionRemoteGrpc)() {
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::ActionRemoteGrpc_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
