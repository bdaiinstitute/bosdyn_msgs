// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/Condition.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CONDITION__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CONDITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/condition__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_Condition_handle_staleness
{
public:
  explicit Init_Condition_handle_staleness(::bosdyn_msgs::msg::Condition & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::Condition handle_staleness(::bosdyn_msgs::msg::Condition::_handle_staleness_type arg)
  {
    msg_.handle_staleness = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::Condition msg_;
};

class Init_Condition_operation
{
public:
  explicit Init_Condition_operation(::bosdyn_msgs::msg::Condition & msg)
  : msg_(msg)
  {}
  Init_Condition_handle_staleness operation(::bosdyn_msgs::msg::Condition::_operation_type arg)
  {
    msg_.operation = std::move(arg);
    return Init_Condition_handle_staleness(msg_);
  }

private:
  ::bosdyn_msgs::msg::Condition msg_;
};

class Init_Condition_rhs_is_set
{
public:
  explicit Init_Condition_rhs_is_set(::bosdyn_msgs::msg::Condition & msg)
  : msg_(msg)
  {}
  Init_Condition_operation rhs_is_set(::bosdyn_msgs::msg::Condition::_rhs_is_set_type arg)
  {
    msg_.rhs_is_set = std::move(arg);
    return Init_Condition_operation(msg_);
  }

private:
  ::bosdyn_msgs::msg::Condition msg_;
};

class Init_Condition_rhs
{
public:
  explicit Init_Condition_rhs(::bosdyn_msgs::msg::Condition & msg)
  : msg_(msg)
  {}
  Init_Condition_rhs_is_set rhs(::bosdyn_msgs::msg::Condition::_rhs_type arg)
  {
    msg_.rhs = std::move(arg);
    return Init_Condition_rhs_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Condition msg_;
};

class Init_Condition_lhs_is_set
{
public:
  explicit Init_Condition_lhs_is_set(::bosdyn_msgs::msg::Condition & msg)
  : msg_(msg)
  {}
  Init_Condition_rhs lhs_is_set(::bosdyn_msgs::msg::Condition::_lhs_is_set_type arg)
  {
    msg_.lhs_is_set = std::move(arg);
    return Init_Condition_rhs(msg_);
  }

private:
  ::bosdyn_msgs::msg::Condition msg_;
};

class Init_Condition_lhs
{
public:
  Init_Condition_lhs()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Condition_lhs_is_set lhs(::bosdyn_msgs::msg::Condition::_lhs_type arg)
  {
    msg_.lhs = std::move(arg);
    return Init_Condition_lhs_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Condition msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::Condition>()
{
  return bosdyn_msgs::msg::builder::Init_Condition_lhs();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CONDITION__BUILDER_HPP_
