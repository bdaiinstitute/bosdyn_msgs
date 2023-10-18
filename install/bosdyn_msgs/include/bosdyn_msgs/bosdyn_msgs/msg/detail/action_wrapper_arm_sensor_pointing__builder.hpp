// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ActionWrapperArmSensorPointing.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_ARM_SENSOR_POINTING__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_ARM_SENSOR_POINTING__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/action_wrapper_arm_sensor_pointing__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ActionWrapperArmSensorPointing_force_stow_override
{
public:
  explicit Init_ActionWrapperArmSensorPointing_force_stow_override(::bosdyn_msgs::msg::ActionWrapperArmSensorPointing & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ActionWrapperArmSensorPointing force_stow_override(::bosdyn_msgs::msg::ActionWrapperArmSensorPointing::_force_stow_override_type arg)
  {
    msg_.force_stow_override = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionWrapperArmSensorPointing msg_;
};

class Init_ActionWrapperArmSensorPointing_body_assist_params_is_set
{
public:
  explicit Init_ActionWrapperArmSensorPointing_body_assist_params_is_set(::bosdyn_msgs::msg::ActionWrapperArmSensorPointing & msg)
  : msg_(msg)
  {}
  Init_ActionWrapperArmSensorPointing_force_stow_override body_assist_params_is_set(::bosdyn_msgs::msg::ActionWrapperArmSensorPointing::_body_assist_params_is_set_type arg)
  {
    msg_.body_assist_params_is_set = std::move(arg);
    return Init_ActionWrapperArmSensorPointing_force_stow_override(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionWrapperArmSensorPointing msg_;
};

class Init_ActionWrapperArmSensorPointing_body_assist_params
{
public:
  explicit Init_ActionWrapperArmSensorPointing_body_assist_params(::bosdyn_msgs::msg::ActionWrapperArmSensorPointing & msg)
  : msg_(msg)
  {}
  Init_ActionWrapperArmSensorPointing_body_assist_params_is_set body_assist_params(::bosdyn_msgs::msg::ActionWrapperArmSensorPointing::_body_assist_params_type arg)
  {
    msg_.body_assist_params = std::move(arg);
    return Init_ActionWrapperArmSensorPointing_body_assist_params_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionWrapperArmSensorPointing msg_;
};

class Init_ActionWrapperArmSensorPointing_target_tform_measured_offset_is_set
{
public:
  explicit Init_ActionWrapperArmSensorPointing_target_tform_measured_offset_is_set(::bosdyn_msgs::msg::ActionWrapperArmSensorPointing & msg)
  : msg_(msg)
  {}
  Init_ActionWrapperArmSensorPointing_body_assist_params target_tform_measured_offset_is_set(::bosdyn_msgs::msg::ActionWrapperArmSensorPointing::_target_tform_measured_offset_is_set_type arg)
  {
    msg_.target_tform_measured_offset_is_set = std::move(arg);
    return Init_ActionWrapperArmSensorPointing_body_assist_params(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionWrapperArmSensorPointing msg_;
};

class Init_ActionWrapperArmSensorPointing_target_tform_measured_offset
{
public:
  explicit Init_ActionWrapperArmSensorPointing_target_tform_measured_offset(::bosdyn_msgs::msg::ActionWrapperArmSensorPointing & msg)
  : msg_(msg)
  {}
  Init_ActionWrapperArmSensorPointing_target_tform_measured_offset_is_set target_tform_measured_offset(::bosdyn_msgs::msg::ActionWrapperArmSensorPointing::_target_tform_measured_offset_type arg)
  {
    msg_.target_tform_measured_offset = std::move(arg);
    return Init_ActionWrapperArmSensorPointing_target_tform_measured_offset_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionWrapperArmSensorPointing msg_;
};

class Init_ActionWrapperArmSensorPointing_pose_trajectory_rt_target_is_set
{
public:
  explicit Init_ActionWrapperArmSensorPointing_pose_trajectory_rt_target_is_set(::bosdyn_msgs::msg::ActionWrapperArmSensorPointing & msg)
  : msg_(msg)
  {}
  Init_ActionWrapperArmSensorPointing_target_tform_measured_offset pose_trajectory_rt_target_is_set(::bosdyn_msgs::msg::ActionWrapperArmSensorPointing::_pose_trajectory_rt_target_is_set_type arg)
  {
    msg_.pose_trajectory_rt_target_is_set = std::move(arg);
    return Init_ActionWrapperArmSensorPointing_target_tform_measured_offset(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionWrapperArmSensorPointing msg_;
};

class Init_ActionWrapperArmSensorPointing_pose_trajectory_rt_target
{
public:
  explicit Init_ActionWrapperArmSensorPointing_pose_trajectory_rt_target(::bosdyn_msgs::msg::ActionWrapperArmSensorPointing & msg)
  : msg_(msg)
  {}
  Init_ActionWrapperArmSensorPointing_pose_trajectory_rt_target_is_set pose_trajectory_rt_target(::bosdyn_msgs::msg::ActionWrapperArmSensorPointing::_pose_trajectory_rt_target_type arg)
  {
    msg_.pose_trajectory_rt_target = std::move(arg);
    return Init_ActionWrapperArmSensorPointing_pose_trajectory_rt_target_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionWrapperArmSensorPointing msg_;
};

class Init_ActionWrapperArmSensorPointing_wrist_tform_tool_is_set
{
public:
  explicit Init_ActionWrapperArmSensorPointing_wrist_tform_tool_is_set(::bosdyn_msgs::msg::ActionWrapperArmSensorPointing & msg)
  : msg_(msg)
  {}
  Init_ActionWrapperArmSensorPointing_pose_trajectory_rt_target wrist_tform_tool_is_set(::bosdyn_msgs::msg::ActionWrapperArmSensorPointing::_wrist_tform_tool_is_set_type arg)
  {
    msg_.wrist_tform_tool_is_set = std::move(arg);
    return Init_ActionWrapperArmSensorPointing_pose_trajectory_rt_target(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionWrapperArmSensorPointing msg_;
};

class Init_ActionWrapperArmSensorPointing_wrist_tform_tool
{
public:
  explicit Init_ActionWrapperArmSensorPointing_wrist_tform_tool(::bosdyn_msgs::msg::ActionWrapperArmSensorPointing & msg)
  : msg_(msg)
  {}
  Init_ActionWrapperArmSensorPointing_wrist_tform_tool_is_set wrist_tform_tool(::bosdyn_msgs::msg::ActionWrapperArmSensorPointing::_wrist_tform_tool_type arg)
  {
    msg_.wrist_tform_tool = std::move(arg);
    return Init_ActionWrapperArmSensorPointing_wrist_tform_tool_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionWrapperArmSensorPointing msg_;
};

class Init_ActionWrapperArmSensorPointing_joint_trajectory_is_set
{
public:
  explicit Init_ActionWrapperArmSensorPointing_joint_trajectory_is_set(::bosdyn_msgs::msg::ActionWrapperArmSensorPointing & msg)
  : msg_(msg)
  {}
  Init_ActionWrapperArmSensorPointing_wrist_tform_tool joint_trajectory_is_set(::bosdyn_msgs::msg::ActionWrapperArmSensorPointing::_joint_trajectory_is_set_type arg)
  {
    msg_.joint_trajectory_is_set = std::move(arg);
    return Init_ActionWrapperArmSensorPointing_wrist_tform_tool(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionWrapperArmSensorPointing msg_;
};

class Init_ActionWrapperArmSensorPointing_joint_trajectory
{
public:
  Init_ActionWrapperArmSensorPointing_joint_trajectory()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActionWrapperArmSensorPointing_joint_trajectory_is_set joint_trajectory(::bosdyn_msgs::msg::ActionWrapperArmSensorPointing::_joint_trajectory_type arg)
  {
    msg_.joint_trajectory = std::move(arg);
    return Init_ActionWrapperArmSensorPointing_joint_trajectory_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionWrapperArmSensorPointing msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ActionWrapperArmSensorPointing>()
{
  return bosdyn_msgs::msg::builder::Init_ActionWrapperArmSensorPointing_joint_trajectory();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_ARM_SENSOR_POINTING__BUILDER_HPP_
