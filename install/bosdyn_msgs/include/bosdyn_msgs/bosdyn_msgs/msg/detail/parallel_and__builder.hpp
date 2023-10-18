// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ParallelAnd.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PARALLEL_AND__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PARALLEL_AND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/parallel_and__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ParallelAnd_finish_every_node
{
public:
  explicit Init_ParallelAnd_finish_every_node(::bosdyn_msgs::msg::ParallelAnd & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ParallelAnd finish_every_node(::bosdyn_msgs::msg::ParallelAnd::_finish_every_node_type arg)
  {
    msg_.finish_every_node = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ParallelAnd msg_;
};

class Init_ParallelAnd_children
{
public:
  Init_ParallelAnd_children()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ParallelAnd_finish_every_node children(::bosdyn_msgs::msg::ParallelAnd::_children_type arg)
  {
    msg_.children = std::move(arg);
    return Init_ParallelAnd_finish_every_node(msg_);
  }

private:
  ::bosdyn_msgs::msg::ParallelAnd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ParallelAnd>()
{
  return bosdyn_msgs::msg::builder::Init_ParallelAnd_children();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PARALLEL_AND__BUILDER_HPP_
