// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/LogAnnotationOperatorMessage.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LOG_ANNOTATION_OPERATOR_MESSAGE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LOG_ANNOTATION_OPERATOR_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/log_annotation_operator_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_LogAnnotationOperatorMessage_timestamp_client_is_set
{
public:
  explicit Init_LogAnnotationOperatorMessage_timestamp_client_is_set(::bosdyn_msgs::msg::LogAnnotationOperatorMessage & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::LogAnnotationOperatorMessage timestamp_client_is_set(::bosdyn_msgs::msg::LogAnnotationOperatorMessage::_timestamp_client_is_set_type arg)
  {
    msg_.timestamp_client_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::LogAnnotationOperatorMessage msg_;
};

class Init_LogAnnotationOperatorMessage_timestamp_client
{
public:
  explicit Init_LogAnnotationOperatorMessage_timestamp_client(::bosdyn_msgs::msg::LogAnnotationOperatorMessage & msg)
  : msg_(msg)
  {}
  Init_LogAnnotationOperatorMessage_timestamp_client_is_set timestamp_client(::bosdyn_msgs::msg::LogAnnotationOperatorMessage::_timestamp_client_type arg)
  {
    msg_.timestamp_client = std::move(arg);
    return Init_LogAnnotationOperatorMessage_timestamp_client_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::LogAnnotationOperatorMessage msg_;
};

class Init_LogAnnotationOperatorMessage_timestamp_is_set
{
public:
  explicit Init_LogAnnotationOperatorMessage_timestamp_is_set(::bosdyn_msgs::msg::LogAnnotationOperatorMessage & msg)
  : msg_(msg)
  {}
  Init_LogAnnotationOperatorMessage_timestamp_client timestamp_is_set(::bosdyn_msgs::msg::LogAnnotationOperatorMessage::_timestamp_is_set_type arg)
  {
    msg_.timestamp_is_set = std::move(arg);
    return Init_LogAnnotationOperatorMessage_timestamp_client(msg_);
  }

private:
  ::bosdyn_msgs::msg::LogAnnotationOperatorMessage msg_;
};

class Init_LogAnnotationOperatorMessage_timestamp
{
public:
  explicit Init_LogAnnotationOperatorMessage_timestamp(::bosdyn_msgs::msg::LogAnnotationOperatorMessage & msg)
  : msg_(msg)
  {}
  Init_LogAnnotationOperatorMessage_timestamp_is_set timestamp(::bosdyn_msgs::msg::LogAnnotationOperatorMessage::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_LogAnnotationOperatorMessage_timestamp_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::LogAnnotationOperatorMessage msg_;
};

class Init_LogAnnotationOperatorMessage_message
{
public:
  Init_LogAnnotationOperatorMessage_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LogAnnotationOperatorMessage_timestamp message(::bosdyn_msgs::msg::LogAnnotationOperatorMessage::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_LogAnnotationOperatorMessage_timestamp(msg_);
  }

private:
  ::bosdyn_msgs::msg::LogAnnotationOperatorMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::LogAnnotationOperatorMessage>()
{
  return bosdyn_msgs::msg::builder::Init_LogAnnotationOperatorMessage_message();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LOG_ANNOTATION_OPERATOR_MESSAGE__BUILDER_HPP_
