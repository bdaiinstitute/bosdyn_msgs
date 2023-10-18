// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/SetGraspOverride.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SET_GRASP_OVERRIDE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SET_GRASP_OVERRIDE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/set_grasp_override__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_SetGraspOverride_grasp_override_request_is_set
{
public:
  explicit Init_SetGraspOverride_grasp_override_request_is_set(::bosdyn_msgs::msg::SetGraspOverride & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::SetGraspOverride grasp_override_request_is_set(::bosdyn_msgs::msg::SetGraspOverride::_grasp_override_request_is_set_type arg)
  {
    msg_.grasp_override_request_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetGraspOverride msg_;
};

class Init_SetGraspOverride_grasp_override_request
{
public:
  explicit Init_SetGraspOverride_grasp_override_request(::bosdyn_msgs::msg::SetGraspOverride & msg)
  : msg_(msg)
  {}
  Init_SetGraspOverride_grasp_override_request_is_set grasp_override_request(::bosdyn_msgs::msg::SetGraspOverride::_grasp_override_request_type arg)
  {
    msg_.grasp_override_request = std::move(arg);
    return Init_SetGraspOverride_grasp_override_request_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetGraspOverride msg_;
};

class Init_SetGraspOverride_host
{
public:
  explicit Init_SetGraspOverride_host(::bosdyn_msgs::msg::SetGraspOverride & msg)
  : msg_(msg)
  {}
  Init_SetGraspOverride_grasp_override_request host(::bosdyn_msgs::msg::SetGraspOverride::_host_type arg)
  {
    msg_.host = std::move(arg);
    return Init_SetGraspOverride_grasp_override_request(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetGraspOverride msg_;
};

class Init_SetGraspOverride_service_name
{
public:
  Init_SetGraspOverride_service_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetGraspOverride_host service_name(::bosdyn_msgs::msg::SetGraspOverride::_service_name_type arg)
  {
    msg_.service_name = std::move(arg);
    return Init_SetGraspOverride_host(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetGraspOverride msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::SetGraspOverride>()
{
  return bosdyn_msgs::msg::builder::Init_SetGraspOverride_service_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SET_GRASP_OVERRIDE__BUILDER_HPP_
