// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GetFeatureEnabledResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_FEATURE_ENABLED_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_FEATURE_ENABLED_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/get_feature_enabled_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GetFeatureEnabledResponse_feature_enabled
{
public:
  explicit Init_GetFeatureEnabledResponse_feature_enabled(::bosdyn_msgs::msg::GetFeatureEnabledResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GetFeatureEnabledResponse feature_enabled(::bosdyn_msgs::msg::GetFeatureEnabledResponse::_feature_enabled_type arg)
  {
    msg_.feature_enabled = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetFeatureEnabledResponse msg_;
};

class Init_GetFeatureEnabledResponse_header_is_set
{
public:
  explicit Init_GetFeatureEnabledResponse_header_is_set(::bosdyn_msgs::msg::GetFeatureEnabledResponse & msg)
  : msg_(msg)
  {}
  Init_GetFeatureEnabledResponse_feature_enabled header_is_set(::bosdyn_msgs::msg::GetFeatureEnabledResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_GetFeatureEnabledResponse_feature_enabled(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetFeatureEnabledResponse msg_;
};

class Init_GetFeatureEnabledResponse_header
{
public:
  Init_GetFeatureEnabledResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetFeatureEnabledResponse_header_is_set header(::bosdyn_msgs::msg::GetFeatureEnabledResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetFeatureEnabledResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetFeatureEnabledResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GetFeatureEnabledResponse>()
{
  return bosdyn_msgs::msg::builder::Init_GetFeatureEnabledResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_FEATURE_ENABLED_RESPONSE__BUILDER_HPP_
