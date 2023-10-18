// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ActionWrapperSpotCamAlignmentAlignment.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_SPOT_CAM_ALIGNMENT_ALIGNMENT__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_SPOT_CAM_ALIGNMENT_ALIGNMENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/action_wrapper_spot_cam_alignment_alignment__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ActionWrapperSpotCamAlignmentAlignment_is_skipped
{
public:
  explicit Init_ActionWrapperSpotCamAlignmentAlignment_is_skipped(::bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignment & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignment is_skipped(::bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignment::_is_skipped_type arg)
  {
    msg_.is_skipped = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignment msg_;
};

class Init_ActionWrapperSpotCamAlignmentAlignment_reference
{
public:
  explicit Init_ActionWrapperSpotCamAlignmentAlignment_reference(::bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignment & msg)
  : msg_(msg)
  {}
  Init_ActionWrapperSpotCamAlignmentAlignment_is_skipped reference(::bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignment::_reference_type arg)
  {
    msg_.reference = std::move(arg);
    return Init_ActionWrapperSpotCamAlignmentAlignment_is_skipped(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignment msg_;
};

class Init_ActionWrapperSpotCamAlignmentAlignment_sensor_id
{
public:
  explicit Init_ActionWrapperSpotCamAlignmentAlignment_sensor_id(::bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignment & msg)
  : msg_(msg)
  {}
  Init_ActionWrapperSpotCamAlignmentAlignment_reference sensor_id(::bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignment::_sensor_id_type arg)
  {
    msg_.sensor_id = std::move(arg);
    return Init_ActionWrapperSpotCamAlignmentAlignment_reference(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignment msg_;
};

class Init_ActionWrapperSpotCamAlignmentAlignment_zoom
{
public:
  Init_ActionWrapperSpotCamAlignmentAlignment_zoom()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActionWrapperSpotCamAlignmentAlignment_sensor_id zoom(::bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignment::_zoom_type arg)
  {
    msg_.zoom = std::move(arg);
    return Init_ActionWrapperSpotCamAlignmentAlignment_sensor_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignment msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ActionWrapperSpotCamAlignmentAlignment>()
{
  return bosdyn_msgs::msg::builder::Init_ActionWrapperSpotCamAlignmentAlignment_zoom();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_SPOT_CAM_ALIGNMENT_ALIGNMENT__BUILDER_HPP_
