// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/OperatorComment.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__OPERATOR_COMMENT__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__OPERATOR_COMMENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/operator_comment__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_OperatorComment_timestamp_is_set
{
public:
  explicit Init_OperatorComment_timestamp_is_set(::bosdyn_msgs::msg::OperatorComment & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::OperatorComment timestamp_is_set(::bosdyn_msgs::msg::OperatorComment::_timestamp_is_set_type arg)
  {
    msg_.timestamp_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::OperatorComment msg_;
};

class Init_OperatorComment_timestamp
{
public:
  explicit Init_OperatorComment_timestamp(::bosdyn_msgs::msg::OperatorComment & msg)
  : msg_(msg)
  {}
  Init_OperatorComment_timestamp_is_set timestamp(::bosdyn_msgs::msg::OperatorComment::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_OperatorComment_timestamp_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::OperatorComment msg_;
};

class Init_OperatorComment_message
{
public:
  Init_OperatorComment_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OperatorComment_timestamp message(::bosdyn_msgs::msg::OperatorComment::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_OperatorComment_timestamp(msg_);
  }

private:
  ::bosdyn_msgs::msg::OperatorComment msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::OperatorComment>()
{
  return bosdyn_msgs::msg::builder::Init_OperatorComment_message();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__OPERATOR_COMMENT__BUILDER_HPP_
