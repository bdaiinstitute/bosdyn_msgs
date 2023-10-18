// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/FailureBehaviorOneOfDefaultBehavior.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__FAILURE_BEHAVIOR_ONE_OF_DEFAULT_BEHAVIOR__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__FAILURE_BEHAVIOR_ONE_OF_DEFAULT_BEHAVIOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/failure_behavior_one_of_default_behavior__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_FailureBehaviorOneOfDefaultBehavior_default_behavior_choice
{
public:
  explicit Init_FailureBehaviorOneOfDefaultBehavior_default_behavior_choice(::bosdyn_msgs::msg::FailureBehaviorOneOfDefaultBehavior & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::FailureBehaviorOneOfDefaultBehavior default_behavior_choice(::bosdyn_msgs::msg::FailureBehaviorOneOfDefaultBehavior::_default_behavior_choice_type arg)
  {
    msg_.default_behavior_choice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::FailureBehaviorOneOfDefaultBehavior msg_;
};

class Init_FailureBehaviorOneOfDefaultBehavior_return_to_start_and_terminate
{
public:
  explicit Init_FailureBehaviorOneOfDefaultBehavior_return_to_start_and_terminate(::bosdyn_msgs::msg::FailureBehaviorOneOfDefaultBehavior & msg)
  : msg_(msg)
  {}
  Init_FailureBehaviorOneOfDefaultBehavior_default_behavior_choice return_to_start_and_terminate(::bosdyn_msgs::msg::FailureBehaviorOneOfDefaultBehavior::_return_to_start_and_terminate_type arg)
  {
    msg_.return_to_start_and_terminate = std::move(arg);
    return Init_FailureBehaviorOneOfDefaultBehavior_default_behavior_choice(msg_);
  }

private:
  ::bosdyn_msgs::msg::FailureBehaviorOneOfDefaultBehavior msg_;
};

class Init_FailureBehaviorOneOfDefaultBehavior_return_to_start_and_try_again_later
{
public:
  explicit Init_FailureBehaviorOneOfDefaultBehavior_return_to_start_and_try_again_later(::bosdyn_msgs::msg::FailureBehaviorOneOfDefaultBehavior & msg)
  : msg_(msg)
  {}
  Init_FailureBehaviorOneOfDefaultBehavior_return_to_start_and_terminate return_to_start_and_try_again_later(::bosdyn_msgs::msg::FailureBehaviorOneOfDefaultBehavior::_return_to_start_and_try_again_later_type arg)
  {
    msg_.return_to_start_and_try_again_later = std::move(arg);
    return Init_FailureBehaviorOneOfDefaultBehavior_return_to_start_and_terminate(msg_);
  }

private:
  ::bosdyn_msgs::msg::FailureBehaviorOneOfDefaultBehavior msg_;
};

class Init_FailureBehaviorOneOfDefaultBehavior_proceed_if_able
{
public:
  explicit Init_FailureBehaviorOneOfDefaultBehavior_proceed_if_able(::bosdyn_msgs::msg::FailureBehaviorOneOfDefaultBehavior & msg)
  : msg_(msg)
  {}
  Init_FailureBehaviorOneOfDefaultBehavior_return_to_start_and_try_again_later proceed_if_able(::bosdyn_msgs::msg::FailureBehaviorOneOfDefaultBehavior::_proceed_if_able_type arg)
  {
    msg_.proceed_if_able = std::move(arg);
    return Init_FailureBehaviorOneOfDefaultBehavior_return_to_start_and_try_again_later(msg_);
  }

private:
  ::bosdyn_msgs::msg::FailureBehaviorOneOfDefaultBehavior msg_;
};

class Init_FailureBehaviorOneOfDefaultBehavior_safe_power_off
{
public:
  Init_FailureBehaviorOneOfDefaultBehavior_safe_power_off()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FailureBehaviorOneOfDefaultBehavior_proceed_if_able safe_power_off(::bosdyn_msgs::msg::FailureBehaviorOneOfDefaultBehavior::_safe_power_off_type arg)
  {
    msg_.safe_power_off = std::move(arg);
    return Init_FailureBehaviorOneOfDefaultBehavior_proceed_if_able(msg_);
  }

private:
  ::bosdyn_msgs::msg::FailureBehaviorOneOfDefaultBehavior msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::FailureBehaviorOneOfDefaultBehavior>()
{
  return bosdyn_msgs::msg::builder::Init_FailureBehaviorOneOfDefaultBehavior_safe_power_off();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__FAILURE_BEHAVIOR_ONE_OF_DEFAULT_BEHAVIOR__BUILDER_HPP_
