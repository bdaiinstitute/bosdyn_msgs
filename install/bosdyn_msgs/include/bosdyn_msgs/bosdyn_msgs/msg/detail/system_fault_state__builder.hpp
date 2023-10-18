// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/SystemFaultState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SYSTEM_FAULT_STATE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SYSTEM_FAULT_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/system_fault_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_SystemFaultState_aggregated
{
public:
  explicit Init_SystemFaultState_aggregated(::bosdyn_msgs::msg::SystemFaultState & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::SystemFaultState aggregated(::bosdyn_msgs::msg::SystemFaultState::_aggregated_type arg)
  {
    msg_.aggregated = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::SystemFaultState msg_;
};

class Init_SystemFaultState_historical_faults
{
public:
  explicit Init_SystemFaultState_historical_faults(::bosdyn_msgs::msg::SystemFaultState & msg)
  : msg_(msg)
  {}
  Init_SystemFaultState_aggregated historical_faults(::bosdyn_msgs::msg::SystemFaultState::_historical_faults_type arg)
  {
    msg_.historical_faults = std::move(arg);
    return Init_SystemFaultState_aggregated(msg_);
  }

private:
  ::bosdyn_msgs::msg::SystemFaultState msg_;
};

class Init_SystemFaultState_faults
{
public:
  Init_SystemFaultState_faults()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SystemFaultState_historical_faults faults(::bosdyn_msgs::msg::SystemFaultState::_faults_type arg)
  {
    msg_.faults = std::move(arg);
    return Init_SystemFaultState_historical_faults(msg_);
  }

private:
  ::bosdyn_msgs::msg::SystemFaultState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::SystemFaultState>()
{
  return bosdyn_msgs::msg::builder::Init_SystemFaultState_faults();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SYSTEM_FAULT_STATE__BUILDER_HPP_
