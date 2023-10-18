// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GetAuthTokenRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_AUTH_TOKEN_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_AUTH_TOKEN_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/get_auth_token_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GetAuthTokenRequest_token
{
public:
  explicit Init_GetAuthTokenRequest_token(::bosdyn_msgs::msg::GetAuthTokenRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GetAuthTokenRequest token(::bosdyn_msgs::msg::GetAuthTokenRequest::_token_type arg)
  {
    msg_.token = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetAuthTokenRequest msg_;
};

class Init_GetAuthTokenRequest_password
{
public:
  explicit Init_GetAuthTokenRequest_password(::bosdyn_msgs::msg::GetAuthTokenRequest & msg)
  : msg_(msg)
  {}
  Init_GetAuthTokenRequest_token password(::bosdyn_msgs::msg::GetAuthTokenRequest::_password_type arg)
  {
    msg_.password = std::move(arg);
    return Init_GetAuthTokenRequest_token(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetAuthTokenRequest msg_;
};

class Init_GetAuthTokenRequest_username
{
public:
  explicit Init_GetAuthTokenRequest_username(::bosdyn_msgs::msg::GetAuthTokenRequest & msg)
  : msg_(msg)
  {}
  Init_GetAuthTokenRequest_password username(::bosdyn_msgs::msg::GetAuthTokenRequest::_username_type arg)
  {
    msg_.username = std::move(arg);
    return Init_GetAuthTokenRequest_password(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetAuthTokenRequest msg_;
};

class Init_GetAuthTokenRequest_header_is_set
{
public:
  explicit Init_GetAuthTokenRequest_header_is_set(::bosdyn_msgs::msg::GetAuthTokenRequest & msg)
  : msg_(msg)
  {}
  Init_GetAuthTokenRequest_username header_is_set(::bosdyn_msgs::msg::GetAuthTokenRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_GetAuthTokenRequest_username(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetAuthTokenRequest msg_;
};

class Init_GetAuthTokenRequest_header
{
public:
  Init_GetAuthTokenRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetAuthTokenRequest_header_is_set header(::bosdyn_msgs::msg::GetAuthTokenRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetAuthTokenRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetAuthTokenRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GetAuthTokenRequest>()
{
  return bosdyn_msgs::msg::builder::Init_GetAuthTokenRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_AUTH_TOKEN_REQUEST__BUILDER_HPP_
