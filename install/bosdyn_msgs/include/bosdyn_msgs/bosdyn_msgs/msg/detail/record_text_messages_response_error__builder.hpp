// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/RecordTextMessagesResponseError.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__RECORD_TEXT_MESSAGES_RESPONSE_ERROR__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__RECORD_TEXT_MESSAGES_RESPONSE_ERROR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/record_text_messages_response_error__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_RecordTextMessagesResponseError_index
{
public:
  explicit Init_RecordTextMessagesResponseError_index(::bosdyn_msgs::msg::RecordTextMessagesResponseError & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::RecordTextMessagesResponseError index(::bosdyn_msgs::msg::RecordTextMessagesResponseError::_index_type arg)
  {
    msg_.index = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::RecordTextMessagesResponseError msg_;
};

class Init_RecordTextMessagesResponseError_message
{
public:
  explicit Init_RecordTextMessagesResponseError_message(::bosdyn_msgs::msg::RecordTextMessagesResponseError & msg)
  : msg_(msg)
  {}
  Init_RecordTextMessagesResponseError_index message(::bosdyn_msgs::msg::RecordTextMessagesResponseError::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_RecordTextMessagesResponseError_index(msg_);
  }

private:
  ::bosdyn_msgs::msg::RecordTextMessagesResponseError msg_;
};

class Init_RecordTextMessagesResponseError_type
{
public:
  Init_RecordTextMessagesResponseError_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RecordTextMessagesResponseError_message type(::bosdyn_msgs::msg::RecordTextMessagesResponseError::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_RecordTextMessagesResponseError_message(msg_);
  }

private:
  ::bosdyn_msgs::msg::RecordTextMessagesResponseError msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::RecordTextMessagesResponseError>()
{
  return bosdyn_msgs::msg::builder::Init_RecordTextMessagesResponseError_type();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__RECORD_TEXT_MESSAGES_RESPONSE_ERROR__BUILDER_HPP_
