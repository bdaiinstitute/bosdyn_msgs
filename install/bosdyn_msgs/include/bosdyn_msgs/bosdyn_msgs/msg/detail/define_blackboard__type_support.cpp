// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from bosdyn_msgs:msg/DefineBlackboard.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "bosdyn_msgs/msg/detail/define_blackboard__struct.hpp"
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

void DefineBlackboard_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) bosdyn_msgs::msg::DefineBlackboard(_init);
}

void DefineBlackboard_fini_function(void * message_memory)
{
  auto typed_message = static_cast<bosdyn_msgs::msg::DefineBlackboard *>(message_memory);
  typed_message->~DefineBlackboard();
}

size_t size_function__DefineBlackboard__blackboard_variables(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bosdyn_msgs::msg::KeyValue> *>(untyped_member);
  return member->size();
}

const void * get_const_function__DefineBlackboard__blackboard_variables(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<bosdyn_msgs::msg::KeyValue> *>(untyped_member);
  return &member[index];
}

void * get_function__DefineBlackboard__blackboard_variables(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<bosdyn_msgs::msg::KeyValue> *>(untyped_member);
  return &member[index];
}

void fetch_function__DefineBlackboard__blackboard_variables(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bosdyn_msgs::msg::KeyValue *>(
    get_const_function__DefineBlackboard__blackboard_variables(untyped_member, index));
  auto & value = *reinterpret_cast<bosdyn_msgs::msg::KeyValue *>(untyped_value);
  value = item;
}

void assign_function__DefineBlackboard__blackboard_variables(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bosdyn_msgs::msg::KeyValue *>(
    get_function__DefineBlackboard__blackboard_variables(untyped_member, index));
  const auto & value = *reinterpret_cast<const bosdyn_msgs::msg::KeyValue *>(untyped_value);
  item = value;
}

void resize_function__DefineBlackboard__blackboard_variables(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bosdyn_msgs::msg::KeyValue> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DefineBlackboard_message_member_array[3] = {
  {
    "blackboard_variables",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::KeyValue>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::DefineBlackboard, blackboard_variables),  // bytes offset in struct
    nullptr,  // default value
    size_function__DefineBlackboard__blackboard_variables,  // size() function pointer
    get_const_function__DefineBlackboard__blackboard_variables,  // get_const(index) function pointer
    get_function__DefineBlackboard__blackboard_variables,  // get(index) function pointer
    fetch_function__DefineBlackboard__blackboard_variables,  // fetch(index, &value) function pointer
    assign_function__DefineBlackboard__blackboard_variables,  // assign(index, value) function pointer
    resize_function__DefineBlackboard__blackboard_variables  // resize(index) function pointer
  },
  {
    "child",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::Node>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::DefineBlackboard, child),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "child_is_set",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::DefineBlackboard, child_is_set),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DefineBlackboard_message_members = {
  "bosdyn_msgs::msg",  // message namespace
  "DefineBlackboard",  // message name
  3,  // number of fields
  sizeof(bosdyn_msgs::msg::DefineBlackboard),
  DefineBlackboard_message_member_array,  // message members
  DefineBlackboard_init_function,  // function to initialize message memory (memory has to be allocated)
  DefineBlackboard_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DefineBlackboard_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DefineBlackboard_message_members,
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
get_message_type_support_handle<bosdyn_msgs::msg::DefineBlackboard>()
{
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::DefineBlackboard_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bosdyn_msgs, msg, DefineBlackboard)() {
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::DefineBlackboard_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
