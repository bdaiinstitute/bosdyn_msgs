// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from bosdyn_msgs:msg/OneOfParam.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "bosdyn_msgs/msg/detail/one_of_param__struct.hpp"
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

void OneOfParam_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) bosdyn_msgs::msg::OneOfParam(_init);
}

void OneOfParam_fini_function(void * message_memory)
{
  auto typed_message = static_cast<bosdyn_msgs::msg::OneOfParam *>(message_memory);
  typed_message->~OneOfParam();
}

size_t size_function__OneOfParam__values(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bosdyn_msgs::msg::KeyStringValueBosdynMsgsSerializedMessage> *>(untyped_member);
  return member->size();
}

const void * get_const_function__OneOfParam__values(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<bosdyn_msgs::msg::KeyStringValueBosdynMsgsSerializedMessage> *>(untyped_member);
  return &member[index];
}

void * get_function__OneOfParam__values(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<bosdyn_msgs::msg::KeyStringValueBosdynMsgsSerializedMessage> *>(untyped_member);
  return &member[index];
}

void fetch_function__OneOfParam__values(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bosdyn_msgs::msg::KeyStringValueBosdynMsgsSerializedMessage *>(
    get_const_function__OneOfParam__values(untyped_member, index));
  auto & value = *reinterpret_cast<bosdyn_msgs::msg::KeyStringValueBosdynMsgsSerializedMessage *>(untyped_value);
  value = item;
}

void assign_function__OneOfParam__values(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bosdyn_msgs::msg::KeyStringValueBosdynMsgsSerializedMessage *>(
    get_function__OneOfParam__values(untyped_member, index));
  const auto & value = *reinterpret_cast<const bosdyn_msgs::msg::KeyStringValueBosdynMsgsSerializedMessage *>(untyped_value);
  item = value;
}

void resize_function__OneOfParam__values(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bosdyn_msgs::msg::KeyStringValueBosdynMsgsSerializedMessage> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember OneOfParam_message_member_array[2] = {
  {
    "key",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::OneOfParam, key),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "values",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::KeyStringValueBosdynMsgsSerializedMessage>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::OneOfParam, values),  // bytes offset in struct
    nullptr,  // default value
    size_function__OneOfParam__values,  // size() function pointer
    get_const_function__OneOfParam__values,  // get_const(index) function pointer
    get_function__OneOfParam__values,  // get(index) function pointer
    fetch_function__OneOfParam__values,  // fetch(index, &value) function pointer
    assign_function__OneOfParam__values,  // assign(index, value) function pointer
    resize_function__OneOfParam__values  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers OneOfParam_message_members = {
  "bosdyn_msgs::msg",  // message namespace
  "OneOfParam",  // message name
  2,  // number of fields
  sizeof(bosdyn_msgs::msg::OneOfParam),
  OneOfParam_message_member_array,  // message members
  OneOfParam_init_function,  // function to initialize message memory (memory has to be allocated)
  OneOfParam_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t OneOfParam_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &OneOfParam_message_members,
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
get_message_type_support_handle<bosdyn_msgs::msg::OneOfParam>()
{
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::OneOfParam_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bosdyn_msgs, msg, OneOfParam)() {
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::OneOfParam_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
