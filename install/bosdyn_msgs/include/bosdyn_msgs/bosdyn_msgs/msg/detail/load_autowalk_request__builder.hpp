// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/LoadAutowalkRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LOAD_AUTOWALK_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LOAD_AUTOWALK_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/load_autowalk_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_LoadAutowalkRequest_treat_warnings_as_errors
{
public:
  explicit Init_LoadAutowalkRequest_treat_warnings_as_errors(::bosdyn_msgs::msg::LoadAutowalkRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::LoadAutowalkRequest treat_warnings_as_errors(::bosdyn_msgs::msg::LoadAutowalkRequest::_treat_warnings_as_errors_type arg)
  {
    msg_.treat_warnings_as_errors = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::LoadAutowalkRequest msg_;
};

class Init_LoadAutowalkRequest_leases
{
public:
  explicit Init_LoadAutowalkRequest_leases(::bosdyn_msgs::msg::LoadAutowalkRequest & msg)
  : msg_(msg)
  {}
  Init_LoadAutowalkRequest_treat_warnings_as_errors leases(::bosdyn_msgs::msg::LoadAutowalkRequest::_leases_type arg)
  {
    msg_.leases = std::move(arg);
    return Init_LoadAutowalkRequest_treat_warnings_as_errors(msg_);
  }

private:
  ::bosdyn_msgs::msg::LoadAutowalkRequest msg_;
};

class Init_LoadAutowalkRequest_walk_is_set
{
public:
  explicit Init_LoadAutowalkRequest_walk_is_set(::bosdyn_msgs::msg::LoadAutowalkRequest & msg)
  : msg_(msg)
  {}
  Init_LoadAutowalkRequest_leases walk_is_set(::bosdyn_msgs::msg::LoadAutowalkRequest::_walk_is_set_type arg)
  {
    msg_.walk_is_set = std::move(arg);
    return Init_LoadAutowalkRequest_leases(msg_);
  }

private:
  ::bosdyn_msgs::msg::LoadAutowalkRequest msg_;
};

class Init_LoadAutowalkRequest_walk
{
public:
  explicit Init_LoadAutowalkRequest_walk(::bosdyn_msgs::msg::LoadAutowalkRequest & msg)
  : msg_(msg)
  {}
  Init_LoadAutowalkRequest_walk_is_set walk(::bosdyn_msgs::msg::LoadAutowalkRequest::_walk_type arg)
  {
    msg_.walk = std::move(arg);
    return Init_LoadAutowalkRequest_walk_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::LoadAutowalkRequest msg_;
};

class Init_LoadAutowalkRequest_header_is_set
{
public:
  explicit Init_LoadAutowalkRequest_header_is_set(::bosdyn_msgs::msg::LoadAutowalkRequest & msg)
  : msg_(msg)
  {}
  Init_LoadAutowalkRequest_walk header_is_set(::bosdyn_msgs::msg::LoadAutowalkRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_LoadAutowalkRequest_walk(msg_);
  }

private:
  ::bosdyn_msgs::msg::LoadAutowalkRequest msg_;
};

class Init_LoadAutowalkRequest_header
{
public:
  Init_LoadAutowalkRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LoadAutowalkRequest_header_is_set header(::bosdyn_msgs::msg::LoadAutowalkRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LoadAutowalkRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::LoadAutowalkRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::LoadAutowalkRequest>()
{
  return bosdyn_msgs::msg::builder::Init_LoadAutowalkRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LOAD_AUTOWALK_REQUEST__BUILDER_HPP_
