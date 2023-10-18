// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from bosdyn_msgs:msg/State.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "bosdyn_msgs/msg/detail/state__struct.hpp"
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

void State_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) bosdyn_msgs::msg::State(_init);
}

void State_fini_function(void * message_memory)
{
  auto typed_message = static_cast<bosdyn_msgs::msg::State *>(message_memory);
  typed_message->~State();
}

size_t size_function__State__questions(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bosdyn_msgs::msg::Question> *>(untyped_member);
  return member->size();
}

const void * get_const_function__State__questions(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<bosdyn_msgs::msg::Question> *>(untyped_member);
  return &member[index];
}

void * get_function__State__questions(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<bosdyn_msgs::msg::Question> *>(untyped_member);
  return &member[index];
}

void fetch_function__State__questions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bosdyn_msgs::msg::Question *>(
    get_const_function__State__questions(untyped_member, index));
  auto & value = *reinterpret_cast<bosdyn_msgs::msg::Question *>(untyped_value);
  value = item;
}

void assign_function__State__questions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bosdyn_msgs::msg::Question *>(
    get_function__State__questions(untyped_member, index));
  const auto & value = *reinterpret_cast<const bosdyn_msgs::msg::Question *>(untyped_value);
  item = value;
}

void resize_function__State__questions(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bosdyn_msgs::msg::Question> *>(untyped_member);
  member->resize(size);
}

size_t size_function__State__answered_questions(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bosdyn_msgs::msg::StateAnsweredQuestion> *>(untyped_member);
  return member->size();
}

const void * get_const_function__State__answered_questions(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<bosdyn_msgs::msg::StateAnsweredQuestion> *>(untyped_member);
  return &member[index];
}

void * get_function__State__answered_questions(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<bosdyn_msgs::msg::StateAnsweredQuestion> *>(untyped_member);
  return &member[index];
}

void fetch_function__State__answered_questions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bosdyn_msgs::msg::StateAnsweredQuestion *>(
    get_const_function__State__answered_questions(untyped_member, index));
  auto & value = *reinterpret_cast<bosdyn_msgs::msg::StateAnsweredQuestion *>(untyped_value);
  value = item;
}

void assign_function__State__answered_questions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bosdyn_msgs::msg::StateAnsweredQuestion *>(
    get_function__State__answered_questions(untyped_member, index));
  const auto & value = *reinterpret_cast<const bosdyn_msgs::msg::StateAnsweredQuestion *>(untyped_value);
  item = value;
}

void resize_function__State__answered_questions(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bosdyn_msgs::msg::StateAnsweredQuestion> *>(untyped_member);
  member->resize(size);
}

size_t size_function__State__history(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bosdyn_msgs::msg::StateNodeStatesAtTick> *>(untyped_member);
  return member->size();
}

const void * get_const_function__State__history(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<bosdyn_msgs::msg::StateNodeStatesAtTick> *>(untyped_member);
  return &member[index];
}

void * get_function__State__history(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<bosdyn_msgs::msg::StateNodeStatesAtTick> *>(untyped_member);
  return &member[index];
}

void fetch_function__State__history(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bosdyn_msgs::msg::StateNodeStatesAtTick *>(
    get_const_function__State__history(untyped_member, index));
  auto & value = *reinterpret_cast<bosdyn_msgs::msg::StateNodeStatesAtTick *>(untyped_value);
  value = item;
}

void assign_function__State__history(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bosdyn_msgs::msg::StateNodeStatesAtTick *>(
    get_function__State__history(untyped_member, index));
  const auto & value = *reinterpret_cast<const bosdyn_msgs::msg::StateNodeStatesAtTick *>(untyped_value);
  item = value;
}

void resize_function__State__history(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bosdyn_msgs::msg::StateNodeStatesAtTick> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember State_message_member_array[7] = {
  {
    "questions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::Question>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::State, questions),  // bytes offset in struct
    nullptr,  // default value
    size_function__State__questions,  // size() function pointer
    get_const_function__State__questions,  // get_const(index) function pointer
    get_function__State__questions,  // get(index) function pointer
    fetch_function__State__questions,  // fetch(index, &value) function pointer
    assign_function__State__questions,  // assign(index, value) function pointer
    resize_function__State__questions  // resize(index) function pointer
  },
  {
    "answered_questions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::StateAnsweredQuestion>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::State, answered_questions),  // bytes offset in struct
    nullptr,  // default value
    size_function__State__answered_questions,  // size() function pointer
    get_const_function__State__answered_questions,  // get_const(index) function pointer
    get_function__State__answered_questions,  // get(index) function pointer
    fetch_function__State__answered_questions,  // fetch(index, &value) function pointer
    assign_function__State__answered_questions,  // assign(index, value) function pointer
    resize_function__State__answered_questions  // resize(index) function pointer
  },
  {
    "history",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::StateNodeStatesAtTick>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::State, history),  // bytes offset in struct
    nullptr,  // default value
    size_function__State__history,  // size() function pointer
    get_const_function__State__history,  // get_const(index) function pointer
    get_function__State__history,  // get(index) function pointer
    fetch_function__State__history,  // fetch(index, &value) function pointer
    assign_function__State__history,  // assign(index, value) function pointer
    resize_function__State__history  // resize(index) function pointer
  },
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::StateStatus>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::State, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "error",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::State, error),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tick_counter",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::State, tick_counter),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "mission_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::State, mission_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers State_message_members = {
  "bosdyn_msgs::msg",  // message namespace
  "State",  // message name
  7,  // number of fields
  sizeof(bosdyn_msgs::msg::State),
  State_message_member_array,  // message members
  State_init_function,  // function to initialize message memory (memory has to be allocated)
  State_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t State_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &State_message_members,
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
get_message_type_support_handle<bosdyn_msgs::msg::State>()
{
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::State_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bosdyn_msgs, msg, State)() {
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::State_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
