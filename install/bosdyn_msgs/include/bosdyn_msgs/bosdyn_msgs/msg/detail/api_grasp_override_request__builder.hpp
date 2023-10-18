// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ApiGraspOverrideRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__API_GRASP_OVERRIDE_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__API_GRASP_OVERRIDE_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/api_grasp_override_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ApiGraspOverrideRequest_carry_state_override_is_set
{
public:
  explicit Init_ApiGraspOverrideRequest_carry_state_override_is_set(::bosdyn_msgs::msg::ApiGraspOverrideRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ApiGraspOverrideRequest carry_state_override_is_set(::bosdyn_msgs::msg::ApiGraspOverrideRequest::_carry_state_override_is_set_type arg)
  {
    msg_.carry_state_override_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ApiGraspOverrideRequest msg_;
};

class Init_ApiGraspOverrideRequest_carry_state_override
{
public:
  explicit Init_ApiGraspOverrideRequest_carry_state_override(::bosdyn_msgs::msg::ApiGraspOverrideRequest & msg)
  : msg_(msg)
  {}
  Init_ApiGraspOverrideRequest_carry_state_override_is_set carry_state_override(::bosdyn_msgs::msg::ApiGraspOverrideRequest::_carry_state_override_type arg)
  {
    msg_.carry_state_override = std::move(arg);
    return Init_ApiGraspOverrideRequest_carry_state_override_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ApiGraspOverrideRequest msg_;
};

class Init_ApiGraspOverrideRequest_api_grasp_override_is_set
{
public:
  explicit Init_ApiGraspOverrideRequest_api_grasp_override_is_set(::bosdyn_msgs::msg::ApiGraspOverrideRequest & msg)
  : msg_(msg)
  {}
  Init_ApiGraspOverrideRequest_carry_state_override api_grasp_override_is_set(::bosdyn_msgs::msg::ApiGraspOverrideRequest::_api_grasp_override_is_set_type arg)
  {
    msg_.api_grasp_override_is_set = std::move(arg);
    return Init_ApiGraspOverrideRequest_carry_state_override(msg_);
  }

private:
  ::bosdyn_msgs::msg::ApiGraspOverrideRequest msg_;
};

class Init_ApiGraspOverrideRequest_api_grasp_override
{
public:
  explicit Init_ApiGraspOverrideRequest_api_grasp_override(::bosdyn_msgs::msg::ApiGraspOverrideRequest & msg)
  : msg_(msg)
  {}
  Init_ApiGraspOverrideRequest_api_grasp_override_is_set api_grasp_override(::bosdyn_msgs::msg::ApiGraspOverrideRequest::_api_grasp_override_type arg)
  {
    msg_.api_grasp_override = std::move(arg);
    return Init_ApiGraspOverrideRequest_api_grasp_override_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ApiGraspOverrideRequest msg_;
};

class Init_ApiGraspOverrideRequest_header_is_set
{
public:
  explicit Init_ApiGraspOverrideRequest_header_is_set(::bosdyn_msgs::msg::ApiGraspOverrideRequest & msg)
  : msg_(msg)
  {}
  Init_ApiGraspOverrideRequest_api_grasp_override header_is_set(::bosdyn_msgs::msg::ApiGraspOverrideRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_ApiGraspOverrideRequest_api_grasp_override(msg_);
  }

private:
  ::bosdyn_msgs::msg::ApiGraspOverrideRequest msg_;
};

class Init_ApiGraspOverrideRequest_header
{
public:
  Init_ApiGraspOverrideRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ApiGraspOverrideRequest_header_is_set header(::bosdyn_msgs::msg::ApiGraspOverrideRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ApiGraspOverrideRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ApiGraspOverrideRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ApiGraspOverrideRequest>()
{
  return bosdyn_msgs::msg::builder::Init_ApiGraspOverrideRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__API_GRASP_OVERRIDE_REQUEST__BUILDER_HPP_
