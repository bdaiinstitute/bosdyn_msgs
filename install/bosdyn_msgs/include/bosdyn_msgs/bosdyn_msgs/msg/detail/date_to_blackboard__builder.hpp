// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/DateToBlackboard.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DATE_TO_BLACKBOARD__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DATE_TO_BLACKBOARD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/date_to_blackboard__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_DateToBlackboard_key
{
public:
  Init_DateToBlackboard_key()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bosdyn_msgs::msg::DateToBlackboard key(::bosdyn_msgs::msg::DateToBlackboard::_key_type arg)
  {
    msg_.key = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::DateToBlackboard msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::DateToBlackboard>()
{
  return bosdyn_msgs::msg::builder::Init_DateToBlackboard_key();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DATE_TO_BLACKBOARD__BUILDER_HPP_
