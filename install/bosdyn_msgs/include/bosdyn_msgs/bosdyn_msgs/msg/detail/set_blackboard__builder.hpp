// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/SetBlackboard.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SET_BLACKBOARD__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SET_BLACKBOARD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/set_blackboard__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_SetBlackboard_blackboard_variables
{
public:
  Init_SetBlackboard_blackboard_variables()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bosdyn_msgs::msg::SetBlackboard blackboard_variables(::bosdyn_msgs::msg::SetBlackboard::_blackboard_variables_type arg)
  {
    msg_.blackboard_variables = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetBlackboard msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::SetBlackboard>()
{
  return bosdyn_msgs::msg::builder::Init_SetBlackboard_blackboard_variables();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SET_BLACKBOARD__BUILDER_HPP_
