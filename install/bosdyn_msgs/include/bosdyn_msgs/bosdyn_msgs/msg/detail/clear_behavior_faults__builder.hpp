// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ClearBehaviorFaults.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CLEAR_BEHAVIOR_FAULTS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CLEAR_BEHAVIOR_FAULTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/clear_behavior_faults__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ClearBehaviorFaults_cleared_cause_lease_timeout_blackboard_name
{
public:
  explicit Init_ClearBehaviorFaults_cleared_cause_lease_timeout_blackboard_name(::bosdyn_msgs::msg::ClearBehaviorFaults & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ClearBehaviorFaults cleared_cause_lease_timeout_blackboard_name(::bosdyn_msgs::msg::ClearBehaviorFaults::_cleared_cause_lease_timeout_blackboard_name_type arg)
  {
    msg_.cleared_cause_lease_timeout_blackboard_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ClearBehaviorFaults msg_;
};

class Init_ClearBehaviorFaults_cleared_cause_hardware_blackboard_name
{
public:
  explicit Init_ClearBehaviorFaults_cleared_cause_hardware_blackboard_name(::bosdyn_msgs::msg::ClearBehaviorFaults & msg)
  : msg_(msg)
  {}
  Init_ClearBehaviorFaults_cleared_cause_lease_timeout_blackboard_name cleared_cause_hardware_blackboard_name(::bosdyn_msgs::msg::ClearBehaviorFaults::_cleared_cause_hardware_blackboard_name_type arg)
  {
    msg_.cleared_cause_hardware_blackboard_name = std::move(arg);
    return Init_ClearBehaviorFaults_cleared_cause_lease_timeout_blackboard_name(msg_);
  }

private:
  ::bosdyn_msgs::msg::ClearBehaviorFaults msg_;
};

class Init_ClearBehaviorFaults_cleared_cause_fall_blackboard_name
{
public:
  explicit Init_ClearBehaviorFaults_cleared_cause_fall_blackboard_name(::bosdyn_msgs::msg::ClearBehaviorFaults & msg)
  : msg_(msg)
  {}
  Init_ClearBehaviorFaults_cleared_cause_hardware_blackboard_name cleared_cause_fall_blackboard_name(::bosdyn_msgs::msg::ClearBehaviorFaults::_cleared_cause_fall_blackboard_name_type arg)
  {
    msg_.cleared_cause_fall_blackboard_name = std::move(arg);
    return Init_ClearBehaviorFaults_cleared_cause_hardware_blackboard_name(msg_);
  }

private:
  ::bosdyn_msgs::msg::ClearBehaviorFaults msg_;
};

class Init_ClearBehaviorFaults_robot_state_blackboard_name
{
public:
  explicit Init_ClearBehaviorFaults_robot_state_blackboard_name(::bosdyn_msgs::msg::ClearBehaviorFaults & msg)
  : msg_(msg)
  {}
  Init_ClearBehaviorFaults_cleared_cause_fall_blackboard_name robot_state_blackboard_name(::bosdyn_msgs::msg::ClearBehaviorFaults::_robot_state_blackboard_name_type arg)
  {
    msg_.robot_state_blackboard_name = std::move(arg);
    return Init_ClearBehaviorFaults_cleared_cause_fall_blackboard_name(msg_);
  }

private:
  ::bosdyn_msgs::msg::ClearBehaviorFaults msg_;
};

class Init_ClearBehaviorFaults_host
{
public:
  explicit Init_ClearBehaviorFaults_host(::bosdyn_msgs::msg::ClearBehaviorFaults & msg)
  : msg_(msg)
  {}
  Init_ClearBehaviorFaults_robot_state_blackboard_name host(::bosdyn_msgs::msg::ClearBehaviorFaults::_host_type arg)
  {
    msg_.host = std::move(arg);
    return Init_ClearBehaviorFaults_robot_state_blackboard_name(msg_);
  }

private:
  ::bosdyn_msgs::msg::ClearBehaviorFaults msg_;
};

class Init_ClearBehaviorFaults_service_name
{
public:
  Init_ClearBehaviorFaults_service_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ClearBehaviorFaults_host service_name(::bosdyn_msgs::msg::ClearBehaviorFaults::_service_name_type arg)
  {
    msg_.service_name = std::move(arg);
    return Init_ClearBehaviorFaults_host(msg_);
  }

private:
  ::bosdyn_msgs::msg::ClearBehaviorFaults msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ClearBehaviorFaults>()
{
  return bosdyn_msgs::msg::builder::Init_ClearBehaviorFaults_service_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CLEAR_BEHAVIOR_FAULTS__BUILDER_HPP_
