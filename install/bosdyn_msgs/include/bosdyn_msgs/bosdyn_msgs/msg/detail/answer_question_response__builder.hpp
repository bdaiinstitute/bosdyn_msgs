// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/AnswerQuestionResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ANSWER_QUESTION_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ANSWER_QUESTION_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/answer_question_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_AnswerQuestionResponse_status
{
public:
  explicit Init_AnswerQuestionResponse_status(::bosdyn_msgs::msg::AnswerQuestionResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::AnswerQuestionResponse status(::bosdyn_msgs::msg::AnswerQuestionResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::AnswerQuestionResponse msg_;
};

class Init_AnswerQuestionResponse_header_is_set
{
public:
  explicit Init_AnswerQuestionResponse_header_is_set(::bosdyn_msgs::msg::AnswerQuestionResponse & msg)
  : msg_(msg)
  {}
  Init_AnswerQuestionResponse_status header_is_set(::bosdyn_msgs::msg::AnswerQuestionResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_AnswerQuestionResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::AnswerQuestionResponse msg_;
};

class Init_AnswerQuestionResponse_header
{
public:
  Init_AnswerQuestionResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AnswerQuestionResponse_header_is_set header(::bosdyn_msgs::msg::AnswerQuestionResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AnswerQuestionResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::AnswerQuestionResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::AnswerQuestionResponse>()
{
  return bosdyn_msgs::msg::builder::Init_AnswerQuestionResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ANSWER_QUESTION_RESPONSE__BUILDER_HPP_
