// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/SpotCheckCommandRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SPOT_CHECK_COMMAND_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SPOT_CHECK_COMMAND_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/spot_check_command_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_SpotCheckCommandRequest_command
{
public:
  explicit Init_SpotCheckCommandRequest_command(::bosdyn_msgs::msg::SpotCheckCommandRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::SpotCheckCommandRequest command(::bosdyn_msgs::msg::SpotCheckCommandRequest::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::SpotCheckCommandRequest msg_;
};

class Init_SpotCheckCommandRequest_lease_is_set
{
public:
  explicit Init_SpotCheckCommandRequest_lease_is_set(::bosdyn_msgs::msg::SpotCheckCommandRequest & msg)
  : msg_(msg)
  {}
  Init_SpotCheckCommandRequest_command lease_is_set(::bosdyn_msgs::msg::SpotCheckCommandRequest::_lease_is_set_type arg)
  {
    msg_.lease_is_set = std::move(arg);
    return Init_SpotCheckCommandRequest_command(msg_);
  }

private:
  ::bosdyn_msgs::msg::SpotCheckCommandRequest msg_;
};

class Init_SpotCheckCommandRequest_lease
{
public:
  explicit Init_SpotCheckCommandRequest_lease(::bosdyn_msgs::msg::SpotCheckCommandRequest & msg)
  : msg_(msg)
  {}
  Init_SpotCheckCommandRequest_lease_is_set lease(::bosdyn_msgs::msg::SpotCheckCommandRequest::_lease_type arg)
  {
    msg_.lease = std::move(arg);
    return Init_SpotCheckCommandRequest_lease_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SpotCheckCommandRequest msg_;
};

class Init_SpotCheckCommandRequest_header_is_set
{
public:
  explicit Init_SpotCheckCommandRequest_header_is_set(::bosdyn_msgs::msg::SpotCheckCommandRequest & msg)
  : msg_(msg)
  {}
  Init_SpotCheckCommandRequest_lease header_is_set(::bosdyn_msgs::msg::SpotCheckCommandRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_SpotCheckCommandRequest_lease(msg_);
  }

private:
  ::bosdyn_msgs::msg::SpotCheckCommandRequest msg_;
};

class Init_SpotCheckCommandRequest_header
{
public:
  Init_SpotCheckCommandRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpotCheckCommandRequest_header_is_set header(::bosdyn_msgs::msg::SpotCheckCommandRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SpotCheckCommandRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SpotCheckCommandRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::SpotCheckCommandRequest>()
{
  return bosdyn_msgs::msg::builder::Init_SpotCheckCommandRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SPOT_CHECK_COMMAND_REQUEST__BUILDER_HPP_
