// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/TextMessage.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__TEXT_MESSAGE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__TEXT_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/text_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_TextMessage_line_number
{
public:
  explicit Init_TextMessage_line_number(::bosdyn_msgs::msg::TextMessage & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::TextMessage line_number(::bosdyn_msgs::msg::TextMessage::_line_number_type arg)
  {
    msg_.line_number = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::TextMessage msg_;
};

class Init_TextMessage_filename
{
public:
  explicit Init_TextMessage_filename(::bosdyn_msgs::msg::TextMessage & msg)
  : msg_(msg)
  {}
  Init_TextMessage_line_number filename(::bosdyn_msgs::msg::TextMessage::_filename_type arg)
  {
    msg_.filename = std::move(arg);
    return Init_TextMessage_line_number(msg_);
  }

private:
  ::bosdyn_msgs::msg::TextMessage msg_;
};

class Init_TextMessage_tag
{
public:
  explicit Init_TextMessage_tag(::bosdyn_msgs::msg::TextMessage & msg)
  : msg_(msg)
  {}
  Init_TextMessage_filename tag(::bosdyn_msgs::msg::TextMessage::_tag_type arg)
  {
    msg_.tag = std::move(arg);
    return Init_TextMessage_filename(msg_);
  }

private:
  ::bosdyn_msgs::msg::TextMessage msg_;
};

class Init_TextMessage_level
{
public:
  explicit Init_TextMessage_level(::bosdyn_msgs::msg::TextMessage & msg)
  : msg_(msg)
  {}
  Init_TextMessage_tag level(::bosdyn_msgs::msg::TextMessage::_level_type arg)
  {
    msg_.level = std::move(arg);
    return Init_TextMessage_tag(msg_);
  }

private:
  ::bosdyn_msgs::msg::TextMessage msg_;
};

class Init_TextMessage_source
{
public:
  explicit Init_TextMessage_source(::bosdyn_msgs::msg::TextMessage & msg)
  : msg_(msg)
  {}
  Init_TextMessage_level source(::bosdyn_msgs::msg::TextMessage::_source_type arg)
  {
    msg_.source = std::move(arg);
    return Init_TextMessage_level(msg_);
  }

private:
  ::bosdyn_msgs::msg::TextMessage msg_;
};

class Init_TextMessage_timestamp_is_set
{
public:
  explicit Init_TextMessage_timestamp_is_set(::bosdyn_msgs::msg::TextMessage & msg)
  : msg_(msg)
  {}
  Init_TextMessage_source timestamp_is_set(::bosdyn_msgs::msg::TextMessage::_timestamp_is_set_type arg)
  {
    msg_.timestamp_is_set = std::move(arg);
    return Init_TextMessage_source(msg_);
  }

private:
  ::bosdyn_msgs::msg::TextMessage msg_;
};

class Init_TextMessage_timestamp
{
public:
  explicit Init_TextMessage_timestamp(::bosdyn_msgs::msg::TextMessage & msg)
  : msg_(msg)
  {}
  Init_TextMessage_timestamp_is_set timestamp(::bosdyn_msgs::msg::TextMessage::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_TextMessage_timestamp_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::TextMessage msg_;
};

class Init_TextMessage_message
{
public:
  Init_TextMessage_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TextMessage_timestamp message(::bosdyn_msgs::msg::TextMessage::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_TextMessage_timestamp(msg_);
  }

private:
  ::bosdyn_msgs::msg::TextMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::TextMessage>()
{
  return bosdyn_msgs::msg::builder::Init_TextMessage_message();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__TEXT_MESSAGE__BUILDER_HPP_
