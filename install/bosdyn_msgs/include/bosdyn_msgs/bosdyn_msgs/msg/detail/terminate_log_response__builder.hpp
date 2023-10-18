// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/TerminateLogResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__TERMINATE_LOG_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__TERMINATE_LOG_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/terminate_log_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_TerminateLogResponse_log_status_is_set
{
public:
  explicit Init_TerminateLogResponse_log_status_is_set(::bosdyn_msgs::msg::TerminateLogResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::TerminateLogResponse log_status_is_set(::bosdyn_msgs::msg::TerminateLogResponse::_log_status_is_set_type arg)
  {
    msg_.log_status_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::TerminateLogResponse msg_;
};

class Init_TerminateLogResponse_log_status
{
public:
  explicit Init_TerminateLogResponse_log_status(::bosdyn_msgs::msg::TerminateLogResponse & msg)
  : msg_(msg)
  {}
  Init_TerminateLogResponse_log_status_is_set log_status(::bosdyn_msgs::msg::TerminateLogResponse::_log_status_type arg)
  {
    msg_.log_status = std::move(arg);
    return Init_TerminateLogResponse_log_status_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::TerminateLogResponse msg_;
};

class Init_TerminateLogResponse_status
{
public:
  explicit Init_TerminateLogResponse_status(::bosdyn_msgs::msg::TerminateLogResponse & msg)
  : msg_(msg)
  {}
  Init_TerminateLogResponse_log_status status(::bosdyn_msgs::msg::TerminateLogResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_TerminateLogResponse_log_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::TerminateLogResponse msg_;
};

class Init_TerminateLogResponse_header_is_set
{
public:
  explicit Init_TerminateLogResponse_header_is_set(::bosdyn_msgs::msg::TerminateLogResponse & msg)
  : msg_(msg)
  {}
  Init_TerminateLogResponse_status header_is_set(::bosdyn_msgs::msg::TerminateLogResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_TerminateLogResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::TerminateLogResponse msg_;
};

class Init_TerminateLogResponse_header
{
public:
  Init_TerminateLogResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TerminateLogResponse_header_is_set header(::bosdyn_msgs::msg::TerminateLogResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TerminateLogResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::TerminateLogResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::TerminateLogResponse>()
{
  return bosdyn_msgs::msg::builder::Init_TerminateLogResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__TERMINATE_LOG_RESPONSE__BUILDER_HPP_
