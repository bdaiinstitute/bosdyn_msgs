// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/FailureBehaviorSafePowerOff.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__FAILURE_BEHAVIOR_SAFE_POWER_OFF__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__FAILURE_BEHAVIOR_SAFE_POWER_OFF__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/failure_behavior_safe_power_off__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_FailureBehaviorSafePowerOff_request_is_set
{
public:
  explicit Init_FailureBehaviorSafePowerOff_request_is_set(::bosdyn_msgs::msg::FailureBehaviorSafePowerOff & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::FailureBehaviorSafePowerOff request_is_set(::bosdyn_msgs::msg::FailureBehaviorSafePowerOff::_request_is_set_type arg)
  {
    msg_.request_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::FailureBehaviorSafePowerOff msg_;
};

class Init_FailureBehaviorSafePowerOff_request
{
public:
  Init_FailureBehaviorSafePowerOff_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FailureBehaviorSafePowerOff_request_is_set request(::bosdyn_msgs::msg::FailureBehaviorSafePowerOff::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_FailureBehaviorSafePowerOff_request_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::FailureBehaviorSafePowerOff msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::FailureBehaviorSafePowerOff>()
{
  return bosdyn_msgs::msg::builder::Init_FailureBehaviorSafePowerOff_request();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__FAILURE_BEHAVIOR_SAFE_POWER_OFF__BUILDER_HPP_
