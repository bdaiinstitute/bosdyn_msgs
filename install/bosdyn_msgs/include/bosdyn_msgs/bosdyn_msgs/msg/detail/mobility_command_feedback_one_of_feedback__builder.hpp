// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/MobilityCommandFeedbackOneOfFeedback.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MOBILITY_COMMAND_FEEDBACK_ONE_OF_FEEDBACK__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__MOBILITY_COMMAND_FEEDBACK_ONE_OF_FEEDBACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/mobility_command_feedback_one_of_feedback__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_MobilityCommandFeedbackOneOfFeedback_feedback_choice
{
public:
  explicit Init_MobilityCommandFeedbackOneOfFeedback_feedback_choice(::bosdyn_msgs::msg::MobilityCommandFeedbackOneOfFeedback & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::MobilityCommandFeedbackOneOfFeedback feedback_choice(::bosdyn_msgs::msg::MobilityCommandFeedbackOneOfFeedback::_feedback_choice_type arg)
  {
    msg_.feedback_choice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::MobilityCommandFeedbackOneOfFeedback msg_;
};

class Init_MobilityCommandFeedbackOneOfFeedback_follow_arm_feedback
{
public:
  explicit Init_MobilityCommandFeedbackOneOfFeedback_follow_arm_feedback(::bosdyn_msgs::msg::MobilityCommandFeedbackOneOfFeedback & msg)
  : msg_(msg)
  {}
  Init_MobilityCommandFeedbackOneOfFeedback_feedback_choice follow_arm_feedback(::bosdyn_msgs::msg::MobilityCommandFeedbackOneOfFeedback::_follow_arm_feedback_type arg)
  {
    msg_.follow_arm_feedback = std::move(arg);
    return Init_MobilityCommandFeedbackOneOfFeedback_feedback_choice(msg_);
  }

private:
  ::bosdyn_msgs::msg::MobilityCommandFeedbackOneOfFeedback msg_;
};

class Init_MobilityCommandFeedbackOneOfFeedback_stop_feedback
{
public:
  explicit Init_MobilityCommandFeedbackOneOfFeedback_stop_feedback(::bosdyn_msgs::msg::MobilityCommandFeedbackOneOfFeedback & msg)
  : msg_(msg)
  {}
  Init_MobilityCommandFeedbackOneOfFeedback_follow_arm_feedback stop_feedback(::bosdyn_msgs::msg::MobilityCommandFeedbackOneOfFeedback::_stop_feedback_type arg)
  {
    msg_.stop_feedback = std::move(arg);
    return Init_MobilityCommandFeedbackOneOfFeedback_follow_arm_feedback(msg_);
  }

private:
  ::bosdyn_msgs::msg::MobilityCommandFeedbackOneOfFeedback msg_;
};

class Init_MobilityCommandFeedbackOneOfFeedback_stance_feedback
{
public:
  explicit Init_MobilityCommandFeedbackOneOfFeedback_stance_feedback(::bosdyn_msgs::msg::MobilityCommandFeedbackOneOfFeedback & msg)
  : msg_(msg)
  {}
  Init_MobilityCommandFeedbackOneOfFeedback_stop_feedback stance_feedback(::bosdyn_msgs::msg::MobilityCommandFeedbackOneOfFeedback::_stance_feedback_type arg)
  {
    msg_.stance_feedback = std::move(arg);
    return Init_MobilityCommandFeedbackOneOfFeedback_stop_feedback(msg_);
  }

private:
  ::bosdyn_msgs::msg::MobilityCommandFeedbackOneOfFeedback msg_;
};

class Init_MobilityCommandFeedbackOneOfFeedback_stand_feedback
{
public:
  explicit Init_MobilityCommandFeedbackOneOfFeedback_stand_feedback(::bosdyn_msgs::msg::MobilityCommandFeedbackOneOfFeedback & msg)
  : msg_(msg)
  {}
  Init_MobilityCommandFeedbackOneOfFeedback_stance_feedback stand_feedback(::bosdyn_msgs::msg::MobilityCommandFeedbackOneOfFeedback::_stand_feedback_type arg)
  {
    msg_.stand_feedback = std::move(arg);
    return Init_MobilityCommandFeedbackOneOfFeedback_stance_feedback(msg_);
  }

private:
  ::bosdyn_msgs::msg::MobilityCommandFeedbackOneOfFeedback msg_;
};

class Init_MobilityCommandFeedbackOneOfFeedback_sit_feedback
{
public:
  explicit Init_MobilityCommandFeedbackOneOfFeedback_sit_feedback(::bosdyn_msgs::msg::MobilityCommandFeedbackOneOfFeedback & msg)
  : msg_(msg)
  {}
  Init_MobilityCommandFeedbackOneOfFeedback_stand_feedback sit_feedback(::bosdyn_msgs::msg::MobilityCommandFeedbackOneOfFeedback::_sit_feedback_type arg)
  {
    msg_.sit_feedback = std::move(arg);
    return Init_MobilityCommandFeedbackOneOfFeedback_stand_feedback(msg_);
  }

private:
  ::bosdyn_msgs::msg::MobilityCommandFeedbackOneOfFeedback msg_;
};

class Init_MobilityCommandFeedbackOneOfFeedback_se2_velocity_feedback
{
public:
  explicit Init_MobilityCommandFeedbackOneOfFeedback_se2_velocity_feedback(::bosdyn_msgs::msg::MobilityCommandFeedbackOneOfFeedback & msg)
  : msg_(msg)
  {}
  Init_MobilityCommandFeedbackOneOfFeedback_sit_feedback se2_velocity_feedback(::bosdyn_msgs::msg::MobilityCommandFeedbackOneOfFeedback::_se2_velocity_feedback_type arg)
  {
    msg_.se2_velocity_feedback = std::move(arg);
    return Init_MobilityCommandFeedbackOneOfFeedback_sit_feedback(msg_);
  }

private:
  ::bosdyn_msgs::msg::MobilityCommandFeedbackOneOfFeedback msg_;
};

class Init_MobilityCommandFeedbackOneOfFeedback_se2_trajectory_feedback
{
public:
  Init_MobilityCommandFeedbackOneOfFeedback_se2_trajectory_feedback()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MobilityCommandFeedbackOneOfFeedback_se2_velocity_feedback se2_trajectory_feedback(::bosdyn_msgs::msg::MobilityCommandFeedbackOneOfFeedback::_se2_trajectory_feedback_type arg)
  {
    msg_.se2_trajectory_feedback = std::move(arg);
    return Init_MobilityCommandFeedbackOneOfFeedback_se2_velocity_feedback(msg_);
  }

private:
  ::bosdyn_msgs::msg::MobilityCommandFeedbackOneOfFeedback msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::MobilityCommandFeedbackOneOfFeedback>()
{
  return bosdyn_msgs::msg::builder::Init_MobilityCommandFeedbackOneOfFeedback_se2_trajectory_feedback();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__MOBILITY_COMMAND_FEEDBACK_ONE_OF_FEEDBACK__BUILDER_HPP_
