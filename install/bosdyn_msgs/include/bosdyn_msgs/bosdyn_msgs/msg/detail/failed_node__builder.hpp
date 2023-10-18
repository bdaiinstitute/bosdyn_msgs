// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/FailedNode.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__FAILED_NODE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__FAILED_NODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/failed_node__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_FailedNode_impl_typename
{
public:
  explicit Init_FailedNode_impl_typename(::bosdyn_msgs::msg::FailedNode & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::FailedNode impl_typename(::bosdyn_msgs::msg::FailedNode::_impl_typename_type arg)
  {
    msg_.impl_typename = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::FailedNode msg_;
};

class Init_FailedNode_error
{
public:
  explicit Init_FailedNode_error(::bosdyn_msgs::msg::FailedNode & msg)
  : msg_(msg)
  {}
  Init_FailedNode_impl_typename error(::bosdyn_msgs::msg::FailedNode::_error_type arg)
  {
    msg_.error = std::move(arg);
    return Init_FailedNode_impl_typename(msg_);
  }

private:
  ::bosdyn_msgs::msg::FailedNode msg_;
};

class Init_FailedNode_name
{
public:
  Init_FailedNode_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FailedNode_error name(::bosdyn_msgs::msg::FailedNode::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_FailedNode_error(msg_);
  }

private:
  ::bosdyn_msgs::msg::FailedNode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::FailedNode>()
{
  return bosdyn_msgs::msg::builder::Init_FailedNode_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__FAILED_NODE__BUILDER_HPP_
