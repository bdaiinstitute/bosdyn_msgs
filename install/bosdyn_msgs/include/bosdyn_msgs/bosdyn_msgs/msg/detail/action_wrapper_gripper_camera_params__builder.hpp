// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ActionWrapperGripperCameraParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_GRIPPER_CAMERA_PARAMS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_GRIPPER_CAMERA_PARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/action_wrapper_gripper_camera_params__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ActionWrapperGripperCameraParams_params_is_set
{
public:
  explicit Init_ActionWrapperGripperCameraParams_params_is_set(::bosdyn_msgs::msg::ActionWrapperGripperCameraParams & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ActionWrapperGripperCameraParams params_is_set(::bosdyn_msgs::msg::ActionWrapperGripperCameraParams::_params_is_set_type arg)
  {
    msg_.params_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionWrapperGripperCameraParams msg_;
};

class Init_ActionWrapperGripperCameraParams_params
{
public:
  Init_ActionWrapperGripperCameraParams_params()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActionWrapperGripperCameraParams_params_is_set params(::bosdyn_msgs::msg::ActionWrapperGripperCameraParams::_params_type arg)
  {
    msg_.params = std::move(arg);
    return Init_ActionWrapperGripperCameraParams_params_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ActionWrapperGripperCameraParams msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ActionWrapperGripperCameraParams>()
{
  return bosdyn_msgs::msg::builder::Init_ActionWrapperGripperCameraParams_params();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ACTION_WRAPPER_GRIPPER_CAMERA_PARAMS__BUILDER_HPP_
