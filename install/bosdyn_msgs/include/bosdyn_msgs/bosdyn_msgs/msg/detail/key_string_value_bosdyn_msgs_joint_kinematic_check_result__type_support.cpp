// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from bosdyn_msgs:msg/KeyStringValueBosdynMsgsJointKinematicCheckResult.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "bosdyn_msgs/msg/detail/key_string_value_bosdyn_msgs_joint_kinematic_check_result__struct.hpp"
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

void KeyStringValueBosdynMsgsJointKinematicCheckResult_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) bosdyn_msgs::msg::KeyStringValueBosdynMsgsJointKinematicCheckResult(_init);
}

void KeyStringValueBosdynMsgsJointKinematicCheckResult_fini_function(void * message_memory)
{
  auto typed_message = static_cast<bosdyn_msgs::msg::KeyStringValueBosdynMsgsJointKinematicCheckResult *>(message_memory);
  typed_message->~KeyStringValueBosdynMsgsJointKinematicCheckResult();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember KeyStringValueBosdynMsgsJointKinematicCheckResult_message_member_array[2] = {
  {
    "key",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::KeyStringValueBosdynMsgsJointKinematicCheckResult, key),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::JointKinematicCheckResult>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::KeyStringValueBosdynMsgsJointKinematicCheckResult, value),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers KeyStringValueBosdynMsgsJointKinematicCheckResult_message_members = {
  "bosdyn_msgs::msg",  // message namespace
  "KeyStringValueBosdynMsgsJointKinematicCheckResult",  // message name
  2,  // number of fields
  sizeof(bosdyn_msgs::msg::KeyStringValueBosdynMsgsJointKinematicCheckResult),
  KeyStringValueBosdynMsgsJointKinematicCheckResult_message_member_array,  // message members
  KeyStringValueBosdynMsgsJointKinematicCheckResult_init_function,  // function to initialize message memory (memory has to be allocated)
  KeyStringValueBosdynMsgsJointKinematicCheckResult_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t KeyStringValueBosdynMsgsJointKinematicCheckResult_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &KeyStringValueBosdynMsgsJointKinematicCheckResult_message_members,
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
get_message_type_support_handle<bosdyn_msgs::msg::KeyStringValueBosdynMsgsJointKinematicCheckResult>()
{
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::KeyStringValueBosdynMsgsJointKinematicCheckResult_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bosdyn_msgs, msg, KeyStringValueBosdynMsgsJointKinematicCheckResult)() {
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::KeyStringValueBosdynMsgsJointKinematicCheckResult_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
