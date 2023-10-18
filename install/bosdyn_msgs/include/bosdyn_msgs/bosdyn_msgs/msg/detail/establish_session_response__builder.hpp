// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/EstablishSessionResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ESTABLISH_SESSION_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ESTABLISH_SESSION_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/establish_session_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_EstablishSessionResponse_lease_use_results
{
public:
  explicit Init_EstablishSessionResponse_lease_use_results(::bosdyn_msgs::msg::EstablishSessionResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::EstablishSessionResponse lease_use_results(::bosdyn_msgs::msg::EstablishSessionResponse::_lease_use_results_type arg)
  {
    msg_.lease_use_results = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::EstablishSessionResponse msg_;
};

class Init_EstablishSessionResponse_missing_lease_resources
{
public:
  explicit Init_EstablishSessionResponse_missing_lease_resources(::bosdyn_msgs::msg::EstablishSessionResponse & msg)
  : msg_(msg)
  {}
  Init_EstablishSessionResponse_lease_use_results missing_lease_resources(::bosdyn_msgs::msg::EstablishSessionResponse::_missing_lease_resources_type arg)
  {
    msg_.missing_lease_resources = std::move(arg);
    return Init_EstablishSessionResponse_lease_use_results(msg_);
  }

private:
  ::bosdyn_msgs::msg::EstablishSessionResponse msg_;
};

class Init_EstablishSessionResponse_session_id
{
public:
  explicit Init_EstablishSessionResponse_session_id(::bosdyn_msgs::msg::EstablishSessionResponse & msg)
  : msg_(msg)
  {}
  Init_EstablishSessionResponse_missing_lease_resources session_id(::bosdyn_msgs::msg::EstablishSessionResponse::_session_id_type arg)
  {
    msg_.session_id = std::move(arg);
    return Init_EstablishSessionResponse_missing_lease_resources(msg_);
  }

private:
  ::bosdyn_msgs::msg::EstablishSessionResponse msg_;
};

class Init_EstablishSessionResponse_status
{
public:
  explicit Init_EstablishSessionResponse_status(::bosdyn_msgs::msg::EstablishSessionResponse & msg)
  : msg_(msg)
  {}
  Init_EstablishSessionResponse_session_id status(::bosdyn_msgs::msg::EstablishSessionResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_EstablishSessionResponse_session_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::EstablishSessionResponse msg_;
};

class Init_EstablishSessionResponse_header_is_set
{
public:
  explicit Init_EstablishSessionResponse_header_is_set(::bosdyn_msgs::msg::EstablishSessionResponse & msg)
  : msg_(msg)
  {}
  Init_EstablishSessionResponse_status header_is_set(::bosdyn_msgs::msg::EstablishSessionResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_EstablishSessionResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::EstablishSessionResponse msg_;
};

class Init_EstablishSessionResponse_header
{
public:
  Init_EstablishSessionResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EstablishSessionResponse_header_is_set header(::bosdyn_msgs::msg::EstablishSessionResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_EstablishSessionResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::EstablishSessionResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::EstablishSessionResponse>()
{
  return bosdyn_msgs::msg::builder::Init_EstablishSessionResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ESTABLISH_SESSION_RESPONSE__BUILDER_HPP_
