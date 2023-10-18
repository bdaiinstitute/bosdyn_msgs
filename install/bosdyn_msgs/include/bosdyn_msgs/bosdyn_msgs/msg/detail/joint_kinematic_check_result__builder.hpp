// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/JointKinematicCheckResult.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__JOINT_KINEMATIC_CHECK_RESULT__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__JOINT_KINEMATIC_CHECK_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/joint_kinematic_check_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_JointKinematicCheckResult_health_score
{
public:
  explicit Init_JointKinematicCheckResult_health_score(::bosdyn_msgs::msg::JointKinematicCheckResult & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::JointKinematicCheckResult health_score(::bosdyn_msgs::msg::JointKinematicCheckResult::_health_score_type arg)
  {
    msg_.health_score = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::JointKinematicCheckResult msg_;
};

class Init_JointKinematicCheckResult_old_offset
{
public:
  explicit Init_JointKinematicCheckResult_old_offset(::bosdyn_msgs::msg::JointKinematicCheckResult & msg)
  : msg_(msg)
  {}
  Init_JointKinematicCheckResult_health_score old_offset(::bosdyn_msgs::msg::JointKinematicCheckResult::_old_offset_type arg)
  {
    msg_.old_offset = std::move(arg);
    return Init_JointKinematicCheckResult_health_score(msg_);
  }

private:
  ::bosdyn_msgs::msg::JointKinematicCheckResult msg_;
};

class Init_JointKinematicCheckResult_offset
{
public:
  explicit Init_JointKinematicCheckResult_offset(::bosdyn_msgs::msg::JointKinematicCheckResult & msg)
  : msg_(msg)
  {}
  Init_JointKinematicCheckResult_old_offset offset(::bosdyn_msgs::msg::JointKinematicCheckResult::_offset_type arg)
  {
    msg_.offset = std::move(arg);
    return Init_JointKinematicCheckResult_old_offset(msg_);
  }

private:
  ::bosdyn_msgs::msg::JointKinematicCheckResult msg_;
};

class Init_JointKinematicCheckResult_error
{
public:
  Init_JointKinematicCheckResult_error()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JointKinematicCheckResult_offset error(::bosdyn_msgs::msg::JointKinematicCheckResult::_error_type arg)
  {
    msg_.error = std::move(arg);
    return Init_JointKinematicCheckResult_offset(msg_);
  }

private:
  ::bosdyn_msgs::msg::JointKinematicCheckResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::JointKinematicCheckResult>()
{
  return bosdyn_msgs::msg::builder::Init_JointKinematicCheckResult_error();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__JOINT_KINEMATIC_CHECK_RESULT__BUILDER_HPP_
