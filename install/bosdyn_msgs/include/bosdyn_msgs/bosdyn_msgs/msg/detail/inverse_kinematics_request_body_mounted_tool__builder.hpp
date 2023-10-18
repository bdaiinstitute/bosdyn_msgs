// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/InverseKinematicsRequestBodyMountedTool.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_BODY_MOUNTED_TOOL__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_BODY_MOUNTED_TOOL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/inverse_kinematics_request_body_mounted_tool__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_InverseKinematicsRequestBodyMountedTool_body_tform_tool_is_set
{
public:
  explicit Init_InverseKinematicsRequestBodyMountedTool_body_tform_tool_is_set(::bosdyn_msgs::msg::InverseKinematicsRequestBodyMountedTool & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::InverseKinematicsRequestBodyMountedTool body_tform_tool_is_set(::bosdyn_msgs::msg::InverseKinematicsRequestBodyMountedTool::_body_tform_tool_is_set_type arg)
  {
    msg_.body_tform_tool_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::InverseKinematicsRequestBodyMountedTool msg_;
};

class Init_InverseKinematicsRequestBodyMountedTool_body_tform_tool
{
public:
  Init_InverseKinematicsRequestBodyMountedTool_body_tform_tool()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InverseKinematicsRequestBodyMountedTool_body_tform_tool_is_set body_tform_tool(::bosdyn_msgs::msg::InverseKinematicsRequestBodyMountedTool::_body_tform_tool_type arg)
  {
    msg_.body_tform_tool = std::move(arg);
    return Init_InverseKinematicsRequestBodyMountedTool_body_tform_tool_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::InverseKinematicsRequestBodyMountedTool msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::InverseKinematicsRequestBodyMountedTool>()
{
  return bosdyn_msgs::msg::builder::Init_InverseKinematicsRequestBodyMountedTool_body_tform_tool();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_BODY_MOUNTED_TOOL__BUILDER_HPP_
