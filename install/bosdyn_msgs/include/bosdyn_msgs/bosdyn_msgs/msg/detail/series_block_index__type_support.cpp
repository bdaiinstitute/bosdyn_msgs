// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from bosdyn_msgs:msg/SeriesBlockIndex.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "bosdyn_msgs/msg/detail/series_block_index__struct.hpp"
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

void SeriesBlockIndex_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) bosdyn_msgs::msg::SeriesBlockIndex(_init);
}

void SeriesBlockIndex_fini_function(void * message_memory)
{
  auto typed_message = static_cast<bosdyn_msgs::msg::SeriesBlockIndex *>(message_memory);
  typed_message->~SeriesBlockIndex();
}

size_t size_function__SeriesBlockIndex__block_entries(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bosdyn_msgs::msg::SeriesBlockIndexBlockEntry> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SeriesBlockIndex__block_entries(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<bosdyn_msgs::msg::SeriesBlockIndexBlockEntry> *>(untyped_member);
  return &member[index];
}

void * get_function__SeriesBlockIndex__block_entries(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<bosdyn_msgs::msg::SeriesBlockIndexBlockEntry> *>(untyped_member);
  return &member[index];
}

void fetch_function__SeriesBlockIndex__block_entries(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bosdyn_msgs::msg::SeriesBlockIndexBlockEntry *>(
    get_const_function__SeriesBlockIndex__block_entries(untyped_member, index));
  auto & value = *reinterpret_cast<bosdyn_msgs::msg::SeriesBlockIndexBlockEntry *>(untyped_value);
  value = item;
}

void assign_function__SeriesBlockIndex__block_entries(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bosdyn_msgs::msg::SeriesBlockIndexBlockEntry *>(
    get_function__SeriesBlockIndex__block_entries(untyped_member, index));
  const auto & value = *reinterpret_cast<const bosdyn_msgs::msg::SeriesBlockIndexBlockEntry *>(untyped_value);
  item = value;
}

void resize_function__SeriesBlockIndex__block_entries(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bosdyn_msgs::msg::SeriesBlockIndexBlockEntry> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SeriesBlockIndex_message_member_array[4] = {
  {
    "series_index",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::SeriesBlockIndex, series_index),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "descriptor_file_offset",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::SeriesBlockIndex, descriptor_file_offset),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "block_entries",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::SeriesBlockIndexBlockEntry>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::SeriesBlockIndex, block_entries),  // bytes offset in struct
    nullptr,  // default value
    size_function__SeriesBlockIndex__block_entries,  // size() function pointer
    get_const_function__SeriesBlockIndex__block_entries,  // get_const(index) function pointer
    get_function__SeriesBlockIndex__block_entries,  // get(index) function pointer
    fetch_function__SeriesBlockIndex__block_entries,  // fetch(index, &value) function pointer
    assign_function__SeriesBlockIndex__block_entries,  // assign(index, value) function pointer
    resize_function__SeriesBlockIndex__block_entries  // resize(index) function pointer
  },
  {
    "total_bytes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::SeriesBlockIndex, total_bytes),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SeriesBlockIndex_message_members = {
  "bosdyn_msgs::msg",  // message namespace
  "SeriesBlockIndex",  // message name
  4,  // number of fields
  sizeof(bosdyn_msgs::msg::SeriesBlockIndex),
  SeriesBlockIndex_message_member_array,  // message members
  SeriesBlockIndex_init_function,  // function to initialize message memory (memory has to be allocated)
  SeriesBlockIndex_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SeriesBlockIndex_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SeriesBlockIndex_message_members,
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
get_message_type_support_handle<bosdyn_msgs::msg::SeriesBlockIndex>()
{
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::SeriesBlockIndex_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bosdyn_msgs, msg, SeriesBlockIndex)() {
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::SeriesBlockIndex_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
