// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ResponseHeader.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__RESPONSE_HEADER__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__RESPONSE_HEADER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/response_header__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ResponseHeader_error_is_set
{
public:
  explicit Init_ResponseHeader_error_is_set(::bosdyn_msgs::msg::ResponseHeader & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ResponseHeader error_is_set(::bosdyn_msgs::msg::ResponseHeader::_error_is_set_type arg)
  {
    msg_.error_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ResponseHeader msg_;
};

class Init_ResponseHeader_error
{
public:
  explicit Init_ResponseHeader_error(::bosdyn_msgs::msg::ResponseHeader & msg)
  : msg_(msg)
  {}
  Init_ResponseHeader_error_is_set error(::bosdyn_msgs::msg::ResponseHeader::_error_type arg)
  {
    msg_.error = std::move(arg);
    return Init_ResponseHeader_error_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ResponseHeader msg_;
};

class Init_ResponseHeader_response_timestamp_is_set
{
public:
  explicit Init_ResponseHeader_response_timestamp_is_set(::bosdyn_msgs::msg::ResponseHeader & msg)
  : msg_(msg)
  {}
  Init_ResponseHeader_error response_timestamp_is_set(::bosdyn_msgs::msg::ResponseHeader::_response_timestamp_is_set_type arg)
  {
    msg_.response_timestamp_is_set = std::move(arg);
    return Init_ResponseHeader_error(msg_);
  }

private:
  ::bosdyn_msgs::msg::ResponseHeader msg_;
};

class Init_ResponseHeader_response_timestamp
{
public:
  explicit Init_ResponseHeader_response_timestamp(::bosdyn_msgs::msg::ResponseHeader & msg)
  : msg_(msg)
  {}
  Init_ResponseHeader_response_timestamp_is_set response_timestamp(::bosdyn_msgs::msg::ResponseHeader::_response_timestamp_type arg)
  {
    msg_.response_timestamp = std::move(arg);
    return Init_ResponseHeader_response_timestamp_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ResponseHeader msg_;
};

class Init_ResponseHeader_request_received_timestamp_is_set
{
public:
  explicit Init_ResponseHeader_request_received_timestamp_is_set(::bosdyn_msgs::msg::ResponseHeader & msg)
  : msg_(msg)
  {}
  Init_ResponseHeader_response_timestamp request_received_timestamp_is_set(::bosdyn_msgs::msg::ResponseHeader::_request_received_timestamp_is_set_type arg)
  {
    msg_.request_received_timestamp_is_set = std::move(arg);
    return Init_ResponseHeader_response_timestamp(msg_);
  }

private:
  ::bosdyn_msgs::msg::ResponseHeader msg_;
};

class Init_ResponseHeader_request_received_timestamp
{
public:
  explicit Init_ResponseHeader_request_received_timestamp(::bosdyn_msgs::msg::ResponseHeader & msg)
  : msg_(msg)
  {}
  Init_ResponseHeader_request_received_timestamp_is_set request_received_timestamp(::bosdyn_msgs::msg::ResponseHeader::_request_received_timestamp_type arg)
  {
    msg_.request_received_timestamp = std::move(arg);
    return Init_ResponseHeader_request_received_timestamp_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ResponseHeader msg_;
};

class Init_ResponseHeader_request_header_is_set
{
public:
  explicit Init_ResponseHeader_request_header_is_set(::bosdyn_msgs::msg::ResponseHeader & msg)
  : msg_(msg)
  {}
  Init_ResponseHeader_request_received_timestamp request_header_is_set(::bosdyn_msgs::msg::ResponseHeader::_request_header_is_set_type arg)
  {
    msg_.request_header_is_set = std::move(arg);
    return Init_ResponseHeader_request_received_timestamp(msg_);
  }

private:
  ::bosdyn_msgs::msg::ResponseHeader msg_;
};

class Init_ResponseHeader_request_header
{
public:
  Init_ResponseHeader_request_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ResponseHeader_request_header_is_set request_header(::bosdyn_msgs::msg::ResponseHeader::_request_header_type arg)
  {
    msg_.request_header = std::move(arg);
    return Init_ResponseHeader_request_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ResponseHeader msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ResponseHeader>()
{
  return bosdyn_msgs::msg::builder::Init_ResponseHeader_request_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__RESPONSE_HEADER__BUILDER_HPP_
