// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/RecordTextMessagesResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__RECORD_TEXT_MESSAGES_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__RECORD_TEXT_MESSAGES_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/record_text_messages_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_RecordTextMessagesResponse_errors
{
public:
  explicit Init_RecordTextMessagesResponse_errors(::bosdyn_msgs::msg::RecordTextMessagesResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::RecordTextMessagesResponse errors(::bosdyn_msgs::msg::RecordTextMessagesResponse::_errors_type arg)
  {
    msg_.errors = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::RecordTextMessagesResponse msg_;
};

class Init_RecordTextMessagesResponse_header_is_set
{
public:
  explicit Init_RecordTextMessagesResponse_header_is_set(::bosdyn_msgs::msg::RecordTextMessagesResponse & msg)
  : msg_(msg)
  {}
  Init_RecordTextMessagesResponse_errors header_is_set(::bosdyn_msgs::msg::RecordTextMessagesResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_RecordTextMessagesResponse_errors(msg_);
  }

private:
  ::bosdyn_msgs::msg::RecordTextMessagesResponse msg_;
};

class Init_RecordTextMessagesResponse_header
{
public:
  Init_RecordTextMessagesResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RecordTextMessagesResponse_header_is_set header(::bosdyn_msgs::msg::RecordTextMessagesResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RecordTextMessagesResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RecordTextMessagesResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::RecordTextMessagesResponse>()
{
  return bosdyn_msgs::msg::builder::Init_RecordTextMessagesResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__RECORD_TEXT_MESSAGES_RESPONSE__BUILDER_HPP_
