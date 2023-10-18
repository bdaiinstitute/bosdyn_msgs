// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/SetRecordingEnvironmentRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SET_RECORDING_ENVIRONMENT_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SET_RECORDING_ENVIRONMENT_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/set_recording_environment_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_SetRecordingEnvironmentRequest_lease_is_set
{
public:
  explicit Init_SetRecordingEnvironmentRequest_lease_is_set(::bosdyn_msgs::msg::SetRecordingEnvironmentRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::SetRecordingEnvironmentRequest lease_is_set(::bosdyn_msgs::msg::SetRecordingEnvironmentRequest::_lease_is_set_type arg)
  {
    msg_.lease_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetRecordingEnvironmentRequest msg_;
};

class Init_SetRecordingEnvironmentRequest_lease
{
public:
  explicit Init_SetRecordingEnvironmentRequest_lease(::bosdyn_msgs::msg::SetRecordingEnvironmentRequest & msg)
  : msg_(msg)
  {}
  Init_SetRecordingEnvironmentRequest_lease_is_set lease(::bosdyn_msgs::msg::SetRecordingEnvironmentRequest::_lease_type arg)
  {
    msg_.lease = std::move(arg);
    return Init_SetRecordingEnvironmentRequest_lease_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetRecordingEnvironmentRequest msg_;
};

class Init_SetRecordingEnvironmentRequest_environment_is_set
{
public:
  explicit Init_SetRecordingEnvironmentRequest_environment_is_set(::bosdyn_msgs::msg::SetRecordingEnvironmentRequest & msg)
  : msg_(msg)
  {}
  Init_SetRecordingEnvironmentRequest_lease environment_is_set(::bosdyn_msgs::msg::SetRecordingEnvironmentRequest::_environment_is_set_type arg)
  {
    msg_.environment_is_set = std::move(arg);
    return Init_SetRecordingEnvironmentRequest_lease(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetRecordingEnvironmentRequest msg_;
};

class Init_SetRecordingEnvironmentRequest_environment
{
public:
  explicit Init_SetRecordingEnvironmentRequest_environment(::bosdyn_msgs::msg::SetRecordingEnvironmentRequest & msg)
  : msg_(msg)
  {}
  Init_SetRecordingEnvironmentRequest_environment_is_set environment(::bosdyn_msgs::msg::SetRecordingEnvironmentRequest::_environment_type arg)
  {
    msg_.environment = std::move(arg);
    return Init_SetRecordingEnvironmentRequest_environment_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetRecordingEnvironmentRequest msg_;
};

class Init_SetRecordingEnvironmentRequest_header_is_set
{
public:
  explicit Init_SetRecordingEnvironmentRequest_header_is_set(::bosdyn_msgs::msg::SetRecordingEnvironmentRequest & msg)
  : msg_(msg)
  {}
  Init_SetRecordingEnvironmentRequest_environment header_is_set(::bosdyn_msgs::msg::SetRecordingEnvironmentRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_SetRecordingEnvironmentRequest_environment(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetRecordingEnvironmentRequest msg_;
};

class Init_SetRecordingEnvironmentRequest_header
{
public:
  Init_SetRecordingEnvironmentRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetRecordingEnvironmentRequest_header_is_set header(::bosdyn_msgs::msg::SetRecordingEnvironmentRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SetRecordingEnvironmentRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetRecordingEnvironmentRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::SetRecordingEnvironmentRequest>()
{
  return bosdyn_msgs::msg::builder::Init_SetRecordingEnvironmentRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SET_RECORDING_ENVIRONMENT_REQUEST__BUILDER_HPP_
