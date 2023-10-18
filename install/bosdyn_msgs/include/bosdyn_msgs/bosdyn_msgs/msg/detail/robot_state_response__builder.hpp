// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/RobotStateResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ROBOT_STATE_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ROBOT_STATE_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/robot_state_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotStateResponse_robot_state_is_set
{
public:
  explicit Init_RobotStateResponse_robot_state_is_set(::bosdyn_msgs::msg::RobotStateResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::RobotStateResponse robot_state_is_set(::bosdyn_msgs::msg::RobotStateResponse::_robot_state_is_set_type arg)
  {
    msg_.robot_state_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotStateResponse msg_;
};

class Init_RobotStateResponse_robot_state
{
public:
  explicit Init_RobotStateResponse_robot_state(::bosdyn_msgs::msg::RobotStateResponse & msg)
  : msg_(msg)
  {}
  Init_RobotStateResponse_robot_state_is_set robot_state(::bosdyn_msgs::msg::RobotStateResponse::_robot_state_type arg)
  {
    msg_.robot_state = std::move(arg);
    return Init_RobotStateResponse_robot_state_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotStateResponse msg_;
};

class Init_RobotStateResponse_header_is_set
{
public:
  explicit Init_RobotStateResponse_header_is_set(::bosdyn_msgs::msg::RobotStateResponse & msg)
  : msg_(msg)
  {}
  Init_RobotStateResponse_robot_state header_is_set(::bosdyn_msgs::msg::RobotStateResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_RobotStateResponse_robot_state(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotStateResponse msg_;
};

class Init_RobotStateResponse_header
{
public:
  Init_RobotStateResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotStateResponse_header_is_set header(::bosdyn_msgs::msg::RobotStateResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RobotStateResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotStateResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::RobotStateResponse>()
{
  return bosdyn_msgs::msg::builder::Init_RobotStateResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ROBOT_STATE_RESPONSE__BUILDER_HPP_
