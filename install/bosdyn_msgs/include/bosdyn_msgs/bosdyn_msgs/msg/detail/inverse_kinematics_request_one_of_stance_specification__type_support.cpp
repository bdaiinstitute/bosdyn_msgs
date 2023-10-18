// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from bosdyn_msgs:msg/InverseKinematicsRequestOneOfStanceSpecification.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "bosdyn_msgs/msg/detail/inverse_kinematics_request_one_of_stance_specification__struct.hpp"
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

void InverseKinematicsRequestOneOfStanceSpecification_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) bosdyn_msgs::msg::InverseKinematicsRequestOneOfStanceSpecification(_init);
}

void InverseKinematicsRequestOneOfStanceSpecification_fini_function(void * message_memory)
{
  auto typed_message = static_cast<bosdyn_msgs::msg::InverseKinematicsRequestOneOfStanceSpecification *>(message_memory);
  typed_message->~InverseKinematicsRequestOneOfStanceSpecification();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember InverseKinematicsRequestOneOfStanceSpecification_message_member_array[3] = {
  {
    "fixed_stance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::InverseKinematicsRequestFixedStance>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::InverseKinematicsRequestOneOfStanceSpecification, fixed_stance),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "on_ground_plane_stance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::InverseKinematicsRequestOnGroundPlaneStance>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::InverseKinematicsRequestOneOfStanceSpecification, on_ground_plane_stance),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "stance_specification_choice",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::InverseKinematicsRequestOneOfStanceSpecification, stance_specification_choice),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers InverseKinematicsRequestOneOfStanceSpecification_message_members = {
  "bosdyn_msgs::msg",  // message namespace
  "InverseKinematicsRequestOneOfStanceSpecification",  // message name
  3,  // number of fields
  sizeof(bosdyn_msgs::msg::InverseKinematicsRequestOneOfStanceSpecification),
  InverseKinematicsRequestOneOfStanceSpecification_message_member_array,  // message members
  InverseKinematicsRequestOneOfStanceSpecification_init_function,  // function to initialize message memory (memory has to be allocated)
  InverseKinematicsRequestOneOfStanceSpecification_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t InverseKinematicsRequestOneOfStanceSpecification_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &InverseKinematicsRequestOneOfStanceSpecification_message_members,
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
get_message_type_support_handle<bosdyn_msgs::msg::InverseKinematicsRequestOneOfStanceSpecification>()
{
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::InverseKinematicsRequestOneOfStanceSpecification_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bosdyn_msgs, msg, InverseKinematicsRequestOneOfStanceSpecification)() {
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::InverseKinematicsRequestOneOfStanceSpecification_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
