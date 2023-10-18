// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GetRemoteMissionServiceInfoResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_REMOTE_MISSION_SERVICE_INFO_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_REMOTE_MISSION_SERVICE_INFO_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/get_remote_mission_service_info_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GetRemoteMissionServiceInfoResponse_custom_params_is_set
{
public:
  explicit Init_GetRemoteMissionServiceInfoResponse_custom_params_is_set(::bosdyn_msgs::msg::GetRemoteMissionServiceInfoResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GetRemoteMissionServiceInfoResponse custom_params_is_set(::bosdyn_msgs::msg::GetRemoteMissionServiceInfoResponse::_custom_params_is_set_type arg)
  {
    msg_.custom_params_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetRemoteMissionServiceInfoResponse msg_;
};

class Init_GetRemoteMissionServiceInfoResponse_custom_params
{
public:
  explicit Init_GetRemoteMissionServiceInfoResponse_custom_params(::bosdyn_msgs::msg::GetRemoteMissionServiceInfoResponse & msg)
  : msg_(msg)
  {}
  Init_GetRemoteMissionServiceInfoResponse_custom_params_is_set custom_params(::bosdyn_msgs::msg::GetRemoteMissionServiceInfoResponse::_custom_params_type arg)
  {
    msg_.custom_params = std::move(arg);
    return Init_GetRemoteMissionServiceInfoResponse_custom_params_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetRemoteMissionServiceInfoResponse msg_;
};

class Init_GetRemoteMissionServiceInfoResponse_header_is_set
{
public:
  explicit Init_GetRemoteMissionServiceInfoResponse_header_is_set(::bosdyn_msgs::msg::GetRemoteMissionServiceInfoResponse & msg)
  : msg_(msg)
  {}
  Init_GetRemoteMissionServiceInfoResponse_custom_params header_is_set(::bosdyn_msgs::msg::GetRemoteMissionServiceInfoResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_GetRemoteMissionServiceInfoResponse_custom_params(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetRemoteMissionServiceInfoResponse msg_;
};

class Init_GetRemoteMissionServiceInfoResponse_header
{
public:
  Init_GetRemoteMissionServiceInfoResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetRemoteMissionServiceInfoResponse_header_is_set header(::bosdyn_msgs::msg::GetRemoteMissionServiceInfoResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetRemoteMissionServiceInfoResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetRemoteMissionServiceInfoResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GetRemoteMissionServiceInfoResponse>()
{
  return bosdyn_msgs::msg::builder::Init_GetRemoteMissionServiceInfoResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_REMOTE_MISSION_SERVICE_INFO_RESPONSE__BUILDER_HPP_
