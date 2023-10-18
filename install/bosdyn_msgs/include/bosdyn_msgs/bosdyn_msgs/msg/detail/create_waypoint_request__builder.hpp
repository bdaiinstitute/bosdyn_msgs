// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/CreateWaypointRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CREATE_WAYPOINT_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CREATE_WAYPOINT_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/create_waypoint_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_CreateWaypointRequest_world_objects
{
public:
  explicit Init_CreateWaypointRequest_world_objects(::bosdyn_msgs::msg::CreateWaypointRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::CreateWaypointRequest world_objects(::bosdyn_msgs::msg::CreateWaypointRequest::_world_objects_type arg)
  {
    msg_.world_objects = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::CreateWaypointRequest msg_;
};

class Init_CreateWaypointRequest_require_fiducials
{
public:
  explicit Init_CreateWaypointRequest_require_fiducials(::bosdyn_msgs::msg::CreateWaypointRequest & msg)
  : msg_(msg)
  {}
  Init_CreateWaypointRequest_world_objects require_fiducials(::bosdyn_msgs::msg::CreateWaypointRequest::_require_fiducials_type arg)
  {
    msg_.require_fiducials = std::move(arg);
    return Init_CreateWaypointRequest_world_objects(msg_);
  }

private:
  ::bosdyn_msgs::msg::CreateWaypointRequest msg_;
};

class Init_CreateWaypointRequest_lease_is_set
{
public:
  explicit Init_CreateWaypointRequest_lease_is_set(::bosdyn_msgs::msg::CreateWaypointRequest & msg)
  : msg_(msg)
  {}
  Init_CreateWaypointRequest_require_fiducials lease_is_set(::bosdyn_msgs::msg::CreateWaypointRequest::_lease_is_set_type arg)
  {
    msg_.lease_is_set = std::move(arg);
    return Init_CreateWaypointRequest_require_fiducials(msg_);
  }

private:
  ::bosdyn_msgs::msg::CreateWaypointRequest msg_;
};

class Init_CreateWaypointRequest_lease
{
public:
  explicit Init_CreateWaypointRequest_lease(::bosdyn_msgs::msg::CreateWaypointRequest & msg)
  : msg_(msg)
  {}
  Init_CreateWaypointRequest_lease_is_set lease(::bosdyn_msgs::msg::CreateWaypointRequest::_lease_type arg)
  {
    msg_.lease = std::move(arg);
    return Init_CreateWaypointRequest_lease_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::CreateWaypointRequest msg_;
};

class Init_CreateWaypointRequest_recording_environment_is_set
{
public:
  explicit Init_CreateWaypointRequest_recording_environment_is_set(::bosdyn_msgs::msg::CreateWaypointRequest & msg)
  : msg_(msg)
  {}
  Init_CreateWaypointRequest_lease recording_environment_is_set(::bosdyn_msgs::msg::CreateWaypointRequest::_recording_environment_is_set_type arg)
  {
    msg_.recording_environment_is_set = std::move(arg);
    return Init_CreateWaypointRequest_lease(msg_);
  }

private:
  ::bosdyn_msgs::msg::CreateWaypointRequest msg_;
};

class Init_CreateWaypointRequest_recording_environment
{
public:
  explicit Init_CreateWaypointRequest_recording_environment(::bosdyn_msgs::msg::CreateWaypointRequest & msg)
  : msg_(msg)
  {}
  Init_CreateWaypointRequest_recording_environment_is_set recording_environment(::bosdyn_msgs::msg::CreateWaypointRequest::_recording_environment_type arg)
  {
    msg_.recording_environment = std::move(arg);
    return Init_CreateWaypointRequest_recording_environment_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::CreateWaypointRequest msg_;
};

class Init_CreateWaypointRequest_waypoint_name
{
public:
  explicit Init_CreateWaypointRequest_waypoint_name(::bosdyn_msgs::msg::CreateWaypointRequest & msg)
  : msg_(msg)
  {}
  Init_CreateWaypointRequest_recording_environment waypoint_name(::bosdyn_msgs::msg::CreateWaypointRequest::_waypoint_name_type arg)
  {
    msg_.waypoint_name = std::move(arg);
    return Init_CreateWaypointRequest_recording_environment(msg_);
  }

private:
  ::bosdyn_msgs::msg::CreateWaypointRequest msg_;
};

class Init_CreateWaypointRequest_header_is_set
{
public:
  explicit Init_CreateWaypointRequest_header_is_set(::bosdyn_msgs::msg::CreateWaypointRequest & msg)
  : msg_(msg)
  {}
  Init_CreateWaypointRequest_waypoint_name header_is_set(::bosdyn_msgs::msg::CreateWaypointRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_CreateWaypointRequest_waypoint_name(msg_);
  }

private:
  ::bosdyn_msgs::msg::CreateWaypointRequest msg_;
};

class Init_CreateWaypointRequest_header
{
public:
  Init_CreateWaypointRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CreateWaypointRequest_header_is_set header(::bosdyn_msgs::msg::CreateWaypointRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CreateWaypointRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::CreateWaypointRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::CreateWaypointRequest>()
{
  return bosdyn_msgs::msg::builder::Init_CreateWaypointRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CREATE_WAYPOINT_REQUEST__BUILDER_HPP_
