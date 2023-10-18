// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/StanceCommandRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STANCE_COMMAND_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STANCE_COMMAND_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/stance_command_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_StanceCommandRequest_stance_is_set
{
public:
  explicit Init_StanceCommandRequest_stance_is_set(::bosdyn_msgs::msg::StanceCommandRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::StanceCommandRequest stance_is_set(::bosdyn_msgs::msg::StanceCommandRequest::_stance_is_set_type arg)
  {
    msg_.stance_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::StanceCommandRequest msg_;
};

class Init_StanceCommandRequest_stance
{
public:
  explicit Init_StanceCommandRequest_stance(::bosdyn_msgs::msg::StanceCommandRequest & msg)
  : msg_(msg)
  {}
  Init_StanceCommandRequest_stance_is_set stance(::bosdyn_msgs::msg::StanceCommandRequest::_stance_type arg)
  {
    msg_.stance = std::move(arg);
    return Init_StanceCommandRequest_stance_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::StanceCommandRequest msg_;
};

class Init_StanceCommandRequest_end_time_is_set
{
public:
  explicit Init_StanceCommandRequest_end_time_is_set(::bosdyn_msgs::msg::StanceCommandRequest & msg)
  : msg_(msg)
  {}
  Init_StanceCommandRequest_stance end_time_is_set(::bosdyn_msgs::msg::StanceCommandRequest::_end_time_is_set_type arg)
  {
    msg_.end_time_is_set = std::move(arg);
    return Init_StanceCommandRequest_stance(msg_);
  }

private:
  ::bosdyn_msgs::msg::StanceCommandRequest msg_;
};

class Init_StanceCommandRequest_end_time
{
public:
  Init_StanceCommandRequest_end_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StanceCommandRequest_end_time_is_set end_time(::bosdyn_msgs::msg::StanceCommandRequest::_end_time_type arg)
  {
    msg_.end_time = std::move(arg);
    return Init_StanceCommandRequest_end_time_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::StanceCommandRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::StanceCommandRequest>()
{
  return bosdyn_msgs::msg::builder::Init_StanceCommandRequest_end_time();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__STANCE_COMMAND_REQUEST__BUILDER_HPP_
