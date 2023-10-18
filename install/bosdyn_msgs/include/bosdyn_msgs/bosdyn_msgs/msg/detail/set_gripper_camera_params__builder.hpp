// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/SetGripperCameraParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SET_GRIPPER_CAMERA_PARAMS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SET_GRIPPER_CAMERA_PARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/set_gripper_camera_params__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_SetGripperCameraParams_params
{
public:
  explicit Init_SetGripperCameraParams_params(::bosdyn_msgs::msg::SetGripperCameraParams & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::SetGripperCameraParams params(::bosdyn_msgs::msg::SetGripperCameraParams::_params_type arg)
  {
    msg_.params = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetGripperCameraParams msg_;
};

class Init_SetGripperCameraParams_host
{
public:
  explicit Init_SetGripperCameraParams_host(::bosdyn_msgs::msg::SetGripperCameraParams & msg)
  : msg_(msg)
  {}
  Init_SetGripperCameraParams_params host(::bosdyn_msgs::msg::SetGripperCameraParams::_host_type arg)
  {
    msg_.host = std::move(arg);
    return Init_SetGripperCameraParams_params(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetGripperCameraParams msg_;
};

class Init_SetGripperCameraParams_service_name
{
public:
  Init_SetGripperCameraParams_service_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetGripperCameraParams_host service_name(::bosdyn_msgs::msg::SetGripperCameraParams::_service_name_type arg)
  {
    msg_.service_name = std::move(arg);
    return Init_SetGripperCameraParams_host(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetGripperCameraParams msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::SetGripperCameraParams>()
{
  return bosdyn_msgs::msg::builder::Init_SetGripperCameraParams_service_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SET_GRIPPER_CAMERA_PARAMS__BUILDER_HPP_
