// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from bosdyn_msgs:msg/GetStatusResponse.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "bosdyn_msgs/msg/detail/get_status_response__struct.hpp"
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

void GetStatusResponse_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) bosdyn_msgs::msg::GetStatusResponse(_init);
}

void GetStatusResponse_fini_function(void * message_memory)
{
  auto typed_message = static_cast<bosdyn_msgs::msg::GetStatusResponse *>(message_memory);
  typed_message->~GetStatusResponse();
}

size_t size_function__GetStatusResponse__data_saved(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bosdyn_msgs::msg::DataIdentifier> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetStatusResponse__data_saved(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<bosdyn_msgs::msg::DataIdentifier> *>(untyped_member);
  return &member[index];
}

void * get_function__GetStatusResponse__data_saved(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<bosdyn_msgs::msg::DataIdentifier> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetStatusResponse__data_saved(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bosdyn_msgs::msg::DataIdentifier *>(
    get_const_function__GetStatusResponse__data_saved(untyped_member, index));
  auto & value = *reinterpret_cast<bosdyn_msgs::msg::DataIdentifier *>(untyped_value);
  value = item;
}

void assign_function__GetStatusResponse__data_saved(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bosdyn_msgs::msg::DataIdentifier *>(
    get_function__GetStatusResponse__data_saved(untyped_member, index));
  const auto & value = *reinterpret_cast<const bosdyn_msgs::msg::DataIdentifier *>(untyped_value);
  item = value;
}

void resize_function__GetStatusResponse__data_saved(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bosdyn_msgs::msg::DataIdentifier> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GetStatusResponse__data_errors(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bosdyn_msgs::msg::DataError> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetStatusResponse__data_errors(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<bosdyn_msgs::msg::DataError> *>(untyped_member);
  return &member[index];
}

void * get_function__GetStatusResponse__data_errors(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<bosdyn_msgs::msg::DataError> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetStatusResponse__data_errors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bosdyn_msgs::msg::DataError *>(
    get_const_function__GetStatusResponse__data_errors(untyped_member, index));
  auto & value = *reinterpret_cast<bosdyn_msgs::msg::DataError *>(untyped_value);
  value = item;
}

void assign_function__GetStatusResponse__data_errors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bosdyn_msgs::msg::DataError *>(
    get_function__GetStatusResponse__data_errors(untyped_member, index));
  const auto & value = *reinterpret_cast<const bosdyn_msgs::msg::DataError *>(untyped_value);
  item = value;
}

void resize_function__GetStatusResponse__data_errors(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bosdyn_msgs::msg::DataError> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GetStatusResponse__service_errors(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bosdyn_msgs::msg::PluginServiceError> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetStatusResponse__service_errors(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<bosdyn_msgs::msg::PluginServiceError> *>(untyped_member);
  return &member[index];
}

void * get_function__GetStatusResponse__service_errors(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<bosdyn_msgs::msg::PluginServiceError> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetStatusResponse__service_errors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bosdyn_msgs::msg::PluginServiceError *>(
    get_const_function__GetStatusResponse__service_errors(untyped_member, index));
  auto & value = *reinterpret_cast<bosdyn_msgs::msg::PluginServiceError *>(untyped_value);
  value = item;
}

void assign_function__GetStatusResponse__service_errors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bosdyn_msgs::msg::PluginServiceError *>(
    get_function__GetStatusResponse__service_errors(untyped_member, index));
  const auto & value = *reinterpret_cast<const bosdyn_msgs::msg::PluginServiceError *>(untyped_value);
  item = value;
}

void resize_function__GetStatusResponse__service_errors(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bosdyn_msgs::msg::PluginServiceError> *>(untyped_member);
  member->resize(size);
}

size_t size_function__GetStatusResponse__network_compute_errors(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bosdyn_msgs::msg::NetworkComputeError> *>(untyped_member);
  return member->size();
}

const void * get_const_function__GetStatusResponse__network_compute_errors(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<bosdyn_msgs::msg::NetworkComputeError> *>(untyped_member);
  return &member[index];
}

void * get_function__GetStatusResponse__network_compute_errors(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<bosdyn_msgs::msg::NetworkComputeError> *>(untyped_member);
  return &member[index];
}

void fetch_function__GetStatusResponse__network_compute_errors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bosdyn_msgs::msg::NetworkComputeError *>(
    get_const_function__GetStatusResponse__network_compute_errors(untyped_member, index));
  auto & value = *reinterpret_cast<bosdyn_msgs::msg::NetworkComputeError *>(untyped_value);
  value = item;
}

void assign_function__GetStatusResponse__network_compute_errors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bosdyn_msgs::msg::NetworkComputeError *>(
    get_function__GetStatusResponse__network_compute_errors(untyped_member, index));
  const auto & value = *reinterpret_cast<const bosdyn_msgs::msg::NetworkComputeError *>(untyped_value);
  item = value;
}

void resize_function__GetStatusResponse__network_compute_errors(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bosdyn_msgs::msg::NetworkComputeError> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetStatusResponse_message_member_array[7] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::ResponseHeader>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::GetStatusResponse, header),  // bytes offset in struct
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
    offsetof(bosdyn_msgs::msg::GetStatusResponse, header_is_set),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::GetStatusResponseStatus>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::GetStatusResponse, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "data_saved",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::DataIdentifier>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::GetStatusResponse, data_saved),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetStatusResponse__data_saved,  // size() function pointer
    get_const_function__GetStatusResponse__data_saved,  // get_const(index) function pointer
    get_function__GetStatusResponse__data_saved,  // get(index) function pointer
    fetch_function__GetStatusResponse__data_saved,  // fetch(index, &value) function pointer
    assign_function__GetStatusResponse__data_saved,  // assign(index, value) function pointer
    resize_function__GetStatusResponse__data_saved  // resize(index) function pointer
  },
  {
    "data_errors",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::DataError>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::GetStatusResponse, data_errors),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetStatusResponse__data_errors,  // size() function pointer
    get_const_function__GetStatusResponse__data_errors,  // get_const(index) function pointer
    get_function__GetStatusResponse__data_errors,  // get(index) function pointer
    fetch_function__GetStatusResponse__data_errors,  // fetch(index, &value) function pointer
    assign_function__GetStatusResponse__data_errors,  // assign(index, value) function pointer
    resize_function__GetStatusResponse__data_errors  // resize(index) function pointer
  },
  {
    "service_errors",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::PluginServiceError>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::GetStatusResponse, service_errors),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetStatusResponse__service_errors,  // size() function pointer
    get_const_function__GetStatusResponse__service_errors,  // get_const(index) function pointer
    get_function__GetStatusResponse__service_errors,  // get(index) function pointer
    fetch_function__GetStatusResponse__service_errors,  // fetch(index, &value) function pointer
    assign_function__GetStatusResponse__service_errors,  // assign(index, value) function pointer
    resize_function__GetStatusResponse__service_errors  // resize(index) function pointer
  },
  {
    "network_compute_errors",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::NetworkComputeError>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::GetStatusResponse, network_compute_errors),  // bytes offset in struct
    nullptr,  // default value
    size_function__GetStatusResponse__network_compute_errors,  // size() function pointer
    get_const_function__GetStatusResponse__network_compute_errors,  // get_const(index) function pointer
    get_function__GetStatusResponse__network_compute_errors,  // get(index) function pointer
    fetch_function__GetStatusResponse__network_compute_errors,  // fetch(index, &value) function pointer
    assign_function__GetStatusResponse__network_compute_errors,  // assign(index, value) function pointer
    resize_function__GetStatusResponse__network_compute_errors  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetStatusResponse_message_members = {
  "bosdyn_msgs::msg",  // message namespace
  "GetStatusResponse",  // message name
  7,  // number of fields
  sizeof(bosdyn_msgs::msg::GetStatusResponse),
  GetStatusResponse_message_member_array,  // message members
  GetStatusResponse_init_function,  // function to initialize message memory (memory has to be allocated)
  GetStatusResponse_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetStatusResponse_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetStatusResponse_message_members,
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
get_message_type_support_handle<bosdyn_msgs::msg::GetStatusResponse>()
{
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::GetStatusResponse_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bosdyn_msgs, msg, GetStatusResponse)() {
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::GetStatusResponse_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
