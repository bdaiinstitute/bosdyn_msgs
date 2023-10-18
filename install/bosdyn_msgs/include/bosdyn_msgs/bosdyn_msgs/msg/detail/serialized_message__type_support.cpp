// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from bosdyn_msgs:msg/SerializedMessage.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "bosdyn_msgs/msg/detail/serialized_message__struct.hpp"
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

void SerializedMessage_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) bosdyn_msgs::msg::SerializedMessage(_init);
}

void SerializedMessage_fini_function(void * message_memory)
{
  auto typed_message = static_cast<bosdyn_msgs::msg::SerializedMessage *>(message_memory);
  typed_message->~SerializedMessage();
}

size_t size_function__SerializedMessage__serialized_msg(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<int8_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SerializedMessage__serialized_msg(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<int8_t> *>(untyped_member);
  return &member[index];
}

void * get_function__SerializedMessage__serialized_msg(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<int8_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__SerializedMessage__serialized_msg(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const int8_t *>(
    get_const_function__SerializedMessage__serialized_msg(untyped_member, index));
  auto & value = *reinterpret_cast<int8_t *>(untyped_value);
  value = item;
}

void assign_function__SerializedMessage__serialized_msg(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<int8_t *>(
    get_function__SerializedMessage__serialized_msg(untyped_member, index));
  const auto & value = *reinterpret_cast<const int8_t *>(untyped_value);
  item = value;
}

void resize_function__SerializedMessage__serialized_msg(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<int8_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SerializedMessage_message_member_array[1] = {
  {
    "serialized_msg",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::SerializedMessage, serialized_msg),  // bytes offset in struct
    nullptr,  // default value
    size_function__SerializedMessage__serialized_msg,  // size() function pointer
    get_const_function__SerializedMessage__serialized_msg,  // get_const(index) function pointer
    get_function__SerializedMessage__serialized_msg,  // get(index) function pointer
    fetch_function__SerializedMessage__serialized_msg,  // fetch(index, &value) function pointer
    assign_function__SerializedMessage__serialized_msg,  // assign(index, value) function pointer
    resize_function__SerializedMessage__serialized_msg  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SerializedMessage_message_members = {
  "bosdyn_msgs::msg",  // message namespace
  "SerializedMessage",  // message name
  1,  // number of fields
  sizeof(bosdyn_msgs::msg::SerializedMessage),
  SerializedMessage_message_member_array,  // message members
  SerializedMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  SerializedMessage_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SerializedMessage_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SerializedMessage_message_members,
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
get_message_type_support_handle<bosdyn_msgs::msg::SerializedMessage>()
{
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::SerializedMessage_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bosdyn_msgs, msg, SerializedMessage)() {
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::SerializedMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
