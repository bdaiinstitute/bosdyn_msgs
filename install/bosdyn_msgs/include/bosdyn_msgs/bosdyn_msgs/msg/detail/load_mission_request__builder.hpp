// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/LoadMissionRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LOAD_MISSION_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LOAD_MISSION_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/load_mission_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_LoadMissionRequest_leases
{
public:
  explicit Init_LoadMissionRequest_leases(::bosdyn_msgs::msg::LoadMissionRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::LoadMissionRequest leases(::bosdyn_msgs::msg::LoadMissionRequest::_leases_type arg)
  {
    msg_.leases = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::LoadMissionRequest msg_;
};

class Init_LoadMissionRequest_root_is_set
{
public:
  explicit Init_LoadMissionRequest_root_is_set(::bosdyn_msgs::msg::LoadMissionRequest & msg)
  : msg_(msg)
  {}
  Init_LoadMissionRequest_leases root_is_set(::bosdyn_msgs::msg::LoadMissionRequest::_root_is_set_type arg)
  {
    msg_.root_is_set = std::move(arg);
    return Init_LoadMissionRequest_leases(msg_);
  }

private:
  ::bosdyn_msgs::msg::LoadMissionRequest msg_;
};

class Init_LoadMissionRequest_root
{
public:
  explicit Init_LoadMissionRequest_root(::bosdyn_msgs::msg::LoadMissionRequest & msg)
  : msg_(msg)
  {}
  Init_LoadMissionRequest_root_is_set root(::bosdyn_msgs::msg::LoadMissionRequest::_root_type arg)
  {
    msg_.root = std::move(arg);
    return Init_LoadMissionRequest_root_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::LoadMissionRequest msg_;
};

class Init_LoadMissionRequest_header_is_set
{
public:
  explicit Init_LoadMissionRequest_header_is_set(::bosdyn_msgs::msg::LoadMissionRequest & msg)
  : msg_(msg)
  {}
  Init_LoadMissionRequest_root header_is_set(::bosdyn_msgs::msg::LoadMissionRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_LoadMissionRequest_root(msg_);
  }

private:
  ::bosdyn_msgs::msg::LoadMissionRequest msg_;
};

class Init_LoadMissionRequest_header
{
public:
  Init_LoadMissionRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LoadMissionRequest_header_is_set header(::bosdyn_msgs::msg::LoadMissionRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LoadMissionRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::LoadMissionRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::LoadMissionRequest>()
{
  return bosdyn_msgs::msg::builder::Init_LoadMissionRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LOAD_MISSION_REQUEST__BUILDER_HPP_
