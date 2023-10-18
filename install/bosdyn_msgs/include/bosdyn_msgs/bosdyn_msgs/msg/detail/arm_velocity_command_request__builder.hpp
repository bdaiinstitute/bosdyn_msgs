// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ArmVelocityCommandRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_VELOCITY_COMMAND_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_VELOCITY_COMMAND_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/arm_velocity_command_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ArmVelocityCommandRequest_end_time_is_set
{
public:
  explicit Init_ArmVelocityCommandRequest_end_time_is_set(::bosdyn_msgs::msg::ArmVelocityCommandRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ArmVelocityCommandRequest end_time_is_set(::bosdyn_msgs::msg::ArmVelocityCommandRequest::_end_time_is_set_type arg)
  {
    msg_.end_time_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmVelocityCommandRequest msg_;
};

class Init_ArmVelocityCommandRequest_end_time
{
public:
  explicit Init_ArmVelocityCommandRequest_end_time(::bosdyn_msgs::msg::ArmVelocityCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ArmVelocityCommandRequest_end_time_is_set end_time(::bosdyn_msgs::msg::ArmVelocityCommandRequest::_end_time_type arg)
  {
    msg_.end_time = std::move(arg);
    return Init_ArmVelocityCommandRequest_end_time_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmVelocityCommandRequest msg_;
};

class Init_ArmVelocityCommandRequest_maximum_acceleration_is_set
{
public:
  explicit Init_ArmVelocityCommandRequest_maximum_acceleration_is_set(::bosdyn_msgs::msg::ArmVelocityCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ArmVelocityCommandRequest_end_time maximum_acceleration_is_set(::bosdyn_msgs::msg::ArmVelocityCommandRequest::_maximum_acceleration_is_set_type arg)
  {
    msg_.maximum_acceleration_is_set = std::move(arg);
    return Init_ArmVelocityCommandRequest_end_time(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmVelocityCommandRequest msg_;
};

class Init_ArmVelocityCommandRequest_maximum_acceleration
{
public:
  explicit Init_ArmVelocityCommandRequest_maximum_acceleration(::bosdyn_msgs::msg::ArmVelocityCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ArmVelocityCommandRequest_maximum_acceleration_is_set maximum_acceleration(::bosdyn_msgs::msg::ArmVelocityCommandRequest::_maximum_acceleration_type arg)
  {
    msg_.maximum_acceleration = std::move(arg);
    return Init_ArmVelocityCommandRequest_maximum_acceleration_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmVelocityCommandRequest msg_;
};

class Init_ArmVelocityCommandRequest_angular_velocity_of_hand_rt_odom_in_hand_is_set
{
public:
  explicit Init_ArmVelocityCommandRequest_angular_velocity_of_hand_rt_odom_in_hand_is_set(::bosdyn_msgs::msg::ArmVelocityCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ArmVelocityCommandRequest_maximum_acceleration angular_velocity_of_hand_rt_odom_in_hand_is_set(::bosdyn_msgs::msg::ArmVelocityCommandRequest::_angular_velocity_of_hand_rt_odom_in_hand_is_set_type arg)
  {
    msg_.angular_velocity_of_hand_rt_odom_in_hand_is_set = std::move(arg);
    return Init_ArmVelocityCommandRequest_maximum_acceleration(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmVelocityCommandRequest msg_;
};

class Init_ArmVelocityCommandRequest_angular_velocity_of_hand_rt_odom_in_hand
{
public:
  explicit Init_ArmVelocityCommandRequest_angular_velocity_of_hand_rt_odom_in_hand(::bosdyn_msgs::msg::ArmVelocityCommandRequest & msg)
  : msg_(msg)
  {}
  Init_ArmVelocityCommandRequest_angular_velocity_of_hand_rt_odom_in_hand_is_set angular_velocity_of_hand_rt_odom_in_hand(::bosdyn_msgs::msg::ArmVelocityCommandRequest::_angular_velocity_of_hand_rt_odom_in_hand_type arg)
  {
    msg_.angular_velocity_of_hand_rt_odom_in_hand = std::move(arg);
    return Init_ArmVelocityCommandRequest_angular_velocity_of_hand_rt_odom_in_hand_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmVelocityCommandRequest msg_;
};

class Init_ArmVelocityCommandRequest_command
{
public:
  Init_ArmVelocityCommandRequest_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmVelocityCommandRequest_angular_velocity_of_hand_rt_odom_in_hand command(::bosdyn_msgs::msg::ArmVelocityCommandRequest::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_ArmVelocityCommandRequest_angular_velocity_of_hand_rt_odom_in_hand(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmVelocityCommandRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ArmVelocityCommandRequest>()
{
  return bosdyn_msgs::msg::builder::Init_ArmVelocityCommandRequest_command();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_VELOCITY_COMMAND_REQUEST__BUILDER_HPP_
