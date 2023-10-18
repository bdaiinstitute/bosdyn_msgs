// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ActionWrapper.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/action_wrapper__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ActionWrapper_gripper_command_is_set
{
public:
  explicit Init_ActionWrapper_gripper_command_is_set(::bosdyn_msgs::msg::ActionWrapper & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ActionWrapper gripper_command_is_set(::bosdyn_msgs::msg::ActionWrapper::_gripper_command_is_set_type arg)
  {
    msg_.gripper_command_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionWrapper msg_;
};

class Init_ActionWrapper_gripper_command
{
public:
  explicit Init_ActionWrapper_gripper_command(::bosdyn_msgs::msg::ActionWrapper & msg)
  : msg_(msg)
  {}
  Init_ActionWrapper_gripper_command_is_set gripper_command(::bosdyn_msgs::msg::ActionWrapper::_gripper_command_type arg)
  {
    msg_.gripper_command = std::move(arg);
    return Init_ActionWrapper_gripper_command_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionWrapper msg_;
};

class Init_ActionWrapper_gripper_camera_params_is_set
{
public:
  explicit Init_ActionWrapper_gripper_camera_params_is_set(::bosdyn_msgs::msg::ActionWrapper & msg)
  : msg_(msg)
  {}
  Init_ActionWrapper_gripper_command gripper_camera_params_is_set(::bosdyn_msgs::msg::ActionWrapper::_gripper_camera_params_is_set_type arg)
  {
    msg_.gripper_camera_params_is_set = std::move(arg);
    return Init_ActionWrapper_gripper_command(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionWrapper msg_;
};

class Init_ActionWrapper_gripper_camera_params
{
public:
  explicit Init_ActionWrapper_gripper_camera_params(::bosdyn_msgs::msg::ActionWrapper & msg)
  : msg_(msg)
  {}
  Init_ActionWrapper_gripper_camera_params_is_set gripper_camera_params(::bosdyn_msgs::msg::ActionWrapper::_gripper_camera_params_type arg)
  {
    msg_.gripper_camera_params = std::move(arg);
    return Init_ActionWrapper_gripper_camera_params_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionWrapper msg_;
};

class Init_ActionWrapper_spot_cam_alignment_is_set
{
public:
  explicit Init_ActionWrapper_spot_cam_alignment_is_set(::bosdyn_msgs::msg::ActionWrapper & msg)
  : msg_(msg)
  {}
  Init_ActionWrapper_gripper_camera_params spot_cam_alignment_is_set(::bosdyn_msgs::msg::ActionWrapper::_spot_cam_alignment_is_set_type arg)
  {
    msg_.spot_cam_alignment_is_set = std::move(arg);
    return Init_ActionWrapper_gripper_camera_params(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionWrapper msg_;
};

class Init_ActionWrapper_spot_cam_alignment
{
public:
  explicit Init_ActionWrapper_spot_cam_alignment(::bosdyn_msgs::msg::ActionWrapper & msg)
  : msg_(msg)
  {}
  Init_ActionWrapper_spot_cam_alignment_is_set spot_cam_alignment(::bosdyn_msgs::msg::ActionWrapper::_spot_cam_alignment_type arg)
  {
    msg_.spot_cam_alignment = std::move(arg);
    return Init_ActionWrapper_spot_cam_alignment_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionWrapper msg_;
};

class Init_ActionWrapper_arm_sensor_pointing_is_set
{
public:
  explicit Init_ActionWrapper_arm_sensor_pointing_is_set(::bosdyn_msgs::msg::ActionWrapper & msg)
  : msg_(msg)
  {}
  Init_ActionWrapper_spot_cam_alignment arm_sensor_pointing_is_set(::bosdyn_msgs::msg::ActionWrapper::_arm_sensor_pointing_is_set_type arg)
  {
    msg_.arm_sensor_pointing_is_set = std::move(arg);
    return Init_ActionWrapper_spot_cam_alignment(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionWrapper msg_;
};

class Init_ActionWrapper_arm_sensor_pointing
{
public:
  explicit Init_ActionWrapper_arm_sensor_pointing(::bosdyn_msgs::msg::ActionWrapper & msg)
  : msg_(msg)
  {}
  Init_ActionWrapper_arm_sensor_pointing_is_set arm_sensor_pointing(::bosdyn_msgs::msg::ActionWrapper::_arm_sensor_pointing_type arg)
  {
    msg_.arm_sensor_pointing = std::move(arg);
    return Init_ActionWrapper_arm_sensor_pointing_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionWrapper msg_;
};

class Init_ActionWrapper_spot_cam_ptz_is_set
{
public:
  explicit Init_ActionWrapper_spot_cam_ptz_is_set(::bosdyn_msgs::msg::ActionWrapper & msg)
  : msg_(msg)
  {}
  Init_ActionWrapper_arm_sensor_pointing spot_cam_ptz_is_set(::bosdyn_msgs::msg::ActionWrapper::_spot_cam_ptz_is_set_type arg)
  {
    msg_.spot_cam_ptz_is_set = std::move(arg);
    return Init_ActionWrapper_arm_sensor_pointing(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionWrapper msg_;
};

class Init_ActionWrapper_spot_cam_ptz
{
public:
  explicit Init_ActionWrapper_spot_cam_ptz(::bosdyn_msgs::msg::ActionWrapper & msg)
  : msg_(msg)
  {}
  Init_ActionWrapper_spot_cam_ptz_is_set spot_cam_ptz(::bosdyn_msgs::msg::ActionWrapper::_spot_cam_ptz_type arg)
  {
    msg_.spot_cam_ptz = std::move(arg);
    return Init_ActionWrapper_spot_cam_ptz_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionWrapper msg_;
};

class Init_ActionWrapper_spot_cam_led_is_set
{
public:
  explicit Init_ActionWrapper_spot_cam_led_is_set(::bosdyn_msgs::msg::ActionWrapper & msg)
  : msg_(msg)
  {}
  Init_ActionWrapper_spot_cam_ptz spot_cam_led_is_set(::bosdyn_msgs::msg::ActionWrapper::_spot_cam_led_is_set_type arg)
  {
    msg_.spot_cam_led_is_set = std::move(arg);
    return Init_ActionWrapper_spot_cam_ptz(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionWrapper msg_;
};

class Init_ActionWrapper_spot_cam_led
{
public:
  explicit Init_ActionWrapper_spot_cam_led(::bosdyn_msgs::msg::ActionWrapper & msg)
  : msg_(msg)
  {}
  Init_ActionWrapper_spot_cam_led_is_set spot_cam_led(::bosdyn_msgs::msg::ActionWrapper::_spot_cam_led_type arg)
  {
    msg_.spot_cam_led = std::move(arg);
    return Init_ActionWrapper_spot_cam_led_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionWrapper msg_;
};

class Init_ActionWrapper_robot_body_pose_is_set
{
public:
  explicit Init_ActionWrapper_robot_body_pose_is_set(::bosdyn_msgs::msg::ActionWrapper & msg)
  : msg_(msg)
  {}
  Init_ActionWrapper_spot_cam_led robot_body_pose_is_set(::bosdyn_msgs::msg::ActionWrapper::_robot_body_pose_is_set_type arg)
  {
    msg_.robot_body_pose_is_set = std::move(arg);
    return Init_ActionWrapper_spot_cam_led(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionWrapper msg_;
};

class Init_ActionWrapper_robot_body_pose
{
public:
  explicit Init_ActionWrapper_robot_body_pose(::bosdyn_msgs::msg::ActionWrapper & msg)
  : msg_(msg)
  {}
  Init_ActionWrapper_robot_body_pose_is_set robot_body_pose(::bosdyn_msgs::msg::ActionWrapper::_robot_body_pose_type arg)
  {
    msg_.robot_body_pose = std::move(arg);
    return Init_ActionWrapper_robot_body_pose_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionWrapper msg_;
};

class Init_ActionWrapper_robot_body_sit_is_set
{
public:
  explicit Init_ActionWrapper_robot_body_sit_is_set(::bosdyn_msgs::msg::ActionWrapper & msg)
  : msg_(msg)
  {}
  Init_ActionWrapper_robot_body_pose robot_body_sit_is_set(::bosdyn_msgs::msg::ActionWrapper::_robot_body_sit_is_set_type arg)
  {
    msg_.robot_body_sit_is_set = std::move(arg);
    return Init_ActionWrapper_robot_body_pose(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionWrapper msg_;
};

class Init_ActionWrapper_robot_body_sit
{
public:
  Init_ActionWrapper_robot_body_sit()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActionWrapper_robot_body_sit_is_set robot_body_sit(::bosdyn_msgs::msg::ActionWrapper::_robot_body_sit_type arg)
  {
    msg_.robot_body_sit = std::move(arg);
    return Init_ActionWrapper_robot_body_sit_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionWrapper msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ActionWrapper>()
{
  return bosdyn_msgs::msg::builder::Init_ActionWrapper_robot_body_sit();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER__BUILDER_HPP_
