// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/SetLocalizationResponseSuspectedAmbiguity.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SET_LOCALIZATION_RESPONSE_SUSPECTED_AMBIGUITY__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SET_LOCALIZATION_RESPONSE_SUSPECTED_AMBIGUITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/set_localization_response_suspected_ambiguity__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_SetLocalizationResponseSuspectedAmbiguity_alternate_robot_tform_waypoint_is_set
{
public:
  explicit Init_SetLocalizationResponseSuspectedAmbiguity_alternate_robot_tform_waypoint_is_set(::bosdyn_msgs::msg::SetLocalizationResponseSuspectedAmbiguity & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::SetLocalizationResponseSuspectedAmbiguity alternate_robot_tform_waypoint_is_set(::bosdyn_msgs::msg::SetLocalizationResponseSuspectedAmbiguity::_alternate_robot_tform_waypoint_is_set_type arg)
  {
    msg_.alternate_robot_tform_waypoint_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetLocalizationResponseSuspectedAmbiguity msg_;
};

class Init_SetLocalizationResponseSuspectedAmbiguity_alternate_robot_tform_waypoint
{
public:
  Init_SetLocalizationResponseSuspectedAmbiguity_alternate_robot_tform_waypoint()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetLocalizationResponseSuspectedAmbiguity_alternate_robot_tform_waypoint_is_set alternate_robot_tform_waypoint(::bosdyn_msgs::msg::SetLocalizationResponseSuspectedAmbiguity::_alternate_robot_tform_waypoint_type arg)
  {
    msg_.alternate_robot_tform_waypoint = std::move(arg);
    return Init_SetLocalizationResponseSuspectedAmbiguity_alternate_robot_tform_waypoint_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetLocalizationResponseSuspectedAmbiguity msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::SetLocalizationResponseSuspectedAmbiguity>()
{
  return bosdyn_msgs::msg::builder::Init_SetLocalizationResponseSuspectedAmbiguity_alternate_robot_tform_waypoint();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SET_LOCALIZATION_RESPONSE_SUSPECTED_AMBIGUITY__BUILDER_HPP_
