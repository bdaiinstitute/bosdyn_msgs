// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/KeyStringValueBosdynMsgsNavigationFeedbackResponseActiveRegionInformation.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__KEY_STRING_VALUE_BOSDYN_MSGS_NAVIGATION_FEEDBACK_RESPONSE_ACTIVE_REGION_INFORMATION__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__KEY_STRING_VALUE_BOSDYN_MSGS_NAVIGATION_FEEDBACK_RESPONSE_ACTIVE_REGION_INFORMATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/key_string_value_bosdyn_msgs_navigation_feedback_response_active_region_information__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_KeyStringValueBosdynMsgsNavigationFeedbackResponseActiveRegionInformation_value
{
public:
  explicit Init_KeyStringValueBosdynMsgsNavigationFeedbackResponseActiveRegionInformation_value(::bosdyn_msgs::msg::KeyStringValueBosdynMsgsNavigationFeedbackResponseActiveRegionInformation & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::KeyStringValueBosdynMsgsNavigationFeedbackResponseActiveRegionInformation value(::bosdyn_msgs::msg::KeyStringValueBosdynMsgsNavigationFeedbackResponseActiveRegionInformation::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::KeyStringValueBosdynMsgsNavigationFeedbackResponseActiveRegionInformation msg_;
};

class Init_KeyStringValueBosdynMsgsNavigationFeedbackResponseActiveRegionInformation_key
{
public:
  Init_KeyStringValueBosdynMsgsNavigationFeedbackResponseActiveRegionInformation_key()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KeyStringValueBosdynMsgsNavigationFeedbackResponseActiveRegionInformation_value key(::bosdyn_msgs::msg::KeyStringValueBosdynMsgsNavigationFeedbackResponseActiveRegionInformation::_key_type arg)
  {
    msg_.key = std::move(arg);
    return Init_KeyStringValueBosdynMsgsNavigationFeedbackResponseActiveRegionInformation_value(msg_);
  }

private:
  ::bosdyn_msgs::msg::KeyStringValueBosdynMsgsNavigationFeedbackResponseActiveRegionInformation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::KeyStringValueBosdynMsgsNavigationFeedbackResponseActiveRegionInformation>()
{
  return bosdyn_msgs::msg::builder::Init_KeyStringValueBosdynMsgsNavigationFeedbackResponseActiveRegionInformation_key();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__KEY_STRING_VALUE_BOSDYN_MSGS_NAVIGATION_FEEDBACK_RESPONSE_ACTIVE_REGION_INFORMATION__BUILDER_HPP_
