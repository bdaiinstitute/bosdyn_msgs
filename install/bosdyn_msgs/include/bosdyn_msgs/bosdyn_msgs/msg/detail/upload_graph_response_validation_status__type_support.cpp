// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from bosdyn_msgs:msg/UploadGraphResponseValidationStatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "bosdyn_msgs/msg/detail/upload_graph_response_validation_status__struct.hpp"
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

void UploadGraphResponseValidationStatus_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) bosdyn_msgs::msg::UploadGraphResponseValidationStatus(_init);
}

void UploadGraphResponseValidationStatus_fini_function(void * message_memory)
{
  auto typed_message = static_cast<bosdyn_msgs::msg::UploadGraphResponseValidationStatus *>(message_memory);
  typed_message->~UploadGraphResponseValidationStatus();
}

size_t size_function__UploadGraphResponseValidationStatus__missing_waypoint_ids_in_edges(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__UploadGraphResponseValidationStatus__missing_waypoint_ids_in_edges(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__UploadGraphResponseValidationStatus__missing_waypoint_ids_in_edges(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__UploadGraphResponseValidationStatus__missing_waypoint_ids_in_edges(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__UploadGraphResponseValidationStatus__missing_waypoint_ids_in_edges(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__UploadGraphResponseValidationStatus__missing_waypoint_ids_in_edges(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__UploadGraphResponseValidationStatus__missing_waypoint_ids_in_edges(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__UploadGraphResponseValidationStatus__missing_waypoint_ids_in_edges(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__UploadGraphResponseValidationStatus__missing_waypoint_ids_in_anchors(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__UploadGraphResponseValidationStatus__missing_waypoint_ids_in_anchors(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__UploadGraphResponseValidationStatus__missing_waypoint_ids_in_anchors(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__UploadGraphResponseValidationStatus__missing_waypoint_ids_in_anchors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__UploadGraphResponseValidationStatus__missing_waypoint_ids_in_anchors(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__UploadGraphResponseValidationStatus__missing_waypoint_ids_in_anchors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__UploadGraphResponseValidationStatus__missing_waypoint_ids_in_anchors(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__UploadGraphResponseValidationStatus__missing_waypoint_ids_in_anchors(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__UploadGraphResponseValidationStatus__edge_ids_invalid_transform(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bosdyn_msgs::msg::EdgeId> *>(untyped_member);
  return member->size();
}

const void * get_const_function__UploadGraphResponseValidationStatus__edge_ids_invalid_transform(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<bosdyn_msgs::msg::EdgeId> *>(untyped_member);
  return &member[index];
}

void * get_function__UploadGraphResponseValidationStatus__edge_ids_invalid_transform(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<bosdyn_msgs::msg::EdgeId> *>(untyped_member);
  return &member[index];
}

void fetch_function__UploadGraphResponseValidationStatus__edge_ids_invalid_transform(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bosdyn_msgs::msg::EdgeId *>(
    get_const_function__UploadGraphResponseValidationStatus__edge_ids_invalid_transform(untyped_member, index));
  auto & value = *reinterpret_cast<bosdyn_msgs::msg::EdgeId *>(untyped_value);
  value = item;
}

void assign_function__UploadGraphResponseValidationStatus__edge_ids_invalid_transform(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bosdyn_msgs::msg::EdgeId *>(
    get_function__UploadGraphResponseValidationStatus__edge_ids_invalid_transform(untyped_member, index));
  const auto & value = *reinterpret_cast<const bosdyn_msgs::msg::EdgeId *>(untyped_value);
  item = value;
}

void resize_function__UploadGraphResponseValidationStatus__edge_ids_invalid_transform(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bosdyn_msgs::msg::EdgeId> *>(untyped_member);
  member->resize(size);
}

size_t size_function__UploadGraphResponseValidationStatus__waypoint_anchors_invalid_transform(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__UploadGraphResponseValidationStatus__waypoint_anchors_invalid_transform(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__UploadGraphResponseValidationStatus__waypoint_anchors_invalid_transform(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__UploadGraphResponseValidationStatus__waypoint_anchors_invalid_transform(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__UploadGraphResponseValidationStatus__waypoint_anchors_invalid_transform(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__UploadGraphResponseValidationStatus__waypoint_anchors_invalid_transform(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__UploadGraphResponseValidationStatus__waypoint_anchors_invalid_transform(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__UploadGraphResponseValidationStatus__waypoint_anchors_invalid_transform(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__UploadGraphResponseValidationStatus__object_anchors_invalid_transform(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__UploadGraphResponseValidationStatus__object_anchors_invalid_transform(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__UploadGraphResponseValidationStatus__object_anchors_invalid_transform(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__UploadGraphResponseValidationStatus__object_anchors_invalid_transform(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__UploadGraphResponseValidationStatus__object_anchors_invalid_transform(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__UploadGraphResponseValidationStatus__object_anchors_invalid_transform(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__UploadGraphResponseValidationStatus__object_anchors_invalid_transform(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__UploadGraphResponseValidationStatus__object_anchors_invalid_transform(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__UploadGraphResponseValidationStatus__duplicate_waypoint_ids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__UploadGraphResponseValidationStatus__duplicate_waypoint_ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__UploadGraphResponseValidationStatus__duplicate_waypoint_ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__UploadGraphResponseValidationStatus__duplicate_waypoint_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__UploadGraphResponseValidationStatus__duplicate_waypoint_ids(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__UploadGraphResponseValidationStatus__duplicate_waypoint_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__UploadGraphResponseValidationStatus__duplicate_waypoint_ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__UploadGraphResponseValidationStatus__duplicate_waypoint_ids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__UploadGraphResponseValidationStatus__duplicate_waypoint_anchor_ids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__UploadGraphResponseValidationStatus__duplicate_waypoint_anchor_ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__UploadGraphResponseValidationStatus__duplicate_waypoint_anchor_ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__UploadGraphResponseValidationStatus__duplicate_waypoint_anchor_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__UploadGraphResponseValidationStatus__duplicate_waypoint_anchor_ids(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__UploadGraphResponseValidationStatus__duplicate_waypoint_anchor_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__UploadGraphResponseValidationStatus__duplicate_waypoint_anchor_ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__UploadGraphResponseValidationStatus__duplicate_waypoint_anchor_ids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__UploadGraphResponseValidationStatus__duplicate_object_anchor_ids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__UploadGraphResponseValidationStatus__duplicate_object_anchor_ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__UploadGraphResponseValidationStatus__duplicate_object_anchor_ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__UploadGraphResponseValidationStatus__duplicate_object_anchor_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__UploadGraphResponseValidationStatus__duplicate_object_anchor_ids(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__UploadGraphResponseValidationStatus__duplicate_object_anchor_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__UploadGraphResponseValidationStatus__duplicate_object_anchor_ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__UploadGraphResponseValidationStatus__duplicate_object_anchor_ids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__UploadGraphResponseValidationStatus__duplicate_edge_ids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bosdyn_msgs::msg::EdgeId> *>(untyped_member);
  return member->size();
}

const void * get_const_function__UploadGraphResponseValidationStatus__duplicate_edge_ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<bosdyn_msgs::msg::EdgeId> *>(untyped_member);
  return &member[index];
}

void * get_function__UploadGraphResponseValidationStatus__duplicate_edge_ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<bosdyn_msgs::msg::EdgeId> *>(untyped_member);
  return &member[index];
}

void fetch_function__UploadGraphResponseValidationStatus__duplicate_edge_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bosdyn_msgs::msg::EdgeId *>(
    get_const_function__UploadGraphResponseValidationStatus__duplicate_edge_ids(untyped_member, index));
  auto & value = *reinterpret_cast<bosdyn_msgs::msg::EdgeId *>(untyped_value);
  value = item;
}

void assign_function__UploadGraphResponseValidationStatus__duplicate_edge_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bosdyn_msgs::msg::EdgeId *>(
    get_function__UploadGraphResponseValidationStatus__duplicate_edge_ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const bosdyn_msgs::msg::EdgeId *>(untyped_value);
  item = value;
}

void resize_function__UploadGraphResponseValidationStatus__duplicate_edge_ids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bosdyn_msgs::msg::EdgeId> *>(untyped_member);
  member->resize(size);
}

size_t size_function__UploadGraphResponseValidationStatus__invalid_waypoint_ids_self_edges(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__UploadGraphResponseValidationStatus__invalid_waypoint_ids_self_edges(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__UploadGraphResponseValidationStatus__invalid_waypoint_ids_self_edges(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__UploadGraphResponseValidationStatus__invalid_waypoint_ids_self_edges(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__UploadGraphResponseValidationStatus__invalid_waypoint_ids_self_edges(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__UploadGraphResponseValidationStatus__invalid_waypoint_ids_self_edges(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__UploadGraphResponseValidationStatus__invalid_waypoint_ids_self_edges(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__UploadGraphResponseValidationStatus__invalid_waypoint_ids_self_edges(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember UploadGraphResponseValidationStatus_message_member_array[14] = {
  {
    "missing_waypoint_ids_in_edges",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::UploadGraphResponseValidationStatus, missing_waypoint_ids_in_edges),  // bytes offset in struct
    nullptr,  // default value
    size_function__UploadGraphResponseValidationStatus__missing_waypoint_ids_in_edges,  // size() function pointer
    get_const_function__UploadGraphResponseValidationStatus__missing_waypoint_ids_in_edges,  // get_const(index) function pointer
    get_function__UploadGraphResponseValidationStatus__missing_waypoint_ids_in_edges,  // get(index) function pointer
    fetch_function__UploadGraphResponseValidationStatus__missing_waypoint_ids_in_edges,  // fetch(index, &value) function pointer
    assign_function__UploadGraphResponseValidationStatus__missing_waypoint_ids_in_edges,  // assign(index, value) function pointer
    resize_function__UploadGraphResponseValidationStatus__missing_waypoint_ids_in_edges  // resize(index) function pointer
  },
  {
    "missing_waypoint_ids_in_anchors",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::UploadGraphResponseValidationStatus, missing_waypoint_ids_in_anchors),  // bytes offset in struct
    nullptr,  // default value
    size_function__UploadGraphResponseValidationStatus__missing_waypoint_ids_in_anchors,  // size() function pointer
    get_const_function__UploadGraphResponseValidationStatus__missing_waypoint_ids_in_anchors,  // get_const(index) function pointer
    get_function__UploadGraphResponseValidationStatus__missing_waypoint_ids_in_anchors,  // get(index) function pointer
    fetch_function__UploadGraphResponseValidationStatus__missing_waypoint_ids_in_anchors,  // fetch(index, &value) function pointer
    assign_function__UploadGraphResponseValidationStatus__missing_waypoint_ids_in_anchors,  // assign(index, value) function pointer
    resize_function__UploadGraphResponseValidationStatus__missing_waypoint_ids_in_anchors  // resize(index) function pointer
  },
  {
    "edge_ids_invalid_transform",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::EdgeId>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::UploadGraphResponseValidationStatus, edge_ids_invalid_transform),  // bytes offset in struct
    nullptr,  // default value
    size_function__UploadGraphResponseValidationStatus__edge_ids_invalid_transform,  // size() function pointer
    get_const_function__UploadGraphResponseValidationStatus__edge_ids_invalid_transform,  // get_const(index) function pointer
    get_function__UploadGraphResponseValidationStatus__edge_ids_invalid_transform,  // get(index) function pointer
    fetch_function__UploadGraphResponseValidationStatus__edge_ids_invalid_transform,  // fetch(index, &value) function pointer
    assign_function__UploadGraphResponseValidationStatus__edge_ids_invalid_transform,  // assign(index, value) function pointer
    resize_function__UploadGraphResponseValidationStatus__edge_ids_invalid_transform  // resize(index) function pointer
  },
  {
    "waypoint_anchors_invalid_transform",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::UploadGraphResponseValidationStatus, waypoint_anchors_invalid_transform),  // bytes offset in struct
    nullptr,  // default value
    size_function__UploadGraphResponseValidationStatus__waypoint_anchors_invalid_transform,  // size() function pointer
    get_const_function__UploadGraphResponseValidationStatus__waypoint_anchors_invalid_transform,  // get_const(index) function pointer
    get_function__UploadGraphResponseValidationStatus__waypoint_anchors_invalid_transform,  // get(index) function pointer
    fetch_function__UploadGraphResponseValidationStatus__waypoint_anchors_invalid_transform,  // fetch(index, &value) function pointer
    assign_function__UploadGraphResponseValidationStatus__waypoint_anchors_invalid_transform,  // assign(index, value) function pointer
    resize_function__UploadGraphResponseValidationStatus__waypoint_anchors_invalid_transform  // resize(index) function pointer
  },
  {
    "object_anchors_invalid_transform",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::UploadGraphResponseValidationStatus, object_anchors_invalid_transform),  // bytes offset in struct
    nullptr,  // default value
    size_function__UploadGraphResponseValidationStatus__object_anchors_invalid_transform,  // size() function pointer
    get_const_function__UploadGraphResponseValidationStatus__object_anchors_invalid_transform,  // get_const(index) function pointer
    get_function__UploadGraphResponseValidationStatus__object_anchors_invalid_transform,  // get(index) function pointer
    fetch_function__UploadGraphResponseValidationStatus__object_anchors_invalid_transform,  // fetch(index, &value) function pointer
    assign_function__UploadGraphResponseValidationStatus__object_anchors_invalid_transform,  // assign(index, value) function pointer
    resize_function__UploadGraphResponseValidationStatus__object_anchors_invalid_transform  // resize(index) function pointer
  },
  {
    "duplicate_waypoint_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::UploadGraphResponseValidationStatus, duplicate_waypoint_ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__UploadGraphResponseValidationStatus__duplicate_waypoint_ids,  // size() function pointer
    get_const_function__UploadGraphResponseValidationStatus__duplicate_waypoint_ids,  // get_const(index) function pointer
    get_function__UploadGraphResponseValidationStatus__duplicate_waypoint_ids,  // get(index) function pointer
    fetch_function__UploadGraphResponseValidationStatus__duplicate_waypoint_ids,  // fetch(index, &value) function pointer
    assign_function__UploadGraphResponseValidationStatus__duplicate_waypoint_ids,  // assign(index, value) function pointer
    resize_function__UploadGraphResponseValidationStatus__duplicate_waypoint_ids  // resize(index) function pointer
  },
  {
    "duplicate_waypoint_anchor_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::UploadGraphResponseValidationStatus, duplicate_waypoint_anchor_ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__UploadGraphResponseValidationStatus__duplicate_waypoint_anchor_ids,  // size() function pointer
    get_const_function__UploadGraphResponseValidationStatus__duplicate_waypoint_anchor_ids,  // get_const(index) function pointer
    get_function__UploadGraphResponseValidationStatus__duplicate_waypoint_anchor_ids,  // get(index) function pointer
    fetch_function__UploadGraphResponseValidationStatus__duplicate_waypoint_anchor_ids,  // fetch(index, &value) function pointer
    assign_function__UploadGraphResponseValidationStatus__duplicate_waypoint_anchor_ids,  // assign(index, value) function pointer
    resize_function__UploadGraphResponseValidationStatus__duplicate_waypoint_anchor_ids  // resize(index) function pointer
  },
  {
    "duplicate_object_anchor_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::UploadGraphResponseValidationStatus, duplicate_object_anchor_ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__UploadGraphResponseValidationStatus__duplicate_object_anchor_ids,  // size() function pointer
    get_const_function__UploadGraphResponseValidationStatus__duplicate_object_anchor_ids,  // get_const(index) function pointer
    get_function__UploadGraphResponseValidationStatus__duplicate_object_anchor_ids,  // get(index) function pointer
    fetch_function__UploadGraphResponseValidationStatus__duplicate_object_anchor_ids,  // fetch(index, &value) function pointer
    assign_function__UploadGraphResponseValidationStatus__duplicate_object_anchor_ids,  // assign(index, value) function pointer
    resize_function__UploadGraphResponseValidationStatus__duplicate_object_anchor_ids  // resize(index) function pointer
  },
  {
    "duplicate_edge_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::EdgeId>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::UploadGraphResponseValidationStatus, duplicate_edge_ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__UploadGraphResponseValidationStatus__duplicate_edge_ids,  // size() function pointer
    get_const_function__UploadGraphResponseValidationStatus__duplicate_edge_ids,  // get_const(index) function pointer
    get_function__UploadGraphResponseValidationStatus__duplicate_edge_ids,  // get(index) function pointer
    fetch_function__UploadGraphResponseValidationStatus__duplicate_edge_ids,  // fetch(index, &value) function pointer
    assign_function__UploadGraphResponseValidationStatus__duplicate_edge_ids,  // assign(index, value) function pointer
    resize_function__UploadGraphResponseValidationStatus__duplicate_edge_ids  // resize(index) function pointer
  },
  {
    "invalid_waypoint_ids_self_edges",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::UploadGraphResponseValidationStatus, invalid_waypoint_ids_self_edges),  // bytes offset in struct
    nullptr,  // default value
    size_function__UploadGraphResponseValidationStatus__invalid_waypoint_ids_self_edges,  // size() function pointer
    get_const_function__UploadGraphResponseValidationStatus__invalid_waypoint_ids_self_edges,  // get_const(index) function pointer
    get_function__UploadGraphResponseValidationStatus__invalid_waypoint_ids_self_edges,  // get(index) function pointer
    fetch_function__UploadGraphResponseValidationStatus__invalid_waypoint_ids_self_edges,  // fetch(index, &value) function pointer
    assign_function__UploadGraphResponseValidationStatus__invalid_waypoint_ids_self_edges,  // assign(index, value) function pointer
    resize_function__UploadGraphResponseValidationStatus__invalid_waypoint_ids_self_edges  // resize(index) function pointer
  },
  {
    "has_empty_waypoint_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::UploadGraphResponseValidationStatus, has_empty_waypoint_ids),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "has_empty_edge_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::UploadGraphResponseValidationStatus, has_empty_edge_ids),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "has_empty_waypoint_anchor_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::UploadGraphResponseValidationStatus, has_empty_waypoint_anchor_ids),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "has_empty_object_anchor_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::UploadGraphResponseValidationStatus, has_empty_object_anchor_ids),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers UploadGraphResponseValidationStatus_message_members = {
  "bosdyn_msgs::msg",  // message namespace
  "UploadGraphResponseValidationStatus",  // message name
  14,  // number of fields
  sizeof(bosdyn_msgs::msg::UploadGraphResponseValidationStatus),
  UploadGraphResponseValidationStatus_message_member_array,  // message members
  UploadGraphResponseValidationStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  UploadGraphResponseValidationStatus_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t UploadGraphResponseValidationStatus_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &UploadGraphResponseValidationStatus_message_members,
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
get_message_type_support_handle<bosdyn_msgs::msg::UploadGraphResponseValidationStatus>()
{
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::UploadGraphResponseValidationStatus_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bosdyn_msgs, msg, UploadGraphResponseValidationStatus)() {
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::UploadGraphResponseValidationStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
