// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/AnswerQuestionRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ANSWER_QUESTION_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ANSWER_QUESTION_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/answer_question_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_AnswerQuestionRequest_code
{
public:
  explicit Init_AnswerQuestionRequest_code(::bosdyn_msgs::msg::AnswerQuestionRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::AnswerQuestionRequest code(::bosdyn_msgs::msg::AnswerQuestionRequest::_code_type arg)
  {
    msg_.code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::AnswerQuestionRequest msg_;
};

class Init_AnswerQuestionRequest_question_id
{
public:
  explicit Init_AnswerQuestionRequest_question_id(::bosdyn_msgs::msg::AnswerQuestionRequest & msg)
  : msg_(msg)
  {}
  Init_AnswerQuestionRequest_code question_id(::bosdyn_msgs::msg::AnswerQuestionRequest::_question_id_type arg)
  {
    msg_.question_id = std::move(arg);
    return Init_AnswerQuestionRequest_code(msg_);
  }

private:
  ::bosdyn_msgs::msg::AnswerQuestionRequest msg_;
};

class Init_AnswerQuestionRequest_header_is_set
{
public:
  explicit Init_AnswerQuestionRequest_header_is_set(::bosdyn_msgs::msg::AnswerQuestionRequest & msg)
  : msg_(msg)
  {}
  Init_AnswerQuestionRequest_question_id header_is_set(::bosdyn_msgs::msg::AnswerQuestionRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_AnswerQuestionRequest_question_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::AnswerQuestionRequest msg_;
};

class Init_AnswerQuestionRequest_header
{
public:
  Init_AnswerQuestionRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AnswerQuestionRequest_header_is_set header(::bosdyn_msgs::msg::AnswerQuestionRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_AnswerQuestionRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::AnswerQuestionRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::AnswerQuestionRequest>()
{
  return bosdyn_msgs::msg::builder::Init_AnswerQuestionRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ANSWER_QUESTION_REQUEST__BUILDER_HPP_
