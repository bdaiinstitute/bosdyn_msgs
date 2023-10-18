// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from bosdyn_msgs:msg/WaypointSnapshot.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "bosdyn_msgs/msg/detail/waypoint_snapshot__struct.hpp"
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

void WaypointSnapshot_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) bosdyn_msgs::msg::WaypointSnapshot(_init);
}

void WaypointSnapshot_fini_function(void * message_memory)
{
  auto typed_message = static_cast<bosdyn_msgs::msg::WaypointSnapshot *>(message_memory);
  typed_message->~WaypointSnapshot();
}

size_t size_function__WaypointSnapshot__images(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bosdyn_msgs::msg::ImageResponse> *>(untyped_member);
  return member->size();
}

const void * get_const_function__WaypointSnapshot__images(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<bosdyn_msgs::msg::ImageResponse> *>(untyped_member);
  return &member[index];
}

void * get_function__WaypointSnapshot__images(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<bosdyn_msgs::msg::ImageResponse> *>(untyped_member);
  return &member[index];
}

void fetch_function__WaypointSnapshot__images(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bosdyn_msgs::msg::ImageResponse *>(
    get_const_function__WaypointSnapshot__images(untyped_member, index));
  auto & value = *reinterpret_cast<bosdyn_msgs::msg::ImageResponse *>(untyped_value);
  value = item;
}

void assign_function__WaypointSnapshot__images(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bosdyn_msgs::msg::ImageResponse *>(
    get_function__WaypointSnapshot__images(untyped_member, index));
  const auto & value = *reinterpret_cast<const bosdyn_msgs::msg::ImageResponse *>(untyped_value);
  item = value;
}

void resize_function__WaypointSnapshot__images(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bosdyn_msgs::msg::ImageResponse> *>(untyped_member);
  member->resize(size);
}

size_t size_function__WaypointSnapshot__objects(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bosdyn_msgs::msg::WorldObject> *>(untyped_member);
  return member->size();
}

const void * get_const_function__WaypointSnapshot__objects(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<bosdyn_msgs::msg::WorldObject> *>(untyped_member);
  return &member[index];
}

void * get_function__WaypointSnapshot__objects(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<bosdyn_msgs::msg::WorldObject> *>(untyped_member);
  return &member[index];
}

void fetch_function__WaypointSnapshot__objects(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bosdyn_msgs::msg::WorldObject *>(
    get_const_function__WaypointSnapshot__objects(untyped_member, index));
  auto & value = *reinterpret_cast<bosdyn_msgs::msg::WorldObject *>(untyped_value);
  value = item;
}

void assign_function__WaypointSnapshot__objects(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bosdyn_msgs::msg::WorldObject *>(
    get_function__WaypointSnapshot__objects(untyped_member, index));
  const auto & value = *reinterpret_cast<const bosdyn_msgs::msg::WorldObject *>(untyped_value);
  item = value;
}

void resize_function__WaypointSnapshot__objects(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bosdyn_msgs::msg::WorldObject> *>(untyped_member);
  member->resize(size);
}

size_t size_function__WaypointSnapshot__robot_local_grids(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bosdyn_msgs::msg::LocalGrid> *>(untyped_member);
  return member->size();
}

const void * get_const_function__WaypointSnapshot__robot_local_grids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<bosdyn_msgs::msg::LocalGrid> *>(untyped_member);
  return &member[index];
}

void * get_function__WaypointSnapshot__robot_local_grids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<bosdyn_msgs::msg::LocalGrid> *>(untyped_member);
  return &member[index];
}

void fetch_function__WaypointSnapshot__robot_local_grids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bosdyn_msgs::msg::LocalGrid *>(
    get_const_function__WaypointSnapshot__robot_local_grids(untyped_member, index));
  auto & value = *reinterpret_cast<bosdyn_msgs::msg::LocalGrid *>(untyped_value);
  value = item;
}

void assign_function__WaypointSnapshot__robot_local_grids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bosdyn_msgs::msg::LocalGrid *>(
    get_function__WaypointSnapshot__robot_local_grids(untyped_member, index));
  const auto & value = *reinterpret_cast<const bosdyn_msgs::msg::LocalGrid *>(untyped_value);
  item = value;
}

void resize_function__WaypointSnapshot__robot_local_grids(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bosdyn_msgs::msg::LocalGrid> *>(untyped_member);
  member->resize(size);
}

size_t size_function__WaypointSnapshot__payloads(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bosdyn_msgs::msg::Payload> *>(untyped_member);
  return member->size();
}

const void * get_const_function__WaypointSnapshot__payloads(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<bosdyn_msgs::msg::Payload> *>(untyped_member);
  return &member[index];
}

void * get_function__WaypointSnapshot__payloads(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<bosdyn_msgs::msg::Payload> *>(untyped_member);
  return &member[index];
}

void fetch_function__WaypointSnapshot__payloads(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bosdyn_msgs::msg::Payload *>(
    get_const_function__WaypointSnapshot__payloads(untyped_member, index));
  auto & value = *reinterpret_cast<bosdyn_msgs::msg::Payload *>(untyped_value);
  value = item;
}

void assign_function__WaypointSnapshot__payloads(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bosdyn_msgs::msg::Payload *>(
    get_function__WaypointSnapshot__payloads(untyped_member, index));
  const auto & value = *reinterpret_cast<const bosdyn_msgs::msg::Payload *>(untyped_value);
  item = value;
}

void resize_function__WaypointSnapshot__payloads(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bosdyn_msgs::msg::Payload> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember WaypointSnapshot_message_member_array[18] = {
  {
    "id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::WaypointSnapshot, id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "images",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::ImageResponse>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::WaypointSnapshot, images),  // bytes offset in struct
    nullptr,  // default value
    size_function__WaypointSnapshot__images,  // size() function pointer
    get_const_function__WaypointSnapshot__images,  // get_const(index) function pointer
    get_function__WaypointSnapshot__images,  // get(index) function pointer
    fetch_function__WaypointSnapshot__images,  // fetch(index, &value) function pointer
    assign_function__WaypointSnapshot__images,  // assign(index, value) function pointer
    resize_function__WaypointSnapshot__images  // resize(index) function pointer
  },
  {
    "point_cloud",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::PointCloud>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::WaypointSnapshot, point_cloud),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "point_cloud_is_set",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::WaypointSnapshot, point_cloud_is_set),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "objects",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::WorldObject>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::WaypointSnapshot, objects),  // bytes offset in struct
    nullptr,  // default value
    size_function__WaypointSnapshot__objects,  // size() function pointer
    get_const_function__WaypointSnapshot__objects,  // get_const(index) function pointer
    get_function__WaypointSnapshot__objects,  // get(index) function pointer
    fetch_function__WaypointSnapshot__objects,  // fetch(index, &value) function pointer
    assign_function__WaypointSnapshot__objects,  // assign(index, value) function pointer
    resize_function__WaypointSnapshot__objects  // resize(index) function pointer
  },
  {
    "robot_state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::RobotState>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::WaypointSnapshot, robot_state),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "robot_state_is_set",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::WaypointSnapshot, robot_state_is_set),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "robot_local_grids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::LocalGrid>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::WaypointSnapshot, robot_local_grids),  // bytes offset in struct
    nullptr,  // default value
    size_function__WaypointSnapshot__robot_local_grids,  // size() function pointer
    get_const_function__WaypointSnapshot__robot_local_grids,  // get_const(index) function pointer
    get_function__WaypointSnapshot__robot_local_grids,  // get(index) function pointer
    fetch_function__WaypointSnapshot__robot_local_grids,  // fetch(index, &value) function pointer
    assign_function__WaypointSnapshot__robot_local_grids,  // assign(index, value) function pointer
    resize_function__WaypointSnapshot__robot_local_grids  // resize(index) function pointer
  },
  {
    "is_point_cloud_processed",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::WaypointSnapshot, is_point_cloud_processed),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "version_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::WaypointSnapshot, version_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "has_remote_point_cloud_sensor",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::WaypointSnapshot, has_remote_point_cloud_sensor),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "body_tform_remote_point_cloud_sensor",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::WaypointSnapshot, body_tform_remote_point_cloud_sensor),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "body_tform_remote_point_cloud_sensor_is_set",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::WaypointSnapshot, body_tform_remote_point_cloud_sensor_is_set),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "payloads",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::Payload>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::WaypointSnapshot, payloads),  // bytes offset in struct
    nullptr,  // default value
    size_function__WaypointSnapshot__payloads,  // size() function pointer
    get_const_function__WaypointSnapshot__payloads,  // get_const(index) function pointer
    get_function__WaypointSnapshot__payloads,  // get(index) function pointer
    fetch_function__WaypointSnapshot__payloads,  // fetch(index, &value) function pointer
    assign_function__WaypointSnapshot__payloads,  // assign(index, value) function pointer
    resize_function__WaypointSnapshot__payloads  // resize(index) function pointer
  },
  {
    "robot_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::RobotId>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::WaypointSnapshot, robot_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "robot_id_is_set",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::WaypointSnapshot, robot_id_is_set),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "recording_started_on",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::WaypointSnapshot, recording_started_on),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "recording_started_on_is_set",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::WaypointSnapshot, recording_started_on_is_set),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers WaypointSnapshot_message_members = {
  "bosdyn_msgs::msg",  // message namespace
  "WaypointSnapshot",  // message name
  18,  // number of fields
  sizeof(bosdyn_msgs::msg::WaypointSnapshot),
  WaypointSnapshot_message_member_array,  // message members
  WaypointSnapshot_init_function,  // function to initialize message memory (memory has to be allocated)
  WaypointSnapshot_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t WaypointSnapshot_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &WaypointSnapshot_message_members,
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
get_message_type_support_handle<bosdyn_msgs::msg::WaypointSnapshot>()
{
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::WaypointSnapshot_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bosdyn_msgs, msg, WaypointSnapshot)() {
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::WaypointSnapshot_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
