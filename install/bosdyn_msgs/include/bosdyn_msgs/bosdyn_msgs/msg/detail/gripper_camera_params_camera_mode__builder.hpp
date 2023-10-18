// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GripperCameraParamsCameraMode.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GRIPPER_CAMERA_PARAMS_CAMERA_MODE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GRIPPER_CAMERA_PARAMS_CAMERA_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/gripper_camera_params_camera_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GripperCameraParamsCameraMode_value
{
public:
  Init_GripperCameraParamsCameraMode_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bosdyn_msgs::msg::GripperCameraParamsCameraMode value(::bosdyn_msgs::msg::GripperCameraParamsCameraMode::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GripperCameraParamsCameraMode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GripperCameraParamsCameraMode>()
{
  return bosdyn_msgs::msg::builder::Init_GripperCameraParamsCameraMode_value();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GRIPPER_CAMERA_PARAMS_CAMERA_MODE__BUILDER_HPP_
