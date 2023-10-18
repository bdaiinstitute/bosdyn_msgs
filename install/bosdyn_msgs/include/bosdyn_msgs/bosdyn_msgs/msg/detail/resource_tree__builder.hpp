// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ResourceTree.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__RESOURCE_TREE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__RESOURCE_TREE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/resource_tree__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ResourceTree_sub_resources
{
public:
  explicit Init_ResourceTree_sub_resources(::bosdyn_msgs::msg::ResourceTree & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ResourceTree sub_resources(::bosdyn_msgs::msg::ResourceTree::_sub_resources_type arg)
  {
    msg_.sub_resources = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ResourceTree msg_;
};

class Init_ResourceTree_resource
{
public:
  Init_ResourceTree_resource()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ResourceTree_sub_resources resource(::bosdyn_msgs::msg::ResourceTree::_resource_type arg)
  {
    msg_.resource = std::move(arg);
    return Init_ResourceTree_sub_resources(msg_);
  }

private:
  ::bosdyn_msgs::msg::ResourceTree msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ResourceTree>()
{
  return bosdyn_msgs::msg::builder::Init_ResourceTree_resource();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__RESOURCE_TREE__BUILDER_HPP_
