// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/NodeOneOfType.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__NODE_ONE_OF_TYPE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__NODE_ONE_OF_TYPE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/node_one_of_type__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_NodeOneOfType_type_choice
{
public:
  explicit Init_NodeOneOfType_type_choice(::bosdyn_msgs::msg::NodeOneOfType & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::NodeOneOfType type_choice(::bosdyn_msgs::msg::NodeOneOfType::_type_choice_type arg)
  {
    msg_.type_choice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::NodeOneOfType msg_;
};

class Init_NodeOneOfType_node_reference
{
public:
  Init_NodeOneOfType_node_reference()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NodeOneOfType_type_choice node_reference(::bosdyn_msgs::msg::NodeOneOfType::_node_reference_type arg)
  {
    msg_.node_reference = std::move(arg);
    return Init_NodeOneOfType_type_choice(msg_);
  }

private:
  ::bosdyn_msgs::msg::NodeOneOfType msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::NodeOneOfType>()
{
  return bosdyn_msgs::msg::builder::Init_NodeOneOfType_node_reference();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__NODE_ONE_OF_TYPE__BUILDER_HPP_
