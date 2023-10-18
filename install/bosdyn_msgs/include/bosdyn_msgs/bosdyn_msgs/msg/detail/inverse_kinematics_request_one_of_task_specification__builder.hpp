// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/InverseKinematicsRequestOneOfTaskSpecification.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_ONE_OF_TASK_SPECIFICATION__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_ONE_OF_TASK_SPECIFICATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/inverse_kinematics_request_one_of_task_specification__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_InverseKinematicsRequestOneOfTaskSpecification_task_specification_choice
{
public:
  explicit Init_InverseKinematicsRequestOneOfTaskSpecification_task_specification_choice(::bosdyn_msgs::msg::InverseKinematicsRequestOneOfTaskSpecification & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::InverseKinematicsRequestOneOfTaskSpecification task_specification_choice(::bosdyn_msgs::msg::InverseKinematicsRequestOneOfTaskSpecification::_task_specification_choice_type arg)
  {
    msg_.task_specification_choice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::InverseKinematicsRequestOneOfTaskSpecification msg_;
};

class Init_InverseKinematicsRequestOneOfTaskSpecification_tool_gaze_task
{
public:
  explicit Init_InverseKinematicsRequestOneOfTaskSpecification_tool_gaze_task(::bosdyn_msgs::msg::InverseKinematicsRequestOneOfTaskSpecification & msg)
  : msg_(msg)
  {}
  Init_InverseKinematicsRequestOneOfTaskSpecification_task_specification_choice tool_gaze_task(::bosdyn_msgs::msg::InverseKinematicsRequestOneOfTaskSpecification::_tool_gaze_task_type arg)
  {
    msg_.tool_gaze_task = std::move(arg);
    return Init_InverseKinematicsRequestOneOfTaskSpecification_task_specification_choice(msg_);
  }

private:
  ::bosdyn_msgs::msg::InverseKinematicsRequestOneOfTaskSpecification msg_;
};

class Init_InverseKinematicsRequestOneOfTaskSpecification_tool_pose_task
{
public:
  Init_InverseKinematicsRequestOneOfTaskSpecification_tool_pose_task()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InverseKinematicsRequestOneOfTaskSpecification_tool_gaze_task tool_pose_task(::bosdyn_msgs::msg::InverseKinematicsRequestOneOfTaskSpecification::_tool_pose_task_type arg)
  {
    msg_.tool_pose_task = std::move(arg);
    return Init_InverseKinematicsRequestOneOfTaskSpecification_tool_gaze_task(msg_);
  }

private:
  ::bosdyn_msgs::msg::InverseKinematicsRequestOneOfTaskSpecification msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::InverseKinematicsRequestOneOfTaskSpecification>()
{
  return bosdyn_msgs::msg::builder::Init_InverseKinematicsRequestOneOfTaskSpecification_tool_pose_task();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_ONE_OF_TASK_SPECIFICATION__BUILDER_HPP_
