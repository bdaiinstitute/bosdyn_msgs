// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/EstopCheckInResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ESTOP_CHECK_IN_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ESTOP_CHECK_IN_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/estop_check_in_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_EstopCheckInResponse_status
{
public:
  explicit Init_EstopCheckInResponse_status(::bosdyn_msgs::msg::EstopCheckInResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::EstopCheckInResponse status(::bosdyn_msgs::msg::EstopCheckInResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::EstopCheckInResponse msg_;
};

class Init_EstopCheckInResponse_challenge
{
public:
  explicit Init_EstopCheckInResponse_challenge(::bosdyn_msgs::msg::EstopCheckInResponse & msg)
  : msg_(msg)
  {}
  Init_EstopCheckInResponse_status challenge(::bosdyn_msgs::msg::EstopCheckInResponse::_challenge_type arg)
  {
    msg_.challenge = std::move(arg);
    return Init_EstopCheckInResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::EstopCheckInResponse msg_;
};

class Init_EstopCheckInResponse_request_is_set
{
public:
  explicit Init_EstopCheckInResponse_request_is_set(::bosdyn_msgs::msg::EstopCheckInResponse & msg)
  : msg_(msg)
  {}
  Init_EstopCheckInResponse_challenge request_is_set(::bosdyn_msgs::msg::EstopCheckInResponse::_request_is_set_type arg)
  {
    msg_.request_is_set = std::move(arg);
    return Init_EstopCheckInResponse_challenge(msg_);
  }

private:
  ::bosdyn_msgs::msg::EstopCheckInResponse msg_;
};

class Init_EstopCheckInResponse_request
{
public:
  explicit Init_EstopCheckInResponse_request(::bosdyn_msgs::msg::EstopCheckInResponse & msg)
  : msg_(msg)
  {}
  Init_EstopCheckInResponse_request_is_set request(::bosdyn_msgs::msg::EstopCheckInResponse::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_EstopCheckInResponse_request_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::EstopCheckInResponse msg_;
};

class Init_EstopCheckInResponse_header_is_set
{
public:
  explicit Init_EstopCheckInResponse_header_is_set(::bosdyn_msgs::msg::EstopCheckInResponse & msg)
  : msg_(msg)
  {}
  Init_EstopCheckInResponse_request header_is_set(::bosdyn_msgs::msg::EstopCheckInResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_EstopCheckInResponse_request(msg_);
  }

private:
  ::bosdyn_msgs::msg::EstopCheckInResponse msg_;
};

class Init_EstopCheckInResponse_header
{
public:
  Init_EstopCheckInResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EstopCheckInResponse_header_is_set header(::bosdyn_msgs::msg::EstopCheckInResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_EstopCheckInResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::EstopCheckInResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::EstopCheckInResponse>()
{
  return bosdyn_msgs::msg::builder::Init_EstopCheckInResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ESTOP_CHECK_IN_RESPONSE__BUILDER_HPP_
