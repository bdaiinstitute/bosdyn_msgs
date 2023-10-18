// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/RobotCommandResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ROBOT_COMMAND_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ROBOT_COMMAND_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/robot_command_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotCommandResponse_robot_command_id
{
public:
  explicit Init_RobotCommandResponse_robot_command_id(::bosdyn_msgs::msg::RobotCommandResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::RobotCommandResponse robot_command_id(::bosdyn_msgs::msg::RobotCommandResponse::_robot_command_id_type arg)
  {
    msg_.robot_command_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotCommandResponse msg_;
};

class Init_RobotCommandResponse_message
{
public:
  explicit Init_RobotCommandResponse_message(::bosdyn_msgs::msg::RobotCommandResponse & msg)
  : msg_(msg)
  {}
  Init_RobotCommandResponse_robot_command_id message(::bosdyn_msgs::msg::RobotCommandResponse::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_RobotCommandResponse_robot_command_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotCommandResponse msg_;
};

class Init_RobotCommandResponse_status
{
public:
  explicit Init_RobotCommandResponse_status(::bosdyn_msgs::msg::RobotCommandResponse & msg)
  : msg_(msg)
  {}
  Init_RobotCommandResponse_message status(::bosdyn_msgs::msg::RobotCommandResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_RobotCommandResponse_message(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotCommandResponse msg_;
};

class Init_RobotCommandResponse_lease_use_result_is_set
{
public:
  explicit Init_RobotCommandResponse_lease_use_result_is_set(::bosdyn_msgs::msg::RobotCommandResponse & msg)
  : msg_(msg)
  {}
  Init_RobotCommandResponse_status lease_use_result_is_set(::bosdyn_msgs::msg::RobotCommandResponse::_lease_use_result_is_set_type arg)
  {
    msg_.lease_use_result_is_set = std::move(arg);
    return Init_RobotCommandResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotCommandResponse msg_;
};

class Init_RobotCommandResponse_lease_use_result
{
public:
  explicit Init_RobotCommandResponse_lease_use_result(::bosdyn_msgs::msg::RobotCommandResponse & msg)
  : msg_(msg)
  {}
  Init_RobotCommandResponse_lease_use_result_is_set lease_use_result(::bosdyn_msgs::msg::RobotCommandResponse::_lease_use_result_type arg)
  {
    msg_.lease_use_result = std::move(arg);
    return Init_RobotCommandResponse_lease_use_result_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotCommandResponse msg_;
};

class Init_RobotCommandResponse_header_is_set
{
public:
  explicit Init_RobotCommandResponse_header_is_set(::bosdyn_msgs::msg::RobotCommandResponse & msg)
  : msg_(msg)
  {}
  Init_RobotCommandResponse_lease_use_result header_is_set(::bosdyn_msgs::msg::RobotCommandResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_RobotCommandResponse_lease_use_result(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotCommandResponse msg_;
};

class Init_RobotCommandResponse_header
{
public:
  Init_RobotCommandResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotCommandResponse_header_is_set header(::bosdyn_msgs::msg::RobotCommandResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RobotCommandResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotCommandResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::RobotCommandResponse>()
{
  return bosdyn_msgs::msg::builder::Init_RobotCommandResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ROBOT_COMMAND_RESPONSE__BUILDER_HPP_
