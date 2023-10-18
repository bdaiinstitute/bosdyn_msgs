// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from bosdyn_msgs:msg/SE2Velocity.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "bosdyn_msgs/msg/detail/se2_velocity__struct.hpp"
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

void SE2Velocity_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) bosdyn_msgs::msg::SE2Velocity(_init);
}

void SE2Velocity_fini_function(void * message_memory)
{
  auto typed_message = static_cast<bosdyn_msgs::msg::SE2Velocity *>(message_memory);
  typed_message->~SE2Velocity();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SE2Velocity_message_member_array[3] = {
  {
    "linear",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::Vec2>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::SE2Velocity, linear),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "linear_is_set",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::SE2Velocity, linear_is_set),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "angular",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::SE2Velocity, angular),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SE2Velocity_message_members = {
  "bosdyn_msgs::msg",  // message namespace
  "SE2Velocity",  // message name
  3,  // number of fields
  sizeof(bosdyn_msgs::msg::SE2Velocity),
  SE2Velocity_message_member_array,  // message members
  SE2Velocity_init_function,  // function to initialize message memory (memory has to be allocated)
  SE2Velocity_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SE2Velocity_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SE2Velocity_message_members,
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
get_message_type_support_handle<bosdyn_msgs::msg::SE2Velocity>()
{
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::SE2Velocity_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bosdyn_msgs, msg, SE2Velocity)() {
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::SE2Velocity_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
