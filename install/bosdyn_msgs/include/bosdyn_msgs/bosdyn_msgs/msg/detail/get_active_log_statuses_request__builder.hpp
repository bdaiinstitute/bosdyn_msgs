// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GetActiveLogStatusesRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_ACTIVE_LOG_STATUSES_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_ACTIVE_LOG_STATUSES_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/get_active_log_statuses_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GetActiveLogStatusesRequest_header_is_set
{
public:
  explicit Init_GetActiveLogStatusesRequest_header_is_set(::bosdyn_msgs::msg::GetActiveLogStatusesRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GetActiveLogStatusesRequest header_is_set(::bosdyn_msgs::msg::GetActiveLogStatusesRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetActiveLogStatusesRequest msg_;
};

class Init_GetActiveLogStatusesRequest_header
{
public:
  Init_GetActiveLogStatusesRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetActiveLogStatusesRequest_header_is_set header(::bosdyn_msgs::msg::GetActiveLogStatusesRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetActiveLogStatusesRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetActiveLogStatusesRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GetActiveLogStatusesRequest>()
{
  return bosdyn_msgs::msg::builder::Init_GetActiveLogStatusesRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_ACTIVE_LOG_STATUSES_REQUEST__BUILDER_HPP_
