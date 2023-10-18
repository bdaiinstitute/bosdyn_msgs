// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GetFeatureEnabledRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_FEATURE_ENABLED_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_FEATURE_ENABLED_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/get_feature_enabled_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GetFeatureEnabledRequest_feature_codes
{
public:
  explicit Init_GetFeatureEnabledRequest_feature_codes(::bosdyn_msgs::msg::GetFeatureEnabledRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GetFeatureEnabledRequest feature_codes(::bosdyn_msgs::msg::GetFeatureEnabledRequest::_feature_codes_type arg)
  {
    msg_.feature_codes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetFeatureEnabledRequest msg_;
};

class Init_GetFeatureEnabledRequest_header_is_set
{
public:
  explicit Init_GetFeatureEnabledRequest_header_is_set(::bosdyn_msgs::msg::GetFeatureEnabledRequest & msg)
  : msg_(msg)
  {}
  Init_GetFeatureEnabledRequest_feature_codes header_is_set(::bosdyn_msgs::msg::GetFeatureEnabledRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_GetFeatureEnabledRequest_feature_codes(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetFeatureEnabledRequest msg_;
};

class Init_GetFeatureEnabledRequest_header
{
public:
  Init_GetFeatureEnabledRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetFeatureEnabledRequest_header_is_set header(::bosdyn_msgs::msg::GetFeatureEnabledRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetFeatureEnabledRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetFeatureEnabledRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GetFeatureEnabledRequest>()
{
  return bosdyn_msgs::msg::builder::Init_GetFeatureEnabledRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_FEATURE_ENABLED_REQUEST__BUILDER_HPP_
