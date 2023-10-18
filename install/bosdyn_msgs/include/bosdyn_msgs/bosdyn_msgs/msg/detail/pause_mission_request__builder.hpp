// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/PauseMissionRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PAUSE_MISSION_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PAUSE_MISSION_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/pause_mission_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_PauseMissionRequest_lease_is_set
{
public:
  explicit Init_PauseMissionRequest_lease_is_set(::bosdyn_msgs::msg::PauseMissionRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::PauseMissionRequest lease_is_set(::bosdyn_msgs::msg::PauseMissionRequest::_lease_is_set_type arg)
  {
    msg_.lease_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::PauseMissionRequest msg_;
};

class Init_PauseMissionRequest_lease
{
public:
  explicit Init_PauseMissionRequest_lease(::bosdyn_msgs::msg::PauseMissionRequest & msg)
  : msg_(msg)
  {}
  Init_PauseMissionRequest_lease_is_set lease(::bosdyn_msgs::msg::PauseMissionRequest::_lease_type arg)
  {
    msg_.lease = std::move(arg);
    return Init_PauseMissionRequest_lease_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::PauseMissionRequest msg_;
};

class Init_PauseMissionRequest_header_is_set
{
public:
  explicit Init_PauseMissionRequest_header_is_set(::bosdyn_msgs::msg::PauseMissionRequest & msg)
  : msg_(msg)
  {}
  Init_PauseMissionRequest_lease header_is_set(::bosdyn_msgs::msg::PauseMissionRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_PauseMissionRequest_lease(msg_);
  }

private:
  ::bosdyn_msgs::msg::PauseMissionRequest msg_;
};

class Init_PauseMissionRequest_header
{
public:
  Init_PauseMissionRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PauseMissionRequest_header_is_set header(::bosdyn_msgs::msg::PauseMissionRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PauseMissionRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::PauseMissionRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::PauseMissionRequest>()
{
  return bosdyn_msgs::msg::builder::Init_PauseMissionRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PAUSE_MISSION_REQUEST__BUILDER_HPP_
