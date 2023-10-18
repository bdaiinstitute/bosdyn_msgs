// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ServiceFaultState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SERVICE_FAULT_STATE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SERVICE_FAULT_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/service_fault_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ServiceFaultState_aggregated
{
public:
  explicit Init_ServiceFaultState_aggregated(::bosdyn_msgs::msg::ServiceFaultState & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ServiceFaultState aggregated(::bosdyn_msgs::msg::ServiceFaultState::_aggregated_type arg)
  {
    msg_.aggregated = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ServiceFaultState msg_;
};

class Init_ServiceFaultState_historical_faults
{
public:
  explicit Init_ServiceFaultState_historical_faults(::bosdyn_msgs::msg::ServiceFaultState & msg)
  : msg_(msg)
  {}
  Init_ServiceFaultState_aggregated historical_faults(::bosdyn_msgs::msg::ServiceFaultState::_historical_faults_type arg)
  {
    msg_.historical_faults = std::move(arg);
    return Init_ServiceFaultState_aggregated(msg_);
  }

private:
  ::bosdyn_msgs::msg::ServiceFaultState msg_;
};

class Init_ServiceFaultState_faults
{
public:
  Init_ServiceFaultState_faults()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ServiceFaultState_historical_faults faults(::bosdyn_msgs::msg::ServiceFaultState::_faults_type arg)
  {
    msg_.faults = std::move(arg);
    return Init_ServiceFaultState_historical_faults(msg_);
  }

private:
  ::bosdyn_msgs::msg::ServiceFaultState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ServiceFaultState>()
{
  return bosdyn_msgs::msg::builder::Init_ServiceFaultState_faults();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SERVICE_FAULT_STATE__BUILDER_HPP_
