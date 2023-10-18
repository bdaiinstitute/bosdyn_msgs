// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ArmJointMoveCommandRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_JOINT_MOVE_COMMAND_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_JOINT_MOVE_COMMAND_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/arm_joint_move_command_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ArmJointMoveCommandRequest_trajectory_is_set
{
public:
  explicit Init_ArmJointMoveCommandRequest_trajectory_is_set(::bosdyn_msgs::msg::ArmJointMoveCommandRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ArmJointMoveCommandRequest trajectory_is_set(::bosdyn_msgs::msg::ArmJointMoveCommandRequest::_trajectory_is_set_type arg)
  {
    msg_.trajectory_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmJointMoveCommandRequest msg_;
};

class Init_ArmJointMoveCommandRequest_trajectory
{
public:
  Init_ArmJointMoveCommandRequest_trajectory()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmJointMoveCommandRequest_trajectory_is_set trajectory(::bosdyn_msgs::msg::ArmJointMoveCommandRequest::_trajectory_type arg)
  {
    msg_.trajectory = std::move(arg);
    return Init_ArmJointMoveCommandRequest_trajectory_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmJointMoveCommandRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ArmJointMoveCommandRequest>()
{
  return bosdyn_msgs::msg::builder::Init_ArmJointMoveCommandRequest_trajectory();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_JOINT_MOVE_COMMAND_REQUEST__BUILDER_HPP_
