// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/PromptOption.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PROMPT_OPTION__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PROMPT_OPTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/prompt_option__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_PromptOption_answer_code
{
public:
  explicit Init_PromptOption_answer_code(::bosdyn_msgs::msg::PromptOption & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::PromptOption answer_code(::bosdyn_msgs::msg::PromptOption::_answer_code_type arg)
  {
    msg_.answer_code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::PromptOption msg_;
};

class Init_PromptOption_text
{
public:
  Init_PromptOption_text()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PromptOption_answer_code text(::bosdyn_msgs::msg::PromptOption::_text_type arg)
  {
    msg_.text = std::move(arg);
    return Init_PromptOption_answer_code(msg_);
  }

private:
  ::bosdyn_msgs::msg::PromptOption msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::PromptOption>()
{
  return bosdyn_msgs::msg::builder::Init_PromptOption_text();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PROMPT_OPTION__BUILDER_HPP_
