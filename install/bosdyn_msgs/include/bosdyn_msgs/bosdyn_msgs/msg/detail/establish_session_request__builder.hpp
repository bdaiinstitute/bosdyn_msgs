// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/EstablishSessionRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ESTABLISH_SESSION_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ESTABLISH_SESSION_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/establish_session_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_EstablishSessionRequest_leases
{
public:
  explicit Init_EstablishSessionRequest_leases(::bosdyn_msgs::msg::EstablishSessionRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::EstablishSessionRequest leases(::bosdyn_msgs::msg::EstablishSessionRequest::_leases_type arg)
  {
    msg_.leases = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::EstablishSessionRequest msg_;
};

class Init_EstablishSessionRequest_header_is_set
{
public:
  explicit Init_EstablishSessionRequest_header_is_set(::bosdyn_msgs::msg::EstablishSessionRequest & msg)
  : msg_(msg)
  {}
  Init_EstablishSessionRequest_leases header_is_set(::bosdyn_msgs::msg::EstablishSessionRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_EstablishSessionRequest_leases(msg_);
  }

private:
  ::bosdyn_msgs::msg::EstablishSessionRequest msg_;
};

class Init_EstablishSessionRequest_header
{
public:
  Init_EstablishSessionRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EstablishSessionRequest_header_is_set header(::bosdyn_msgs::msg::EstablishSessionRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_EstablishSessionRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::EstablishSessionRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::EstablishSessionRequest>()
{
  return bosdyn_msgs::msg::builder::Init_EstablishSessionRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ESTABLISH_SESSION_REQUEST__BUILDER_HPP_
