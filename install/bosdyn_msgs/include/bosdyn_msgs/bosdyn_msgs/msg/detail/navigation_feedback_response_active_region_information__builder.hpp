// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/NavigationFeedbackResponseActiveRegionInformation.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__NAVIGATION_FEEDBACK_RESPONSE_ACTIVE_REGION_INFORMATION__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__NAVIGATION_FEEDBACK_RESPONSE_ACTIVE_REGION_INFORMATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/navigation_feedback_response_active_region_information__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_NavigationFeedbackResponseActiveRegionInformation_region_status
{
public:
  explicit Init_NavigationFeedbackResponseActiveRegionInformation_region_status(::bosdyn_msgs::msg::NavigationFeedbackResponseActiveRegionInformation & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::NavigationFeedbackResponseActiveRegionInformation region_status(::bosdyn_msgs::msg::NavigationFeedbackResponseActiveRegionInformation::_region_status_type arg)
  {
    msg_.region_status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigationFeedbackResponseActiveRegionInformation msg_;
};

class Init_NavigationFeedbackResponseActiveRegionInformation_service_name
{
public:
  explicit Init_NavigationFeedbackResponseActiveRegionInformation_service_name(::bosdyn_msgs::msg::NavigationFeedbackResponseActiveRegionInformation & msg)
  : msg_(msg)
  {}
  Init_NavigationFeedbackResponseActiveRegionInformation_region_status service_name(::bosdyn_msgs::msg::NavigationFeedbackResponseActiveRegionInformation::_service_name_type arg)
  {
    msg_.service_name = std::move(arg);
    return Init_NavigationFeedbackResponseActiveRegionInformation_region_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigationFeedbackResponseActiveRegionInformation msg_;
};

class Init_NavigationFeedbackResponseActiveRegionInformation_description
{
public:
  Init_NavigationFeedbackResponseActiveRegionInformation_description()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NavigationFeedbackResponseActiveRegionInformation_service_name description(::bosdyn_msgs::msg::NavigationFeedbackResponseActiveRegionInformation::_description_type arg)
  {
    msg_.description = std::move(arg);
    return Init_NavigationFeedbackResponseActiveRegionInformation_service_name(msg_);
  }

private:
  ::bosdyn_msgs::msg::NavigationFeedbackResponseActiveRegionInformation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::NavigationFeedbackResponseActiveRegionInformation>()
{
  return bosdyn_msgs::msg::builder::Init_NavigationFeedbackResponseActiveRegionInformation_description();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__NAVIGATION_FEEDBACK_RESPONSE_ACTIVE_REGION_INFORMATION__BUILDER_HPP_
