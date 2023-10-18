// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/EstopCheckInRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ESTOP_CHECK_IN_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ESTOP_CHECK_IN_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/estop_check_in_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_EstopCheckInRequest_stop_level
{
public:
  explicit Init_EstopCheckInRequest_stop_level(::bosdyn_msgs::msg::EstopCheckInRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::EstopCheckInRequest stop_level(::bosdyn_msgs::msg::EstopCheckInRequest::_stop_level_type arg)
  {
    msg_.stop_level = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::EstopCheckInRequest msg_;
};

class Init_EstopCheckInRequest_response
{
public:
  explicit Init_EstopCheckInRequest_response(::bosdyn_msgs::msg::EstopCheckInRequest & msg)
  : msg_(msg)
  {}
  Init_EstopCheckInRequest_stop_level response(::bosdyn_msgs::msg::EstopCheckInRequest::_response_type arg)
  {
    msg_.response = std::move(arg);
    return Init_EstopCheckInRequest_stop_level(msg_);
  }

private:
  ::bosdyn_msgs::msg::EstopCheckInRequest msg_;
};

class Init_EstopCheckInRequest_challenge
{
public:
  explicit Init_EstopCheckInRequest_challenge(::bosdyn_msgs::msg::EstopCheckInRequest & msg)
  : msg_(msg)
  {}
  Init_EstopCheckInRequest_response challenge(::bosdyn_msgs::msg::EstopCheckInRequest::_challenge_type arg)
  {
    msg_.challenge = std::move(arg);
    return Init_EstopCheckInRequest_response(msg_);
  }

private:
  ::bosdyn_msgs::msg::EstopCheckInRequest msg_;
};

class Init_EstopCheckInRequest_endpoint_is_set
{
public:
  explicit Init_EstopCheckInRequest_endpoint_is_set(::bosdyn_msgs::msg::EstopCheckInRequest & msg)
  : msg_(msg)
  {}
  Init_EstopCheckInRequest_challenge endpoint_is_set(::bosdyn_msgs::msg::EstopCheckInRequest::_endpoint_is_set_type arg)
  {
    msg_.endpoint_is_set = std::move(arg);
    return Init_EstopCheckInRequest_challenge(msg_);
  }

private:
  ::bosdyn_msgs::msg::EstopCheckInRequest msg_;
};

class Init_EstopCheckInRequest_endpoint
{
public:
  explicit Init_EstopCheckInRequest_endpoint(::bosdyn_msgs::msg::EstopCheckInRequest & msg)
  : msg_(msg)
  {}
  Init_EstopCheckInRequest_endpoint_is_set endpoint(::bosdyn_msgs::msg::EstopCheckInRequest::_endpoint_type arg)
  {
    msg_.endpoint = std::move(arg);
    return Init_EstopCheckInRequest_endpoint_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::EstopCheckInRequest msg_;
};

class Init_EstopCheckInRequest_header_is_set
{
public:
  explicit Init_EstopCheckInRequest_header_is_set(::bosdyn_msgs::msg::EstopCheckInRequest & msg)
  : msg_(msg)
  {}
  Init_EstopCheckInRequest_endpoint header_is_set(::bosdyn_msgs::msg::EstopCheckInRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_EstopCheckInRequest_endpoint(msg_);
  }

private:
  ::bosdyn_msgs::msg::EstopCheckInRequest msg_;
};

class Init_EstopCheckInRequest_header
{
public:
  Init_EstopCheckInRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EstopCheckInRequest_header_is_set header(::bosdyn_msgs::msg::EstopCheckInRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_EstopCheckInRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::EstopCheckInRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::EstopCheckInRequest>()
{
  return bosdyn_msgs::msg::builder::Init_EstopCheckInRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ESTOP_CHECK_IN_REQUEST__BUILDER_HPP_
