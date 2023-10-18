// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GetActiveLogStatusesResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_ACTIVE_LOG_STATUSES_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_ACTIVE_LOG_STATUSES_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/get_active_log_statuses_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GetActiveLogStatusesResponse_log_statuses
{
public:
  explicit Init_GetActiveLogStatusesResponse_log_statuses(::bosdyn_msgs::msg::GetActiveLogStatusesResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GetActiveLogStatusesResponse log_statuses(::bosdyn_msgs::msg::GetActiveLogStatusesResponse::_log_statuses_type arg)
  {
    msg_.log_statuses = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetActiveLogStatusesResponse msg_;
};

class Init_GetActiveLogStatusesResponse_status
{
public:
  explicit Init_GetActiveLogStatusesResponse_status(::bosdyn_msgs::msg::GetActiveLogStatusesResponse & msg)
  : msg_(msg)
  {}
  Init_GetActiveLogStatusesResponse_log_statuses status(::bosdyn_msgs::msg::GetActiveLogStatusesResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_GetActiveLogStatusesResponse_log_statuses(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetActiveLogStatusesResponse msg_;
};

class Init_GetActiveLogStatusesResponse_header_is_set
{
public:
  explicit Init_GetActiveLogStatusesResponse_header_is_set(::bosdyn_msgs::msg::GetActiveLogStatusesResponse & msg)
  : msg_(msg)
  {}
  Init_GetActiveLogStatusesResponse_status header_is_set(::bosdyn_msgs::msg::GetActiveLogStatusesResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_GetActiveLogStatusesResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetActiveLogStatusesResponse msg_;
};

class Init_GetActiveLogStatusesResponse_header
{
public:
  Init_GetActiveLogStatusesResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetActiveLogStatusesResponse_header_is_set header(::bosdyn_msgs::msg::GetActiveLogStatusesResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetActiveLogStatusesResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetActiveLogStatusesResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GetActiveLogStatusesResponse>()
{
  return bosdyn_msgs::msg::builder::Init_GetActiveLogStatusesResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_ACTIVE_LOG_STATUSES_RESPONSE__BUILDER_HPP_
