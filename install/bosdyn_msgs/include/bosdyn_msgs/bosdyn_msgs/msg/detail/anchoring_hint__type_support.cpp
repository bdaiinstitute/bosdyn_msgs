// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from bosdyn_msgs:msg/AnchoringHint.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "bosdyn_msgs/msg/detail/anchoring_hint__struct.hpp"
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

void AnchoringHint_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) bosdyn_msgs::msg::AnchoringHint(_init);
}

void AnchoringHint_fini_function(void * message_memory)
{
  auto typed_message = static_cast<bosdyn_msgs::msg::AnchoringHint *>(message_memory);
  typed_message->~AnchoringHint();
}

size_t size_function__AnchoringHint__waypoint_anchors(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bosdyn_msgs::msg::WaypointAnchorHint> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AnchoringHint__waypoint_anchors(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<bosdyn_msgs::msg::WaypointAnchorHint> *>(untyped_member);
  return &member[index];
}

void * get_function__AnchoringHint__waypoint_anchors(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<bosdyn_msgs::msg::WaypointAnchorHint> *>(untyped_member);
  return &member[index];
}

void fetch_function__AnchoringHint__waypoint_anchors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bosdyn_msgs::msg::WaypointAnchorHint *>(
    get_const_function__AnchoringHint__waypoint_anchors(untyped_member, index));
  auto & value = *reinterpret_cast<bosdyn_msgs::msg::WaypointAnchorHint *>(untyped_value);
  value = item;
}

void assign_function__AnchoringHint__waypoint_anchors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bosdyn_msgs::msg::WaypointAnchorHint *>(
    get_function__AnchoringHint__waypoint_anchors(untyped_member, index));
  const auto & value = *reinterpret_cast<const bosdyn_msgs::msg::WaypointAnchorHint *>(untyped_value);
  item = value;
}

void resize_function__AnchoringHint__waypoint_anchors(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bosdyn_msgs::msg::WaypointAnchorHint> *>(untyped_member);
  member->resize(size);
}

size_t size_function__AnchoringHint__world_objects(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bosdyn_msgs::msg::WorldObjectAnchorHint> *>(untyped_member);
  return member->size();
}

const void * get_const_function__AnchoringHint__world_objects(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<bosdyn_msgs::msg::WorldObjectAnchorHint> *>(untyped_member);
  return &member[index];
}

void * get_function__AnchoringHint__world_objects(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<bosdyn_msgs::msg::WorldObjectAnchorHint> *>(untyped_member);
  return &member[index];
}

void fetch_function__AnchoringHint__world_objects(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bosdyn_msgs::msg::WorldObjectAnchorHint *>(
    get_const_function__AnchoringHint__world_objects(untyped_member, index));
  auto & value = *reinterpret_cast<bosdyn_msgs::msg::WorldObjectAnchorHint *>(untyped_value);
  value = item;
}

void assign_function__AnchoringHint__world_objects(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bosdyn_msgs::msg::WorldObjectAnchorHint *>(
    get_function__AnchoringHint__world_objects(untyped_member, index));
  const auto & value = *reinterpret_cast<const bosdyn_msgs::msg::WorldObjectAnchorHint *>(untyped_value);
  item = value;
}

void resize_function__AnchoringHint__world_objects(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bosdyn_msgs::msg::WorldObjectAnchorHint> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AnchoringHint_message_member_array[2] = {
  {
    "waypoint_anchors",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::WaypointAnchorHint>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::AnchoringHint, waypoint_anchors),  // bytes offset in struct
    nullptr,  // default value
    size_function__AnchoringHint__waypoint_anchors,  // size() function pointer
    get_const_function__AnchoringHint__waypoint_anchors,  // get_const(index) function pointer
    get_function__AnchoringHint__waypoint_anchors,  // get(index) function pointer
    fetch_function__AnchoringHint__waypoint_anchors,  // fetch(index, &value) function pointer
    assign_function__AnchoringHint__waypoint_anchors,  // assign(index, value) function pointer
    resize_function__AnchoringHint__waypoint_anchors  // resize(index) function pointer
  },
  {
    "world_objects",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::WorldObjectAnchorHint>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::AnchoringHint, world_objects),  // bytes offset in struct
    nullptr,  // default value
    size_function__AnchoringHint__world_objects,  // size() function pointer
    get_const_function__AnchoringHint__world_objects,  // get_const(index) function pointer
    get_function__AnchoringHint__world_objects,  // get(index) function pointer
    fetch_function__AnchoringHint__world_objects,  // fetch(index, &value) function pointer
    assign_function__AnchoringHint__world_objects,  // assign(index, value) function pointer
    resize_function__AnchoringHint__world_objects  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AnchoringHint_message_members = {
  "bosdyn_msgs::msg",  // message namespace
  "AnchoringHint",  // message name
  2,  // number of fields
  sizeof(bosdyn_msgs::msg::AnchoringHint),
  AnchoringHint_message_member_array,  // message members
  AnchoringHint_init_function,  // function to initialize message memory (memory has to be allocated)
  AnchoringHint_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AnchoringHint_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AnchoringHint_message_members,
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
get_message_type_support_handle<bosdyn_msgs::msg::AnchoringHint>()
{
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::AnchoringHint_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bosdyn_msgs, msg, AnchoringHint)() {
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::AnchoringHint_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
