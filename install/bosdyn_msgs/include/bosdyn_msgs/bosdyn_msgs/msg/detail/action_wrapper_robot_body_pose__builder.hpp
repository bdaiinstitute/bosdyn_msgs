// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ActionWrapperRobotBodyPose.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_ROBOT_BODY_POSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_ROBOT_BODY_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/action_wrapper_robot_body_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ActionWrapperRobotBodyPose_target_tform_body_is_set
{
public:
  explicit Init_ActionWrapperRobotBodyPose_target_tform_body_is_set(::bosdyn_msgs::msg::ActionWrapperRobotBodyPose & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ActionWrapperRobotBodyPose target_tform_body_is_set(::bosdyn_msgs::msg::ActionWrapperRobotBodyPose::_target_tform_body_is_set_type arg)
  {
    msg_.target_tform_body_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionWrapperRobotBodyPose msg_;
};

class Init_ActionWrapperRobotBodyPose_target_tform_body
{
public:
  Init_ActionWrapperRobotBodyPose_target_tform_body()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActionWrapperRobotBodyPose_target_tform_body_is_set target_tform_body(::bosdyn_msgs::msg::ActionWrapperRobotBodyPose::_target_tform_body_type arg)
  {
    msg_.target_tform_body = std::move(arg);
    return Init_ActionWrapperRobotBodyPose_target_tform_body_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionWrapperRobotBodyPose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ActionWrapperRobotBodyPose>()
{
  return bosdyn_msgs::msg::builder::Init_ActionWrapperRobotBodyPose_target_tform_body();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_ROBOT_BODY_POSE__BUILDER_HPP_
