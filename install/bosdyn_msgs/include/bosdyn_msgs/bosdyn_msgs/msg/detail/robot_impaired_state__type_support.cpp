// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from bosdyn_msgs:msg/RobotImpairedState.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "bosdyn_msgs/msg/detail/robot_impaired_state__struct.hpp"
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

void RobotImpairedState_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) bosdyn_msgs::msg::RobotImpairedState(_init);
}

void RobotImpairedState_fini_function(void * message_memory)
{
  auto typed_message = static_cast<bosdyn_msgs::msg::RobotImpairedState *>(message_memory);
  typed_message->~RobotImpairedState();
}

size_t size_function__RobotImpairedState__system_faults(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bosdyn_msgs::msg::SystemFault> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RobotImpairedState__system_faults(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<bosdyn_msgs::msg::SystemFault> *>(untyped_member);
  return &member[index];
}

void * get_function__RobotImpairedState__system_faults(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<bosdyn_msgs::msg::SystemFault> *>(untyped_member);
  return &member[index];
}

void fetch_function__RobotImpairedState__system_faults(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bosdyn_msgs::msg::SystemFault *>(
    get_const_function__RobotImpairedState__system_faults(untyped_member, index));
  auto & value = *reinterpret_cast<bosdyn_msgs::msg::SystemFault *>(untyped_value);
  value = item;
}

void assign_function__RobotImpairedState__system_faults(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bosdyn_msgs::msg::SystemFault *>(
    get_function__RobotImpairedState__system_faults(untyped_member, index));
  const auto & value = *reinterpret_cast<const bosdyn_msgs::msg::SystemFault *>(untyped_value);
  item = value;
}

void resize_function__RobotImpairedState__system_faults(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bosdyn_msgs::msg::SystemFault> *>(untyped_member);
  member->resize(size);
}

size_t size_function__RobotImpairedState__service_faults(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bosdyn_msgs::msg::ServiceFault> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RobotImpairedState__service_faults(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<bosdyn_msgs::msg::ServiceFault> *>(untyped_member);
  return &member[index];
}

void * get_function__RobotImpairedState__service_faults(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<bosdyn_msgs::msg::ServiceFault> *>(untyped_member);
  return &member[index];
}

void fetch_function__RobotImpairedState__service_faults(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bosdyn_msgs::msg::ServiceFault *>(
    get_const_function__RobotImpairedState__service_faults(untyped_member, index));
  auto & value = *reinterpret_cast<bosdyn_msgs::msg::ServiceFault *>(untyped_value);
  value = item;
}

void assign_function__RobotImpairedState__service_faults(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bosdyn_msgs::msg::ServiceFault *>(
    get_function__RobotImpairedState__service_faults(untyped_member, index));
  const auto & value = *reinterpret_cast<const bosdyn_msgs::msg::ServiceFault *>(untyped_value);
  item = value;
}

void resize_function__RobotImpairedState__service_faults(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bosdyn_msgs::msg::ServiceFault> *>(untyped_member);
  member->resize(size);
}

size_t size_function__RobotImpairedState__behavior_faults(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bosdyn_msgs::msg::BehaviorFault> *>(untyped_member);
  return member->size();
}

const void * get_const_function__RobotImpairedState__behavior_faults(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<bosdyn_msgs::msg::BehaviorFault> *>(untyped_member);
  return &member[index];
}

void * get_function__RobotImpairedState__behavior_faults(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<bosdyn_msgs::msg::BehaviorFault> *>(untyped_member);
  return &member[index];
}

void fetch_function__RobotImpairedState__behavior_faults(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bosdyn_msgs::msg::BehaviorFault *>(
    get_const_function__RobotImpairedState__behavior_faults(untyped_member, index));
  auto & value = *reinterpret_cast<bosdyn_msgs::msg::BehaviorFault *>(untyped_value);
  value = item;
}

void assign_function__RobotImpairedState__behavior_faults(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bosdyn_msgs::msg::BehaviorFault *>(
    get_function__RobotImpairedState__behavior_faults(untyped_member, index));
  const auto & value = *reinterpret_cast<const bosdyn_msgs::msg::BehaviorFault *>(untyped_value);
  item = value;
}

void resize_function__RobotImpairedState__behavior_faults(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bosdyn_msgs::msg::BehaviorFault> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RobotImpairedState_message_member_array[4] = {
  {
    "impaired_status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::RobotImpairedStateImpairedStatus>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::RobotImpairedState, impaired_status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "system_faults",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::SystemFault>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::RobotImpairedState, system_faults),  // bytes offset in struct
    nullptr,  // default value
    size_function__RobotImpairedState__system_faults,  // size() function pointer
    get_const_function__RobotImpairedState__system_faults,  // get_const(index) function pointer
    get_function__RobotImpairedState__system_faults,  // get(index) function pointer
    fetch_function__RobotImpairedState__system_faults,  // fetch(index, &value) function pointer
    assign_function__RobotImpairedState__system_faults,  // assign(index, value) function pointer
    resize_function__RobotImpairedState__system_faults  // resize(index) function pointer
  },
  {
    "service_faults",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::ServiceFault>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::RobotImpairedState, service_faults),  // bytes offset in struct
    nullptr,  // default value
    size_function__RobotImpairedState__service_faults,  // size() function pointer
    get_const_function__RobotImpairedState__service_faults,  // get_const(index) function pointer
    get_function__RobotImpairedState__service_faults,  // get(index) function pointer
    fetch_function__RobotImpairedState__service_faults,  // fetch(index, &value) function pointer
    assign_function__RobotImpairedState__service_faults,  // assign(index, value) function pointer
    resize_function__RobotImpairedState__service_faults  // resize(index) function pointer
  },
  {
    "behavior_faults",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::BehaviorFault>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::RobotImpairedState, behavior_faults),  // bytes offset in struct
    nullptr,  // default value
    size_function__RobotImpairedState__behavior_faults,  // size() function pointer
    get_const_function__RobotImpairedState__behavior_faults,  // get_const(index) function pointer
    get_function__RobotImpairedState__behavior_faults,  // get(index) function pointer
    fetch_function__RobotImpairedState__behavior_faults,  // fetch(index, &value) function pointer
    assign_function__RobotImpairedState__behavior_faults,  // assign(index, value) function pointer
    resize_function__RobotImpairedState__behavior_faults  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RobotImpairedState_message_members = {
  "bosdyn_msgs::msg",  // message namespace
  "RobotImpairedState",  // message name
  4,  // number of fields
  sizeof(bosdyn_msgs::msg::RobotImpairedState),
  RobotImpairedState_message_member_array,  // message members
  RobotImpairedState_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotImpairedState_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RobotImpairedState_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RobotImpairedState_message_members,
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
get_message_type_support_handle<bosdyn_msgs::msg::RobotImpairedState>()
{
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::RobotImpairedState_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bosdyn_msgs, msg, RobotImpairedState)() {
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::RobotImpairedState_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
