// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ListPayloadsResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LIST_PAYLOADS_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LIST_PAYLOADS_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/list_payloads_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ListPayloadsResponse_payloads
{
public:
  explicit Init_ListPayloadsResponse_payloads(::bosdyn_msgs::msg::ListPayloadsResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ListPayloadsResponse payloads(::bosdyn_msgs::msg::ListPayloadsResponse::_payloads_type arg)
  {
    msg_.payloads = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ListPayloadsResponse msg_;
};

class Init_ListPayloadsResponse_header_is_set
{
public:
  explicit Init_ListPayloadsResponse_header_is_set(::bosdyn_msgs::msg::ListPayloadsResponse & msg)
  : msg_(msg)
  {}
  Init_ListPayloadsResponse_payloads header_is_set(::bosdyn_msgs::msg::ListPayloadsResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_ListPayloadsResponse_payloads(msg_);
  }

private:
  ::bosdyn_msgs::msg::ListPayloadsResponse msg_;
};

class Init_ListPayloadsResponse_header
{
public:
  Init_ListPayloadsResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ListPayloadsResponse_header_is_set header(::bosdyn_msgs::msg::ListPayloadsResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ListPayloadsResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ListPayloadsResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ListPayloadsResponse>()
{
  return bosdyn_msgs::msg::builder::Init_ListPayloadsResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LIST_PAYLOADS_RESPONSE__BUILDER_HPP_
