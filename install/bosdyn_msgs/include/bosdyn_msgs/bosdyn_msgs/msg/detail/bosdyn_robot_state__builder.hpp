// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/BosdynRobotState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BOSDYN_ROBOT_STATE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__BOSDYN_ROBOT_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/bosdyn_robot_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_BosdynRobotState_state_name
{
public:
  explicit Init_BosdynRobotState_state_name(::bosdyn_msgs::msg::BosdynRobotState & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::BosdynRobotState state_name(::bosdyn_msgs::msg::BosdynRobotState::_state_name_type arg)
  {
    msg_.state_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::BosdynRobotState msg_;
};

class Init_BosdynRobotState_child_is_set
{
public:
  explicit Init_BosdynRobotState_child_is_set(::bosdyn_msgs::msg::BosdynRobotState & msg)
  : msg_(msg)
  {}
  Init_BosdynRobotState_state_name child_is_set(::bosdyn_msgs::msg::BosdynRobotState::_child_is_set_type arg)
  {
    msg_.child_is_set = std::move(arg);
    return Init_BosdynRobotState_state_name(msg_);
  }

private:
  ::bosdyn_msgs::msg::BosdynRobotState msg_;
};

class Init_BosdynRobotState_child
{
public:
  explicit Init_BosdynRobotState_child(::bosdyn_msgs::msg::BosdynRobotState & msg)
  : msg_(msg)
  {}
  Init_BosdynRobotState_child_is_set child(::bosdyn_msgs::msg::BosdynRobotState::_child_type arg)
  {
    msg_.child = std::move(arg);
    return Init_BosdynRobotState_child_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::BosdynRobotState msg_;
};

class Init_BosdynRobotState_host
{
public:
  explicit Init_BosdynRobotState_host(::bosdyn_msgs::msg::BosdynRobotState & msg)
  : msg_(msg)
  {}
  Init_BosdynRobotState_child host(::bosdyn_msgs::msg::BosdynRobotState::_host_type arg)
  {
    msg_.host = std::move(arg);
    return Init_BosdynRobotState_child(msg_);
  }

private:
  ::bosdyn_msgs::msg::BosdynRobotState msg_;
};

class Init_BosdynRobotState_service_name
{
public:
  Init_BosdynRobotState_service_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BosdynRobotState_host service_name(::bosdyn_msgs::msg::BosdynRobotState::_service_name_type arg)
  {
    msg_.service_name = std::move(arg);
    return Init_BosdynRobotState_host(msg_);
  }

private:
  ::bosdyn_msgs::msg::BosdynRobotState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::BosdynRobotState>()
{
  return bosdyn_msgs::msg::builder::Init_BosdynRobotState_service_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__BOSDYN_ROBOT_STATE__BUILDER_HPP_
