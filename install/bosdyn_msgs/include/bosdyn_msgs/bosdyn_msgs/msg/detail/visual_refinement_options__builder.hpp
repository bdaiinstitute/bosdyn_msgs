// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/VisualRefinementOptions.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__VISUAL_REFINEMENT_OPTIONS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__VISUAL_REFINEMENT_OPTIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/visual_refinement_options__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_VisualRefinementOptions_verify_refinement_quality
{
public:
  Init_VisualRefinementOptions_verify_refinement_quality()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bosdyn_msgs::msg::VisualRefinementOptions verify_refinement_quality(::bosdyn_msgs::msg::VisualRefinementOptions::_verify_refinement_quality_type arg)
  {
    msg_.verify_refinement_quality = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::VisualRefinementOptions msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::VisualRefinementOptions>()
{
  return bosdyn_msgs::msg::builder::Init_VisualRefinementOptions_verify_refinement_quality();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__VISUAL_REFINEMENT_OPTIONS__BUILDER_HPP_
