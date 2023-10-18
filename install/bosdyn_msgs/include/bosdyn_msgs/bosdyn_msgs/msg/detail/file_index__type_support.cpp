// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from bosdyn_msgs:msg/FileIndex.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "bosdyn_msgs/msg/detail/file_index__struct.hpp"
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

void FileIndex_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) bosdyn_msgs::msg::FileIndex(_init);
}

void FileIndex_fini_function(void * message_memory)
{
  auto typed_message = static_cast<bosdyn_msgs::msg::FileIndex *>(message_memory);
  typed_message->~FileIndex();
}

size_t size_function__FileIndex__series_identifiers(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bosdyn_msgs::msg::SeriesIdentifier> *>(untyped_member);
  return member->size();
}

const void * get_const_function__FileIndex__series_identifiers(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<bosdyn_msgs::msg::SeriesIdentifier> *>(untyped_member);
  return &member[index];
}

void * get_function__FileIndex__series_identifiers(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<bosdyn_msgs::msg::SeriesIdentifier> *>(untyped_member);
  return &member[index];
}

void fetch_function__FileIndex__series_identifiers(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bosdyn_msgs::msg::SeriesIdentifier *>(
    get_const_function__FileIndex__series_identifiers(untyped_member, index));
  auto & value = *reinterpret_cast<bosdyn_msgs::msg::SeriesIdentifier *>(untyped_value);
  value = item;
}

void assign_function__FileIndex__series_identifiers(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bosdyn_msgs::msg::SeriesIdentifier *>(
    get_function__FileIndex__series_identifiers(untyped_member, index));
  const auto & value = *reinterpret_cast<const bosdyn_msgs::msg::SeriesIdentifier *>(untyped_value);
  item = value;
}

void resize_function__FileIndex__series_identifiers(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bosdyn_msgs::msg::SeriesIdentifier> *>(untyped_member);
  member->resize(size);
}

size_t size_function__FileIndex__series_block_index_offsets(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint64_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__FileIndex__series_block_index_offsets(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint64_t> *>(untyped_member);
  return &member[index];
}

void * get_function__FileIndex__series_block_index_offsets(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint64_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__FileIndex__series_block_index_offsets(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint64_t *>(
    get_const_function__FileIndex__series_block_index_offsets(untyped_member, index));
  auto & value = *reinterpret_cast<uint64_t *>(untyped_value);
  value = item;
}

void assign_function__FileIndex__series_block_index_offsets(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint64_t *>(
    get_function__FileIndex__series_block_index_offsets(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint64_t *>(untyped_value);
  item = value;
}

void resize_function__FileIndex__series_block_index_offsets(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint64_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__FileIndex__series_identifier_hashes(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint64_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__FileIndex__series_identifier_hashes(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint64_t> *>(untyped_member);
  return &member[index];
}

void * get_function__FileIndex__series_identifier_hashes(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint64_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__FileIndex__series_identifier_hashes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint64_t *>(
    get_const_function__FileIndex__series_identifier_hashes(untyped_member, index));
  auto & value = *reinterpret_cast<uint64_t *>(untyped_value);
  value = item;
}

void assign_function__FileIndex__series_identifier_hashes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint64_t *>(
    get_function__FileIndex__series_identifier_hashes(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint64_t *>(untyped_value);
  item = value;
}

void resize_function__FileIndex__series_identifier_hashes(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint64_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FileIndex_message_member_array[3] = {
  {
    "series_identifiers",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::SeriesIdentifier>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::FileIndex, series_identifiers),  // bytes offset in struct
    nullptr,  // default value
    size_function__FileIndex__series_identifiers,  // size() function pointer
    get_const_function__FileIndex__series_identifiers,  // get_const(index) function pointer
    get_function__FileIndex__series_identifiers,  // get(index) function pointer
    fetch_function__FileIndex__series_identifiers,  // fetch(index, &value) function pointer
    assign_function__FileIndex__series_identifiers,  // assign(index, value) function pointer
    resize_function__FileIndex__series_identifiers  // resize(index) function pointer
  },
  {
    "series_block_index_offsets",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::FileIndex, series_block_index_offsets),  // bytes offset in struct
    nullptr,  // default value
    size_function__FileIndex__series_block_index_offsets,  // size() function pointer
    get_const_function__FileIndex__series_block_index_offsets,  // get_const(index) function pointer
    get_function__FileIndex__series_block_index_offsets,  // get(index) function pointer
    fetch_function__FileIndex__series_block_index_offsets,  // fetch(index, &value) function pointer
    assign_function__FileIndex__series_block_index_offsets,  // assign(index, value) function pointer
    resize_function__FileIndex__series_block_index_offsets  // resize(index) function pointer
  },
  {
    "series_identifier_hashes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::FileIndex, series_identifier_hashes),  // bytes offset in struct
    nullptr,  // default value
    size_function__FileIndex__series_identifier_hashes,  // size() function pointer
    get_const_function__FileIndex__series_identifier_hashes,  // get_const(index) function pointer
    get_function__FileIndex__series_identifier_hashes,  // get(index) function pointer
    fetch_function__FileIndex__series_identifier_hashes,  // fetch(index, &value) function pointer
    assign_function__FileIndex__series_identifier_hashes,  // assign(index, value) function pointer
    resize_function__FileIndex__series_identifier_hashes  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FileIndex_message_members = {
  "bosdyn_msgs::msg",  // message namespace
  "FileIndex",  // message name
  3,  // number of fields
  sizeof(bosdyn_msgs::msg::FileIndex),
  FileIndex_message_member_array,  // message members
  FileIndex_init_function,  // function to initialize message memory (memory has to be allocated)
  FileIndex_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FileIndex_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FileIndex_message_members,
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
get_message_type_support_handle<bosdyn_msgs::msg::FileIndex>()
{
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::FileIndex_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bosdyn_msgs, msg, FileIndex)() {
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::FileIndex_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
