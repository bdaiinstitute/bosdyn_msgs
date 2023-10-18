// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from bosdyn_msgs:msg/AreaCallbackServiceError.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "bosdyn_msgs/msg/detail/area_callback_service_error__struct.hpp"
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

void AreaCallbackServiceError_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) bosdyn_msgs::msg::AreaCallbackServiceError(_init);
}

void AreaCallbackServiceError_fini_function(void * message_memory)
{
  auto typed_message = static_cast<bosdyn_msgs::msg::AreaCallbackServiceError *>(message_memory);
  typed_message->~AreaCallbackServiceError();
}

size_t size_function__AreaCallbackServiceError__missing_services(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AreaCallbackServiceError__missing_services(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__AreaCallbackServiceError__missing_services(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__AreaCallbackServiceError__missing_services(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__AreaCallbackServiceError__missing_services(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__AreaCallbackServiceError__missing_services(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__AreaCallbackServiceError__missing_services(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__AreaCallbackServiceError__missing_services(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__AreaCallbackServiceError__faulted_services(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bosdyn_msgs::msg::ServiceFault> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AreaCallbackServiceError__faulted_services(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<bosdyn_msgs::msg::ServiceFault> *>(untyped_member);
  return &member[index];
}

void * get_function__AreaCallbackServiceError__faulted_services(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<bosdyn_msgs::msg::ServiceFault> *>(untyped_member);
  return &member[index];
}

void fetch_function__AreaCallbackServiceError__faulted_services(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bosdyn_msgs::msg::ServiceFault *>(
    get_const_function__AreaCallbackServiceError__faulted_services(untyped_member, index));
  auto & value = *reinterpret_cast<bosdyn_msgs::msg::ServiceFault *>(untyped_value);
  value = item;
}

void assign_function__AreaCallbackServiceError__faulted_services(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bosdyn_msgs::msg::ServiceFault *>(
    get_function__AreaCallbackServiceError__faulted_services(untyped_member, index));
  const auto & value = *reinterpret_cast<const bosdyn_msgs::msg::ServiceFault *>(untyped_value);
  item = value;
}

void resize_function__AreaCallbackServiceError__faulted_services(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bosdyn_msgs::msg::ServiceFault> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AreaCallbackServiceError_message_member_array[2] = {
  {
    "missing_services",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::AreaCallbackServiceError, missing_services),  // bytes offset in struct
    nullptr,  // default value
    size_function__AreaCallbackServiceError__missing_services,  // size() function pointer
    get_const_function__AreaCallbackServiceError__missing_services,  // get_const(index) function pointer
    get_function__AreaCallbackServiceError__missing_services,  // get(index) function pointer
    fetch_function__AreaCallbackServiceError__missing_services,  // fetch(index, &value) function pointer
    assign_function__AreaCallbackServiceError__missing_services,  // assign(index, value) function pointer
    resize_function__AreaCallbackServiceError__missing_services  // resize(index) function pointer
  },
  {
    "faulted_services",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::ServiceFault>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::AreaCallbackServiceError, faulted_services),  // bytes offset in struct
    nullptr,  // default value
    size_function__AreaCallbackServiceError__faulted_services,  // size() function pointer
    get_const_function__AreaCallbackServiceError__faulted_services,  // get_const(index) function pointer
    get_function__AreaCallbackServiceError__faulted_services,  // get(index) function pointer
    fetch_function__AreaCallbackServiceError__faulted_services,  // fetch(index, &value) function pointer
    assign_function__AreaCallbackServiceError__faulted_services,  // assign(index, value) function pointer
    resize_function__AreaCallbackServiceError__faulted_services  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AreaCallbackServiceError_message_members = {
  "bosdyn_msgs::msg",  // message namespace
  "AreaCallbackServiceError",  // message name
  2,  // number of fields
  sizeof(bosdyn_msgs::msg::AreaCallbackServiceError),
  AreaCallbackServiceError_message_member_array,  // message members
  AreaCallbackServiceError_init_function,  // function to initialize message memory (memory has to be allocated)
  AreaCallbackServiceError_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AreaCallbackServiceError_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AreaCallbackServiceError_message_members,
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
get_message_type_support_handle<bosdyn_msgs::msg::AreaCallbackServiceError>()
{
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::AreaCallbackServiceError_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bosdyn_msgs, msg, AreaCallbackServiceError)() {
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::AreaCallbackServiceError_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
