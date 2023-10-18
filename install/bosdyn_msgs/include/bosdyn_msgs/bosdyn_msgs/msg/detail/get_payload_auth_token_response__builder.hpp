// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GetPayloadAuthTokenResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_PAYLOAD_AUTH_TOKEN_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_PAYLOAD_AUTH_TOKEN_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/get_payload_auth_token_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GetPayloadAuthTokenResponse_token
{
public:
  explicit Init_GetPayloadAuthTokenResponse_token(::bosdyn_msgs::msg::GetPayloadAuthTokenResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GetPayloadAuthTokenResponse token(::bosdyn_msgs::msg::GetPayloadAuthTokenResponse::_token_type arg)
  {
    msg_.token = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetPayloadAuthTokenResponse msg_;
};

class Init_GetPayloadAuthTokenResponse_status
{
public:
  explicit Init_GetPayloadAuthTokenResponse_status(::bosdyn_msgs::msg::GetPayloadAuthTokenResponse & msg)
  : msg_(msg)
  {}
  Init_GetPayloadAuthTokenResponse_token status(::bosdyn_msgs::msg::GetPayloadAuthTokenResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_GetPayloadAuthTokenResponse_token(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetPayloadAuthTokenResponse msg_;
};

class Init_GetPayloadAuthTokenResponse_header_is_set
{
public:
  explicit Init_GetPayloadAuthTokenResponse_header_is_set(::bosdyn_msgs::msg::GetPayloadAuthTokenResponse & msg)
  : msg_(msg)
  {}
  Init_GetPayloadAuthTokenResponse_status header_is_set(::bosdyn_msgs::msg::GetPayloadAuthTokenResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_GetPayloadAuthTokenResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetPayloadAuthTokenResponse msg_;
};

class Init_GetPayloadAuthTokenResponse_header
{
public:
  Init_GetPayloadAuthTokenResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetPayloadAuthTokenResponse_header_is_set header(::bosdyn_msgs::msg::GetPayloadAuthTokenResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetPayloadAuthTokenResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetPayloadAuthTokenResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GetPayloadAuthTokenResponse>()
{
  return bosdyn_msgs::msg::builder::Init_GetPayloadAuthTokenResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_PAYLOAD_AUTH_TOKEN_RESPONSE__BUILDER_HPP_
