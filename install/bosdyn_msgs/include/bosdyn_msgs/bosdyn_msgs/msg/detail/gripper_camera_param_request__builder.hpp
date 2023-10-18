// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GripperCameraParamRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GRIPPER_CAMERA_PARAM_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GRIPPER_CAMERA_PARAM_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/gripper_camera_param_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GripperCameraParamRequest_params_is_set
{
public:
  explicit Init_GripperCameraParamRequest_params_is_set(::bosdyn_msgs::msg::GripperCameraParamRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GripperCameraParamRequest params_is_set(::bosdyn_msgs::msg::GripperCameraParamRequest::_params_is_set_type arg)
  {
    msg_.params_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GripperCameraParamRequest msg_;
};

class Init_GripperCameraParamRequest_params
{
public:
  explicit Init_GripperCameraParamRequest_params(::bosdyn_msgs::msg::GripperCameraParamRequest & msg)
  : msg_(msg)
  {}
  Init_GripperCameraParamRequest_params_is_set params(::bosdyn_msgs::msg::GripperCameraParamRequest::_params_type arg)
  {
    msg_.params = std::move(arg);
    return Init_GripperCameraParamRequest_params_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GripperCameraParamRequest msg_;
};

class Init_GripperCameraParamRequest_header_is_set
{
public:
  explicit Init_GripperCameraParamRequest_header_is_set(::bosdyn_msgs::msg::GripperCameraParamRequest & msg)
  : msg_(msg)
  {}
  Init_GripperCameraParamRequest_params header_is_set(::bosdyn_msgs::msg::GripperCameraParamRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_GripperCameraParamRequest_params(msg_);
  }

private:
  ::bosdyn_msgs::msg::GripperCameraParamRequest msg_;
};

class Init_GripperCameraParamRequest_header
{
public:
  Init_GripperCameraParamRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GripperCameraParamRequest_header_is_set header(::bosdyn_msgs::msg::GripperCameraParamRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GripperCameraParamRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GripperCameraParamRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GripperCameraParamRequest>()
{
  return bosdyn_msgs::msg::builder::Init_GripperCameraParamRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GRIPPER_CAMERA_PARAM_REQUEST__BUILDER_HPP_
