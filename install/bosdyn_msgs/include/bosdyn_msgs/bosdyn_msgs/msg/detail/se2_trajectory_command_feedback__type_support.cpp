// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from bosdyn_msgs:msg/SE2TrajectoryCommandFeedback.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "bosdyn_msgs/msg/detail/se2_trajectory_command_feedback__struct.hpp"
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

void SE2TrajectoryCommandFeedback_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) bosdyn_msgs::msg::SE2TrajectoryCommandFeedback(_init);
}

void SE2TrajectoryCommandFeedback_fini_function(void * message_memory)
{
  auto typed_message = static_cast<bosdyn_msgs::msg::SE2TrajectoryCommandFeedback *>(message_memory);
  typed_message->~SE2TrajectoryCommandFeedback();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SE2TrajectoryCommandFeedback_message_member_array[2] = {
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::SE2TrajectoryCommandFeedbackStatus>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::SE2TrajectoryCommandFeedback, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "body_movement_status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::SE2TrajectoryCommandFeedbackBodyMovementStatus>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::SE2TrajectoryCommandFeedback, body_movement_status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SE2TrajectoryCommandFeedback_message_members = {
  "bosdyn_msgs::msg",  // message namespace
  "SE2TrajectoryCommandFeedback",  // message name
  2,  // number of fields
  sizeof(bosdyn_msgs::msg::SE2TrajectoryCommandFeedback),
  SE2TrajectoryCommandFeedback_message_member_array,  // message members
  SE2TrajectoryCommandFeedback_init_function,  // function to initialize message memory (memory has to be allocated)
  SE2TrajectoryCommandFeedback_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SE2TrajectoryCommandFeedback_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SE2TrajectoryCommandFeedback_message_members,
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
get_message_type_support_handle<bosdyn_msgs::msg::SE2TrajectoryCommandFeedback>()
{
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::SE2TrajectoryCommandFeedback_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bosdyn_msgs, msg, SE2TrajectoryCommandFeedback)() {
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::SE2TrajectoryCommandFeedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
