// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/FailureBehavior.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__FAILURE_BEHAVIOR__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__FAILURE_BEHAVIOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/failure_behavior__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_FailureBehavior_default_behavior
{
public:
  explicit Init_FailureBehavior_default_behavior(::bosdyn_msgs::msg::FailureBehavior & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::FailureBehavior default_behavior(::bosdyn_msgs::msg::FailureBehavior::_default_behavior_type arg)
  {
    msg_.default_behavior = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::FailureBehavior msg_;
};

class Init_FailureBehavior_prompt_duration_is_set
{
public:
  explicit Init_FailureBehavior_prompt_duration_is_set(::bosdyn_msgs::msg::FailureBehavior & msg)
  : msg_(msg)
  {}
  Init_FailureBehavior_default_behavior prompt_duration_is_set(::bosdyn_msgs::msg::FailureBehavior::_prompt_duration_is_set_type arg)
  {
    msg_.prompt_duration_is_set = std::move(arg);
    return Init_FailureBehavior_default_behavior(msg_);
  }

private:
  ::bosdyn_msgs::msg::FailureBehavior msg_;
};

class Init_FailureBehavior_prompt_duration
{
public:
  explicit Init_FailureBehavior_prompt_duration(::bosdyn_msgs::msg::FailureBehavior & msg)
  : msg_(msg)
  {}
  Init_FailureBehavior_prompt_duration_is_set prompt_duration(::bosdyn_msgs::msg::FailureBehavior::_prompt_duration_type arg)
  {
    msg_.prompt_duration = std::move(arg);
    return Init_FailureBehavior_prompt_duration_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::FailureBehavior msg_;
};

class Init_FailureBehavior_retry_count
{
public:
  Init_FailureBehavior_retry_count()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FailureBehavior_prompt_duration retry_count(::bosdyn_msgs::msg::FailureBehavior::_retry_count_type arg)
  {
    msg_.retry_count = std::move(arg);
    return Init_FailureBehavior_prompt_duration(msg_);
  }

private:
  ::bosdyn_msgs::msg::FailureBehavior msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::FailureBehavior>()
{
  return bosdyn_msgs::msg::builder::Init_FailureBehavior_retry_count();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__FAILURE_BEHAVIOR__BUILDER_HPP_
