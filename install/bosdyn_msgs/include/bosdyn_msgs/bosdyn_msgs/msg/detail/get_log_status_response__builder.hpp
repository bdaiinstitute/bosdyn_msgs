// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GetLogStatusResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_LOG_STATUS_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_LOG_STATUS_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/get_log_status_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GetLogStatusResponse_log_status_is_set
{
public:
  explicit Init_GetLogStatusResponse_log_status_is_set(::bosdyn_msgs::msg::GetLogStatusResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GetLogStatusResponse log_status_is_set(::bosdyn_msgs::msg::GetLogStatusResponse::_log_status_is_set_type arg)
  {
    msg_.log_status_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetLogStatusResponse msg_;
};

class Init_GetLogStatusResponse_log_status
{
public:
  explicit Init_GetLogStatusResponse_log_status(::bosdyn_msgs::msg::GetLogStatusResponse & msg)
  : msg_(msg)
  {}
  Init_GetLogStatusResponse_log_status_is_set log_status(::bosdyn_msgs::msg::GetLogStatusResponse::_log_status_type arg)
  {
    msg_.log_status = std::move(arg);
    return Init_GetLogStatusResponse_log_status_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetLogStatusResponse msg_;
};

class Init_GetLogStatusResponse_status
{
public:
  explicit Init_GetLogStatusResponse_status(::bosdyn_msgs::msg::GetLogStatusResponse & msg)
  : msg_(msg)
  {}
  Init_GetLogStatusResponse_log_status status(::bosdyn_msgs::msg::GetLogStatusResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_GetLogStatusResponse_log_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetLogStatusResponse msg_;
};

class Init_GetLogStatusResponse_header_is_set
{
public:
  explicit Init_GetLogStatusResponse_header_is_set(::bosdyn_msgs::msg::GetLogStatusResponse & msg)
  : msg_(msg)
  {}
  Init_GetLogStatusResponse_status header_is_set(::bosdyn_msgs::msg::GetLogStatusResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_GetLogStatusResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetLogStatusResponse msg_;
};

class Init_GetLogStatusResponse_header
{
public:
  Init_GetLogStatusResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetLogStatusResponse_header_is_set header(::bosdyn_msgs::msg::GetLogStatusResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetLogStatusResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetLogStatusResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GetLogStatusResponse>()
{
  return bosdyn_msgs::msg::builder::Init_GetLogStatusResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_LOG_STATUS_RESPONSE__BUILDER_HPP_
