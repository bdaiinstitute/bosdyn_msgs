// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from bosdyn_msgs:msg/FileFormatDescriptor.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "bosdyn_msgs/msg/detail/file_format_descriptor__struct.hpp"
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

void FileFormatDescriptor_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) bosdyn_msgs::msg::FileFormatDescriptor(_init);
}

void FileFormatDescriptor_fini_function(void * message_memory)
{
  auto typed_message = static_cast<bosdyn_msgs::msg::FileFormatDescriptor *>(message_memory);
  typed_message->~FileFormatDescriptor();
}

size_t size_function__FileFormatDescriptor__annotations(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bosdyn_msgs::msg::KeyStringValueString> *>(untyped_member);
  return member->size();
}

const void * get_const_function__FileFormatDescriptor__annotations(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<bosdyn_msgs::msg::KeyStringValueString> *>(untyped_member);
  return &member[index];
}

void * get_function__FileFormatDescriptor__annotations(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<bosdyn_msgs::msg::KeyStringValueString> *>(untyped_member);
  return &member[index];
}

void fetch_function__FileFormatDescriptor__annotations(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bosdyn_msgs::msg::KeyStringValueString *>(
    get_const_function__FileFormatDescriptor__annotations(untyped_member, index));
  auto & value = *reinterpret_cast<bosdyn_msgs::msg::KeyStringValueString *>(untyped_value);
  value = item;
}

void assign_function__FileFormatDescriptor__annotations(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bosdyn_msgs::msg::KeyStringValueString *>(
    get_function__FileFormatDescriptor__annotations(untyped_member, index));
  const auto & value = *reinterpret_cast<const bosdyn_msgs::msg::KeyStringValueString *>(untyped_value);
  item = value;
}

void resize_function__FileFormatDescriptor__annotations(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bosdyn_msgs::msg::KeyStringValueString> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FileFormatDescriptor_message_member_array[5] = {
  {
    "version",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::FileFormatVersion>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::FileFormatDescriptor, version),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "version_is_set",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::FileFormatDescriptor, version_is_set),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "annotations",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::KeyStringValueString>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::FileFormatDescriptor, annotations),  // bytes offset in struct
    nullptr,  // default value
    size_function__FileFormatDescriptor__annotations,  // size() function pointer
    get_const_function__FileFormatDescriptor__annotations,  // get_const(index) function pointer
    get_function__FileFormatDescriptor__annotations,  // get(index) function pointer
    fetch_function__FileFormatDescriptor__annotations,  // fetch(index, &value) function pointer
    assign_function__FileFormatDescriptor__annotations,  // assign(index, value) function pointer
    resize_function__FileFormatDescriptor__annotations  // resize(index) function pointer
  },
  {
    "checksum_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::FileFormatDescriptorCheckSumType>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::FileFormatDescriptor, checksum_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "checksum_num_bytes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::FileFormatDescriptor, checksum_num_bytes),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FileFormatDescriptor_message_members = {
  "bosdyn_msgs::msg",  // message namespace
  "FileFormatDescriptor",  // message name
  5,  // number of fields
  sizeof(bosdyn_msgs::msg::FileFormatDescriptor),
  FileFormatDescriptor_message_member_array,  // message members
  FileFormatDescriptor_init_function,  // function to initialize message memory (memory has to be allocated)
  FileFormatDescriptor_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FileFormatDescriptor_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FileFormatDescriptor_message_members,
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
get_message_type_support_handle<bosdyn_msgs::msg::FileFormatDescriptor>()
{
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::FileFormatDescriptor_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bosdyn_msgs, msg, FileFormatDescriptor)() {
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::FileFormatDescriptor_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
