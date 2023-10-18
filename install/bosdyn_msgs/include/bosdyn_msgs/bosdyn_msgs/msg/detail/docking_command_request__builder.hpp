// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/DockingCommandRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DOCKING_COMMAND_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DOCKING_COMMAND_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/docking_command_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_DockingCommandRequest_require_fiducial
{
public:
  explicit Init_DockingCommandRequest_require_fiducial(::bosdyn_msgs::msg::DockingCommandRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::DockingCommandRequest require_fiducial(::bosdyn_msgs::msg::DockingCommandRequest::_require_fiducial_type arg)
  {
    msg_.require_fiducial = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::DockingCommandRequest msg_;
};

class Init_DockingCommandRequest_prep_pose_behavior
{
public:
  explicit Init_DockingCommandRequest_prep_pose_behavior(::bosdyn_msgs::msg::DockingCommandRequest & msg)
  : msg_(msg)
  {}
  Init_DockingCommandRequest_require_fiducial prep_pose_behavior(::bosdyn_msgs::msg::DockingCommandRequest::_prep_pose_behavior_type arg)
  {
    msg_.prep_pose_behavior = std::move(arg);
    return Init_DockingCommandRequest_require_fiducial(msg_);
  }

private:
  ::bosdyn_msgs::msg::DockingCommandRequest msg_;
};

class Init_DockingCommandRequest_end_time_is_set
{
public:
  explicit Init_DockingCommandRequest_end_time_is_set(::bosdyn_msgs::msg::DockingCommandRequest & msg)
  : msg_(msg)
  {}
  Init_DockingCommandRequest_prep_pose_behavior end_time_is_set(::bosdyn_msgs::msg::DockingCommandRequest::_end_time_is_set_type arg)
  {
    msg_.end_time_is_set = std::move(arg);
    return Init_DockingCommandRequest_prep_pose_behavior(msg_);
  }

private:
  ::bosdyn_msgs::msg::DockingCommandRequest msg_;
};

class Init_DockingCommandRequest_end_time
{
public:
  explicit Init_DockingCommandRequest_end_time(::bosdyn_msgs::msg::DockingCommandRequest & msg)
  : msg_(msg)
  {}
  Init_DockingCommandRequest_end_time_is_set end_time(::bosdyn_msgs::msg::DockingCommandRequest::_end_time_type arg)
  {
    msg_.end_time = std::move(arg);
    return Init_DockingCommandRequest_end_time_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::DockingCommandRequest msg_;
};

class Init_DockingCommandRequest_clock_identifier
{
public:
  explicit Init_DockingCommandRequest_clock_identifier(::bosdyn_msgs::msg::DockingCommandRequest & msg)
  : msg_(msg)
  {}
  Init_DockingCommandRequest_end_time clock_identifier(::bosdyn_msgs::msg::DockingCommandRequest::_clock_identifier_type arg)
  {
    msg_.clock_identifier = std::move(arg);
    return Init_DockingCommandRequest_end_time(msg_);
  }

private:
  ::bosdyn_msgs::msg::DockingCommandRequest msg_;
};

class Init_DockingCommandRequest_docking_station_id
{
public:
  explicit Init_DockingCommandRequest_docking_station_id(::bosdyn_msgs::msg::DockingCommandRequest & msg)
  : msg_(msg)
  {}
  Init_DockingCommandRequest_clock_identifier docking_station_id(::bosdyn_msgs::msg::DockingCommandRequest::_docking_station_id_type arg)
  {
    msg_.docking_station_id = std::move(arg);
    return Init_DockingCommandRequest_clock_identifier(msg_);
  }

private:
  ::bosdyn_msgs::msg::DockingCommandRequest msg_;
};

class Init_DockingCommandRequest_lease_is_set
{
public:
  explicit Init_DockingCommandRequest_lease_is_set(::bosdyn_msgs::msg::DockingCommandRequest & msg)
  : msg_(msg)
  {}
  Init_DockingCommandRequest_docking_station_id lease_is_set(::bosdyn_msgs::msg::DockingCommandRequest::_lease_is_set_type arg)
  {
    msg_.lease_is_set = std::move(arg);
    return Init_DockingCommandRequest_docking_station_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::DockingCommandRequest msg_;
};

class Init_DockingCommandRequest_lease
{
public:
  explicit Init_DockingCommandRequest_lease(::bosdyn_msgs::msg::DockingCommandRequest & msg)
  : msg_(msg)
  {}
  Init_DockingCommandRequest_lease_is_set lease(::bosdyn_msgs::msg::DockingCommandRequest::_lease_type arg)
  {
    msg_.lease = std::move(arg);
    return Init_DockingCommandRequest_lease_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::DockingCommandRequest msg_;
};

class Init_DockingCommandRequest_header_is_set
{
public:
  explicit Init_DockingCommandRequest_header_is_set(::bosdyn_msgs::msg::DockingCommandRequest & msg)
  : msg_(msg)
  {}
  Init_DockingCommandRequest_lease header_is_set(::bosdyn_msgs::msg::DockingCommandRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_DockingCommandRequest_lease(msg_);
  }

private:
  ::bosdyn_msgs::msg::DockingCommandRequest msg_;
};

class Init_DockingCommandRequest_header
{
public:
  Init_DockingCommandRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DockingCommandRequest_header_is_set header(::bosdyn_msgs::msg::DockingCommandRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DockingCommandRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::DockingCommandRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::DockingCommandRequest>()
{
  return bosdyn_msgs::msg::builder::Init_DockingCommandRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DOCKING_COMMAND_REQUEST__BUILDER_HPP_
