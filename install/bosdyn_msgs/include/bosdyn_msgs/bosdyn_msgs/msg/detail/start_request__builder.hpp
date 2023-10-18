// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/StartRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__START_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__START_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/start_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_StartRequest_params_is_set
{
public:
  explicit Init_StartRequest_params_is_set(::bosdyn_msgs::msg::StartRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::StartRequest params_is_set(::bosdyn_msgs::msg::StartRequest::_params_is_set_type arg)
  {
    msg_.params_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::StartRequest msg_;
};

class Init_StartRequest_params
{
public:
  explicit Init_StartRequest_params(::bosdyn_msgs::msg::StartRequest & msg)
  : msg_(msg)
  {}
  Init_StartRequest_params_is_set params(::bosdyn_msgs::msg::StartRequest::_params_type arg)
  {
    msg_.params = std::move(arg);
    return Init_StartRequest_params_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::StartRequest msg_;
};

class Init_StartRequest_leases
{
public:
  explicit Init_StartRequest_leases(::bosdyn_msgs::msg::StartRequest & msg)
  : msg_(msg)
  {}
  Init_StartRequest_params leases(::bosdyn_msgs::msg::StartRequest::_leases_type arg)
  {
    msg_.leases = std::move(arg);
    return Init_StartRequest_params(msg_);
  }

private:
  ::bosdyn_msgs::msg::StartRequest msg_;
};

class Init_StartRequest_header_is_set
{
public:
  explicit Init_StartRequest_header_is_set(::bosdyn_msgs::msg::StartRequest & msg)
  : msg_(msg)
  {}
  Init_StartRequest_leases header_is_set(::bosdyn_msgs::msg::StartRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_StartRequest_leases(msg_);
  }

private:
  ::bosdyn_msgs::msg::StartRequest msg_;
};

class Init_StartRequest_header
{
public:
  Init_StartRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StartRequest_header_is_set header(::bosdyn_msgs::msg::StartRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_StartRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::StartRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::StartRequest>()
{
  return bosdyn_msgs::msg::builder::Init_StartRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__START_REQUEST__BUILDER_HPP_
