// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/DefineBlackboard.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DEFINE_BLACKBOARD__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DEFINE_BLACKBOARD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/define_blackboard__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_DefineBlackboard_child_is_set
{
public:
  explicit Init_DefineBlackboard_child_is_set(::bosdyn_msgs::msg::DefineBlackboard & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::DefineBlackboard child_is_set(::bosdyn_msgs::msg::DefineBlackboard::_child_is_set_type arg)
  {
    msg_.child_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::DefineBlackboard msg_;
};

class Init_DefineBlackboard_child
{
public:
  explicit Init_DefineBlackboard_child(::bosdyn_msgs::msg::DefineBlackboard & msg)
  : msg_(msg)
  {}
  Init_DefineBlackboard_child_is_set child(::bosdyn_msgs::msg::DefineBlackboard::_child_type arg)
  {
    msg_.child = std::move(arg);
    return Init_DefineBlackboard_child_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::DefineBlackboard msg_;
};

class Init_DefineBlackboard_blackboard_variables
{
public:
  Init_DefineBlackboard_blackboard_variables()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DefineBlackboard_child blackboard_variables(::bosdyn_msgs::msg::DefineBlackboard::_blackboard_variables_type arg)
  {
    msg_.blackboard_variables = std::move(arg);
    return Init_DefineBlackboard_child(msg_);
  }

private:
  ::bosdyn_msgs::msg::DefineBlackboard msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::DefineBlackboard>()
{
  return bosdyn_msgs::msg::builder::Init_DefineBlackboard_blackboard_variables();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DEFINE_BLACKBOARD__BUILDER_HPP_
