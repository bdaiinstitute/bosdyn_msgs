// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/LogAnnotationTextMessage.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LOG_ANNOTATION_TEXT_MESSAGE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LOG_ANNOTATION_TEXT_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/log_annotation_text_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_LogAnnotationTextMessage_timestamp_client_is_set
{
public:
  explicit Init_LogAnnotationTextMessage_timestamp_client_is_set(::bosdyn_msgs::msg::LogAnnotationTextMessage & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::LogAnnotationTextMessage timestamp_client_is_set(::bosdyn_msgs::msg::LogAnnotationTextMessage::_timestamp_client_is_set_type arg)
  {
    msg_.timestamp_client_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::LogAnnotationTextMessage msg_;
};

class Init_LogAnnotationTextMessage_timestamp_client
{
public:
  explicit Init_LogAnnotationTextMessage_timestamp_client(::bosdyn_msgs::msg::LogAnnotationTextMessage & msg)
  : msg_(msg)
  {}
  Init_LogAnnotationTextMessage_timestamp_client_is_set timestamp_client(::bosdyn_msgs::msg::LogAnnotationTextMessage::_timestamp_client_type arg)
  {
    msg_.timestamp_client = std::move(arg);
    return Init_LogAnnotationTextMessage_timestamp_client_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::LogAnnotationTextMessage msg_;
};

class Init_LogAnnotationTextMessage_line_number
{
public:
  explicit Init_LogAnnotationTextMessage_line_number(::bosdyn_msgs::msg::LogAnnotationTextMessage & msg)
  : msg_(msg)
  {}
  Init_LogAnnotationTextMessage_timestamp_client line_number(::bosdyn_msgs::msg::LogAnnotationTextMessage::_line_number_type arg)
  {
    msg_.line_number = std::move(arg);
    return Init_LogAnnotationTextMessage_timestamp_client(msg_);
  }

private:
  ::bosdyn_msgs::msg::LogAnnotationTextMessage msg_;
};

class Init_LogAnnotationTextMessage_filename
{
public:
  explicit Init_LogAnnotationTextMessage_filename(::bosdyn_msgs::msg::LogAnnotationTextMessage & msg)
  : msg_(msg)
  {}
  Init_LogAnnotationTextMessage_line_number filename(::bosdyn_msgs::msg::LogAnnotationTextMessage::_filename_type arg)
  {
    msg_.filename = std::move(arg);
    return Init_LogAnnotationTextMessage_line_number(msg_);
  }

private:
  ::bosdyn_msgs::msg::LogAnnotationTextMessage msg_;
};

class Init_LogAnnotationTextMessage_tag
{
public:
  explicit Init_LogAnnotationTextMessage_tag(::bosdyn_msgs::msg::LogAnnotationTextMessage & msg)
  : msg_(msg)
  {}
  Init_LogAnnotationTextMessage_filename tag(::bosdyn_msgs::msg::LogAnnotationTextMessage::_tag_type arg)
  {
    msg_.tag = std::move(arg);
    return Init_LogAnnotationTextMessage_filename(msg_);
  }

private:
  ::bosdyn_msgs::msg::LogAnnotationTextMessage msg_;
};

class Init_LogAnnotationTextMessage_level
{
public:
  explicit Init_LogAnnotationTextMessage_level(::bosdyn_msgs::msg::LogAnnotationTextMessage & msg)
  : msg_(msg)
  {}
  Init_LogAnnotationTextMessage_tag level(::bosdyn_msgs::msg::LogAnnotationTextMessage::_level_type arg)
  {
    msg_.level = std::move(arg);
    return Init_LogAnnotationTextMessage_tag(msg_);
  }

private:
  ::bosdyn_msgs::msg::LogAnnotationTextMessage msg_;
};

class Init_LogAnnotationTextMessage_service
{
public:
  explicit Init_LogAnnotationTextMessage_service(::bosdyn_msgs::msg::LogAnnotationTextMessage & msg)
  : msg_(msg)
  {}
  Init_LogAnnotationTextMessage_level service(::bosdyn_msgs::msg::LogAnnotationTextMessage::_service_type arg)
  {
    msg_.service = std::move(arg);
    return Init_LogAnnotationTextMessage_level(msg_);
  }

private:
  ::bosdyn_msgs::msg::LogAnnotationTextMessage msg_;
};

class Init_LogAnnotationTextMessage_timestamp_is_set
{
public:
  explicit Init_LogAnnotationTextMessage_timestamp_is_set(::bosdyn_msgs::msg::LogAnnotationTextMessage & msg)
  : msg_(msg)
  {}
  Init_LogAnnotationTextMessage_service timestamp_is_set(::bosdyn_msgs::msg::LogAnnotationTextMessage::_timestamp_is_set_type arg)
  {
    msg_.timestamp_is_set = std::move(arg);
    return Init_LogAnnotationTextMessage_service(msg_);
  }

private:
  ::bosdyn_msgs::msg::LogAnnotationTextMessage msg_;
};

class Init_LogAnnotationTextMessage_timestamp
{
public:
  explicit Init_LogAnnotationTextMessage_timestamp(::bosdyn_msgs::msg::LogAnnotationTextMessage & msg)
  : msg_(msg)
  {}
  Init_LogAnnotationTextMessage_timestamp_is_set timestamp(::bosdyn_msgs::msg::LogAnnotationTextMessage::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_LogAnnotationTextMessage_timestamp_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::LogAnnotationTextMessage msg_;
};

class Init_LogAnnotationTextMessage_message
{
public:
  Init_LogAnnotationTextMessage_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LogAnnotationTextMessage_timestamp message(::bosdyn_msgs::msg::LogAnnotationTextMessage::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_LogAnnotationTextMessage_timestamp(msg_);
  }

private:
  ::bosdyn_msgs::msg::LogAnnotationTextMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::LogAnnotationTextMessage>()
{
  return bosdyn_msgs::msg::builder::Init_LogAnnotationTextMessage_message();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LOG_ANNOTATION_TEXT_MESSAGE__BUILDER_HPP_
