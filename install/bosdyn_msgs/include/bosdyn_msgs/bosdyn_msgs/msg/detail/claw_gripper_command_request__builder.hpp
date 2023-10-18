// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ClawGripperCommandRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CLAW_GRIPPER_COMMAND_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CLAW_GRIPPER_COMMAND_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/claw_gripper_command_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ClawGripperCommandRequest_disable_force_on_contact
{
public:
  explicit Init_ClawGripperCommandRequest_disable_force_on_contact(::bosdyn_msgs::msg::ClawGripperCommandRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ClawGripperCommandRequest disable_force_on_contact(::bosdyn_msgs::msg::ClawGripperCommandRequest::_disable_force_on_contact_type arg)
  {
    msg_.disable_force_on_contact = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ClawGripperCommandRequest msg_;
};

class Init_ClawGripperCommandRequest_maximum_torque_is_set
{
public:
  explicit Init_ClawGripperCommandRequest_maximum_torque_is_set(::bosdyn_msgs::msg::ClawGripperCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ClawGripperCommandRequest_disable_force_on_contact maximum_torque_is_set(::bosdyn_msgs::msg::ClawGripperCommandRequest::_maximum_torque_is_set_type arg)
  {
    msg_.maximum_torque_is_set = std::move(arg);
    return Init_ClawGripperCommandRequest_disable_force_on_contact(msg_);
  }

private:
  ::bosdyn_msgs::msg::ClawGripperCommandRequest msg_;
};

class Init_ClawGripperCommandRequest_maximum_torque
{
public:
  explicit Init_ClawGripperCommandRequest_maximum_torque(::bosdyn_msgs::msg::ClawGripperCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ClawGripperCommandRequest_maximum_torque_is_set maximum_torque(::bosdyn_msgs::msg::ClawGripperCommandRequest::_maximum_torque_type arg)
  {
    msg_.maximum_torque = std::move(arg);
    return Init_ClawGripperCommandRequest_maximum_torque_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ClawGripperCommandRequest msg_;
};

class Init_ClawGripperCommandRequest_maximum_open_close_acceleration_is_set
{
public:
  explicit Init_ClawGripperCommandRequest_maximum_open_close_acceleration_is_set(::bosdyn_msgs::msg::ClawGripperCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ClawGripperCommandRequest_maximum_torque maximum_open_close_acceleration_is_set(::bosdyn_msgs::msg::ClawGripperCommandRequest::_maximum_open_close_acceleration_is_set_type arg)
  {
    msg_.maximum_open_close_acceleration_is_set = std::move(arg);
    return Init_ClawGripperCommandRequest_maximum_torque(msg_);
  }

private:
  ::bosdyn_msgs::msg::ClawGripperCommandRequest msg_;
};

class Init_ClawGripperCommandRequest_maximum_open_close_acceleration
{
public:
  explicit Init_ClawGripperCommandRequest_maximum_open_close_acceleration(::bosdyn_msgs::msg::ClawGripperCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ClawGripperCommandRequest_maximum_open_close_acceleration_is_set maximum_open_close_acceleration(::bosdyn_msgs::msg::ClawGripperCommandRequest::_maximum_open_close_acceleration_type arg)
  {
    msg_.maximum_open_close_acceleration = std::move(arg);
    return Init_ClawGripperCommandRequest_maximum_open_close_acceleration_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ClawGripperCommandRequest msg_;
};

class Init_ClawGripperCommandRequest_maximum_open_close_velocity_is_set
{
public:
  explicit Init_ClawGripperCommandRequest_maximum_open_close_velocity_is_set(::bosdyn_msgs::msg::ClawGripperCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ClawGripperCommandRequest_maximum_open_close_acceleration maximum_open_close_velocity_is_set(::bosdyn_msgs::msg::ClawGripperCommandRequest::_maximum_open_close_velocity_is_set_type arg)
  {
    msg_.maximum_open_close_velocity_is_set = std::move(arg);
    return Init_ClawGripperCommandRequest_maximum_open_close_acceleration(msg_);
  }

private:
  ::bosdyn_msgs::msg::ClawGripperCommandRequest msg_;
};

class Init_ClawGripperCommandRequest_maximum_open_close_velocity
{
public:
  explicit Init_ClawGripperCommandRequest_maximum_open_close_velocity(::bosdyn_msgs::msg::ClawGripperCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ClawGripperCommandRequest_maximum_open_close_velocity_is_set maximum_open_close_velocity(::bosdyn_msgs::msg::ClawGripperCommandRequest::_maximum_open_close_velocity_type arg)
  {
    msg_.maximum_open_close_velocity = std::move(arg);
    return Init_ClawGripperCommandRequest_maximum_open_close_velocity_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ClawGripperCommandRequest msg_;
};

class Init_ClawGripperCommandRequest_trajectory_is_set
{
public:
  explicit Init_ClawGripperCommandRequest_trajectory_is_set(::bosdyn_msgs::msg::ClawGripperCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ClawGripperCommandRequest_maximum_open_close_velocity trajectory_is_set(::bosdyn_msgs::msg::ClawGripperCommandRequest::_trajectory_is_set_type arg)
  {
    msg_.trajectory_is_set = std::move(arg);
    return Init_ClawGripperCommandRequest_maximum_open_close_velocity(msg_);
  }

private:
  ::bosdyn_msgs::msg::ClawGripperCommandRequest msg_;
};

class Init_ClawGripperCommandRequest_trajectory
{
public:
  Init_ClawGripperCommandRequest_trajectory()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ClawGripperCommandRequest_trajectory_is_set trajectory(::bosdyn_msgs::msg::ClawGripperCommandRequest::_trajectory_type arg)
  {
    msg_.trajectory = std::move(arg);
    return Init_ClawGripperCommandRequest_trajectory_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ClawGripperCommandRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ClawGripperCommandRequest>()
{
  return bosdyn_msgs::msg::builder::Init_ClawGripperCommandRequest_trajectory();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CLAW_GRIPPER_COMMAND_REQUEST__BUILDER_HPP_
