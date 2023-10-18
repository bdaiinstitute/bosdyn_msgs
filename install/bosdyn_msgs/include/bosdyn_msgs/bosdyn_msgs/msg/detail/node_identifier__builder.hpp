// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/NodeIdentifier.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__NODE_IDENTIFIER__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__NODE_IDENTIFIER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/node_identifier__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_NodeIdentifier_user_data_id
{
public:
  explicit Init_NodeIdentifier_user_data_id(::bosdyn_msgs::msg::NodeIdentifier & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::NodeIdentifier user_data_id(::bosdyn_msgs::msg::NodeIdentifier::_user_data_id_type arg)
  {
    msg_.user_data_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::NodeIdentifier msg_;
};

class Init_NodeIdentifier_node_id
{
public:
  Init_NodeIdentifier_node_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NodeIdentifier_user_data_id node_id(::bosdyn_msgs::msg::NodeIdentifier::_node_id_type arg)
  {
    msg_.node_id = std::move(arg);
    return Init_NodeIdentifier_user_data_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::NodeIdentifier msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::NodeIdentifier>()
{
  return bosdyn_msgs::msg::builder::Init_NodeIdentifier_node_id();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__NODE_IDENTIFIER__BUILDER_HPP_
