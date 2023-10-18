// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/SetLocalizationRequestOneOfRefinement.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SET_LOCALIZATION_REQUEST_ONE_OF_REFINEMENT__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SET_LOCALIZATION_REQUEST_ONE_OF_REFINEMENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/set_localization_request_one_of_refinement__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_SetLocalizationRequestOneOfRefinement_refinement_choice
{
public:
  explicit Init_SetLocalizationRequestOneOfRefinement_refinement_choice(::bosdyn_msgs::msg::SetLocalizationRequestOneOfRefinement & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::SetLocalizationRequestOneOfRefinement refinement_choice(::bosdyn_msgs::msg::SetLocalizationRequestOneOfRefinement::_refinement_choice_type arg)
  {
    msg_.refinement_choice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetLocalizationRequestOneOfRefinement msg_;
};

class Init_SetLocalizationRequestOneOfRefinement_refine_with_visual_features
{
public:
  explicit Init_SetLocalizationRequestOneOfRefinement_refine_with_visual_features(::bosdyn_msgs::msg::SetLocalizationRequestOneOfRefinement & msg)
  : msg_(msg)
  {}
  Init_SetLocalizationRequestOneOfRefinement_refinement_choice refine_with_visual_features(::bosdyn_msgs::msg::SetLocalizationRequestOneOfRefinement::_refine_with_visual_features_type arg)
  {
    msg_.refine_with_visual_features = std::move(arg);
    return Init_SetLocalizationRequestOneOfRefinement_refinement_choice(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetLocalizationRequestOneOfRefinement msg_;
};

class Init_SetLocalizationRequestOneOfRefinement_refine_fiducial_result_with_icp
{
public:
  Init_SetLocalizationRequestOneOfRefinement_refine_fiducial_result_with_icp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetLocalizationRequestOneOfRefinement_refine_with_visual_features refine_fiducial_result_with_icp(::bosdyn_msgs::msg::SetLocalizationRequestOneOfRefinement::_refine_fiducial_result_with_icp_type arg)
  {
    msg_.refine_fiducial_result_with_icp = std::move(arg);
    return Init_SetLocalizationRequestOneOfRefinement_refine_with_visual_features(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetLocalizationRequestOneOfRefinement msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::SetLocalizationRequestOneOfRefinement>()
{
  return bosdyn_msgs::msg::builder::Init_SetLocalizationRequestOneOfRefinement_refine_fiducial_result_with_icp();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SET_LOCALIZATION_REQUEST_ONE_OF_REFINEMENT__BUILDER_HPP_
