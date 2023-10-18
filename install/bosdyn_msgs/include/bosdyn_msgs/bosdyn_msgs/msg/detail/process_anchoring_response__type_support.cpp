// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from bosdyn_msgs:msg/ProcessAnchoringResponse.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "bosdyn_msgs/msg/detail/process_anchoring_response__struct.hpp"
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

void ProcessAnchoringResponse_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) bosdyn_msgs::msg::ProcessAnchoringResponse(_init);
}

void ProcessAnchoringResponse_fini_function(void * message_memory)
{
  auto typed_message = static_cast<bosdyn_msgs::msg::ProcessAnchoringResponse *>(message_memory);
  typed_message->~ProcessAnchoringResponse();
}

size_t size_function__ProcessAnchoringResponse__waypoint_results(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bosdyn_msgs::msg::Anchor> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ProcessAnchoringResponse__waypoint_results(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<bosdyn_msgs::msg::Anchor> *>(untyped_member);
  return &member[index];
}

void * get_function__ProcessAnchoringResponse__waypoint_results(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<bosdyn_msgs::msg::Anchor> *>(untyped_member);
  return &member[index];
}

void fetch_function__ProcessAnchoringResponse__waypoint_results(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bosdyn_msgs::msg::Anchor *>(
    get_const_function__ProcessAnchoringResponse__waypoint_results(untyped_member, index));
  auto & value = *reinterpret_cast<bosdyn_msgs::msg::Anchor *>(untyped_value);
  value = item;
}

void assign_function__ProcessAnchoringResponse__waypoint_results(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bosdyn_msgs::msg::Anchor *>(
    get_function__ProcessAnchoringResponse__waypoint_results(untyped_member, index));
  const auto & value = *reinterpret_cast<const bosdyn_msgs::msg::Anchor *>(untyped_value);
  item = value;
}

void resize_function__ProcessAnchoringResponse__waypoint_results(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bosdyn_msgs::msg::Anchor> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ProcessAnchoringResponse__world_object_results(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bosdyn_msgs::msg::AnchoredWorldObject> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ProcessAnchoringResponse__world_object_results(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<bosdyn_msgs::msg::AnchoredWorldObject> *>(untyped_member);
  return &member[index];
}

void * get_function__ProcessAnchoringResponse__world_object_results(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<bosdyn_msgs::msg::AnchoredWorldObject> *>(untyped_member);
  return &member[index];
}

void fetch_function__ProcessAnchoringResponse__world_object_results(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bosdyn_msgs::msg::AnchoredWorldObject *>(
    get_const_function__ProcessAnchoringResponse__world_object_results(untyped_member, index));
  auto & value = *reinterpret_cast<bosdyn_msgs::msg::AnchoredWorldObject *>(untyped_value);
  value = item;
}

void assign_function__ProcessAnchoringResponse__world_object_results(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bosdyn_msgs::msg::AnchoredWorldObject *>(
    get_function__ProcessAnchoringResponse__world_object_results(untyped_member, index));
  const auto & value = *reinterpret_cast<const bosdyn_msgs::msg::AnchoredWorldObject *>(untyped_value);
  item = value;
}

void resize_function__ProcessAnchoringResponse__world_object_results(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bosdyn_msgs::msg::AnchoredWorldObject> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ProcessAnchoringResponse__violated_waypoint_constraints(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bosdyn_msgs::msg::WaypointAnchorHint> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ProcessAnchoringResponse__violated_waypoint_constraints(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<bosdyn_msgs::msg::WaypointAnchorHint> *>(untyped_member);
  return &member[index];
}

void * get_function__ProcessAnchoringResponse__violated_waypoint_constraints(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<bosdyn_msgs::msg::WaypointAnchorHint> *>(untyped_member);
  return &member[index];
}

void fetch_function__ProcessAnchoringResponse__violated_waypoint_constraints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bosdyn_msgs::msg::WaypointAnchorHint *>(
    get_const_function__ProcessAnchoringResponse__violated_waypoint_constraints(untyped_member, index));
  auto & value = *reinterpret_cast<bosdyn_msgs::msg::WaypointAnchorHint *>(untyped_value);
  value = item;
}

void assign_function__ProcessAnchoringResponse__violated_waypoint_constraints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bosdyn_msgs::msg::WaypointAnchorHint *>(
    get_function__ProcessAnchoringResponse__violated_waypoint_constraints(untyped_member, index));
  const auto & value = *reinterpret_cast<const bosdyn_msgs::msg::WaypointAnchorHint *>(untyped_value);
  item = value;
}

void resize_function__ProcessAnchoringResponse__violated_waypoint_constraints(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bosdyn_msgs::msg::WaypointAnchorHint> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ProcessAnchoringResponse__violated_object_constraints(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bosdyn_msgs::msg::WorldObjectAnchorHint> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ProcessAnchoringResponse__violated_object_constraints(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<bosdyn_msgs::msg::WorldObjectAnchorHint> *>(untyped_member);
  return &member[index];
}

void * get_function__ProcessAnchoringResponse__violated_object_constraints(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<bosdyn_msgs::msg::WorldObjectAnchorHint> *>(untyped_member);
  return &member[index];
}

void fetch_function__ProcessAnchoringResponse__violated_object_constraints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bosdyn_msgs::msg::WorldObjectAnchorHint *>(
    get_const_function__ProcessAnchoringResponse__violated_object_constraints(untyped_member, index));
  auto & value = *reinterpret_cast<bosdyn_msgs::msg::WorldObjectAnchorHint *>(untyped_value);
  value = item;
}

void assign_function__ProcessAnchoringResponse__violated_object_constraints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bosdyn_msgs::msg::WorldObjectAnchorHint *>(
    get_function__ProcessAnchoringResponse__violated_object_constraints(untyped_member, index));
  const auto & value = *reinterpret_cast<const bosdyn_msgs::msg::WorldObjectAnchorHint *>(untyped_value);
  item = value;
}

void resize_function__ProcessAnchoringResponse__violated_object_constraints(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bosdyn_msgs::msg::WorldObjectAnchorHint> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ProcessAnchoringResponse__missing_snapshot_ids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ProcessAnchoringResponse__missing_snapshot_ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__ProcessAnchoringResponse__missing_snapshot_ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__ProcessAnchoringResponse__missing_snapshot_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__ProcessAnchoringResponse__missing_snapshot_ids(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__ProcessAnchoringResponse__missing_snapshot_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__ProcessAnchoringResponse__missing_snapshot_ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__ProcessAnchoringResponse__missing_snapshot_ids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ProcessAnchoringResponse__missing_waypoint_ids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ProcessAnchoringResponse__missing_waypoint_ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__ProcessAnchoringResponse__missing_waypoint_ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__ProcessAnchoringResponse__missing_waypoint_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__ProcessAnchoringResponse__missing_waypoint_ids(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__ProcessAnchoringResponse__missing_waypoint_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__ProcessAnchoringResponse__missing_waypoint_ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__ProcessAnchoringResponse__missing_waypoint_ids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ProcessAnchoringResponse__invalid_hints(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ProcessAnchoringResponse__invalid_hints(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__ProcessAnchoringResponse__invalid_hints(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__ProcessAnchoringResponse__invalid_hints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__ProcessAnchoringResponse__invalid_hints(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__ProcessAnchoringResponse__invalid_hints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__ProcessAnchoringResponse__invalid_hints(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__ProcessAnchoringResponse__invalid_hints(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ProcessAnchoringResponse__inconsistent_edges(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bosdyn_msgs::msg::EdgeId> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ProcessAnchoringResponse__inconsistent_edges(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<bosdyn_msgs::msg::EdgeId> *>(untyped_member);
  return &member[index];
}

void * get_function__ProcessAnchoringResponse__inconsistent_edges(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<bosdyn_msgs::msg::EdgeId> *>(untyped_member);
  return &member[index];
}

void fetch_function__ProcessAnchoringResponse__inconsistent_edges(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bosdyn_msgs::msg::EdgeId *>(
    get_const_function__ProcessAnchoringResponse__inconsistent_edges(untyped_member, index));
  auto & value = *reinterpret_cast<bosdyn_msgs::msg::EdgeId *>(untyped_value);
  value = item;
}

void assign_function__ProcessAnchoringResponse__inconsistent_edges(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bosdyn_msgs::msg::EdgeId *>(
    get_function__ProcessAnchoringResponse__inconsistent_edges(untyped_member, index));
  const auto & value = *reinterpret_cast<const bosdyn_msgs::msg::EdgeId *>(untyped_value);
  item = value;
}

void resize_function__ProcessAnchoringResponse__inconsistent_edges(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bosdyn_msgs::msg::EdgeId> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ProcessAnchoringResponse_message_member_array[15] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::ResponseHeader>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::ProcessAnchoringResponse, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "header_is_set",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::ProcessAnchoringResponse, header_is_set),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "status",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::ProcessAnchoringResponseStatus>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::ProcessAnchoringResponse, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "waypoint_results",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::Anchor>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::ProcessAnchoringResponse, waypoint_results),  // bytes offset in struct
    nullptr,  // default value
    size_function__ProcessAnchoringResponse__waypoint_results,  // size() function pointer
    get_const_function__ProcessAnchoringResponse__waypoint_results,  // get_const(index) function pointer
    get_function__ProcessAnchoringResponse__waypoint_results,  // get(index) function pointer
    fetch_function__ProcessAnchoringResponse__waypoint_results,  // fetch(index, &value) function pointer
    assign_function__ProcessAnchoringResponse__waypoint_results,  // assign(index, value) function pointer
    resize_function__ProcessAnchoringResponse__waypoint_results  // resize(index) function pointer
  },
  {
    "world_object_results",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::AnchoredWorldObject>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::ProcessAnchoringResponse, world_object_results),  // bytes offset in struct
    nullptr,  // default value
    size_function__ProcessAnchoringResponse__world_object_results,  // size() function pointer
    get_const_function__ProcessAnchoringResponse__world_object_results,  // get_const(index) function pointer
    get_function__ProcessAnchoringResponse__world_object_results,  // get(index) function pointer
    fetch_function__ProcessAnchoringResponse__world_object_results,  // fetch(index, &value) function pointer
    assign_function__ProcessAnchoringResponse__world_object_results,  // assign(index, value) function pointer
    resize_function__ProcessAnchoringResponse__world_object_results  // resize(index) function pointer
  },
  {
    "anchoring_on_server_was_modified",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::ProcessAnchoringResponse, anchoring_on_server_was_modified),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "iteration",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::ProcessAnchoringResponse, iteration),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "cost",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::ProcessAnchoringResponse, cost),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "final_iteration",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::ProcessAnchoringResponse, final_iteration),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "violated_waypoint_constraints",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::WaypointAnchorHint>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::ProcessAnchoringResponse, violated_waypoint_constraints),  // bytes offset in struct
    nullptr,  // default value
    size_function__ProcessAnchoringResponse__violated_waypoint_constraints,  // size() function pointer
    get_const_function__ProcessAnchoringResponse__violated_waypoint_constraints,  // get_const(index) function pointer
    get_function__ProcessAnchoringResponse__violated_waypoint_constraints,  // get(index) function pointer
    fetch_function__ProcessAnchoringResponse__violated_waypoint_constraints,  // fetch(index, &value) function pointer
    assign_function__ProcessAnchoringResponse__violated_waypoint_constraints,  // assign(index, value) function pointer
    resize_function__ProcessAnchoringResponse__violated_waypoint_constraints  // resize(index) function pointer
  },
  {
    "violated_object_constraints",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::WorldObjectAnchorHint>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::ProcessAnchoringResponse, violated_object_constraints),  // bytes offset in struct
    nullptr,  // default value
    size_function__ProcessAnchoringResponse__violated_object_constraints,  // size() function pointer
    get_const_function__ProcessAnchoringResponse__violated_object_constraints,  // get_const(index) function pointer
    get_function__ProcessAnchoringResponse__violated_object_constraints,  // get(index) function pointer
    fetch_function__ProcessAnchoringResponse__violated_object_constraints,  // fetch(index, &value) function pointer
    assign_function__ProcessAnchoringResponse__violated_object_constraints,  // assign(index, value) function pointer
    resize_function__ProcessAnchoringResponse__violated_object_constraints  // resize(index) function pointer
  },
  {
    "missing_snapshot_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::ProcessAnchoringResponse, missing_snapshot_ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__ProcessAnchoringResponse__missing_snapshot_ids,  // size() function pointer
    get_const_function__ProcessAnchoringResponse__missing_snapshot_ids,  // get_const(index) function pointer
    get_function__ProcessAnchoringResponse__missing_snapshot_ids,  // get(index) function pointer
    fetch_function__ProcessAnchoringResponse__missing_snapshot_ids,  // fetch(index, &value) function pointer
    assign_function__ProcessAnchoringResponse__missing_snapshot_ids,  // assign(index, value) function pointer
    resize_function__ProcessAnchoringResponse__missing_snapshot_ids  // resize(index) function pointer
  },
  {
    "missing_waypoint_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::ProcessAnchoringResponse, missing_waypoint_ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__ProcessAnchoringResponse__missing_waypoint_ids,  // size() function pointer
    get_const_function__ProcessAnchoringResponse__missing_waypoint_ids,  // get_const(index) function pointer
    get_function__ProcessAnchoringResponse__missing_waypoint_ids,  // get(index) function pointer
    fetch_function__ProcessAnchoringResponse__missing_waypoint_ids,  // fetch(index, &value) function pointer
    assign_function__ProcessAnchoringResponse__missing_waypoint_ids,  // assign(index, value) function pointer
    resize_function__ProcessAnchoringResponse__missing_waypoint_ids  // resize(index) function pointer
  },
  {
    "invalid_hints",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::ProcessAnchoringResponse, invalid_hints),  // bytes offset in struct
    nullptr,  // default value
    size_function__ProcessAnchoringResponse__invalid_hints,  // size() function pointer
    get_const_function__ProcessAnchoringResponse__invalid_hints,  // get_const(index) function pointer
    get_function__ProcessAnchoringResponse__invalid_hints,  // get(index) function pointer
    fetch_function__ProcessAnchoringResponse__invalid_hints,  // fetch(index, &value) function pointer
    assign_function__ProcessAnchoringResponse__invalid_hints,  // assign(index, value) function pointer
    resize_function__ProcessAnchoringResponse__invalid_hints  // resize(index) function pointer
  },
  {
    "inconsistent_edges",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::EdgeId>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::ProcessAnchoringResponse, inconsistent_edges),  // bytes offset in struct
    nullptr,  // default value
    size_function__ProcessAnchoringResponse__inconsistent_edges,  // size() function pointer
    get_const_function__ProcessAnchoringResponse__inconsistent_edges,  // get_const(index) function pointer
    get_function__ProcessAnchoringResponse__inconsistent_edges,  // get(index) function pointer
    fetch_function__ProcessAnchoringResponse__inconsistent_edges,  // fetch(index, &value) function pointer
    assign_function__ProcessAnchoringResponse__inconsistent_edges,  // assign(index, value) function pointer
    resize_function__ProcessAnchoringResponse__inconsistent_edges  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ProcessAnchoringResponse_message_members = {
  "bosdyn_msgs::msg",  // message namespace
  "ProcessAnchoringResponse",  // message name
  15,  // number of fields
  sizeof(bosdyn_msgs::msg::ProcessAnchoringResponse),
  ProcessAnchoringResponse_message_member_array,  // message members
  ProcessAnchoringResponse_init_function,  // function to initialize message memory (memory has to be allocated)
  ProcessAnchoringResponse_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ProcessAnchoringResponse_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ProcessAnchoringResponse_message_members,
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
get_message_type_support_handle<bosdyn_msgs::msg::ProcessAnchoringResponse>()
{
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::ProcessAnchoringResponse_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bosdyn_msgs, msg, ProcessAnchoringResponse)() {
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::ProcessAnchoringResponse_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
