// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/TeardownSessionRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__TEARDOWN_SESSION_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__TEARDOWN_SESSION_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/teardown_session_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_TeardownSessionRequest_session_id
{
public:
  explicit Init_TeardownSessionRequest_session_id(::bosdyn_msgs::msg::TeardownSessionRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::TeardownSessionRequest session_id(::bosdyn_msgs::msg::TeardownSessionRequest::_session_id_type arg)
  {
    msg_.session_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::TeardownSessionRequest msg_;
};

class Init_TeardownSessionRequest_header_is_set
{
public:
  explicit Init_TeardownSessionRequest_header_is_set(::bosdyn_msgs::msg::TeardownSessionRequest & msg)
  : msg_(msg)
  {}
  Init_TeardownSessionRequest_session_id header_is_set(::bosdyn_msgs::msg::TeardownSessionRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_TeardownSessionRequest_session_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::TeardownSessionRequest msg_;
};

class Init_TeardownSessionRequest_header
{
public:
  Init_TeardownSessionRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TeardownSessionRequest_header_is_set header(::bosdyn_msgs::msg::TeardownSessionRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_TeardownSessionRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::TeardownSessionRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::TeardownSessionRequest>()
{
  return bosdyn_msgs::msg::builder::Init_TeardownSessionRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__TEARDOWN_SESSION_REQUEST__BUILDER_HPP_
