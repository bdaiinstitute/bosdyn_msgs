// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ActionWrapperSpotCamAlignmentAlignmentOneOfReference.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_SPOT_CAM_ALIGNMENT_ALIGNMENT_ONE_OF_REFERENCE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_SPOT_CAM_ALIGNMENT_ALIGNMENT_ONE_OF_REFERENCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/action_wrapper_spot_cam_alignment_alignment_one_of_reference__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ActionWrapperSpotCamAlignmentAlignmentOneOfReference_reference_choice
{
public:
  explicit Init_ActionWrapperSpotCamAlignmentAlignmentOneOfReference_reference_choice(::bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignmentOneOfReference & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignmentOneOfReference reference_choice(::bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignmentOneOfReference::_reference_choice_type arg)
  {
    msg_.reference_choice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignmentOneOfReference msg_;
};

class Init_ActionWrapperSpotCamAlignmentAlignmentOneOfReference_scene_object_id
{
public:
  Init_ActionWrapperSpotCamAlignmentAlignmentOneOfReference_scene_object_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActionWrapperSpotCamAlignmentAlignmentOneOfReference_reference_choice scene_object_id(::bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignmentOneOfReference::_scene_object_id_type arg)
  {
    msg_.scene_object_id = std::move(arg);
    return Init_ActionWrapperSpotCamAlignmentAlignmentOneOfReference_reference_choice(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignmentOneOfReference msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignmentOneOfReference>()
{
  return bosdyn_msgs::msg::builder::Init_ActionWrapperSpotCamAlignmentAlignmentOneOfReference_scene_object_id();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_SPOT_CAM_ALIGNMENT_ALIGNMENT_ONE_OF_REFERENCE__BUILDER_HPP_
