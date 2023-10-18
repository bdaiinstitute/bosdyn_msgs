// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/BehaviorFault.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BEHAVIOR_FAULT__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__BEHAVIOR_FAULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/behavior_fault__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_BehaviorFault_status
{
public:
  explicit Init_BehaviorFault_status(::bosdyn_msgs::msg::BehaviorFault & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::BehaviorFault status(::bosdyn_msgs::msg::BehaviorFault::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::BehaviorFault msg_;
};

class Init_BehaviorFault_cause
{
public:
  explicit Init_BehaviorFault_cause(::bosdyn_msgs::msg::BehaviorFault & msg)
  : msg_(msg)
  {}
  Init_BehaviorFault_status cause(::bosdyn_msgs::msg::BehaviorFault::_cause_type arg)
  {
    msg_.cause = std::move(arg);
    return Init_BehaviorFault_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::BehaviorFault msg_;
};

class Init_BehaviorFault_onset_timestamp_is_set
{
public:
  explicit Init_BehaviorFault_onset_timestamp_is_set(::bosdyn_msgs::msg::BehaviorFault & msg)
  : msg_(msg)
  {}
  Init_BehaviorFault_cause onset_timestamp_is_set(::bosdyn_msgs::msg::BehaviorFault::_onset_timestamp_is_set_type arg)
  {
    msg_.onset_timestamp_is_set = std::move(arg);
    return Init_BehaviorFault_cause(msg_);
  }

private:
  ::bosdyn_msgs::msg::BehaviorFault msg_;
};

class Init_BehaviorFault_onset_timestamp
{
public:
  explicit Init_BehaviorFault_onset_timestamp(::bosdyn_msgs::msg::BehaviorFault & msg)
  : msg_(msg)
  {}
  Init_BehaviorFault_onset_timestamp_is_set onset_timestamp(::bosdyn_msgs::msg::BehaviorFault::_onset_timestamp_type arg)
  {
    msg_.onset_timestamp = std::move(arg);
    return Init_BehaviorFault_onset_timestamp_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::BehaviorFault msg_;
};

class Init_BehaviorFault_behavior_fault_id
{
public:
  Init_BehaviorFault_behavior_fault_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BehaviorFault_onset_timestamp behavior_fault_id(::bosdyn_msgs::msg::BehaviorFault::_behavior_fault_id_type arg)
  {
    msg_.behavior_fault_id = std::move(arg);
    return Init_BehaviorFault_onset_timestamp(msg_);
  }

private:
  ::bosdyn_msgs::msg::BehaviorFault msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::BehaviorFault>()
{
  return bosdyn_msgs::msg::builder::Init_BehaviorFault_behavior_fault_id();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__BEHAVIOR_FAULT__BUILDER_HPP_
