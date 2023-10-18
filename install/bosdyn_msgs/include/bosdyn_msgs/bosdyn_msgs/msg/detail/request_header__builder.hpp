// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/RequestHeader.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__REQUEST_HEADER__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__REQUEST_HEADER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/request_header__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_RequestHeader_disable_rpc_logging
{
public:
  explicit Init_RequestHeader_disable_rpc_logging(::bosdyn_msgs::msg::RequestHeader & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::RequestHeader disable_rpc_logging(::bosdyn_msgs::msg::RequestHeader::_disable_rpc_logging_type arg)
  {
    msg_.disable_rpc_logging = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::RequestHeader msg_;
};

class Init_RequestHeader_client_name
{
public:
  explicit Init_RequestHeader_client_name(::bosdyn_msgs::msg::RequestHeader & msg)
  : msg_(msg)
  {}
  Init_RequestHeader_disable_rpc_logging client_name(::bosdyn_msgs::msg::RequestHeader::_client_name_type arg)
  {
    msg_.client_name = std::move(arg);
    return Init_RequestHeader_disable_rpc_logging(msg_);
  }

private:
  ::bosdyn_msgs::msg::RequestHeader msg_;
};

class Init_RequestHeader_request_timestamp_is_set
{
public:
  explicit Init_RequestHeader_request_timestamp_is_set(::bosdyn_msgs::msg::RequestHeader & msg)
  : msg_(msg)
  {}
  Init_RequestHeader_client_name request_timestamp_is_set(::bosdyn_msgs::msg::RequestHeader::_request_timestamp_is_set_type arg)
  {
    msg_.request_timestamp_is_set = std::move(arg);
    return Init_RequestHeader_client_name(msg_);
  }

private:
  ::bosdyn_msgs::msg::RequestHeader msg_;
};

class Init_RequestHeader_request_timestamp
{
public:
  Init_RequestHeader_request_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RequestHeader_request_timestamp_is_set request_timestamp(::bosdyn_msgs::msg::RequestHeader::_request_timestamp_type arg)
  {
    msg_.request_timestamp = std::move(arg);
    return Init_RequestHeader_request_timestamp_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RequestHeader msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::RequestHeader>()
{
  return bosdyn_msgs::msg::builder::Init_RequestHeader_request_timestamp();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__REQUEST_HEADER__BUILDER_HPP_
