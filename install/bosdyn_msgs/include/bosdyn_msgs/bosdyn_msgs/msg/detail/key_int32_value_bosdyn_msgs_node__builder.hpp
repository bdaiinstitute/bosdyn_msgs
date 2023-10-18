// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/KeyInt32ValueBosdynMsgsNode.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__KEY_INT32_VALUE_BOSDYN_MSGS_NODE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__KEY_INT32_VALUE_BOSDYN_MSGS_NODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/key_int32_value_bosdyn_msgs_node__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_KeyInt32ValueBosdynMsgsNode_value
{
public:
  explicit Init_KeyInt32ValueBosdynMsgsNode_value(::bosdyn_msgs::msg::KeyInt32ValueBosdynMsgsNode & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::KeyInt32ValueBosdynMsgsNode value(::bosdyn_msgs::msg::KeyInt32ValueBosdynMsgsNode::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::KeyInt32ValueBosdynMsgsNode msg_;
};

class Init_KeyInt32ValueBosdynMsgsNode_key
{
public:
  Init_KeyInt32ValueBosdynMsgsNode_key()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_KeyInt32ValueBosdynMsgsNode_value key(::bosdyn_msgs::msg::KeyInt32ValueBosdynMsgsNode::_key_type arg)
  {
    msg_.key = std::move(arg);
    return Init_KeyInt32ValueBosdynMsgsNode_value(msg_);
  }

private:
  ::bosdyn_msgs::msg::KeyInt32ValueBosdynMsgsNode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::KeyInt32ValueBosdynMsgsNode>()
{
  return bosdyn_msgs::msg::builder::Init_KeyInt32ValueBosdynMsgsNode_key();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__KEY_INT32_VALUE_BOSDYN_MSGS_NODE__BUILDER_HPP_
