// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/InverseKinematicsRequestToolPoseTask.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_TOOL_POSE_TASK__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_TOOL_POSE_TASK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/inverse_kinematics_request_tool_pose_task__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_InverseKinematicsRequestToolPoseTask_task_tform_desired_tool_is_set
{
public:
  explicit Init_InverseKinematicsRequestToolPoseTask_task_tform_desired_tool_is_set(::bosdyn_msgs::msg::InverseKinematicsRequestToolPoseTask & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::InverseKinematicsRequestToolPoseTask task_tform_desired_tool_is_set(::bosdyn_msgs::msg::InverseKinematicsRequestToolPoseTask::_task_tform_desired_tool_is_set_type arg)
  {
    msg_.task_tform_desired_tool_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::InverseKinematicsRequestToolPoseTask msg_;
};

class Init_InverseKinematicsRequestToolPoseTask_task_tform_desired_tool
{
public:
  Init_InverseKinematicsRequestToolPoseTask_task_tform_desired_tool()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InverseKinematicsRequestToolPoseTask_task_tform_desired_tool_is_set task_tform_desired_tool(::bosdyn_msgs::msg::InverseKinematicsRequestToolPoseTask::_task_tform_desired_tool_type arg)
  {
    msg_.task_tform_desired_tool = std::move(arg);
    return Init_InverseKinematicsRequestToolPoseTask_task_tform_desired_tool_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::InverseKinematicsRequestToolPoseTask msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::InverseKinematicsRequestToolPoseTask>()
{
  return bosdyn_msgs::msg::builder::Init_InverseKinematicsRequestToolPoseTask_task_tform_desired_tool();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_TOOL_POSE_TASK__BUILDER_HPP_
