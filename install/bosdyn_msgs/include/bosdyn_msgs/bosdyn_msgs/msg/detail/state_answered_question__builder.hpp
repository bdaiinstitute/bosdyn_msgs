// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/StateAnsweredQuestion.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STATE_ANSWERED_QUESTION__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STATE_ANSWERED_QUESTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/state_answered_question__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_StateAnsweredQuestion_accepted_answer_code
{
public:
  explicit Init_StateAnsweredQuestion_accepted_answer_code(::bosdyn_msgs::msg::StateAnsweredQuestion & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::StateAnsweredQuestion accepted_answer_code(::bosdyn_msgs::msg::StateAnsweredQuestion::_accepted_answer_code_type arg)
  {
    msg_.accepted_answer_code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::StateAnsweredQuestion msg_;
};

class Init_StateAnsweredQuestion_question_is_set
{
public:
  explicit Init_StateAnsweredQuestion_question_is_set(::bosdyn_msgs::msg::StateAnsweredQuestion & msg)
  : msg_(msg)
  {}
  Init_StateAnsweredQuestion_accepted_answer_code question_is_set(::bosdyn_msgs::msg::StateAnsweredQuestion::_question_is_set_type arg)
  {
    msg_.question_is_set = std::move(arg);
    return Init_StateAnsweredQuestion_accepted_answer_code(msg_);
  }

private:
  ::bosdyn_msgs::msg::StateAnsweredQuestion msg_;
};

class Init_StateAnsweredQuestion_question
{
public:
  Init_StateAnsweredQuestion_question()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StateAnsweredQuestion_question_is_set question(::bosdyn_msgs::msg::StateAnsweredQuestion::_question_type arg)
  {
    msg_.question = std::move(arg);
    return Init_StateAnsweredQuestion_question_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::StateAnsweredQuestion msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::StateAnsweredQuestion>()
{
  return bosdyn_msgs::msg::builder::Init_StateAnsweredQuestion_question();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__STATE_ANSWERED_QUESTION__BUILDER_HPP_
