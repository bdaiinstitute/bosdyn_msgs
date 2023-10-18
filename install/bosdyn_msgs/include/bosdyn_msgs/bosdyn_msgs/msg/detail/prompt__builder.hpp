// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/Prompt.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PROMPT__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PROMPT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/prompt__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_Prompt_question_name_in_blackboard
{
public:
  explicit Init_Prompt_question_name_in_blackboard(::bosdyn_msgs::msg::Prompt & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::Prompt question_name_in_blackboard(::bosdyn_msgs::msg::Prompt::_question_name_in_blackboard_type arg)
  {
    msg_.question_name_in_blackboard = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::Prompt msg_;
};

class Init_Prompt_severity
{
public:
  explicit Init_Prompt_severity(::bosdyn_msgs::msg::Prompt & msg)
  : msg_(msg)
  {}
  Init_Prompt_question_name_in_blackboard severity(::bosdyn_msgs::msg::Prompt::_severity_type arg)
  {
    msg_.severity = std::move(arg);
    return Init_Prompt_question_name_in_blackboard(msg_);
  }

private:
  ::bosdyn_msgs::msg::Prompt msg_;
};

class Init_Prompt_for_autonomous_processing
{
public:
  explicit Init_Prompt_for_autonomous_processing(::bosdyn_msgs::msg::Prompt & msg)
  : msg_(msg)
  {}
  Init_Prompt_severity for_autonomous_processing(::bosdyn_msgs::msg::Prompt::_for_autonomous_processing_type arg)
  {
    msg_.for_autonomous_processing = std::move(arg);
    return Init_Prompt_severity(msg_);
  }

private:
  ::bosdyn_msgs::msg::Prompt msg_;
};

class Init_Prompt_child_is_set
{
public:
  explicit Init_Prompt_child_is_set(::bosdyn_msgs::msg::Prompt & msg)
  : msg_(msg)
  {}
  Init_Prompt_for_autonomous_processing child_is_set(::bosdyn_msgs::msg::Prompt::_child_is_set_type arg)
  {
    msg_.child_is_set = std::move(arg);
    return Init_Prompt_for_autonomous_processing(msg_);
  }

private:
  ::bosdyn_msgs::msg::Prompt msg_;
};

class Init_Prompt_child
{
public:
  explicit Init_Prompt_child(::bosdyn_msgs::msg::Prompt & msg)
  : msg_(msg)
  {}
  Init_Prompt_child_is_set child(::bosdyn_msgs::msg::Prompt::_child_type arg)
  {
    msg_.child = std::move(arg);
    return Init_Prompt_child_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Prompt msg_;
};

class Init_Prompt_options
{
public:
  explicit Init_Prompt_options(::bosdyn_msgs::msg::Prompt & msg)
  : msg_(msg)
  {}
  Init_Prompt_child options(::bosdyn_msgs::msg::Prompt::_options_type arg)
  {
    msg_.options = std::move(arg);
    return Init_Prompt_child(msg_);
  }

private:
  ::bosdyn_msgs::msg::Prompt msg_;
};

class Init_Prompt_source
{
public:
  explicit Init_Prompt_source(::bosdyn_msgs::msg::Prompt & msg)
  : msg_(msg)
  {}
  Init_Prompt_options source(::bosdyn_msgs::msg::Prompt::_source_type arg)
  {
    msg_.source = std::move(arg);
    return Init_Prompt_options(msg_);
  }

private:
  ::bosdyn_msgs::msg::Prompt msg_;
};

class Init_Prompt_text
{
public:
  explicit Init_Prompt_text(::bosdyn_msgs::msg::Prompt & msg)
  : msg_(msg)
  {}
  Init_Prompt_source text(::bosdyn_msgs::msg::Prompt::_text_type arg)
  {
    msg_.text = std::move(arg);
    return Init_Prompt_source(msg_);
  }

private:
  ::bosdyn_msgs::msg::Prompt msg_;
};

class Init_Prompt_always_reprompt
{
public:
  Init_Prompt_always_reprompt()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Prompt_text always_reprompt(::bosdyn_msgs::msg::Prompt::_always_reprompt_type arg)
  {
    msg_.always_reprompt = std::move(arg);
    return Init_Prompt_text(msg_);
  }

private:
  ::bosdyn_msgs::msg::Prompt msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::Prompt>()
{
  return bosdyn_msgs::msg::builder::Init_Prompt_always_reprompt();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PROMPT__BUILDER_HPP_
