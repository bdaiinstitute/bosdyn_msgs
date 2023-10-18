// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from bosdyn_msgs:msg/AcquisitionRequestList.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "bosdyn_msgs/msg/detail/acquisition_request_list__struct.hpp"
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

void AcquisitionRequestList_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) bosdyn_msgs::msg::AcquisitionRequestList(_init);
}

void AcquisitionRequestList_fini_function(void * message_memory)
{
  auto typed_message = static_cast<bosdyn_msgs::msg::AcquisitionRequestList *>(message_memory);
  typed_message->~AcquisitionRequestList();
}

size_t size_function__AcquisitionRequestList__image_captures(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bosdyn_msgs::msg::ImageSourceCapture> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AcquisitionRequestList__image_captures(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<bosdyn_msgs::msg::ImageSourceCapture> *>(untyped_member);
  return &member[index];
}

void * get_function__AcquisitionRequestList__image_captures(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<bosdyn_msgs::msg::ImageSourceCapture> *>(untyped_member);
  return &member[index];
}

void fetch_function__AcquisitionRequestList__image_captures(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bosdyn_msgs::msg::ImageSourceCapture *>(
    get_const_function__AcquisitionRequestList__image_captures(untyped_member, index));
  auto & value = *reinterpret_cast<bosdyn_msgs::msg::ImageSourceCapture *>(untyped_value);
  value = item;
}

void assign_function__AcquisitionRequestList__image_captures(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bosdyn_msgs::msg::ImageSourceCapture *>(
    get_function__AcquisitionRequestList__image_captures(untyped_member, index));
  const auto & value = *reinterpret_cast<const bosdyn_msgs::msg::ImageSourceCapture *>(untyped_value);
  item = value;
}

void resize_function__AcquisitionRequestList__image_captures(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bosdyn_msgs::msg::ImageSourceCapture> *>(untyped_member);
  member->resize(size);
}

size_t size_function__AcquisitionRequestList__data_captures(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bosdyn_msgs::msg::DataCapture> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AcquisitionRequestList__data_captures(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<bosdyn_msgs::msg::DataCapture> *>(untyped_member);
  return &member[index];
}

void * get_function__AcquisitionRequestList__data_captures(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<bosdyn_msgs::msg::DataCapture> *>(untyped_member);
  return &member[index];
}

void fetch_function__AcquisitionRequestList__data_captures(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bosdyn_msgs::msg::DataCapture *>(
    get_const_function__AcquisitionRequestList__data_captures(untyped_member, index));
  auto & value = *reinterpret_cast<bosdyn_msgs::msg::DataCapture *>(untyped_value);
  value = item;
}

void assign_function__AcquisitionRequestList__data_captures(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bosdyn_msgs::msg::DataCapture *>(
    get_function__AcquisitionRequestList__data_captures(untyped_member, index));
  const auto & value = *reinterpret_cast<const bosdyn_msgs::msg::DataCapture *>(untyped_value);
  item = value;
}

void resize_function__AcquisitionRequestList__data_captures(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bosdyn_msgs::msg::DataCapture> *>(untyped_member);
  member->resize(size);
}

size_t size_function__AcquisitionRequestList__network_compute_captures(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bosdyn_msgs::msg::NetworkComputeCapture> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AcquisitionRequestList__network_compute_captures(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<bosdyn_msgs::msg::NetworkComputeCapture> *>(untyped_member);
  return &member[index];
}

void * get_function__AcquisitionRequestList__network_compute_captures(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<bosdyn_msgs::msg::NetworkComputeCapture> *>(untyped_member);
  return &member[index];
}

void fetch_function__AcquisitionRequestList__network_compute_captures(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bosdyn_msgs::msg::NetworkComputeCapture *>(
    get_const_function__AcquisitionRequestList__network_compute_captures(untyped_member, index));
  auto & value = *reinterpret_cast<bosdyn_msgs::msg::NetworkComputeCapture *>(untyped_value);
  value = item;
}

void assign_function__AcquisitionRequestList__network_compute_captures(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bosdyn_msgs::msg::NetworkComputeCapture *>(
    get_function__AcquisitionRequestList__network_compute_captures(untyped_member, index));
  const auto & value = *reinterpret_cast<const bosdyn_msgs::msg::NetworkComputeCapture *>(untyped_value);
  item = value;
}

void resize_function__AcquisitionRequestList__network_compute_captures(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bosdyn_msgs::msg::NetworkComputeCapture> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AcquisitionRequestList_message_member_array[3] = {
  {
    "image_captures",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::ImageSourceCapture>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::AcquisitionRequestList, image_captures),  // bytes offset in struct
    nullptr,  // default value
    size_function__AcquisitionRequestList__image_captures,  // size() function pointer
    get_const_function__AcquisitionRequestList__image_captures,  // get_const(index) function pointer
    get_function__AcquisitionRequestList__image_captures,  // get(index) function pointer
    fetch_function__AcquisitionRequestList__image_captures,  // fetch(index, &value) function pointer
    assign_function__AcquisitionRequestList__image_captures,  // assign(index, value) function pointer
    resize_function__AcquisitionRequestList__image_captures  // resize(index) function pointer
  },
  {
    "data_captures",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::DataCapture>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::AcquisitionRequestList, data_captures),  // bytes offset in struct
    nullptr,  // default value
    size_function__AcquisitionRequestList__data_captures,  // size() function pointer
    get_const_function__AcquisitionRequestList__data_captures,  // get_const(index) function pointer
    get_function__AcquisitionRequestList__data_captures,  // get(index) function pointer
    fetch_function__AcquisitionRequestList__data_captures,  // fetch(index, &value) function pointer
    assign_function__AcquisitionRequestList__data_captures,  // assign(index, value) function pointer
    resize_function__AcquisitionRequestList__data_captures  // resize(index) function pointer
  },
  {
    "network_compute_captures",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::NetworkComputeCapture>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::AcquisitionRequestList, network_compute_captures),  // bytes offset in struct
    nullptr,  // default value
    size_function__AcquisitionRequestList__network_compute_captures,  // size() function pointer
    get_const_function__AcquisitionRequestList__network_compute_captures,  // get_const(index) function pointer
    get_function__AcquisitionRequestList__network_compute_captures,  // get(index) function pointer
    fetch_function__AcquisitionRequestList__network_compute_captures,  // fetch(index, &value) function pointer
    assign_function__AcquisitionRequestList__network_compute_captures,  // assign(index, value) function pointer
    resize_function__AcquisitionRequestList__network_compute_captures  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AcquisitionRequestList_message_members = {
  "bosdyn_msgs::msg",  // message namespace
  "AcquisitionRequestList",  // message name
  3,  // number of fields
  sizeof(bosdyn_msgs::msg::AcquisitionRequestList),
  AcquisitionRequestList_message_member_array,  // message members
  AcquisitionRequestList_init_function,  // function to initialize message memory (memory has to be allocated)
  AcquisitionRequestList_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AcquisitionRequestList_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AcquisitionRequestList_message_members,
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
get_message_type_support_handle<bosdyn_msgs::msg::AcquisitionRequestList>()
{
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::AcquisitionRequestList_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bosdyn_msgs, msg, AcquisitionRequestList)() {
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::AcquisitionRequestList_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
