// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ApiGraspOverride.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__API_GRASP_OVERRIDE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__API_GRASP_OVERRIDE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/api_grasp_override__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ApiGraspOverride_override_request
{
public:
  Init_ApiGraspOverride_override_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bosdyn_msgs::msg::ApiGraspOverride override_request(::bosdyn_msgs::msg::ApiGraspOverride::_override_request_type arg)
  {
    msg_.override_request = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ApiGraspOverride msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ApiGraspOverride>()
{
  return bosdyn_msgs::msg::builder::Init_ApiGraspOverride_override_request();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__API_GRASP_OVERRIDE__BUILDER_HPP_
