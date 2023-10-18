// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from bosdyn_msgs:msg/GetStateRequestOneOfLowerBound.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "bosdyn_msgs/msg/detail/get_state_request_one_of_lower_bound__struct.hpp"
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

void GetStateRequestOneOfLowerBound_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) bosdyn_msgs::msg::GetStateRequestOneOfLowerBound(_init);
}

void GetStateRequestOneOfLowerBound_fini_function(void * message_memory)
{
  auto typed_message = static_cast<bosdyn_msgs::msg::GetStateRequestOneOfLowerBound *>(message_memory);
  typed_message->~GetStateRequestOneOfLowerBound();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GetStateRequestOneOfLowerBound_message_member_array[3] = {
  {
    "history_lower_tick_bound",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::GetStateRequestOneOfLowerBound, history_lower_tick_bound),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "history_past_ticks",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::GetStateRequestOneOfLowerBound, history_past_ticks),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lower_bound_choice",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::GetStateRequestOneOfLowerBound, lower_bound_choice),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GetStateRequestOneOfLowerBound_message_members = {
  "bosdyn_msgs::msg",  // message namespace
  "GetStateRequestOneOfLowerBound",  // message name
  3,  // number of fields
  sizeof(bosdyn_msgs::msg::GetStateRequestOneOfLowerBound),
  GetStateRequestOneOfLowerBound_message_member_array,  // message members
  GetStateRequestOneOfLowerBound_init_function,  // function to initialize message memory (memory has to be allocated)
  GetStateRequestOneOfLowerBound_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GetStateRequestOneOfLowerBound_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GetStateRequestOneOfLowerBound_message_members,
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
get_message_type_support_handle<bosdyn_msgs::msg::GetStateRequestOneOfLowerBound>()
{
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::GetStateRequestOneOfLowerBound_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bosdyn_msgs, msg, GetStateRequestOneOfLowerBound)() {
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::GetStateRequestOneOfLowerBound_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
