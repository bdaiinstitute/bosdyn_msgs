// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ActionWrapperSpotCamPtz.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_SPOT_CAM_PTZ__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_SPOT_CAM_PTZ__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/action_wrapper_spot_cam_ptz__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ActionWrapperSpotCamPtz_ptz_position_is_set
{
public:
  explicit Init_ActionWrapperSpotCamPtz_ptz_position_is_set(::bosdyn_msgs::msg::ActionWrapperSpotCamPtz & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ActionWrapperSpotCamPtz ptz_position_is_set(::bosdyn_msgs::msg::ActionWrapperSpotCamPtz::_ptz_position_is_set_type arg)
  {
    msg_.ptz_position_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionWrapperSpotCamPtz msg_;
};

class Init_ActionWrapperSpotCamPtz_ptz_position
{
public:
  Init_ActionWrapperSpotCamPtz_ptz_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActionWrapperSpotCamPtz_ptz_position_is_set ptz_position(::bosdyn_msgs::msg::ActionWrapperSpotCamPtz::_ptz_position_type arg)
  {
    msg_.ptz_position = std::move(arg);
    return Init_ActionWrapperSpotCamPtz_ptz_position_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionWrapperSpotCamPtz msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ActionWrapperSpotCamPtz>()
{
  return bosdyn_msgs::msg::builder::Init_ActionWrapperSpotCamPtz_ptz_position();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_SPOT_CAM_PTZ__BUILDER_HPP_
