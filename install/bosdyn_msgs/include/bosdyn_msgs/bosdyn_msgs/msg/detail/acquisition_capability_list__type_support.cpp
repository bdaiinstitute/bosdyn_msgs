// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from bosdyn_msgs:msg/AcquisitionCapabilityList.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "bosdyn_msgs/msg/detail/acquisition_capability_list__struct.hpp"
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

void AcquisitionCapabilityList_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) bosdyn_msgs::msg::AcquisitionCapabilityList(_init);
}

void AcquisitionCapabilityList_fini_function(void * message_memory)
{
  auto typed_message = static_cast<bosdyn_msgs::msg::AcquisitionCapabilityList *>(message_memory);
  typed_message->~AcquisitionCapabilityList();
}

size_t size_function__AcquisitionCapabilityList__data_sources(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bosdyn_msgs::msg::DataAcquisitionCapability> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AcquisitionCapabilityList__data_sources(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<bosdyn_msgs::msg::DataAcquisitionCapability> *>(untyped_member);
  return &member[index];
}

void * get_function__AcquisitionCapabilityList__data_sources(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<bosdyn_msgs::msg::DataAcquisitionCapability> *>(untyped_member);
  return &member[index];
}

void fetch_function__AcquisitionCapabilityList__data_sources(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bosdyn_msgs::msg::DataAcquisitionCapability *>(
    get_const_function__AcquisitionCapabilityList__data_sources(untyped_member, index));
  auto & value = *reinterpret_cast<bosdyn_msgs::msg::DataAcquisitionCapability *>(untyped_value);
  value = item;
}

void assign_function__AcquisitionCapabilityList__data_sources(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bosdyn_msgs::msg::DataAcquisitionCapability *>(
    get_function__AcquisitionCapabilityList__data_sources(untyped_member, index));
  const auto & value = *reinterpret_cast<const bosdyn_msgs::msg::DataAcquisitionCapability *>(untyped_value);
  item = value;
}

void resize_function__AcquisitionCapabilityList__data_sources(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bosdyn_msgs::msg::DataAcquisitionCapability> *>(untyped_member);
  member->resize(size);
}

size_t size_function__AcquisitionCapabilityList__image_sources(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bosdyn_msgs::msg::ImageAcquisitionCapability> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AcquisitionCapabilityList__image_sources(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<bosdyn_msgs::msg::ImageAcquisitionCapability> *>(untyped_member);
  return &member[index];
}

void * get_function__AcquisitionCapabilityList__image_sources(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<bosdyn_msgs::msg::ImageAcquisitionCapability> *>(untyped_member);
  return &member[index];
}

void fetch_function__AcquisitionCapabilityList__image_sources(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bosdyn_msgs::msg::ImageAcquisitionCapability *>(
    get_const_function__AcquisitionCapabilityList__image_sources(untyped_member, index));
  auto & value = *reinterpret_cast<bosdyn_msgs::msg::ImageAcquisitionCapability *>(untyped_value);
  value = item;
}

void assign_function__AcquisitionCapabilityList__image_sources(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bosdyn_msgs::msg::ImageAcquisitionCapability *>(
    get_function__AcquisitionCapabilityList__image_sources(untyped_member, index));
  const auto & value = *reinterpret_cast<const bosdyn_msgs::msg::ImageAcquisitionCapability *>(untyped_value);
  item = value;
}

void resize_function__AcquisitionCapabilityList__image_sources(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bosdyn_msgs::msg::ImageAcquisitionCapability> *>(untyped_member);
  member->resize(size);
}

size_t size_function__AcquisitionCapabilityList__network_compute_sources(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bosdyn_msgs::msg::NetworkComputeCapability> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AcquisitionCapabilityList__network_compute_sources(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<bosdyn_msgs::msg::NetworkComputeCapability> *>(untyped_member);
  return &member[index];
}

void * get_function__AcquisitionCapabilityList__network_compute_sources(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<bosdyn_msgs::msg::NetworkComputeCapability> *>(untyped_member);
  return &member[index];
}

void fetch_function__AcquisitionCapabilityList__network_compute_sources(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bosdyn_msgs::msg::NetworkComputeCapability *>(
    get_const_function__AcquisitionCapabilityList__network_compute_sources(untyped_member, index));
  auto & value = *reinterpret_cast<bosdyn_msgs::msg::NetworkComputeCapability *>(untyped_value);
  value = item;
}

void assign_function__AcquisitionCapabilityList__network_compute_sources(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bosdyn_msgs::msg::NetworkComputeCapability *>(
    get_function__AcquisitionCapabilityList__network_compute_sources(untyped_member, index));
  const auto & value = *reinterpret_cast<const bosdyn_msgs::msg::NetworkComputeCapability *>(untyped_value);
  item = value;
}

void resize_function__AcquisitionCapabilityList__network_compute_sources(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bosdyn_msgs::msg::NetworkComputeCapability> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AcquisitionCapabilityList_message_member_array[3] = {
  {
    "data_sources",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::DataAcquisitionCapability>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::AcquisitionCapabilityList, data_sources),  // bytes offset in struct
    nullptr,  // default value
    size_function__AcquisitionCapabilityList__data_sources,  // size() function pointer
    get_const_function__AcquisitionCapabilityList__data_sources,  // get_const(index) function pointer
    get_function__AcquisitionCapabilityList__data_sources,  // get(index) function pointer
    fetch_function__AcquisitionCapabilityList__data_sources,  // fetch(index, &value) function pointer
    assign_function__AcquisitionCapabilityList__data_sources,  // assign(index, value) function pointer
    resize_function__AcquisitionCapabilityList__data_sources  // resize(index) function pointer
  },
  {
    "image_sources",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::ImageAcquisitionCapability>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::AcquisitionCapabilityList, image_sources),  // bytes offset in struct
    nullptr,  // default value
    size_function__AcquisitionCapabilityList__image_sources,  // size() function pointer
    get_const_function__AcquisitionCapabilityList__image_sources,  // get_const(index) function pointer
    get_function__AcquisitionCapabilityList__image_sources,  // get(index) function pointer
    fetch_function__AcquisitionCapabilityList__image_sources,  // fetch(index, &value) function pointer
    assign_function__AcquisitionCapabilityList__image_sources,  // assign(index, value) function pointer
    resize_function__AcquisitionCapabilityList__image_sources  // resize(index) function pointer
  },
  {
    "network_compute_sources",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::NetworkComputeCapability>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::AcquisitionCapabilityList, network_compute_sources),  // bytes offset in struct
    nullptr,  // default value
    size_function__AcquisitionCapabilityList__network_compute_sources,  // size() function pointer
    get_const_function__AcquisitionCapabilityList__network_compute_sources,  // get_const(index) function pointer
    get_function__AcquisitionCapabilityList__network_compute_sources,  // get(index) function pointer
    fetch_function__AcquisitionCapabilityList__network_compute_sources,  // fetch(index, &value) function pointer
    assign_function__AcquisitionCapabilityList__network_compute_sources,  // assign(index, value) function pointer
    resize_function__AcquisitionCapabilityList__network_compute_sources  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AcquisitionCapabilityList_message_members = {
  "bosdyn_msgs::msg",  // message namespace
  "AcquisitionCapabilityList",  // message name
  3,  // number of fields
  sizeof(bosdyn_msgs::msg::AcquisitionCapabilityList),
  AcquisitionCapabilityList_message_member_array,  // message members
  AcquisitionCapabilityList_init_function,  // function to initialize message memory (memory has to be allocated)
  AcquisitionCapabilityList_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AcquisitionCapabilityList_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AcquisitionCapabilityList_message_members,
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
get_message_type_support_handle<bosdyn_msgs::msg::AcquisitionCapabilityList>()
{
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::AcquisitionCapabilityList_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bosdyn_msgs, msg, AcquisitionCapabilityList)() {
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::AcquisitionCapabilityList_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
