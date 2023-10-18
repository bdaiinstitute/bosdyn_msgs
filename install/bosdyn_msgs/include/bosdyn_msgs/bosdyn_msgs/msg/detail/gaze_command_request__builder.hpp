// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GazeCommandRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GAZE_COMMAND_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GAZE_COMMAND_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/gaze_command_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GazeCommandRequest_max_angular_velocity_is_set
{
public:
  explicit Init_GazeCommandRequest_max_angular_velocity_is_set(::bosdyn_msgs::msg::GazeCommandRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GazeCommandRequest max_angular_velocity_is_set(::bosdyn_msgs::msg::GazeCommandRequest::_max_angular_velocity_is_set_type arg)
  {
    msg_.max_angular_velocity_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GazeCommandRequest msg_;
};

class Init_GazeCommandRequest_max_angular_velocity
{
public:
  explicit Init_GazeCommandRequest_max_angular_velocity(::bosdyn_msgs::msg::GazeCommandRequest & msg)
  : msg_(msg)
  {}
  Init_GazeCommandRequest_max_angular_velocity_is_set max_angular_velocity(::bosdyn_msgs::msg::GazeCommandRequest::_max_angular_velocity_type arg)
  {
    msg_.max_angular_velocity = std::move(arg);
    return Init_GazeCommandRequest_max_angular_velocity_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GazeCommandRequest msg_;
};

class Init_GazeCommandRequest_max_linear_velocity_is_set
{
public:
  explicit Init_GazeCommandRequest_max_linear_velocity_is_set(::bosdyn_msgs::msg::GazeCommandRequest & msg)
  : msg_(msg)
  {}
  Init_GazeCommandRequest_max_angular_velocity max_linear_velocity_is_set(::bosdyn_msgs::msg::GazeCommandRequest::_max_linear_velocity_is_set_type arg)
  {
    msg_.max_linear_velocity_is_set = std::move(arg);
    return Init_GazeCommandRequest_max_angular_velocity(msg_);
  }

private:
  ::bosdyn_msgs::msg::GazeCommandRequest msg_;
};

class Init_GazeCommandRequest_max_linear_velocity
{
public:
  explicit Init_GazeCommandRequest_max_linear_velocity(::bosdyn_msgs::msg::GazeCommandRequest & msg)
  : msg_(msg)
  {}
  Init_GazeCommandRequest_max_linear_velocity_is_set max_linear_velocity(::bosdyn_msgs::msg::GazeCommandRequest::_max_linear_velocity_type arg)
  {
    msg_.max_linear_velocity = std::move(arg);
    return Init_GazeCommandRequest_max_linear_velocity_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GazeCommandRequest msg_;
};

class Init_GazeCommandRequest_maximum_acceleration_is_set
{
public:
  explicit Init_GazeCommandRequest_maximum_acceleration_is_set(::bosdyn_msgs::msg::GazeCommandRequest & msg)
  : msg_(msg)
  {}
  Init_GazeCommandRequest_max_linear_velocity maximum_acceleration_is_set(::bosdyn_msgs::msg::GazeCommandRequest::_maximum_acceleration_is_set_type arg)
  {
    msg_.maximum_acceleration_is_set = std::move(arg);
    return Init_GazeCommandRequest_max_linear_velocity(msg_);
  }

private:
  ::bosdyn_msgs::msg::GazeCommandRequest msg_;
};

class Init_GazeCommandRequest_maximum_acceleration
{
public:
  explicit Init_GazeCommandRequest_maximum_acceleration(::bosdyn_msgs::msg::GazeCommandRequest & msg)
  : msg_(msg)
  {}
  Init_GazeCommandRequest_maximum_acceleration_is_set maximum_acceleration(::bosdyn_msgs::msg::GazeCommandRequest::_maximum_acceleration_type arg)
  {
    msg_.maximum_acceleration = std::move(arg);
    return Init_GazeCommandRequest_maximum_acceleration_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GazeCommandRequest msg_;
};

class Init_GazeCommandRequest_target_trajectory_initial_velocity_is_set
{
public:
  explicit Init_GazeCommandRequest_target_trajectory_initial_velocity_is_set(::bosdyn_msgs::msg::GazeCommandRequest & msg)
  : msg_(msg)
  {}
  Init_GazeCommandRequest_maximum_acceleration target_trajectory_initial_velocity_is_set(::bosdyn_msgs::msg::GazeCommandRequest::_target_trajectory_initial_velocity_is_set_type arg)
  {
    msg_.target_trajectory_initial_velocity_is_set = std::move(arg);
    return Init_GazeCommandRequest_maximum_acceleration(msg_);
  }

private:
  ::bosdyn_msgs::msg::GazeCommandRequest msg_;
};

class Init_GazeCommandRequest_target_trajectory_initial_velocity
{
public:
  explicit Init_GazeCommandRequest_target_trajectory_initial_velocity(::bosdyn_msgs::msg::GazeCommandRequest & msg)
  : msg_(msg)
  {}
  Init_GazeCommandRequest_target_trajectory_initial_velocity_is_set target_trajectory_initial_velocity(::bosdyn_msgs::msg::GazeCommandRequest::_target_trajectory_initial_velocity_type arg)
  {
    msg_.target_trajectory_initial_velocity = std::move(arg);
    return Init_GazeCommandRequest_target_trajectory_initial_velocity_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GazeCommandRequest msg_;
};

class Init_GazeCommandRequest_wrist_tform_tool_is_set
{
public:
  explicit Init_GazeCommandRequest_wrist_tform_tool_is_set(::bosdyn_msgs::msg::GazeCommandRequest & msg)
  : msg_(msg)
  {}
  Init_GazeCommandRequest_target_trajectory_initial_velocity wrist_tform_tool_is_set(::bosdyn_msgs::msg::GazeCommandRequest::_wrist_tform_tool_is_set_type arg)
  {
    msg_.wrist_tform_tool_is_set = std::move(arg);
    return Init_GazeCommandRequest_target_trajectory_initial_velocity(msg_);
  }

private:
  ::bosdyn_msgs::msg::GazeCommandRequest msg_;
};

class Init_GazeCommandRequest_wrist_tform_tool
{
public:
  explicit Init_GazeCommandRequest_wrist_tform_tool(::bosdyn_msgs::msg::GazeCommandRequest & msg)
  : msg_(msg)
  {}
  Init_GazeCommandRequest_wrist_tform_tool_is_set wrist_tform_tool(::bosdyn_msgs::msg::GazeCommandRequest::_wrist_tform_tool_type arg)
  {
    msg_.wrist_tform_tool = std::move(arg);
    return Init_GazeCommandRequest_wrist_tform_tool_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GazeCommandRequest msg_;
};

class Init_GazeCommandRequest_frame2_name
{
public:
  explicit Init_GazeCommandRequest_frame2_name(::bosdyn_msgs::msg::GazeCommandRequest & msg)
  : msg_(msg)
  {}
  Init_GazeCommandRequest_wrist_tform_tool frame2_name(::bosdyn_msgs::msg::GazeCommandRequest::_frame2_name_type arg)
  {
    msg_.frame2_name = std::move(arg);
    return Init_GazeCommandRequest_wrist_tform_tool(msg_);
  }

private:
  ::bosdyn_msgs::msg::GazeCommandRequest msg_;
};

class Init_GazeCommandRequest_tool_trajectory_in_frame2_is_set
{
public:
  explicit Init_GazeCommandRequest_tool_trajectory_in_frame2_is_set(::bosdyn_msgs::msg::GazeCommandRequest & msg)
  : msg_(msg)
  {}
  Init_GazeCommandRequest_frame2_name tool_trajectory_in_frame2_is_set(::bosdyn_msgs::msg::GazeCommandRequest::_tool_trajectory_in_frame2_is_set_type arg)
  {
    msg_.tool_trajectory_in_frame2_is_set = std::move(arg);
    return Init_GazeCommandRequest_frame2_name(msg_);
  }

private:
  ::bosdyn_msgs::msg::GazeCommandRequest msg_;
};

class Init_GazeCommandRequest_tool_trajectory_in_frame2
{
public:
  explicit Init_GazeCommandRequest_tool_trajectory_in_frame2(::bosdyn_msgs::msg::GazeCommandRequest & msg)
  : msg_(msg)
  {}
  Init_GazeCommandRequest_tool_trajectory_in_frame2_is_set tool_trajectory_in_frame2(::bosdyn_msgs::msg::GazeCommandRequest::_tool_trajectory_in_frame2_type arg)
  {
    msg_.tool_trajectory_in_frame2 = std::move(arg);
    return Init_GazeCommandRequest_tool_trajectory_in_frame2_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GazeCommandRequest msg_;
};

class Init_GazeCommandRequest_frame1_name
{
public:
  explicit Init_GazeCommandRequest_frame1_name(::bosdyn_msgs::msg::GazeCommandRequest & msg)
  : msg_(msg)
  {}
  Init_GazeCommandRequest_tool_trajectory_in_frame2 frame1_name(::bosdyn_msgs::msg::GazeCommandRequest::_frame1_name_type arg)
  {
    msg_.frame1_name = std::move(arg);
    return Init_GazeCommandRequest_tool_trajectory_in_frame2(msg_);
  }

private:
  ::bosdyn_msgs::msg::GazeCommandRequest msg_;
};

class Init_GazeCommandRequest_target_trajectory_in_frame1_is_set
{
public:
  explicit Init_GazeCommandRequest_target_trajectory_in_frame1_is_set(::bosdyn_msgs::msg::GazeCommandRequest & msg)
  : msg_(msg)
  {}
  Init_GazeCommandRequest_frame1_name target_trajectory_in_frame1_is_set(::bosdyn_msgs::msg::GazeCommandRequest::_target_trajectory_in_frame1_is_set_type arg)
  {
    msg_.target_trajectory_in_frame1_is_set = std::move(arg);
    return Init_GazeCommandRequest_frame1_name(msg_);
  }

private:
  ::bosdyn_msgs::msg::GazeCommandRequest msg_;
};

class Init_GazeCommandRequest_target_trajectory_in_frame1
{
public:
  Init_GazeCommandRequest_target_trajectory_in_frame1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GazeCommandRequest_target_trajectory_in_frame1_is_set target_trajectory_in_frame1(::bosdyn_msgs::msg::GazeCommandRequest::_target_trajectory_in_frame1_type arg)
  {
    msg_.target_trajectory_in_frame1 = std::move(arg);
    return Init_GazeCommandRequest_target_trajectory_in_frame1_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GazeCommandRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GazeCommandRequest>()
{
  return bosdyn_msgs::msg::builder::Init_GazeCommandRequest_target_trajectory_in_frame1();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GAZE_COMMAND_REQUEST__BUILDER_HPP_
