// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/PowerCommandRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__POWER_COMMAND_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__POWER_COMMAND_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/power_command_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_PowerCommandRequest_request
{
public:
  explicit Init_PowerCommandRequest_request(::bosdyn_msgs::msg::PowerCommandRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::PowerCommandRequest request(::bosdyn_msgs::msg::PowerCommandRequest::_request_type arg)
  {
    msg_.request = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::PowerCommandRequest msg_;
};

class Init_PowerCommandRequest_lease_is_set
{
public:
  explicit Init_PowerCommandRequest_lease_is_set(::bosdyn_msgs::msg::PowerCommandRequest & msg)
  : msg_(msg)
  {}
  Init_PowerCommandRequest_request lease_is_set(::bosdyn_msgs::msg::PowerCommandRequest::_lease_is_set_type arg)
  {
    msg_.lease_is_set = std::move(arg);
    return Init_PowerCommandRequest_request(msg_);
  }

private:
  ::bosdyn_msgs::msg::PowerCommandRequest msg_;
};

class Init_PowerCommandRequest_lease
{
public:
  explicit Init_PowerCommandRequest_lease(::bosdyn_msgs::msg::PowerCommandRequest & msg)
  : msg_(msg)
  {}
  Init_PowerCommandRequest_lease_is_set lease(::bosdyn_msgs::msg::PowerCommandRequest::_lease_type arg)
  {
    msg_.lease = std::move(arg);
    return Init_PowerCommandRequest_lease_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::PowerCommandRequest msg_;
};

class Init_PowerCommandRequest_header_is_set
{
public:
  explicit Init_PowerCommandRequest_header_is_set(::bosdyn_msgs::msg::PowerCommandRequest & msg)
  : msg_(msg)
  {}
  Init_PowerCommandRequest_lease header_is_set(::bosdyn_msgs::msg::PowerCommandRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_PowerCommandRequest_lease(msg_);
  }

private:
  ::bosdyn_msgs::msg::PowerCommandRequest msg_;
};

class Init_PowerCommandRequest_header
{
public:
  Init_PowerCommandRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PowerCommandRequest_header_is_set header(::bosdyn_msgs::msg::PowerCommandRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_PowerCommandRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::PowerCommandRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::PowerCommandRequest>()
{
  return bosdyn_msgs::msg::builder::Init_PowerCommandRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__POWER_COMMAND_REQUEST__BUILDER_HPP_
