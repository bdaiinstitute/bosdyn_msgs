// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/RecordOperatorCommentsResponseError.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__RECORD_OPERATOR_COMMENTS_RESPONSE_ERROR__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__RECORD_OPERATOR_COMMENTS_RESPONSE_ERROR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/record_operator_comments_response_error__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_RecordOperatorCommentsResponseError_index
{
public:
  explicit Init_RecordOperatorCommentsResponseError_index(::bosdyn_msgs::msg::RecordOperatorCommentsResponseError & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::RecordOperatorCommentsResponseError index(::bosdyn_msgs::msg::RecordOperatorCommentsResponseError::_index_type arg)
  {
    msg_.index = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::RecordOperatorCommentsResponseError msg_;
};

class Init_RecordOperatorCommentsResponseError_message
{
public:
  explicit Init_RecordOperatorCommentsResponseError_message(::bosdyn_msgs::msg::RecordOperatorCommentsResponseError & msg)
  : msg_(msg)
  {}
  Init_RecordOperatorCommentsResponseError_index message(::bosdyn_msgs::msg::RecordOperatorCommentsResponseError::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_RecordOperatorCommentsResponseError_index(msg_);
  }

private:
  ::bosdyn_msgs::msg::RecordOperatorCommentsResponseError msg_;
};

class Init_RecordOperatorCommentsResponseError_type
{
public:
  Init_RecordOperatorCommentsResponseError_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RecordOperatorCommentsResponseError_message type(::bosdyn_msgs::msg::RecordOperatorCommentsResponseError::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_RecordOperatorCommentsResponseError_message(msg_);
  }

private:
  ::bosdyn_msgs::msg::RecordOperatorCommentsResponseError msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::RecordOperatorCommentsResponseError>()
{
  return bosdyn_msgs::msg::builder::Init_RecordOperatorCommentsResponseError_type();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__RECORD_OPERATOR_COMMENTS_RESPONSE_ERROR__BUILDER_HPP_
