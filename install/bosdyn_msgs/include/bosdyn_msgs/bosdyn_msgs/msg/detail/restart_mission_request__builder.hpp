// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/RestartMissionRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__RESTART_MISSION_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__RESTART_MISSION_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/restart_mission_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_RestartMissionRequest_settings_is_set
{
public:
  explicit Init_RestartMissionRequest_settings_is_set(::bosdyn_msgs::msg::RestartMissionRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::RestartMissionRequest settings_is_set(::bosdyn_msgs::msg::RestartMissionRequest::_settings_is_set_type arg)
  {
    msg_.settings_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::RestartMissionRequest msg_;
};

class Init_RestartMissionRequest_settings
{
public:
  explicit Init_RestartMissionRequest_settings(::bosdyn_msgs::msg::RestartMissionRequest & msg)
  : msg_(msg)
  {}
  Init_RestartMissionRequest_settings_is_set settings(::bosdyn_msgs::msg::RestartMissionRequest::_settings_type arg)
  {
    msg_.settings = std::move(arg);
    return Init_RestartMissionRequest_settings_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RestartMissionRequest msg_;
};

class Init_RestartMissionRequest_leases
{
public:
  explicit Init_RestartMissionRequest_leases(::bosdyn_msgs::msg::RestartMissionRequest & msg)
  : msg_(msg)
  {}
  Init_RestartMissionRequest_settings leases(::bosdyn_msgs::msg::RestartMissionRequest::_leases_type arg)
  {
    msg_.leases = std::move(arg);
    return Init_RestartMissionRequest_settings(msg_);
  }

private:
  ::bosdyn_msgs::msg::RestartMissionRequest msg_;
};

class Init_RestartMissionRequest_pause_time_is_set
{
public:
  explicit Init_RestartMissionRequest_pause_time_is_set(::bosdyn_msgs::msg::RestartMissionRequest & msg)
  : msg_(msg)
  {}
  Init_RestartMissionRequest_leases pause_time_is_set(::bosdyn_msgs::msg::RestartMissionRequest::_pause_time_is_set_type arg)
  {
    msg_.pause_time_is_set = std::move(arg);
    return Init_RestartMissionRequest_leases(msg_);
  }

private:
  ::bosdyn_msgs::msg::RestartMissionRequest msg_;
};

class Init_RestartMissionRequest_pause_time
{
public:
  explicit Init_RestartMissionRequest_pause_time(::bosdyn_msgs::msg::RestartMissionRequest & msg)
  : msg_(msg)
  {}
  Init_RestartMissionRequest_pause_time_is_set pause_time(::bosdyn_msgs::msg::RestartMissionRequest::_pause_time_type arg)
  {
    msg_.pause_time = std::move(arg);
    return Init_RestartMissionRequest_pause_time_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RestartMissionRequest msg_;
};

class Init_RestartMissionRequest_header_is_set
{
public:
  explicit Init_RestartMissionRequest_header_is_set(::bosdyn_msgs::msg::RestartMissionRequest & msg)
  : msg_(msg)
  {}
  Init_RestartMissionRequest_pause_time header_is_set(::bosdyn_msgs::msg::RestartMissionRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_RestartMissionRequest_pause_time(msg_);
  }

private:
  ::bosdyn_msgs::msg::RestartMissionRequest msg_;
};

class Init_RestartMissionRequest_header
{
public:
  Init_RestartMissionRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RestartMissionRequest_header_is_set header(::bosdyn_msgs::msg::RestartMissionRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RestartMissionRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RestartMissionRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::RestartMissionRequest>()
{
  return bosdyn_msgs::msg::builder::Init_RestartMissionRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__RESTART_MISSION_REQUEST__BUILDER_HPP_
