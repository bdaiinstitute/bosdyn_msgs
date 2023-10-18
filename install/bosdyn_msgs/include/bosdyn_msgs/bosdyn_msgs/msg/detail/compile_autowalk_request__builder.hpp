// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/CompileAutowalkRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__COMPILE_AUTOWALK_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__COMPILE_AUTOWALK_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/compile_autowalk_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_CompileAutowalkRequest_treat_warnings_as_errors
{
public:
  explicit Init_CompileAutowalkRequest_treat_warnings_as_errors(::bosdyn_msgs::msg::CompileAutowalkRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::CompileAutowalkRequest treat_warnings_as_errors(::bosdyn_msgs::msg::CompileAutowalkRequest::_treat_warnings_as_errors_type arg)
  {
    msg_.treat_warnings_as_errors = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::CompileAutowalkRequest msg_;
};

class Init_CompileAutowalkRequest_walk_is_set
{
public:
  explicit Init_CompileAutowalkRequest_walk_is_set(::bosdyn_msgs::msg::CompileAutowalkRequest & msg)
  : msg_(msg)
  {}
  Init_CompileAutowalkRequest_treat_warnings_as_errors walk_is_set(::bosdyn_msgs::msg::CompileAutowalkRequest::_walk_is_set_type arg)
  {
    msg_.walk_is_set = std::move(arg);
    return Init_CompileAutowalkRequest_treat_warnings_as_errors(msg_);
  }

private:
  ::bosdyn_msgs::msg::CompileAutowalkRequest msg_;
};

class Init_CompileAutowalkRequest_walk
{
public:
  explicit Init_CompileAutowalkRequest_walk(::bosdyn_msgs::msg::CompileAutowalkRequest & msg)
  : msg_(msg)
  {}
  Init_CompileAutowalkRequest_walk_is_set walk(::bosdyn_msgs::msg::CompileAutowalkRequest::_walk_type arg)
  {
    msg_.walk = std::move(arg);
    return Init_CompileAutowalkRequest_walk_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::CompileAutowalkRequest msg_;
};

class Init_CompileAutowalkRequest_header_is_set
{
public:
  explicit Init_CompileAutowalkRequest_header_is_set(::bosdyn_msgs::msg::CompileAutowalkRequest & msg)
  : msg_(msg)
  {}
  Init_CompileAutowalkRequest_walk header_is_set(::bosdyn_msgs::msg::CompileAutowalkRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_CompileAutowalkRequest_walk(msg_);
  }

private:
  ::bosdyn_msgs::msg::CompileAutowalkRequest msg_;
};

class Init_CompileAutowalkRequest_header
{
public:
  Init_CompileAutowalkRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CompileAutowalkRequest_header_is_set header(::bosdyn_msgs::msg::CompileAutowalkRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CompileAutowalkRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::CompileAutowalkRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::CompileAutowalkRequest>()
{
  return bosdyn_msgs::msg::builder::Init_CompileAutowalkRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__COMPILE_AUTOWALK_REQUEST__BUILDER_HPP_
