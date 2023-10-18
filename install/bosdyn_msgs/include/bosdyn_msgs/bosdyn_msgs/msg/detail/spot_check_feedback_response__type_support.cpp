// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from bosdyn_msgs:msg/SpotCheckFeedbackResponse.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "bosdyn_msgs/msg/detail/spot_check_feedback_response__struct.hpp"
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

void SpotCheckFeedbackResponse_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) bosdyn_msgs::msg::SpotCheckFeedbackResponse(_init);
}

void SpotCheckFeedbackResponse_fini_function(void * message_memory)
{
  auto typed_message = static_cast<bosdyn_msgs::msg::SpotCheckFeedbackResponse *>(message_memory);
  typed_message->~SpotCheckFeedbackResponse();
}

size_t size_function__SpotCheckFeedbackResponse__camera_results(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bosdyn_msgs::msg::KeyStringValueBosdynMsgsDepthPlaneSpotCheckResult> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SpotCheckFeedbackResponse__camera_results(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<bosdyn_msgs::msg::KeyStringValueBosdynMsgsDepthPlaneSpotCheckResult> *>(untyped_member);
  return &member[index];
}

void * get_function__SpotCheckFeedbackResponse__camera_results(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<bosdyn_msgs::msg::KeyStringValueBosdynMsgsDepthPlaneSpotCheckResult> *>(untyped_member);
  return &member[index];
}

void fetch_function__SpotCheckFeedbackResponse__camera_results(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bosdyn_msgs::msg::KeyStringValueBosdynMsgsDepthPlaneSpotCheckResult *>(
    get_const_function__SpotCheckFeedbackResponse__camera_results(untyped_member, index));
  auto & value = *reinterpret_cast<bosdyn_msgs::msg::KeyStringValueBosdynMsgsDepthPlaneSpotCheckResult *>(untyped_value);
  value = item;
}

void assign_function__SpotCheckFeedbackResponse__camera_results(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bosdyn_msgs::msg::KeyStringValueBosdynMsgsDepthPlaneSpotCheckResult *>(
    get_function__SpotCheckFeedbackResponse__camera_results(untyped_member, index));
  const auto & value = *reinterpret_cast<const bosdyn_msgs::msg::KeyStringValueBosdynMsgsDepthPlaneSpotCheckResult *>(untyped_value);
  item = value;
}

void resize_function__SpotCheckFeedbackResponse__camera_results(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bosdyn_msgs::msg::KeyStringValueBosdynMsgsDepthPlaneSpotCheckResult> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SpotCheckFeedbackResponse__load_cell_results(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bosdyn_msgs::msg::KeyStringValueBosdynMsgsLoadCellSpotCheckResult> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SpotCheckFeedbackResponse__load_cell_results(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<bosdyn_msgs::msg::KeyStringValueBosdynMsgsLoadCellSpotCheckResult> *>(untyped_member);
  return &member[index];
}

void * get_function__SpotCheckFeedbackResponse__load_cell_results(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<bosdyn_msgs::msg::KeyStringValueBosdynMsgsLoadCellSpotCheckResult> *>(untyped_member);
  return &member[index];
}

void fetch_function__SpotCheckFeedbackResponse__load_cell_results(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bosdyn_msgs::msg::KeyStringValueBosdynMsgsLoadCellSpotCheckResult *>(
    get_const_function__SpotCheckFeedbackResponse__load_cell_results(untyped_member, index));
  auto & value = *reinterpret_cast<bosdyn_msgs::msg::KeyStringValueBosdynMsgsLoadCellSpotCheckResult *>(untyped_value);
  value = item;
}

void assign_function__SpotCheckFeedbackResponse__load_cell_results(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bosdyn_msgs::msg::KeyStringValueBosdynMsgsLoadCellSpotCheckResult *>(
    get_function__SpotCheckFeedbackResponse__load_cell_results(untyped_member, index));
  const auto & value = *reinterpret_cast<const bosdyn_msgs::msg::KeyStringValueBosdynMsgsLoadCellSpotCheckResult *>(untyped_value);
  item = value;
}

void resize_function__SpotCheckFeedbackResponse__load_cell_results(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bosdyn_msgs::msg::KeyStringValueBosdynMsgsLoadCellSpotCheckResult> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SpotCheckFeedbackResponse__kinematic_cal_results(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bosdyn_msgs::msg::KeyStringValueBosdynMsgsJointKinematicCheckResult> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SpotCheckFeedbackResponse__kinematic_cal_results(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<bosdyn_msgs::msg::KeyStringValueBosdynMsgsJointKinematicCheckResult> *>(untyped_member);
  return &member[index];
}

void * get_function__SpotCheckFeedbackResponse__kinematic_cal_results(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<bosdyn_msgs::msg::KeyStringValueBosdynMsgsJointKinematicCheckResult> *>(untyped_member);
  return &member[index];
}

void fetch_function__SpotCheckFeedbackResponse__kinematic_cal_results(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bosdyn_msgs::msg::KeyStringValueBosdynMsgsJointKinematicCheckResult *>(
    get_const_function__SpotCheckFeedbackResponse__kinematic_cal_results(untyped_member, index));
  auto & value = *reinterpret_cast<bosdyn_msgs::msg::KeyStringValueBosdynMsgsJointKinematicCheckResult *>(untyped_value);
  value = item;
}

void assign_function__SpotCheckFeedbackResponse__kinematic_cal_results(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bosdyn_msgs::msg::KeyStringValueBosdynMsgsJointKinematicCheckResult *>(
    get_function__SpotCheckFeedbackResponse__kinematic_cal_results(untyped_member, index));
  const auto & value = *reinterpret_cast<const bosdyn_msgs::msg::KeyStringValueBosdynMsgsJointKinematicCheckResult *>(untyped_value);
  item = value;
}

void resize_function__SpotCheckFeedbackResponse__kinematic_cal_results(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bosdyn_msgs::msg::KeyStringValueBosdynMsgsJointKinematicCheckResult> *>(untyped_member);
  member->resize(size);
}

size_t size_function__SpotCheckFeedbackResponse__hip_range_of_motion_results(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<bosdyn_msgs::msg::KeyStringValueBosdynMsgsHipRangeOfMotionResult> *>(untyped_member);
  return member->size();
}

const void * get_const_function__SpotCheckFeedbackResponse__hip_range_of_motion_results(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<bosdyn_msgs::msg::KeyStringValueBosdynMsgsHipRangeOfMotionResult> *>(untyped_member);
  return &member[index];
}

void * get_function__SpotCheckFeedbackResponse__hip_range_of_motion_results(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<bosdyn_msgs::msg::KeyStringValueBosdynMsgsHipRangeOfMotionResult> *>(untyped_member);
  return &member[index];
}

void fetch_function__SpotCheckFeedbackResponse__hip_range_of_motion_results(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bosdyn_msgs::msg::KeyStringValueBosdynMsgsHipRangeOfMotionResult *>(
    get_const_function__SpotCheckFeedbackResponse__hip_range_of_motion_results(untyped_member, index));
  auto & value = *reinterpret_cast<bosdyn_msgs::msg::KeyStringValueBosdynMsgsHipRangeOfMotionResult *>(untyped_value);
  value = item;
}

void assign_function__SpotCheckFeedbackResponse__hip_range_of_motion_results(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bosdyn_msgs::msg::KeyStringValueBosdynMsgsHipRangeOfMotionResult *>(
    get_function__SpotCheckFeedbackResponse__hip_range_of_motion_results(untyped_member, index));
  const auto & value = *reinterpret_cast<const bosdyn_msgs::msg::KeyStringValueBosdynMsgsHipRangeOfMotionResult *>(untyped_value);
  item = value;
}

void resize_function__SpotCheckFeedbackResponse__hip_range_of_motion_results(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<bosdyn_msgs::msg::KeyStringValueBosdynMsgsHipRangeOfMotionResult> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SpotCheckFeedbackResponse_message_member_array[14] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::ResponseHeader>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::SpotCheckFeedbackResponse, header),  // bytes offset in struct
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
    offsetof(bosdyn_msgs::msg::SpotCheckFeedbackResponse, header_is_set),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::SpotCheckFeedbackResponseState>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::SpotCheckFeedbackResponse, state),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "last_command",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::SpotCheckCommandRequestCommand>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::SpotCheckFeedbackResponse, last_command),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "error",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::SpotCheckFeedbackResponseError>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::SpotCheckFeedbackResponse, error),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "camera_results",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::KeyStringValueBosdynMsgsDepthPlaneSpotCheckResult>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::SpotCheckFeedbackResponse, camera_results),  // bytes offset in struct
    nullptr,  // default value
    size_function__SpotCheckFeedbackResponse__camera_results,  // size() function pointer
    get_const_function__SpotCheckFeedbackResponse__camera_results,  // get_const(index) function pointer
    get_function__SpotCheckFeedbackResponse__camera_results,  // get(index) function pointer
    fetch_function__SpotCheckFeedbackResponse__camera_results,  // fetch(index, &value) function pointer
    assign_function__SpotCheckFeedbackResponse__camera_results,  // assign(index, value) function pointer
    resize_function__SpotCheckFeedbackResponse__camera_results  // resize(index) function pointer
  },
  {
    "load_cell_results",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::KeyStringValueBosdynMsgsLoadCellSpotCheckResult>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::SpotCheckFeedbackResponse, load_cell_results),  // bytes offset in struct
    nullptr,  // default value
    size_function__SpotCheckFeedbackResponse__load_cell_results,  // size() function pointer
    get_const_function__SpotCheckFeedbackResponse__load_cell_results,  // get_const(index) function pointer
    get_function__SpotCheckFeedbackResponse__load_cell_results,  // get(index) function pointer
    fetch_function__SpotCheckFeedbackResponse__load_cell_results,  // fetch(index, &value) function pointer
    assign_function__SpotCheckFeedbackResponse__load_cell_results,  // assign(index, value) function pointer
    resize_function__SpotCheckFeedbackResponse__load_cell_results  // resize(index) function pointer
  },
  {
    "kinematic_cal_results",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::KeyStringValueBosdynMsgsJointKinematicCheckResult>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::SpotCheckFeedbackResponse, kinematic_cal_results),  // bytes offset in struct
    nullptr,  // default value
    size_function__SpotCheckFeedbackResponse__kinematic_cal_results,  // size() function pointer
    get_const_function__SpotCheckFeedbackResponse__kinematic_cal_results,  // get_const(index) function pointer
    get_function__SpotCheckFeedbackResponse__kinematic_cal_results,  // get(index) function pointer
    fetch_function__SpotCheckFeedbackResponse__kinematic_cal_results,  // fetch(index, &value) function pointer
    assign_function__SpotCheckFeedbackResponse__kinematic_cal_results,  // assign(index, value) function pointer
    resize_function__SpotCheckFeedbackResponse__kinematic_cal_results  // resize(index) function pointer
  },
  {
    "payload_result",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::PayloadCheckResult>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::SpotCheckFeedbackResponse, payload_result),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "payload_result_is_set",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::SpotCheckFeedbackResponse, payload_result_is_set),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "hip_range_of_motion_results",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<bosdyn_msgs::msg::KeyStringValueBosdynMsgsHipRangeOfMotionResult>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::SpotCheckFeedbackResponse, hip_range_of_motion_results),  // bytes offset in struct
    nullptr,  // default value
    size_function__SpotCheckFeedbackResponse__hip_range_of_motion_results,  // size() function pointer
    get_const_function__SpotCheckFeedbackResponse__hip_range_of_motion_results,  // get_const(index) function pointer
    get_function__SpotCheckFeedbackResponse__hip_range_of_motion_results,  // get(index) function pointer
    fetch_function__SpotCheckFeedbackResponse__hip_range_of_motion_results,  // fetch(index, &value) function pointer
    assign_function__SpotCheckFeedbackResponse__hip_range_of_motion_results,  // assign(index, value) function pointer
    resize_function__SpotCheckFeedbackResponse__hip_range_of_motion_results  // resize(index) function pointer
  },
  {
    "progress",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::SpotCheckFeedbackResponse, progress),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "last_cal_timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::SpotCheckFeedbackResponse, last_cal_timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "last_cal_timestamp_is_set",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(bosdyn_msgs::msg::SpotCheckFeedbackResponse, last_cal_timestamp_is_set),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SpotCheckFeedbackResponse_message_members = {
  "bosdyn_msgs::msg",  // message namespace
  "SpotCheckFeedbackResponse",  // message name
  14,  // number of fields
  sizeof(bosdyn_msgs::msg::SpotCheckFeedbackResponse),
  SpotCheckFeedbackResponse_message_member_array,  // message members
  SpotCheckFeedbackResponse_init_function,  // function to initialize message memory (memory has to be allocated)
  SpotCheckFeedbackResponse_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SpotCheckFeedbackResponse_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SpotCheckFeedbackResponse_message_members,
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
get_message_type_support_handle<bosdyn_msgs::msg::SpotCheckFeedbackResponse>()
{
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::SpotCheckFeedbackResponse_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, bosdyn_msgs, msg, SpotCheckFeedbackResponse)() {
  return &::bosdyn_msgs::msg::rosidl_typesupport_introspection_cpp::SpotCheckFeedbackResponse_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
