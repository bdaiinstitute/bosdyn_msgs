// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from bosdyn_msgs:msg/PodTypeDescriptor.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "bosdyn_msgs/msg/detail/pod_type_descriptor__struct.hpp"
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

void PodTypeDescriptor_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) bosdyn_msgs::msg::PodTypeDescriptor(_init);
}

void PodTypeDescriptor_fini_function(void * message_memory)
{
  auto typed_message = static_cast<bosdyn_msgs::msg::PodTypeDescriptor *>(message_memory);
  typed_message->~PodTypeDescriptor();
}

size_t size_function__PodTypeDescriptor__dimension(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PodTypeDescriptor__dimension(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void * get_function__PodTypeDescriptor__dimension(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__PodTypeDescriptor__dimension(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint32_t *>(
    get_const_function__PodTypeDescriptor__dimension(untyped_member, index));
  auto & value = *reinterpret_cast<uint32_t *>(untyped_value);
  value = item;
}

void assign_function__PodTypeDescriptor__dimension(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint32_t *>(
    get_function__PodTypeDescriptor__dimension(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint32_t *>(untyped_value);
  item = value;
}

void resize_function__PodTypeDescriptor__dimension(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint32_t> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PodTypeDescriptor_message_member_array[2] = {
  {
    "pod_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::PodTypeEnum>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::PodTypeDescriptor, pod_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "dimension",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::PodTypeDescriptor, dimension),  // bytes offset in struct
    nullptr,  // default value
    size_function__PodTypeDescriptor__dimension,  // size() function pointer
    get_const_function__PodTypeDescriptor__dimension,  // get_const(index) function pointer
    get_function__PodTypeDescriptor__dimension,  // get(index) function pointer
    fetch_function__PodTypeDescriptor__dimension,  // fetch(index, &value) function pointer
    assign_function__PodTypeDescriptor__dimension,  // assign(index, value) function pointer
    resize_function__PodTypeDescriptor__dimension  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PodTypeDescriptor_message_members = {
  "bosdyn_msgs::msg",  // message namespace
  "PodTypeDescriptor",  // message name
  2,  // number of fields
  sizeof(bosdyn_msgs::msg::PodTypeDescriptor),
  PodTypeDescriptor_message_member_array,  // message members
  PodTypeDescriptor_init_function,  // function to initialize message memory (memory has to be allocated)
  PodTypeDescriptor_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PodTypeDescriptor_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PodTypeDescriptor_message_members,
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
get_message_type_support_handle<bosdyn_msgs::msg::PodTypeDescriptor>()
{
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::PodTypeDescriptor_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bosdyn_msgs, msg, PodTypeDescriptor)() {
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::PodTypeDescriptor_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
