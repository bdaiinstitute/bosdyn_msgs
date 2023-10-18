// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ArmCommandFeedbackOneOfFeedback.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_COMMAND_FEEDBACK_ONE_OF_FEEDBACK__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_COMMAND_FEEDBACK_ONE_OF_FEEDBACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/arm_command_feedback_one_of_feedback__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ArmCommandFeedbackOneOfFeedback_feedback_choice
{
public:
  explicit Init_ArmCommandFeedbackOneOfFeedback_feedback_choice(::bosdyn_msgs::msg::ArmCommandFeedbackOneOfFeedback & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ArmCommandFeedbackOneOfFeedback feedback_choice(::bosdyn_msgs::msg::ArmCommandFeedbackOneOfFeedback::_feedback_choice_type arg)
  {
    msg_.feedback_choice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmCommandFeedbackOneOfFeedback msg_;
};

class Init_ArmCommandFeedbackOneOfFeedback_arm_impedance_feedback
{
public:
  explicit Init_ArmCommandFeedbackOneOfFeedback_arm_impedance_feedback(::bosdyn_msgs::msg::ArmCommandFeedbackOneOfFeedback & msg)
  : msg_(msg)
  {}
  Init_ArmCommandFeedbackOneOfFeedback_feedback_choice arm_impedance_feedback(::bosdyn_msgs::msg::ArmCommandFeedbackOneOfFeedback::_arm_impedance_feedback_type arg)
  {
    msg_.arm_impedance_feedback = std::move(arg);
    return Init_ArmCommandFeedbackOneOfFeedback_feedback_choice(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmCommandFeedbackOneOfFeedback msg_;
};

class Init_ArmCommandFeedbackOneOfFeedback_arm_drag_feedback
{
public:
  explicit Init_ArmCommandFeedbackOneOfFeedback_arm_drag_feedback(::bosdyn_msgs::msg::ArmCommandFeedbackOneOfFeedback & msg)
  : msg_(msg)
  {}
  Init_ArmCommandFeedbackOneOfFeedback_arm_impedance_feedback arm_drag_feedback(::bosdyn_msgs::msg::ArmCommandFeedbackOneOfFeedback::_arm_drag_feedback_type arg)
  {
    msg_.arm_drag_feedback = std::move(arg);
    return Init_ArmCommandFeedbackOneOfFeedback_arm_impedance_feedback(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmCommandFeedbackOneOfFeedback msg_;
};

class Init_ArmCommandFeedbackOneOfFeedback_arm_stop_feedback
{
public:
  explicit Init_ArmCommandFeedbackOneOfFeedback_arm_stop_feedback(::bosdyn_msgs::msg::ArmCommandFeedbackOneOfFeedback & msg)
  : msg_(msg)
  {}
  Init_ArmCommandFeedbackOneOfFeedback_arm_drag_feedback arm_stop_feedback(::bosdyn_msgs::msg::ArmCommandFeedbackOneOfFeedback::_arm_stop_feedback_type arg)
  {
    msg_.arm_stop_feedback = std::move(arg);
    return Init_ArmCommandFeedbackOneOfFeedback_arm_drag_feedback(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmCommandFeedbackOneOfFeedback msg_;
};

class Init_ArmCommandFeedbackOneOfFeedback_arm_gaze_feedback
{
public:
  explicit Init_ArmCommandFeedbackOneOfFeedback_arm_gaze_feedback(::bosdyn_msgs::msg::ArmCommandFeedbackOneOfFeedback & msg)
  : msg_(msg)
  {}
  Init_ArmCommandFeedbackOneOfFeedback_arm_stop_feedback arm_gaze_feedback(::bosdyn_msgs::msg::ArmCommandFeedbackOneOfFeedback::_arm_gaze_feedback_type arg)
  {
    msg_.arm_gaze_feedback = std::move(arg);
    return Init_ArmCommandFeedbackOneOfFeedback_arm_stop_feedback(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmCommandFeedbackOneOfFeedback msg_;
};

class Init_ArmCommandFeedbackOneOfFeedback_arm_velocity_feedback
{
public:
  explicit Init_ArmCommandFeedbackOneOfFeedback_arm_velocity_feedback(::bosdyn_msgs::msg::ArmCommandFeedbackOneOfFeedback & msg)
  : msg_(msg)
  {}
  Init_ArmCommandFeedbackOneOfFeedback_arm_gaze_feedback arm_velocity_feedback(::bosdyn_msgs::msg::ArmCommandFeedbackOneOfFeedback::_arm_velocity_feedback_type arg)
  {
    msg_.arm_velocity_feedback = std::move(arg);
    return Init_ArmCommandFeedbackOneOfFeedback_arm_gaze_feedback(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmCommandFeedbackOneOfFeedback msg_;
};

class Init_ArmCommandFeedbackOneOfFeedback_named_arm_position_feedback
{
public:
  explicit Init_ArmCommandFeedbackOneOfFeedback_named_arm_position_feedback(::bosdyn_msgs::msg::ArmCommandFeedbackOneOfFeedback & msg)
  : msg_(msg)
  {}
  Init_ArmCommandFeedbackOneOfFeedback_arm_velocity_feedback named_arm_position_feedback(::bosdyn_msgs::msg::ArmCommandFeedbackOneOfFeedback::_named_arm_position_feedback_type arg)
  {
    msg_.named_arm_position_feedback = std::move(arg);
    return Init_ArmCommandFeedbackOneOfFeedback_arm_velocity_feedback(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmCommandFeedbackOneOfFeedback msg_;
};

class Init_ArmCommandFeedbackOneOfFeedback_arm_joint_move_feedback
{
public:
  explicit Init_ArmCommandFeedbackOneOfFeedback_arm_joint_move_feedback(::bosdyn_msgs::msg::ArmCommandFeedbackOneOfFeedback & msg)
  : msg_(msg)
  {}
  Init_ArmCommandFeedbackOneOfFeedback_named_arm_position_feedback arm_joint_move_feedback(::bosdyn_msgs::msg::ArmCommandFeedbackOneOfFeedback::_arm_joint_move_feedback_type arg)
  {
    msg_.arm_joint_move_feedback = std::move(arg);
    return Init_ArmCommandFeedbackOneOfFeedback_named_arm_position_feedback(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmCommandFeedbackOneOfFeedback msg_;
};

class Init_ArmCommandFeedbackOneOfFeedback_arm_cartesian_feedback
{
public:
  Init_ArmCommandFeedbackOneOfFeedback_arm_cartesian_feedback()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmCommandFeedbackOneOfFeedback_arm_joint_move_feedback arm_cartesian_feedback(::bosdyn_msgs::msg::ArmCommandFeedbackOneOfFeedback::_arm_cartesian_feedback_type arg)
  {
    msg_.arm_cartesian_feedback = std::move(arg);
    return Init_ArmCommandFeedbackOneOfFeedback_arm_joint_move_feedback(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmCommandFeedbackOneOfFeedback msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ArmCommandFeedbackOneOfFeedback>()
{
  return bosdyn_msgs::msg::builder::Init_ArmCommandFeedbackOneOfFeedback_arm_cartesian_feedback();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_COMMAND_FEEDBACK_ONE_OF_FEEDBACK__BUILDER_HPP_
