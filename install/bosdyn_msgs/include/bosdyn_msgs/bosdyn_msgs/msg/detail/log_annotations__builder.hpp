// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/LogAnnotations.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LOG_ANNOTATIONS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LOG_ANNOTATIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/log_annotations__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_LogAnnotations_blob_data
{
public:
  explicit Init_LogAnnotations_blob_data(::bosdyn_msgs::msg::LogAnnotations & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::LogAnnotations blob_data(::bosdyn_msgs::msg::LogAnnotations::_blob_data_type arg)
  {
    msg_.blob_data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::LogAnnotations msg_;
};

class Init_LogAnnotations_operator_messages
{
public:
  explicit Init_LogAnnotations_operator_messages(::bosdyn_msgs::msg::LogAnnotations & msg)
  : msg_(msg)
  {}
  Init_LogAnnotations_blob_data operator_messages(::bosdyn_msgs::msg::LogAnnotations::_operator_messages_type arg)
  {
    msg_.operator_messages = std::move(arg);
    return Init_LogAnnotations_blob_data(msg_);
  }

private:
  ::bosdyn_msgs::msg::LogAnnotations msg_;
};

class Init_LogAnnotations_text_messages
{
public:
  Init_LogAnnotations_text_messages()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LogAnnotations_operator_messages text_messages(::bosdyn_msgs::msg::LogAnnotations::_text_messages_type arg)
  {
    msg_.text_messages = std::move(arg);
    return Init_LogAnnotations_operator_messages(msg_);
  }

private:
  ::bosdyn_msgs::msg::LogAnnotations msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::LogAnnotations>()
{
  return bosdyn_msgs::msg::builder::Init_LogAnnotations_text_messages();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LOG_ANNOTATIONS__BUILDER_HPP_
