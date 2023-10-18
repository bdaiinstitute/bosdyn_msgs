// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/FormatBlackboard.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__FORMAT_BLACKBOARD__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__FORMAT_BLACKBOARD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/format_blackboard__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_FormatBlackboard_format
{
public:
  explicit Init_FormatBlackboard_format(::bosdyn_msgs::msg::FormatBlackboard & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::FormatBlackboard format(::bosdyn_msgs::msg::FormatBlackboard::_format_type arg)
  {
    msg_.format = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::FormatBlackboard msg_;
};

class Init_FormatBlackboard_key
{
public:
  Init_FormatBlackboard_key()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FormatBlackboard_format key(::bosdyn_msgs::msg::FormatBlackboard::_key_type arg)
  {
    msg_.key = std::move(arg);
    return Init_FormatBlackboard_format(msg_);
  }

private:
  ::bosdyn_msgs::msg::FormatBlackboard msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::FormatBlackboard>()
{
  return bosdyn_msgs::msg::builder::Init_FormatBlackboard_key();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__FORMAT_BLACKBOARD__BUILDER_HPP_
