// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from bosdyn_msgs:msg/LoadAutowalkResponse.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "bosdyn_msgs/msg/detail/load_autowalk_response__struct.hpp"
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

void LoadAutowalkResponse_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) bosdyn_msgs::msg::LoadAutowalkResponse(_init);
}

void LoadAutowalkResponse_fini_function(void * message_memory)
{
  auto typed_message = static_cast<bosdyn_msgs::msg::LoadAutowalkResponse *>(message_memory);
  typed_message->~LoadAutowalkResponse();
}

size_t size_function__LoadAutowalkResponse__lease_use_results(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bosdyn_msgs::msg::LeaseUseResult> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LoadAutowalkResponse__lease_use_results(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<bosdyn_msgs::msg::LeaseUseResult> *>(untyped_member);
  return &member[index];
}

void * get_function__LoadAutowalkResponse__lease_use_results(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<bosdyn_msgs::msg::LeaseUseResult> *>(untyped_member);
  return &member[index];
}

void fetch_function__LoadAutowalkResponse__lease_use_results(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bosdyn_msgs::msg::LeaseUseResult *>(
    get_const_function__LoadAutowalkResponse__lease_use_results(untyped_member, index));
  auto & value = *reinterpret_cast<bosdyn_msgs::msg::LeaseUseResult *>(untyped_value);
  value = item;
}

void assign_function__LoadAutowalkResponse__lease_use_results(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bosdyn_msgs::msg::LeaseUseResult *>(
    get_function__LoadAutowalkResponse__lease_use_results(untyped_member, index));
  const auto & value = *reinterpret_cast<const bosdyn_msgs::msg::LeaseUseResult *>(untyped_value);
  item = value;
}

void resize_function__LoadAutowalkResponse__lease_use_results(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bosdyn_msgs::msg::LeaseUseResult> *>(untyped_member);
  member->resize(size);
}

size_t size_function__LoadAutowalkResponse__failed_nodes(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bosdyn_msgs::msg::FailedNode> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LoadAutowalkResponse__failed_nodes(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<bosdyn_msgs::msg::FailedNode> *>(untyped_member);
  return &member[index];
}

void * get_function__LoadAutowalkResponse__failed_nodes(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<bosdyn_msgs::msg::FailedNode> *>(untyped_member);
  return &member[index];
}

void fetch_function__LoadAutowalkResponse__failed_nodes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bosdyn_msgs::msg::FailedNode *>(
    get_const_function__LoadAutowalkResponse__failed_nodes(untyped_member, index));
  auto & value = *reinterpret_cast<bosdyn_msgs::msg::FailedNode *>(untyped_value);
  value = item;
}

void assign_function__LoadAutowalkResponse__failed_nodes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bosdyn_msgs::msg::FailedNode *>(
    get_function__LoadAutowalkResponse__failed_nodes(untyped_member, index));
  const auto & value = *reinterpret_cast<const bosdyn_msgs::msg::FailedNode *>(untyped_value);
  item = value;
}

void resize_function__LoadAutowalkResponse__failed_nodes(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bosdyn_msgs::msg::FailedNode> *>(untyped_member);
  member->resize(size);
}

size_t size_function__LoadAutowalkResponse__element_identifiers(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bosdyn_msgs::msg::ElementIdentifiers> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LoadAutowalkResponse__element_identifiers(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<bosdyn_msgs::msg::ElementIdentifiers> *>(untyped_member);
  return &member[index];
}

void * get_function__LoadAutowalkResponse__element_identifiers(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<bosdyn_msgs::msg::ElementIdentifiers> *>(untyped_member);
  return &member[index];
}

void fetch_function__LoadAutowalkResponse__element_identifiers(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bosdyn_msgs::msg::ElementIdentifiers *>(
    get_const_function__LoadAutowalkResponse__element_identifiers(untyped_member, index));
  auto & value = *reinterpret_cast<bosdyn_msgs::msg::ElementIdentifiers *>(untyped_value);
  value = item;
}

void assign_function__LoadAutowalkResponse__element_identifiers(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bosdyn_msgs::msg::ElementIdentifiers *>(
    get_function__LoadAutowalkResponse__element_identifiers(untyped_member, index));
  const auto & value = *reinterpret_cast<const bosdyn_msgs::msg::ElementIdentifiers *>(untyped_value);
  item = value;
}

void resize_function__LoadAutowalkResponse__element_identifiers(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bosdyn_msgs::msg::ElementIdentifiers> *>(untyped_member);
  member->resize(size);
}

size_t size_function__LoadAutowalkResponse__failed_elements(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bosdyn_msgs::msg::KeyInt32ValueBosdynMsgsFailedElement> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LoadAutowalkResponse__failed_elements(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<bosdyn_msgs::msg::KeyInt32ValueBosdynMsgsFailedElement> *>(untyped_member);
  return &member[index];
}

void * get_function__LoadAutowalkResponse__failed_elements(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<bosdyn_msgs::msg::KeyInt32ValueBosdynMsgsFailedElement> *>(untyped_member);
  return &member[index];
}

void fetch_function__LoadAutowalkResponse__failed_elements(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bosdyn_msgs::msg::KeyInt32ValueBosdynMsgsFailedElement *>(
    get_const_function__LoadAutowalkResponse__failed_elements(untyped_member, index));
  auto & value = *reinterpret_cast<bosdyn_msgs::msg::KeyInt32ValueBosdynMsgsFailedElement *>(untyped_value);
  value = item;
}

void assign_function__LoadAutowalkResponse__failed_elements(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bosdyn_msgs::msg::KeyInt32ValueBosdynMsgsFailedElement *>(
    get_function__LoadAutowalkResponse__failed_elements(untyped_member, index));
  const auto & value = *reinterpret_cast<const bosdyn_msgs::msg::KeyInt32ValueBosdynMsgsFailedElement *>(untyped_value);
  item = value;
}

void resize_function__LoadAutowalkResponse__failed_elements(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bosdyn_msgs::msg::KeyInt32ValueBosdynMsgsFailedElement> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LoadAutowalkResponse_message_member_array[12] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::ResponseHeader>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::LoadAutowalkResponse, header),  // bytes offset in struct
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
    offsetof(bosdyn_msgs::msg::LoadAutowalkResponse, header_is_set),  // bytes offset in struct
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
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::LoadAutowalkResponseStatus>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::LoadAutowalkResponse, status),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "lease_use_results",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::LeaseUseResult>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::LoadAutowalkResponse, lease_use_results),  // bytes offset in struct
    nullptr,  // default value
    size_function__LoadAutowalkResponse__lease_use_results,  // size() function pointer
    get_const_function__LoadAutowalkResponse__lease_use_results,  // get_const(index) function pointer
    get_function__LoadAutowalkResponse__lease_use_results,  // get(index) function pointer
    fetch_function__LoadAutowalkResponse__lease_use_results,  // fetch(index, &value) function pointer
    assign_function__LoadAutowalkResponse__lease_use_results,  // assign(index, value) function pointer
    resize_function__LoadAutowalkResponse__lease_use_results  // resize(index) function pointer
  },
  {
    "failed_nodes",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::FailedNode>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::LoadAutowalkResponse, failed_nodes),  // bytes offset in struct
    nullptr,  // default value
    size_function__LoadAutowalkResponse__failed_nodes,  // size() function pointer
    get_const_function__LoadAutowalkResponse__failed_nodes,  // get_const(index) function pointer
    get_function__LoadAutowalkResponse__failed_nodes,  // get(index) function pointer
    fetch_function__LoadAutowalkResponse__failed_nodes,  // fetch(index, &value) function pointer
    assign_function__LoadAutowalkResponse__failed_nodes,  // assign(index, value) function pointer
    resize_function__LoadAutowalkResponse__failed_nodes  // resize(index) function pointer
  },
  {
    "element_identifiers",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::ElementIdentifiers>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::LoadAutowalkResponse, element_identifiers),  // bytes offset in struct
    nullptr,  // default value
    size_function__LoadAutowalkResponse__element_identifiers,  // size() function pointer
    get_const_function__LoadAutowalkResponse__element_identifiers,  // get_const(index) function pointer
    get_function__LoadAutowalkResponse__element_identifiers,  // get(index) function pointer
    fetch_function__LoadAutowalkResponse__element_identifiers,  // fetch(index, &value) function pointer
    assign_function__LoadAutowalkResponse__element_identifiers,  // assign(index, value) function pointer
    resize_function__LoadAutowalkResponse__element_identifiers  // resize(index) function pointer
  },
  {
    "failed_elements",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::KeyInt32ValueBosdynMsgsFailedElement>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::LoadAutowalkResponse, failed_elements),  // bytes offset in struct
    nullptr,  // default value
    size_function__LoadAutowalkResponse__failed_elements,  // size() function pointer
    get_const_function__LoadAutowalkResponse__failed_elements,  // get_const(index) function pointer
    get_function__LoadAutowalkResponse__failed_elements,  // get(index) function pointer
    fetch_function__LoadAutowalkResponse__failed_elements,  // fetch(index, &value) function pointer
    assign_function__LoadAutowalkResponse__failed_elements,  // assign(index, value) function pointer
    resize_function__LoadAutowalkResponse__failed_elements  // resize(index) function pointer
  },
  {
    "mission_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::LoadAutowalkResponse, mission_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "docking_node",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::NodeIdentifier>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::LoadAutowalkResponse, docking_node),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "docking_node_is_set",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::LoadAutowalkResponse, docking_node_is_set),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "loop_node",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::NodeIdentifier>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::LoadAutowalkResponse, loop_node),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "loop_node_is_set",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::LoadAutowalkResponse, loop_node_is_set),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LoadAutowalkResponse_message_members = {
  "bosdyn_msgs::msg",  // message namespace
  "LoadAutowalkResponse",  // message name
  12,  // number of fields
  sizeof(bosdyn_msgs::msg::LoadAutowalkResponse),
  LoadAutowalkResponse_message_member_array,  // message members
  LoadAutowalkResponse_init_function,  // function to initialize message memory (memory has to be allocated)
  LoadAutowalkResponse_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LoadAutowalkResponse_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LoadAutowalkResponse_message_members,
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
get_message_type_support_handle<bosdyn_msgs::msg::LoadAutowalkResponse>()
{
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::LoadAutowalkResponse_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bosdyn_msgs, msg, LoadAutowalkResponse)() {
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::LoadAutowalkResponse_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
