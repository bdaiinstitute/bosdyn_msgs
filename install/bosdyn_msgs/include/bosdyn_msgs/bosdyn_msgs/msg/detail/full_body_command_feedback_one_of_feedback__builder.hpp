// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/FullBodyCommandFeedbackOneOfFeedback.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__FULL_BODY_COMMAND_FEEDBACK_ONE_OF_FEEDBACK__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__FULL_BODY_COMMAND_FEEDBACK_ONE_OF_FEEDBACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/full_body_command_feedback_one_of_feedback__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_FullBodyCommandFeedbackOneOfFeedback_feedback_choice
{
public:
  explicit Init_FullBodyCommandFeedbackOneOfFeedback_feedback_choice(::bosdyn_msgs::msg::FullBodyCommandFeedbackOneOfFeedback & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::FullBodyCommandFeedbackOneOfFeedback feedback_choice(::bosdyn_msgs::msg::FullBodyCommandFeedbackOneOfFeedback::_feedback_choice_type arg)
  {
    msg_.feedback_choice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::FullBodyCommandFeedbackOneOfFeedback msg_;
};

class Init_FullBodyCommandFeedbackOneOfFeedback_constrained_manipulation_feedback
{
public:
  explicit Init_FullBodyCommandFeedbackOneOfFeedback_constrained_manipulation_feedback(::bosdyn_msgs::msg::FullBodyCommandFeedbackOneOfFeedback & msg)
  : msg_(msg)
  {}
  Init_FullBodyCommandFeedbackOneOfFeedback_feedback_choice constrained_manipulation_feedback(::bosdyn_msgs::msg::FullBodyCommandFeedbackOneOfFeedback::_constrained_manipulation_feedback_type arg)
  {
    msg_.constrained_manipulation_feedback = std::move(arg);
    return Init_FullBodyCommandFeedbackOneOfFeedback_feedback_choice(msg_);
  }

private:
  ::bosdyn_msgs::msg::FullBodyCommandFeedbackOneOfFeedback msg_;
};

class Init_FullBodyCommandFeedbackOneOfFeedback_payload_estimation_feedback
{
public:
  explicit Init_FullBodyCommandFeedbackOneOfFeedback_payload_estimation_feedback(::bosdyn_msgs::msg::FullBodyCommandFeedbackOneOfFeedback & msg)
  : msg_(msg)
  {}
  Init_FullBodyCommandFeedbackOneOfFeedback_constrained_manipulation_feedback payload_estimation_feedback(::bosdyn_msgs::msg::FullBodyCommandFeedbackOneOfFeedback::_payload_estimation_feedback_type arg)
  {
    msg_.payload_estimation_feedback = std::move(arg);
    return Init_FullBodyCommandFeedbackOneOfFeedback_constrained_manipulation_feedback(msg_);
  }

private:
  ::bosdyn_msgs::msg::FullBodyCommandFeedbackOneOfFeedback msg_;
};

class Init_FullBodyCommandFeedbackOneOfFeedback_battery_change_pose_feedback
{
public:
  explicit Init_FullBodyCommandFeedbackOneOfFeedback_battery_change_pose_feedback(::bosdyn_msgs::msg::FullBodyCommandFeedbackOneOfFeedback & msg)
  : msg_(msg)
  {}
  Init_FullBodyCommandFeedbackOneOfFeedback_payload_estimation_feedback battery_change_pose_feedback(::bosdyn_msgs::msg::FullBodyCommandFeedbackOneOfFeedback::_battery_change_pose_feedback_type arg)
  {
    msg_.battery_change_pose_feedback = std::move(arg);
    return Init_FullBodyCommandFeedbackOneOfFeedback_payload_estimation_feedback(msg_);
  }

private:
  ::bosdyn_msgs::msg::FullBodyCommandFeedbackOneOfFeedback msg_;
};

class Init_FullBodyCommandFeedbackOneOfFeedback_safe_power_off_feedback
{
public:
  explicit Init_FullBodyCommandFeedbackOneOfFeedback_safe_power_off_feedback(::bosdyn_msgs::msg::FullBodyCommandFeedbackOneOfFeedback & msg)
  : msg_(msg)
  {}
  Init_FullBodyCommandFeedbackOneOfFeedback_battery_change_pose_feedback safe_power_off_feedback(::bosdyn_msgs::msg::FullBodyCommandFeedbackOneOfFeedback::_safe_power_off_feedback_type arg)
  {
    msg_.safe_power_off_feedback = std::move(arg);
    return Init_FullBodyCommandFeedbackOneOfFeedback_battery_change_pose_feedback(msg_);
  }

private:
  ::bosdyn_msgs::msg::FullBodyCommandFeedbackOneOfFeedback msg_;
};

class Init_FullBodyCommandFeedbackOneOfFeedback_selfright_feedback
{
public:
  explicit Init_FullBodyCommandFeedbackOneOfFeedback_selfright_feedback(::bosdyn_msgs::msg::FullBodyCommandFeedbackOneOfFeedback & msg)
  : msg_(msg)
  {}
  Init_FullBodyCommandFeedbackOneOfFeedback_safe_power_off_feedback selfright_feedback(::bosdyn_msgs::msg::FullBodyCommandFeedbackOneOfFeedback::_selfright_feedback_type arg)
  {
    msg_.selfright_feedback = std::move(arg);
    return Init_FullBodyCommandFeedbackOneOfFeedback_safe_power_off_feedback(msg_);
  }

private:
  ::bosdyn_msgs::msg::FullBodyCommandFeedbackOneOfFeedback msg_;
};

class Init_FullBodyCommandFeedbackOneOfFeedback_freeze_feedback
{
public:
  explicit Init_FullBodyCommandFeedbackOneOfFeedback_freeze_feedback(::bosdyn_msgs::msg::FullBodyCommandFeedbackOneOfFeedback & msg)
  : msg_(msg)
  {}
  Init_FullBodyCommandFeedbackOneOfFeedback_selfright_feedback freeze_feedback(::bosdyn_msgs::msg::FullBodyCommandFeedbackOneOfFeedback::_freeze_feedback_type arg)
  {
    msg_.freeze_feedback = std::move(arg);
    return Init_FullBodyCommandFeedbackOneOfFeedback_selfright_feedback(msg_);
  }

private:
  ::bosdyn_msgs::msg::FullBodyCommandFeedbackOneOfFeedback msg_;
};

class Init_FullBodyCommandFeedbackOneOfFeedback_stop_feedback
{
public:
  Init_FullBodyCommandFeedbackOneOfFeedback_stop_feedback()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FullBodyCommandFeedbackOneOfFeedback_freeze_feedback stop_feedback(::bosdyn_msgs::msg::FullBodyCommandFeedbackOneOfFeedback::_stop_feedback_type arg)
  {
    msg_.stop_feedback = std::move(arg);
    return Init_FullBodyCommandFeedbackOneOfFeedback_freeze_feedback(msg_);
  }

private:
  ::bosdyn_msgs::msg::FullBodyCommandFeedbackOneOfFeedback msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::FullBodyCommandFeedbackOneOfFeedback>()
{
  return bosdyn_msgs::msg::builder::Init_FullBodyCommandFeedbackOneOfFeedback_stop_feedback();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__FULL_BODY_COMMAND_FEEDBACK_ONE_OF_FEEDBACK__BUILDER_HPP_
