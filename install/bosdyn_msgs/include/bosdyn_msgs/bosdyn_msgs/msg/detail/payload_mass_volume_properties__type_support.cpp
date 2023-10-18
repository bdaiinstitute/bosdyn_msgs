// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from bosdyn_msgs:msg/PayloadMassVolumeProperties.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "bosdyn_msgs/msg/detail/payload_mass_volume_properties__struct.hpp"
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

void PayloadMassVolumeProperties_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) bosdyn_msgs::msg::PayloadMassVolumeProperties(_init);
}

void PayloadMassVolumeProperties_fini_function(void * message_memory)
{
  auto typed_message = static_cast<bosdyn_msgs::msg::PayloadMassVolumeProperties *>(message_memory);
  typed_message->~PayloadMassVolumeProperties();
}

size_t size_function__PayloadMassVolumeProperties__bounding_box(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bosdyn_msgs::msg::Box3WithFrame> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PayloadMassVolumeProperties__bounding_box(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<bosdyn_msgs::msg::Box3WithFrame> *>(untyped_member);
  return &member[index];
}

void * get_function__PayloadMassVolumeProperties__bounding_box(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<bosdyn_msgs::msg::Box3WithFrame> *>(untyped_member);
  return &member[index];
}

void fetch_function__PayloadMassVolumeProperties__bounding_box(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bosdyn_msgs::msg::Box3WithFrame *>(
    get_const_function__PayloadMassVolumeProperties__bounding_box(untyped_member, index));
  auto & value = *reinterpret_cast<bosdyn_msgs::msg::Box3WithFrame *>(untyped_value);
  value = item;
}

void assign_function__PayloadMassVolumeProperties__bounding_box(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bosdyn_msgs::msg::Box3WithFrame *>(
    get_function__PayloadMassVolumeProperties__bounding_box(untyped_member, index));
  const auto & value = *reinterpret_cast<const bosdyn_msgs::msg::Box3WithFrame *>(untyped_value);
  item = value;
}

void resize_function__PayloadMassVolumeProperties__bounding_box(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bosdyn_msgs::msg::Box3WithFrame> *>(untyped_member);
  member->resize(size);
}

size_t size_function__PayloadMassVolumeProperties__joint_limits(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bosdyn_msgs::msg::JointLimits> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PayloadMassVolumeProperties__joint_limits(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<bosdyn_msgs::msg::JointLimits> *>(untyped_member);
  return &member[index];
}

void * get_function__PayloadMassVolumeProperties__joint_limits(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<bosdyn_msgs::msg::JointLimits> *>(untyped_member);
  return &member[index];
}

void fetch_function__PayloadMassVolumeProperties__joint_limits(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bosdyn_msgs::msg::JointLimits *>(
    get_const_function__PayloadMassVolumeProperties__joint_limits(untyped_member, index));
  auto & value = *reinterpret_cast<bosdyn_msgs::msg::JointLimits *>(untyped_value);
  value = item;
}

void assign_function__PayloadMassVolumeProperties__joint_limits(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bosdyn_msgs::msg::JointLimits *>(
    get_function__PayloadMassVolumeProperties__joint_limits(untyped_member, index));
  const auto & value = *reinterpret_cast<const bosdyn_msgs::msg::JointLimits *>(untyped_value);
  item = value;
}

void resize_function__PayloadMassVolumeProperties__joint_limits(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bosdyn_msgs::msg::JointLimits> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PayloadMassVolumeProperties_message_member_array[7] = {
  {
    "total_mass",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::PayloadMassVolumeProperties, total_mass),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "com_pos_rt_payload",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Vector3>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::PayloadMassVolumeProperties, com_pos_rt_payload),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "com_pos_rt_payload_is_set",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::PayloadMassVolumeProperties, com_pos_rt_payload_is_set),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "moi_tensor",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::MomentOfIntertia>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::PayloadMassVolumeProperties, moi_tensor),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "moi_tensor_is_set",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::PayloadMassVolumeProperties, moi_tensor_is_set),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "bounding_box",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::Box3WithFrame>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::PayloadMassVolumeProperties, bounding_box),  // bytes offset in struct
    nullptr,  // default value
    size_function__PayloadMassVolumeProperties__bounding_box,  // size() function pointer
    get_const_function__PayloadMassVolumeProperties__bounding_box,  // get_const(index) function pointer
    get_function__PayloadMassVolumeProperties__bounding_box,  // get(index) function pointer
    fetch_function__PayloadMassVolumeProperties__bounding_box,  // fetch(index, &value) function pointer
    assign_function__PayloadMassVolumeProperties__bounding_box,  // assign(index, value) function pointer
    resize_function__PayloadMassVolumeProperties__bounding_box  // resize(index) function pointer
  },
  {
    "joint_limits",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::JointLimits>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::PayloadMassVolumeProperties, joint_limits),  // bytes offset in struct
    nullptr,  // default value
    size_function__PayloadMassVolumeProperties__joint_limits,  // size() function pointer
    get_const_function__PayloadMassVolumeProperties__joint_limits,  // get_const(index) function pointer
    get_function__PayloadMassVolumeProperties__joint_limits,  // get(index) function pointer
    fetch_function__PayloadMassVolumeProperties__joint_limits,  // fetch(index, &value) function pointer
    assign_function__PayloadMassVolumeProperties__joint_limits,  // assign(index, value) function pointer
    resize_function__PayloadMassVolumeProperties__joint_limits  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PayloadMassVolumeProperties_message_members = {
  "bosdyn_msgs::msg",  // message namespace
  "PayloadMassVolumeProperties",  // message name
  7,  // number of fields
  sizeof(bosdyn_msgs::msg::PayloadMassVolumeProperties),
  PayloadMassVolumeProperties_message_member_array,  // message members
  PayloadMassVolumeProperties_init_function,  // function to initialize message memory (memory has to be allocated)
  PayloadMassVolumeProperties_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PayloadMassVolumeProperties_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PayloadMassVolumeProperties_message_members,
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
get_message_type_support_handle<bosdyn_msgs::msg::PayloadMassVolumeProperties>()
{
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::PayloadMassVolumeProperties_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bosdyn_msgs, msg, PayloadMassVolumeProperties)() {
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::PayloadMassVolumeProperties_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
