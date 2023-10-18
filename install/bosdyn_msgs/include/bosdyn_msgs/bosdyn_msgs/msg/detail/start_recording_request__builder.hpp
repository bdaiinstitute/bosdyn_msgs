// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/StartRecordingRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__START_RECORDING_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__START_RECORDING_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/start_recording_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_StartRecordingRequest_session_start_time_is_set
{
public:
  explicit Init_StartRecordingRequest_session_start_time_is_set(::bosdyn_msgs::msg::StartRecordingRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::StartRecordingRequest session_start_time_is_set(::bosdyn_msgs::msg::StartRecordingRequest::_session_start_time_is_set_type arg)
  {
    msg_.session_start_time_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::StartRecordingRequest msg_;
};

class Init_StartRecordingRequest_session_start_time
{
public:
  explicit Init_StartRecordingRequest_session_start_time(::bosdyn_msgs::msg::StartRecordingRequest & msg)
  : msg_(msg)
  {}
  Init_StartRecordingRequest_session_start_time_is_set session_start_time(::bosdyn_msgs::msg::StartRecordingRequest::_session_start_time_type arg)
  {
    msg_.session_start_time = std::move(arg);
    return Init_StartRecordingRequest_session_start_time_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::StartRecordingRequest msg_;
};

class Init_StartRecordingRequest_require_fiducials
{
public:
  explicit Init_StartRecordingRequest_require_fiducials(::bosdyn_msgs::msg::StartRecordingRequest & msg)
  : msg_(msg)
  {}
  Init_StartRecordingRequest_session_start_time require_fiducials(::bosdyn_msgs::msg::StartRecordingRequest::_require_fiducials_type arg)
  {
    msg_.require_fiducials = std::move(arg);
    return Init_StartRecordingRequest_session_start_time(msg_);
  }

private:
  ::bosdyn_msgs::msg::StartRecordingRequest msg_;
};

class Init_StartRecordingRequest_recording_environment_is_set
{
public:
  explicit Init_StartRecordingRequest_recording_environment_is_set(::bosdyn_msgs::msg::StartRecordingRequest & msg)
  : msg_(msg)
  {}
  Init_StartRecordingRequest_require_fiducials recording_environment_is_set(::bosdyn_msgs::msg::StartRecordingRequest::_recording_environment_is_set_type arg)
  {
    msg_.recording_environment_is_set = std::move(arg);
    return Init_StartRecordingRequest_require_fiducials(msg_);
  }

private:
  ::bosdyn_msgs::msg::StartRecordingRequest msg_;
};

class Init_StartRecordingRequest_recording_environment
{
public:
  explicit Init_StartRecordingRequest_recording_environment(::bosdyn_msgs::msg::StartRecordingRequest & msg)
  : msg_(msg)
  {}
  Init_StartRecordingRequest_recording_environment_is_set recording_environment(::bosdyn_msgs::msg::StartRecordingRequest::_recording_environment_type arg)
  {
    msg_.recording_environment = std::move(arg);
    return Init_StartRecordingRequest_recording_environment_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::StartRecordingRequest msg_;
};

class Init_StartRecordingRequest_lease_is_set
{
public:
  explicit Init_StartRecordingRequest_lease_is_set(::bosdyn_msgs::msg::StartRecordingRequest & msg)
  : msg_(msg)
  {}
  Init_StartRecordingRequest_recording_environment lease_is_set(::bosdyn_msgs::msg::StartRecordingRequest::_lease_is_set_type arg)
  {
    msg_.lease_is_set = std::move(arg);
    return Init_StartRecordingRequest_recording_environment(msg_);
  }

private:
  ::bosdyn_msgs::msg::StartRecordingRequest msg_;
};

class Init_StartRecordingRequest_lease
{
public:
  explicit Init_StartRecordingRequest_lease(::bosdyn_msgs::msg::StartRecordingRequest & msg)
  : msg_(msg)
  {}
  Init_StartRecordingRequest_lease_is_set lease(::bosdyn_msgs::msg::StartRecordingRequest::_lease_type arg)
  {
    msg_.lease = std::move(arg);
    return Init_StartRecordingRequest_lease_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::StartRecordingRequest msg_;
};

class Init_StartRecordingRequest_header_is_set
{
public:
  explicit Init_StartRecordingRequest_header_is_set(::bosdyn_msgs::msg::StartRecordingRequest & msg)
  : msg_(msg)
  {}
  Init_StartRecordingRequest_lease header_is_set(::bosdyn_msgs::msg::StartRecordingRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_StartRecordingRequest_lease(msg_);
  }

private:
  ::bosdyn_msgs::msg::StartRecordingRequest msg_;
};

class Init_StartRecordingRequest_header
{
public:
  Init_StartRecordingRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StartRecordingRequest_header_is_set header(::bosdyn_msgs::msg::StartRecordingRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_StartRecordingRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::StartRecordingRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::StartRecordingRequest>()
{
  return bosdyn_msgs::msg::builder::Init_StartRecordingRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__START_RECORDING_REQUEST__BUILDER_HPP_
