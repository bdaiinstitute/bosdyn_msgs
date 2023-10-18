// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/BehaviorFaultState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BEHAVIOR_FAULT_STATE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__BEHAVIOR_FAULT_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/behavior_fault_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_BehaviorFaultState_faults
{
public:
  Init_BehaviorFaultState_faults()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bosdyn_msgs::msg::BehaviorFaultState faults(::bosdyn_msgs::msg::BehaviorFaultState::_faults_type arg)
  {
    msg_.faults = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::BehaviorFaultState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::BehaviorFaultState>()
{
  return bosdyn_msgs::msg::builder::Init_BehaviorFaultState_faults();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__BEHAVIOR_FAULT_STATE__BUILDER_HPP_
