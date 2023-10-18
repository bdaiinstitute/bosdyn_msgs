// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/FailureBehaviorReturnToStartAndTryAgainLater.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__FAILURE_BEHAVIOR_RETURN_TO_START_AND_TRY_AGAIN_LATER__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__FAILURE_BEHAVIOR_RETURN_TO_START_AND_TRY_AGAIN_LATER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/failure_behavior_return_to_start_and_try_again_later__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_FailureBehaviorReturnToStartAndTryAgainLater_try_again_delay_is_set
{
public:
  explicit Init_FailureBehaviorReturnToStartAndTryAgainLater_try_again_delay_is_set(::bosdyn_msgs::msg::FailureBehaviorReturnToStartAndTryAgainLater & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::FailureBehaviorReturnToStartAndTryAgainLater try_again_delay_is_set(::bosdyn_msgs::msg::FailureBehaviorReturnToStartAndTryAgainLater::_try_again_delay_is_set_type arg)
  {
    msg_.try_again_delay_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::FailureBehaviorReturnToStartAndTryAgainLater msg_;
};

class Init_FailureBehaviorReturnToStartAndTryAgainLater_try_again_delay
{
public:
  Init_FailureBehaviorReturnToStartAndTryAgainLater_try_again_delay()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FailureBehaviorReturnToStartAndTryAgainLater_try_again_delay_is_set try_again_delay(::bosdyn_msgs::msg::FailureBehaviorReturnToStartAndTryAgainLater::_try_again_delay_type arg)
  {
    msg_.try_again_delay = std::move(arg);
    return Init_FailureBehaviorReturnToStartAndTryAgainLater_try_again_delay_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::FailureBehaviorReturnToStartAndTryAgainLater msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::FailureBehaviorReturnToStartAndTryAgainLater>()
{
  return bosdyn_msgs::msg::builder::Init_FailureBehaviorReturnToStartAndTryAgainLater_try_again_delay();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__FAILURE_BEHAVIOR_RETURN_TO_START_AND_TRY_AGAIN_LATER__BUILDER_HPP_
