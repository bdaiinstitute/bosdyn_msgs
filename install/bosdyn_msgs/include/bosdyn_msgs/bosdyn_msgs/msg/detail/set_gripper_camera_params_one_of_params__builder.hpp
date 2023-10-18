// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/SetGripperCameraParamsOneOfParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SET_GRIPPER_CAMERA_PARAMS_ONE_OF_PARAMS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SET_GRIPPER_CAMERA_PARAMS_ONE_OF_PARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/set_gripper_camera_params_one_of_params__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_SetGripperCameraParamsOneOfParams_params_choice
{
public:
  explicit Init_SetGripperCameraParamsOneOfParams_params_choice(::bosdyn_msgs::msg::SetGripperCameraParamsOneOfParams & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::SetGripperCameraParamsOneOfParams params_choice(::bosdyn_msgs::msg::SetGripperCameraParamsOneOfParams::_params_choice_type arg)
  {
    msg_.params_choice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetGripperCameraParamsOneOfParams msg_;
};

class Init_SetGripperCameraParamsOneOfParams_new_params
{
public:
  explicit Init_SetGripperCameraParamsOneOfParams_new_params(::bosdyn_msgs::msg::SetGripperCameraParamsOneOfParams & msg)
  : msg_(msg)
  {}
  Init_SetGripperCameraParamsOneOfParams_params_choice new_params(::bosdyn_msgs::msg::SetGripperCameraParamsOneOfParams::_new_params_type arg)
  {
    msg_.new_params = std::move(arg);
    return Init_SetGripperCameraParamsOneOfParams_params_choice(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetGripperCameraParamsOneOfParams msg_;
};

class Init_SetGripperCameraParamsOneOfParams_params_in_blackboard_key
{
public:
  Init_SetGripperCameraParamsOneOfParams_params_in_blackboard_key()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetGripperCameraParamsOneOfParams_new_params params_in_blackboard_key(::bosdyn_msgs::msg::SetGripperCameraParamsOneOfParams::_params_in_blackboard_key_type arg)
  {
    msg_.params_in_blackboard_key = std::move(arg);
    return Init_SetGripperCameraParamsOneOfParams_new_params(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetGripperCameraParamsOneOfParams msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::SetGripperCameraParamsOneOfParams>()
{
  return bosdyn_msgs::msg::builder::Init_SetGripperCameraParamsOneOfParams_params_in_blackboard_key();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SET_GRIPPER_CAMERA_PARAMS_ONE_OF_PARAMS__BUILDER_HPP_
