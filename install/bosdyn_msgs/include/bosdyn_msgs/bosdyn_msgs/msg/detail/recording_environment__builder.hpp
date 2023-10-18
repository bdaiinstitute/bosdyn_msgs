// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/RecordingEnvironment.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__RECORDING_ENVIRONMENT__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__RECORDING_ENVIRONMENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/recording_environment__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_RecordingEnvironment_edge_environment_is_set
{
public:
  explicit Init_RecordingEnvironment_edge_environment_is_set(::bosdyn_msgs::msg::RecordingEnvironment & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::RecordingEnvironment edge_environment_is_set(::bosdyn_msgs::msg::RecordingEnvironment::_edge_environment_is_set_type arg)
  {
    msg_.edge_environment_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::RecordingEnvironment msg_;
};

class Init_RecordingEnvironment_edge_environment
{
public:
  explicit Init_RecordingEnvironment_edge_environment(::bosdyn_msgs::msg::RecordingEnvironment & msg)
  : msg_(msg)
  {}
  Init_RecordingEnvironment_edge_environment_is_set edge_environment(::bosdyn_msgs::msg::RecordingEnvironment::_edge_environment_type arg)
  {
    msg_.edge_environment = std::move(arg);
    return Init_RecordingEnvironment_edge_environment_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RecordingEnvironment msg_;
};

class Init_RecordingEnvironment_waypoint_environment_is_set
{
public:
  explicit Init_RecordingEnvironment_waypoint_environment_is_set(::bosdyn_msgs::msg::RecordingEnvironment & msg)
  : msg_(msg)
  {}
  Init_RecordingEnvironment_edge_environment waypoint_environment_is_set(::bosdyn_msgs::msg::RecordingEnvironment::_waypoint_environment_is_set_type arg)
  {
    msg_.waypoint_environment_is_set = std::move(arg);
    return Init_RecordingEnvironment_edge_environment(msg_);
  }

private:
  ::bosdyn_msgs::msg::RecordingEnvironment msg_;
};

class Init_RecordingEnvironment_waypoint_environment
{
public:
  explicit Init_RecordingEnvironment_waypoint_environment(::bosdyn_msgs::msg::RecordingEnvironment & msg)
  : msg_(msg)
  {}
  Init_RecordingEnvironment_waypoint_environment_is_set waypoint_environment(::bosdyn_msgs::msg::RecordingEnvironment::_waypoint_environment_type arg)
  {
    msg_.waypoint_environment = std::move(arg);
    return Init_RecordingEnvironment_waypoint_environment_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RecordingEnvironment msg_;
};

class Init_RecordingEnvironment_name_prefix
{
public:
  Init_RecordingEnvironment_name_prefix()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RecordingEnvironment_waypoint_environment name_prefix(::bosdyn_msgs::msg::RecordingEnvironment::_name_prefix_type arg)
  {
    msg_.name_prefix = std::move(arg);
    return Init_RecordingEnvironment_waypoint_environment(msg_);
  }

private:
  ::bosdyn_msgs::msg::RecordingEnvironment msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::RecordingEnvironment>()
{
  return bosdyn_msgs::msg::builder::Init_RecordingEnvironment_name_prefix();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__RECORDING_ENVIRONMENT__BUILDER_HPP_
