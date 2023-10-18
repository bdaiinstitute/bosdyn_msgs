// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from bosdyn_msgs:msg/LogAnnotations.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "bosdyn_msgs/msg/detail/log_annotations__struct.hpp"
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

void LogAnnotations_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) bosdyn_msgs::msg::LogAnnotations(_init);
}

void LogAnnotations_fini_function(void * message_memory)
{
  auto typed_message = static_cast<bosdyn_msgs::msg::LogAnnotations *>(message_memory);
  typed_message->~LogAnnotations();
}

size_t size_function__LogAnnotations__text_messages(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bosdyn_msgs::msg::LogAnnotationTextMessage> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LogAnnotations__text_messages(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<bosdyn_msgs::msg::LogAnnotationTextMessage> *>(untyped_member);
  return &member[index];
}

void * get_function__LogAnnotations__text_messages(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<bosdyn_msgs::msg::LogAnnotationTextMessage> *>(untyped_member);
  return &member[index];
}

void fetch_function__LogAnnotations__text_messages(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bosdyn_msgs::msg::LogAnnotationTextMessage *>(
    get_const_function__LogAnnotations__text_messages(untyped_member, index));
  auto & value = *reinterpret_cast<bosdyn_msgs::msg::LogAnnotationTextMessage *>(untyped_value);
  value = item;
}

void assign_function__LogAnnotations__text_messages(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bosdyn_msgs::msg::LogAnnotationTextMessage *>(
    get_function__LogAnnotations__text_messages(untyped_member, index));
  const auto & value = *reinterpret_cast<const bosdyn_msgs::msg::LogAnnotationTextMessage *>(untyped_value);
  item = value;
}

void resize_function__LogAnnotations__text_messages(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bosdyn_msgs::msg::LogAnnotationTextMessage> *>(untyped_member);
  member->resize(size);
}

size_t size_function__LogAnnotations__operator_messages(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bosdyn_msgs::msg::LogAnnotationOperatorMessage> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LogAnnotations__operator_messages(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<bosdyn_msgs::msg::LogAnnotationOperatorMessage> *>(untyped_member);
  return &member[index];
}

void * get_function__LogAnnotations__operator_messages(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<bosdyn_msgs::msg::LogAnnotationOperatorMessage> *>(untyped_member);
  return &member[index];
}

void fetch_function__LogAnnotations__operator_messages(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bosdyn_msgs::msg::LogAnnotationOperatorMessage *>(
    get_const_function__LogAnnotations__operator_messages(untyped_member, index));
  auto & value = *reinterpret_cast<bosdyn_msgs::msg::LogAnnotationOperatorMessage *>(untyped_value);
  value = item;
}

void assign_function__LogAnnotations__operator_messages(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bosdyn_msgs::msg::LogAnnotationOperatorMessage *>(
    get_function__LogAnnotations__operator_messages(untyped_member, index));
  const auto & value = *reinterpret_cast<const bosdyn_msgs::msg::LogAnnotationOperatorMessage *>(untyped_value);
  item = value;
}

void resize_function__LogAnnotations__operator_messages(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bosdyn_msgs::msg::LogAnnotationOperatorMessage> *>(untyped_member);
  member->resize(size);
}

size_t size_function__LogAnnotations__blob_data(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bosdyn_msgs::msg::LogAnnotationLogBlob> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LogAnnotations__blob_data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<bosdyn_msgs::msg::LogAnnotationLogBlob> *>(untyped_member);
  return &member[index];
}

void * get_function__LogAnnotations__blob_data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<bosdyn_msgs::msg::LogAnnotationLogBlob> *>(untyped_member);
  return &member[index];
}

void fetch_function__LogAnnotations__blob_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bosdyn_msgs::msg::LogAnnotationLogBlob *>(
    get_const_function__LogAnnotations__blob_data(untyped_member, index));
  auto & value = *reinterpret_cast<bosdyn_msgs::msg::LogAnnotationLogBlob *>(untyped_value);
  value = item;
}

void assign_function__LogAnnotations__blob_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bosdyn_msgs::msg::LogAnnotationLogBlob *>(
    get_function__LogAnnotations__blob_data(untyped_member, index));
  const auto & value = *reinterpret_cast<const bosdyn_msgs::msg::LogAnnotationLogBlob *>(untyped_value);
  item = value;
}

void resize_function__LogAnnotations__blob_data(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bosdyn_msgs::msg::LogAnnotationLogBlob> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LogAnnotations_message_member_array[3] = {
  {
    "text_messages",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::LogAnnotationTextMessage>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::LogAnnotations, text_messages),  // bytes offset in struct
    nullptr,  // default value
    size_function__LogAnnotations__text_messages,  // size() function pointer
    get_const_function__LogAnnotations__text_messages,  // get_const(index) function pointer
    get_function__LogAnnotations__text_messages,  // get(index) function pointer
    fetch_function__LogAnnotations__text_messages,  // fetch(index, &value) function pointer
    assign_function__LogAnnotations__text_messages,  // assign(index, value) function pointer
    resize_function__LogAnnotations__text_messages  // resize(index) function pointer
  },
  {
    "operator_messages",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::LogAnnotationOperatorMessage>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::LogAnnotations, operator_messages),  // bytes offset in struct
    nullptr,  // default value
    size_function__LogAnnotations__operator_messages,  // size() function pointer
    get_const_function__LogAnnotations__operator_messages,  // get_const(index) function pointer
    get_function__LogAnnotations__operator_messages,  // get(index) function pointer
    fetch_function__LogAnnotations__operator_messages,  // fetch(index, &value) function pointer
    assign_function__LogAnnotations__operator_messages,  // assign(index, value) function pointer
    resize_function__LogAnnotations__operator_messages  // resize(index) function pointer
  },
  {
    "blob_data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::LogAnnotationLogBlob>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::LogAnnotations, blob_data),  // bytes offset in struct
    nullptr,  // default value
    size_function__LogAnnotations__blob_data,  // size() function pointer
    get_const_function__LogAnnotations__blob_data,  // get_const(index) function pointer
    get_function__LogAnnotations__blob_data,  // get(index) function pointer
    fetch_function__LogAnnotations__blob_data,  // fetch(index, &value) function pointer
    assign_function__LogAnnotations__blob_data,  // assign(index, value) function pointer
    resize_function__LogAnnotations__blob_data  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LogAnnotations_message_members = {
  "bosdyn_msgs::msg",  // message namespace
  "LogAnnotations",  // message name
  3,  // number of fields
  sizeof(bosdyn_msgs::msg::LogAnnotations),
  LogAnnotations_message_member_array,  // message members
  LogAnnotations_init_function,  // function to initialize message memory (memory has to be allocated)
  LogAnnotations_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LogAnnotations_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LogAnnotations_message_members,
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
get_message_type_support_handle<bosdyn_msgs::msg::LogAnnotations>()
{
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::LogAnnotations_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bosdyn_msgs, msg, LogAnnotations)() {
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::LogAnnotations_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
