// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/SE2TrajectoryCommandRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SE2_TRAJECTORY_COMMAND_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SE2_TRAJECTORY_COMMAND_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/se2_trajectory_command_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_SE2TrajectoryCommandRequest_trajectory_is_set
{
public:
  explicit Init_SE2TrajectoryCommandRequest_trajectory_is_set(::bosdyn_msgs::msg::SE2TrajectoryCommandRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::SE2TrajectoryCommandRequest trajectory_is_set(::bosdyn_msgs::msg::SE2TrajectoryCommandRequest::_trajectory_is_set_type arg)
  {
    msg_.trajectory_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::SE2TrajectoryCommandRequest msg_;
};

class Init_SE2TrajectoryCommandRequest_trajectory
{
public:
  explicit Init_SE2TrajectoryCommandRequest_trajectory(::bosdyn_msgs::msg::SE2TrajectoryCommandRequest & msg)
  : msg_(msg)
  {}
  Init_SE2TrajectoryCommandRequest_trajectory_is_set trajectory(::bosdyn_msgs::msg::SE2TrajectoryCommandRequest::_trajectory_type arg)
  {
    msg_.trajectory = std::move(arg);
    return Init_SE2TrajectoryCommandRequest_trajectory_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SE2TrajectoryCommandRequest msg_;
};

class Init_SE2TrajectoryCommandRequest_se2_frame_name
{
public:
  explicit Init_SE2TrajectoryCommandRequest_se2_frame_name(::bosdyn_msgs::msg::SE2TrajectoryCommandRequest & msg)
  : msg_(msg)
  {}
  Init_SE2TrajectoryCommandRequest_trajectory se2_frame_name(::bosdyn_msgs::msg::SE2TrajectoryCommandRequest::_se2_frame_name_type arg)
  {
    msg_.se2_frame_name = std::move(arg);
    return Init_SE2TrajectoryCommandRequest_trajectory(msg_);
  }

private:
  ::bosdyn_msgs::msg::SE2TrajectoryCommandRequest msg_;
};

class Init_SE2TrajectoryCommandRequest_end_time_is_set
{
public:
  explicit Init_SE2TrajectoryCommandRequest_end_time_is_set(::bosdyn_msgs::msg::SE2TrajectoryCommandRequest & msg)
  : msg_(msg)
  {}
  Init_SE2TrajectoryCommandRequest_se2_frame_name end_time_is_set(::bosdyn_msgs::msg::SE2TrajectoryCommandRequest::_end_time_is_set_type arg)
  {
    msg_.end_time_is_set = std::move(arg);
    return Init_SE2TrajectoryCommandRequest_se2_frame_name(msg_);
  }

private:
  ::bosdyn_msgs::msg::SE2TrajectoryCommandRequest msg_;
};

class Init_SE2TrajectoryCommandRequest_end_time
{
public:
  Init_SE2TrajectoryCommandRequest_end_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SE2TrajectoryCommandRequest_end_time_is_set end_time(::bosdyn_msgs::msg::SE2TrajectoryCommandRequest::_end_time_type arg)
  {
    msg_.end_time = std::move(arg);
    return Init_SE2TrajectoryCommandRequest_end_time_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SE2TrajectoryCommandRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::SE2TrajectoryCommandRequest>()
{
  return bosdyn_msgs::msg::builder::Init_SE2TrajectoryCommandRequest_end_time();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SE2_TRAJECTORY_COMMAND_REQUEST__BUILDER_HPP_
