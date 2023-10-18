// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/SynchronizedCommandFeedback.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SYNCHRONIZED_COMMAND_FEEDBACK__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SYNCHRONIZED_COMMAND_FEEDBACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/synchronized_command_feedback__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_SynchronizedCommandFeedback_gripper_command_feedback_is_set
{
public:
  explicit Init_SynchronizedCommandFeedback_gripper_command_feedback_is_set(::bosdyn_msgs::msg::SynchronizedCommandFeedback & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::SynchronizedCommandFeedback gripper_command_feedback_is_set(::bosdyn_msgs::msg::SynchronizedCommandFeedback::_gripper_command_feedback_is_set_type arg)
  {
    msg_.gripper_command_feedback_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::SynchronizedCommandFeedback msg_;
};

class Init_SynchronizedCommandFeedback_gripper_command_feedback
{
public:
  explicit Init_SynchronizedCommandFeedback_gripper_command_feedback(::bosdyn_msgs::msg::SynchronizedCommandFeedback & msg)
  : msg_(msg)
  {}
  Init_SynchronizedCommandFeedback_gripper_command_feedback_is_set gripper_command_feedback(::bosdyn_msgs::msg::SynchronizedCommandFeedback::_gripper_command_feedback_type arg)
  {
    msg_.gripper_command_feedback = std::move(arg);
    return Init_SynchronizedCommandFeedback_gripper_command_feedback_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SynchronizedCommandFeedback msg_;
};

class Init_SynchronizedCommandFeedback_mobility_command_feedback_is_set
{
public:
  explicit Init_SynchronizedCommandFeedback_mobility_command_feedback_is_set(::bosdyn_msgs::msg::SynchronizedCommandFeedback & msg)
  : msg_(msg)
  {}
  Init_SynchronizedCommandFeedback_gripper_command_feedback mobility_command_feedback_is_set(::bosdyn_msgs::msg::SynchronizedCommandFeedback::_mobility_command_feedback_is_set_type arg)
  {
    msg_.mobility_command_feedback_is_set = std::move(arg);
    return Init_SynchronizedCommandFeedback_gripper_command_feedback(msg_);
  }

private:
  ::bosdyn_msgs::msg::SynchronizedCommandFeedback msg_;
};

class Init_SynchronizedCommandFeedback_mobility_command_feedback
{
public:
  explicit Init_SynchronizedCommandFeedback_mobility_command_feedback(::bosdyn_msgs::msg::SynchronizedCommandFeedback & msg)
  : msg_(msg)
  {}
  Init_SynchronizedCommandFeedback_mobility_command_feedback_is_set mobility_command_feedback(::bosdyn_msgs::msg::SynchronizedCommandFeedback::_mobility_command_feedback_type arg)
  {
    msg_.mobility_command_feedback = std::move(arg);
    return Init_SynchronizedCommandFeedback_mobility_command_feedback_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SynchronizedCommandFeedback msg_;
};

class Init_SynchronizedCommandFeedback_arm_command_feedback_is_set
{
public:
  explicit Init_SynchronizedCommandFeedback_arm_command_feedback_is_set(::bosdyn_msgs::msg::SynchronizedCommandFeedback & msg)
  : msg_(msg)
  {}
  Init_SynchronizedCommandFeedback_mobility_command_feedback arm_command_feedback_is_set(::bosdyn_msgs::msg::SynchronizedCommandFeedback::_arm_command_feedback_is_set_type arg)
  {
    msg_.arm_command_feedback_is_set = std::move(arg);
    return Init_SynchronizedCommandFeedback_mobility_command_feedback(msg_);
  }

private:
  ::bosdyn_msgs::msg::SynchronizedCommandFeedback msg_;
};

class Init_SynchronizedCommandFeedback_arm_command_feedback
{
public:
  Init_SynchronizedCommandFeedback_arm_command_feedback()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SynchronizedCommandFeedback_arm_command_feedback_is_set arm_command_feedback(::bosdyn_msgs::msg::SynchronizedCommandFeedback::_arm_command_feedback_type arg)
  {
    msg_.arm_command_feedback = std::move(arg);
    return Init_SynchronizedCommandFeedback_arm_command_feedback_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SynchronizedCommandFeedback msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::SynchronizedCommandFeedback>()
{
  return bosdyn_msgs::msg::builder::Init_SynchronizedCommandFeedback_arm_command_feedback();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SYNCHRONIZED_COMMAND_FEEDBACK__BUILDER_HPP_
