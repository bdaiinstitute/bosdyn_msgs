// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/RobotCommandRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ROBOT_COMMAND_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ROBOT_COMMAND_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/robot_command_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotCommandRequest_clock_identifier
{
public:
  explicit Init_RobotCommandRequest_clock_identifier(::bosdyn_msgs::msg::RobotCommandRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::RobotCommandRequest clock_identifier(::bosdyn_msgs::msg::RobotCommandRequest::_clock_identifier_type arg)
  {
    msg_.clock_identifier = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotCommandRequest msg_;
};

class Init_RobotCommandRequest_command_is_set
{
public:
  explicit Init_RobotCommandRequest_command_is_set(::bosdyn_msgs::msg::RobotCommandRequest & msg)
  : msg_(msg)
  {}
  Init_RobotCommandRequest_clock_identifier command_is_set(::bosdyn_msgs::msg::RobotCommandRequest::_command_is_set_type arg)
  {
    msg_.command_is_set = std::move(arg);
    return Init_RobotCommandRequest_clock_identifier(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotCommandRequest msg_;
};

class Init_RobotCommandRequest_command
{
public:
  explicit Init_RobotCommandRequest_command(::bosdyn_msgs::msg::RobotCommandRequest & msg)
  : msg_(msg)
  {}
  Init_RobotCommandRequest_command_is_set command(::bosdyn_msgs::msg::RobotCommandRequest::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_RobotCommandRequest_command_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotCommandRequest msg_;
};

class Init_RobotCommandRequest_lease_is_set
{
public:
  explicit Init_RobotCommandRequest_lease_is_set(::bosdyn_msgs::msg::RobotCommandRequest & msg)
  : msg_(msg)
  {}
  Init_RobotCommandRequest_command lease_is_set(::bosdyn_msgs::msg::RobotCommandRequest::_lease_is_set_type arg)
  {
    msg_.lease_is_set = std::move(arg);
    return Init_RobotCommandRequest_command(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotCommandRequest msg_;
};

class Init_RobotCommandRequest_lease
{
public:
  explicit Init_RobotCommandRequest_lease(::bosdyn_msgs::msg::RobotCommandRequest & msg)
  : msg_(msg)
  {}
  Init_RobotCommandRequest_lease_is_set lease(::bosdyn_msgs::msg::RobotCommandRequest::_lease_type arg)
  {
    msg_.lease = std::move(arg);
    return Init_RobotCommandRequest_lease_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotCommandRequest msg_;
};

class Init_RobotCommandRequest_header_is_set
{
public:
  explicit Init_RobotCommandRequest_header_is_set(::bosdyn_msgs::msg::RobotCommandRequest & msg)
  : msg_(msg)
  {}
  Init_RobotCommandRequest_lease header_is_set(::bosdyn_msgs::msg::RobotCommandRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_RobotCommandRequest_lease(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotCommandRequest msg_;
};

class Init_RobotCommandRequest_header
{
public:
  Init_RobotCommandRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotCommandRequest_header_is_set header(::bosdyn_msgs::msg::RobotCommandRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RobotCommandRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotCommandRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::RobotCommandRequest>()
{
  return bosdyn_msgs::msg::builder::Init_RobotCommandRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ROBOT_COMMAND_REQUEST__BUILDER_HPP_
