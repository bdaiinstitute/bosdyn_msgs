// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/InverseKinematicsRequestToolGazeTask.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_TOOL_GAZE_TASK__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_TOOL_GAZE_TASK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/inverse_kinematics_request_tool_gaze_task__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_InverseKinematicsRequestToolGazeTask_task_tform_desired_tool_is_set
{
public:
  explicit Init_InverseKinematicsRequestToolGazeTask_task_tform_desired_tool_is_set(::bosdyn_msgs::msg::InverseKinematicsRequestToolGazeTask & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::InverseKinematicsRequestToolGazeTask task_tform_desired_tool_is_set(::bosdyn_msgs::msg::InverseKinematicsRequestToolGazeTask::_task_tform_desired_tool_is_set_type arg)
  {
    msg_.task_tform_desired_tool_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::InverseKinematicsRequestToolGazeTask msg_;
};

class Init_InverseKinematicsRequestToolGazeTask_task_tform_desired_tool
{
public:
  explicit Init_InverseKinematicsRequestToolGazeTask_task_tform_desired_tool(::bosdyn_msgs::msg::InverseKinematicsRequestToolGazeTask & msg)
  : msg_(msg)
  {}
  Init_InverseKinematicsRequestToolGazeTask_task_tform_desired_tool_is_set task_tform_desired_tool(::bosdyn_msgs::msg::InverseKinematicsRequestToolGazeTask::_task_tform_desired_tool_type arg)
  {
    msg_.task_tform_desired_tool = std::move(arg);
    return Init_InverseKinematicsRequestToolGazeTask_task_tform_desired_tool_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::InverseKinematicsRequestToolGazeTask msg_;
};

class Init_InverseKinematicsRequestToolGazeTask_target_in_task_is_set
{
public:
  explicit Init_InverseKinematicsRequestToolGazeTask_target_in_task_is_set(::bosdyn_msgs::msg::InverseKinematicsRequestToolGazeTask & msg)
  : msg_(msg)
  {}
  Init_InverseKinematicsRequestToolGazeTask_task_tform_desired_tool target_in_task_is_set(::bosdyn_msgs::msg::InverseKinematicsRequestToolGazeTask::_target_in_task_is_set_type arg)
  {
    msg_.target_in_task_is_set = std::move(arg);
    return Init_InverseKinematicsRequestToolGazeTask_task_tform_desired_tool(msg_);
  }

private:
  ::bosdyn_msgs::msg::InverseKinematicsRequestToolGazeTask msg_;
};

class Init_InverseKinematicsRequestToolGazeTask_target_in_task
{
public:
  Init_InverseKinematicsRequestToolGazeTask_target_in_task()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InverseKinematicsRequestToolGazeTask_target_in_task_is_set target_in_task(::bosdyn_msgs::msg::InverseKinematicsRequestToolGazeTask::_target_in_task_type arg)
  {
    msg_.target_in_task = std::move(arg);
    return Init_InverseKinematicsRequestToolGazeTask_target_in_task_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::InverseKinematicsRequestToolGazeTask msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::InverseKinematicsRequestToolGazeTask>()
{
  return bosdyn_msgs::msg::builder::Init_InverseKinematicsRequestToolGazeTask_target_in_task();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_TOOL_GAZE_TASK__BUILDER_HPP_
