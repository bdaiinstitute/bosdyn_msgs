// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GetSystemLogResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_SYSTEM_LOG_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_SYSTEM_LOG_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/get_system_log_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GetSystemLogResponse_data_is_set
{
public:
  explicit Init_GetSystemLogResponse_data_is_set(::bosdyn_msgs::msg::GetSystemLogResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GetSystemLogResponse data_is_set(::bosdyn_msgs::msg::GetSystemLogResponse::_data_is_set_type arg)
  {
    msg_.data_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetSystemLogResponse msg_;
};

class Init_GetSystemLogResponse_data
{
public:
  explicit Init_GetSystemLogResponse_data(::bosdyn_msgs::msg::GetSystemLogResponse & msg)
  : msg_(msg)
  {}
  Init_GetSystemLogResponse_data_is_set data(::bosdyn_msgs::msg::GetSystemLogResponse::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_GetSystemLogResponse_data_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetSystemLogResponse msg_;
};

class Init_GetSystemLogResponse_header_is_set
{
public:
  explicit Init_GetSystemLogResponse_header_is_set(::bosdyn_msgs::msg::GetSystemLogResponse & msg)
  : msg_(msg)
  {}
  Init_GetSystemLogResponse_data header_is_set(::bosdyn_msgs::msg::GetSystemLogResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_GetSystemLogResponse_data(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetSystemLogResponse msg_;
};

class Init_GetSystemLogResponse_header
{
public:
  Init_GetSystemLogResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetSystemLogResponse_header_is_set header(::bosdyn_msgs::msg::GetSystemLogResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetSystemLogResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetSystemLogResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GetSystemLogResponse>()
{
  return bosdyn_msgs::msg::builder::Init_GetSystemLogResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_SYSTEM_LOG_RESPONSE__BUILDER_HPP_
