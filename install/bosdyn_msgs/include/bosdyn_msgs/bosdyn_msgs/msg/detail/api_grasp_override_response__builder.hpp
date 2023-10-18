// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ApiGraspOverrideResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__API_GRASP_OVERRIDE_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__API_GRASP_OVERRIDE_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/api_grasp_override_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ApiGraspOverrideResponse_header_is_set
{
public:
  explicit Init_ApiGraspOverrideResponse_header_is_set(::bosdyn_msgs::msg::ApiGraspOverrideResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ApiGraspOverrideResponse header_is_set(::bosdyn_msgs::msg::ApiGraspOverrideResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ApiGraspOverrideResponse msg_;
};

class Init_ApiGraspOverrideResponse_header
{
public:
  Init_ApiGraspOverrideResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ApiGraspOverrideResponse_header_is_set header(::bosdyn_msgs::msg::ApiGraspOverrideResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ApiGraspOverrideResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ApiGraspOverrideResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ApiGraspOverrideResponse>()
{
  return bosdyn_msgs::msg::builder::Init_ApiGraspOverrideResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__API_GRASP_OVERRIDE_RESPONSE__BUILDER_HPP_
