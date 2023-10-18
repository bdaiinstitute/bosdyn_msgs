// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GetPayloadAuthTokenRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_PAYLOAD_AUTH_TOKEN_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_PAYLOAD_AUTH_TOKEN_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/get_payload_auth_token_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GetPayloadAuthTokenRequest_payload_credentials_is_set
{
public:
  explicit Init_GetPayloadAuthTokenRequest_payload_credentials_is_set(::bosdyn_msgs::msg::GetPayloadAuthTokenRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GetPayloadAuthTokenRequest payload_credentials_is_set(::bosdyn_msgs::msg::GetPayloadAuthTokenRequest::_payload_credentials_is_set_type arg)
  {
    msg_.payload_credentials_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetPayloadAuthTokenRequest msg_;
};

class Init_GetPayloadAuthTokenRequest_payload_credentials
{
public:
  explicit Init_GetPayloadAuthTokenRequest_payload_credentials(::bosdyn_msgs::msg::GetPayloadAuthTokenRequest & msg)
  : msg_(msg)
  {}
  Init_GetPayloadAuthTokenRequest_payload_credentials_is_set payload_credentials(::bosdyn_msgs::msg::GetPayloadAuthTokenRequest::_payload_credentials_type arg)
  {
    msg_.payload_credentials = std::move(arg);
    return Init_GetPayloadAuthTokenRequest_payload_credentials_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetPayloadAuthTokenRequest msg_;
};

class Init_GetPayloadAuthTokenRequest_header_is_set
{
public:
  explicit Init_GetPayloadAuthTokenRequest_header_is_set(::bosdyn_msgs::msg::GetPayloadAuthTokenRequest & msg)
  : msg_(msg)
  {}
  Init_GetPayloadAuthTokenRequest_payload_credentials header_is_set(::bosdyn_msgs::msg::GetPayloadAuthTokenRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_GetPayloadAuthTokenRequest_payload_credentials(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetPayloadAuthTokenRequest msg_;
};

class Init_GetPayloadAuthTokenRequest_header
{
public:
  Init_GetPayloadAuthTokenRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetPayloadAuthTokenRequest_header_is_set header(::bosdyn_msgs::msg::GetPayloadAuthTokenRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetPayloadAuthTokenRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetPayloadAuthTokenRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GetPayloadAuthTokenRequest>()
{
  return bosdyn_msgs::msg::builder::Init_GetPayloadAuthTokenRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_PAYLOAD_AUTH_TOKEN_REQUEST__BUILDER_HPP_
