// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/MessageTypeDescriptor.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MESSAGE_TYPE_DESCRIPTOR__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__MESSAGE_TYPE_DESCRIPTOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/message_type_descriptor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_MessageTypeDescriptor_is_metadata
{
public:
  explicit Init_MessageTypeDescriptor_is_metadata(::bosdyn_msgs::msg::MessageTypeDescriptor & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::MessageTypeDescriptor is_metadata(::bosdyn_msgs::msg::MessageTypeDescriptor::_is_metadata_type arg)
  {
    msg_.is_metadata = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::MessageTypeDescriptor msg_;
};

class Init_MessageTypeDescriptor_type_name
{
public:
  explicit Init_MessageTypeDescriptor_type_name(::bosdyn_msgs::msg::MessageTypeDescriptor & msg)
  : msg_(msg)
  {}
  Init_MessageTypeDescriptor_is_metadata type_name(::bosdyn_msgs::msg::MessageTypeDescriptor::_type_name_type arg)
  {
    msg_.type_name = std::move(arg);
    return Init_MessageTypeDescriptor_is_metadata(msg_);
  }

private:
  ::bosdyn_msgs::msg::MessageTypeDescriptor msg_;
};

class Init_MessageTypeDescriptor_content_type
{
public:
  Init_MessageTypeDescriptor_content_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MessageTypeDescriptor_type_name content_type(::bosdyn_msgs::msg::MessageTypeDescriptor::_content_type_type arg)
  {
    msg_.content_type = std::move(arg);
    return Init_MessageTypeDescriptor_type_name(msg_);
  }

private:
  ::bosdyn_msgs::msg::MessageTypeDescriptor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::MessageTypeDescriptor>()
{
  return bosdyn_msgs::msg::builder::Init_MessageTypeDescriptor_content_type();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__MESSAGE_TYPE_DESCRIPTOR__BUILDER_HPP_
