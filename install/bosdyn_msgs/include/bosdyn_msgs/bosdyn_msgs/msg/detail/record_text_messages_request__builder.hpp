// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/RecordTextMessagesRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__RECORD_TEXT_MESSAGES_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__RECORD_TEXT_MESSAGES_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/record_text_messages_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_RecordTextMessagesRequest_text_messages
{
public:
  explicit Init_RecordTextMessagesRequest_text_messages(::bosdyn_msgs::msg::RecordTextMessagesRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::RecordTextMessagesRequest text_messages(::bosdyn_msgs::msg::RecordTextMessagesRequest::_text_messages_type arg)
  {
    msg_.text_messages = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::RecordTextMessagesRequest msg_;
};

class Init_RecordTextMessagesRequest_header_is_set
{
public:
  explicit Init_RecordTextMessagesRequest_header_is_set(::bosdyn_msgs::msg::RecordTextMessagesRequest & msg)
  : msg_(msg)
  {}
  Init_RecordTextMessagesRequest_text_messages header_is_set(::bosdyn_msgs::msg::RecordTextMessagesRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_RecordTextMessagesRequest_text_messages(msg_);
  }

private:
  ::bosdyn_msgs::msg::RecordTextMessagesRequest msg_;
};

class Init_RecordTextMessagesRequest_header
{
public:
  Init_RecordTextMessagesRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RecordTextMessagesRequest_header_is_set header(::bosdyn_msgs::msg::RecordTextMessagesRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RecordTextMessagesRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RecordTextMessagesRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::RecordTextMessagesRequest>()
{
  return bosdyn_msgs::msg::builder::Init_RecordTextMessagesRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__RECORD_TEXT_MESSAGES_REQUEST__BUILDER_HPP_
