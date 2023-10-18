// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/Sequence.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SEQUENCE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SEQUENCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/sequence__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_Sequence_children
{
public:
  explicit Init_Sequence_children(::bosdyn_msgs::msg::Sequence & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::Sequence children(::bosdyn_msgs::msg::Sequence::_children_type arg)
  {
    msg_.children = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::Sequence msg_;
};

class Init_Sequence_always_restart
{
public:
  Init_Sequence_always_restart()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Sequence_children always_restart(::bosdyn_msgs::msg::Sequence::_always_restart_type arg)
  {
    msg_.always_restart = std::move(arg);
    return Init_Sequence_children(msg_);
  }

private:
  ::bosdyn_msgs::msg::Sequence msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::Sequence>()
{
  return bosdyn_msgs::msg::builder::Init_Sequence_always_restart();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SEQUENCE__BUILDER_HPP_
