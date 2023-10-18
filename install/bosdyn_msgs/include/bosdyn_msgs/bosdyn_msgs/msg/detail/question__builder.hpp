// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/Question.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__QUESTION__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__QUESTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/question__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_Question_severity
{
public:
  explicit Init_Question_severity(::bosdyn_msgs::msg::Question & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::Question severity(::bosdyn_msgs::msg::Question::_severity_type arg)
  {
    msg_.severity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::Question msg_;
};

class Init_Question_for_autonomous_processing
{
public:
  explicit Init_Question_for_autonomous_processing(::bosdyn_msgs::msg::Question & msg)
  : msg_(msg)
  {}
  Init_Question_severity for_autonomous_processing(::bosdyn_msgs::msg::Question::_for_autonomous_processing_type arg)
  {
    msg_.for_autonomous_processing = std::move(arg);
    return Init_Question_severity(msg_);
  }

private:
  ::bosdyn_msgs::msg::Question msg_;
};

class Init_Question_options
{
public:
  explicit Init_Question_options(::bosdyn_msgs::msg::Question & msg)
  : msg_(msg)
  {}
  Init_Question_for_autonomous_processing options(::bosdyn_msgs::msg::Question::_options_type arg)
  {
    msg_.options = std::move(arg);
    return Init_Question_for_autonomous_processing(msg_);
  }

private:
  ::bosdyn_msgs::msg::Question msg_;
};

class Init_Question_text
{
public:
  explicit Init_Question_text(::bosdyn_msgs::msg::Question & msg)
  : msg_(msg)
  {}
  Init_Question_options text(::bosdyn_msgs::msg::Question::_text_type arg)
  {
    msg_.text = std::move(arg);
    return Init_Question_options(msg_);
  }

private:
  ::bosdyn_msgs::msg::Question msg_;
};

class Init_Question_source
{
public:
  explicit Init_Question_source(::bosdyn_msgs::msg::Question & msg)
  : msg_(msg)
  {}
  Init_Question_text source(::bosdyn_msgs::msg::Question::_source_type arg)
  {
    msg_.source = std::move(arg);
    return Init_Question_text(msg_);
  }

private:
  ::bosdyn_msgs::msg::Question msg_;
};

class Init_Question_id
{
public:
  Init_Question_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Question_source id(::bosdyn_msgs::msg::Question::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Question_source(msg_);
  }

private:
  ::bosdyn_msgs::msg::Question msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::Question>()
{
  return bosdyn_msgs::msg::builder::Init_Question_id();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__QUESTION__BUILDER_HPP_
