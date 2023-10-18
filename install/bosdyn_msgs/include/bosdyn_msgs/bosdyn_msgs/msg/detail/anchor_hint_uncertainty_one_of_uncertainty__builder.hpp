// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/AnchorHintUncertaintyOneOfUncertainty.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ANCHOR_HINT_UNCERTAINTY_ONE_OF_UNCERTAINTY__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ANCHOR_HINT_UNCERTAINTY_ONE_OF_UNCERTAINTY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/anchor_hint_uncertainty_one_of_uncertainty__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_AnchorHintUncertaintyOneOfUncertainty_uncertainty_choice
{
public:
  explicit Init_AnchorHintUncertaintyOneOfUncertainty_uncertainty_choice(::bosdyn_msgs::msg::AnchorHintUncertaintyOneOfUncertainty & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::AnchorHintUncertaintyOneOfUncertainty uncertainty_choice(::bosdyn_msgs::msg::AnchorHintUncertaintyOneOfUncertainty::_uncertainty_choice_type arg)
  {
    msg_.uncertainty_choice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::AnchorHintUncertaintyOneOfUncertainty msg_;
};

class Init_AnchorHintUncertaintyOneOfUncertainty_confidence_bounds
{
public:
  explicit Init_AnchorHintUncertaintyOneOfUncertainty_confidence_bounds(::bosdyn_msgs::msg::AnchorHintUncertaintyOneOfUncertainty & msg)
  : msg_(msg)
  {}
  Init_AnchorHintUncertaintyOneOfUncertainty_uncertainty_choice confidence_bounds(::bosdyn_msgs::msg::AnchorHintUncertaintyOneOfUncertainty::_confidence_bounds_type arg)
  {
    msg_.confidence_bounds = std::move(arg);
    return Init_AnchorHintUncertaintyOneOfUncertainty_uncertainty_choice(msg_);
  }

private:
  ::bosdyn_msgs::msg::AnchorHintUncertaintyOneOfUncertainty msg_;
};

class Init_AnchorHintUncertaintyOneOfUncertainty_se3_covariance
{
public:
  Init_AnchorHintUncertaintyOneOfUncertainty_se3_covariance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AnchorHintUncertaintyOneOfUncertainty_confidence_bounds se3_covariance(::bosdyn_msgs::msg::AnchorHintUncertaintyOneOfUncertainty::_se3_covariance_type arg)
  {
    msg_.se3_covariance = std::move(arg);
    return Init_AnchorHintUncertaintyOneOfUncertainty_confidence_bounds(msg_);
  }

private:
  ::bosdyn_msgs::msg::AnchorHintUncertaintyOneOfUncertainty msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::AnchorHintUncertaintyOneOfUncertainty>()
{
  return bosdyn_msgs::msg::builder::Init_AnchorHintUncertaintyOneOfUncertainty_se3_covariance();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ANCHOR_HINT_UNCERTAINTY_ONE_OF_UNCERTAINTY__BUILDER_HPP_
