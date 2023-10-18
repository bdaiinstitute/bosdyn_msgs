// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/DescriptorBlock.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DESCRIPTOR_BLOCK__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DESCRIPTOR_BLOCK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/descriptor_block__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_DescriptorBlock_descriptor_type
{
public:
  Init_DescriptorBlock_descriptor_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bosdyn_msgs::msg::DescriptorBlock descriptor_type(::bosdyn_msgs::msg::DescriptorBlock::_descriptor_type_type arg)
  {
    msg_.descriptor_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::DescriptorBlock msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::DescriptorBlock>()
{
  return bosdyn_msgs::msg::builder::Init_DescriptorBlock_descriptor_type();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DESCRIPTOR_BLOCK__BUILDER_HPP_
