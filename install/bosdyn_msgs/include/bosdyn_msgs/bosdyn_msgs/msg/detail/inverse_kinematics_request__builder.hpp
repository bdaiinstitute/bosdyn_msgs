// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/InverseKinematicsRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/inverse_kinematics_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_InverseKinematicsRequest_task_specification
{
public:
  explicit Init_InverseKinematicsRequest_task_specification(::bosdyn_msgs::msg::InverseKinematicsRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::InverseKinematicsRequest task_specification(::bosdyn_msgs::msg::InverseKinematicsRequest::_task_specification_type arg)
  {
    msg_.task_specification = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::InverseKinematicsRequest msg_;
};

class Init_InverseKinematicsRequest_tool_specification
{
public:
  explicit Init_InverseKinematicsRequest_tool_specification(::bosdyn_msgs::msg::InverseKinematicsRequest & msg)
  : msg_(msg)
  {}
  Init_InverseKinematicsRequest_task_specification tool_specification(::bosdyn_msgs::msg::InverseKinematicsRequest::_tool_specification_type arg)
  {
    msg_.tool_specification = std::move(arg);
    return Init_InverseKinematicsRequest_task_specification(msg_);
  }

private:
  ::bosdyn_msgs::msg::InverseKinematicsRequest msg_;
};

class Init_InverseKinematicsRequest_stance_specification
{
public:
  explicit Init_InverseKinematicsRequest_stance_specification(::bosdyn_msgs::msg::InverseKinematicsRequest & msg)
  : msg_(msg)
  {}
  Init_InverseKinematicsRequest_tool_specification stance_specification(::bosdyn_msgs::msg::InverseKinematicsRequest::_stance_specification_type arg)
  {
    msg_.stance_specification = std::move(arg);
    return Init_InverseKinematicsRequest_tool_specification(msg_);
  }

private:
  ::bosdyn_msgs::msg::InverseKinematicsRequest msg_;
};

class Init_InverseKinematicsRequest_scene_tform_body_nominal_is_set
{
public:
  explicit Init_InverseKinematicsRequest_scene_tform_body_nominal_is_set(::bosdyn_msgs::msg::InverseKinematicsRequest & msg)
  : msg_(msg)
  {}
  Init_InverseKinematicsRequest_stance_specification scene_tform_body_nominal_is_set(::bosdyn_msgs::msg::InverseKinematicsRequest::_scene_tform_body_nominal_is_set_type arg)
  {
    msg_.scene_tform_body_nominal_is_set = std::move(arg);
    return Init_InverseKinematicsRequest_stance_specification(msg_);
  }

private:
  ::bosdyn_msgs::msg::InverseKinematicsRequest msg_;
};

class Init_InverseKinematicsRequest_scene_tform_body_nominal
{
public:
  explicit Init_InverseKinematicsRequest_scene_tform_body_nominal(::bosdyn_msgs::msg::InverseKinematicsRequest & msg)
  : msg_(msg)
  {}
  Init_InverseKinematicsRequest_scene_tform_body_nominal_is_set scene_tform_body_nominal(::bosdyn_msgs::msg::InverseKinematicsRequest::_scene_tform_body_nominal_type arg)
  {
    msg_.scene_tform_body_nominal = std::move(arg);
    return Init_InverseKinematicsRequest_scene_tform_body_nominal_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::InverseKinematicsRequest msg_;
};

class Init_InverseKinematicsRequest_nominal_arm_configuration_overrides_is_set
{
public:
  explicit Init_InverseKinematicsRequest_nominal_arm_configuration_overrides_is_set(::bosdyn_msgs::msg::InverseKinematicsRequest & msg)
  : msg_(msg)
  {}
  Init_InverseKinematicsRequest_scene_tform_body_nominal nominal_arm_configuration_overrides_is_set(::bosdyn_msgs::msg::InverseKinematicsRequest::_nominal_arm_configuration_overrides_is_set_type arg)
  {
    msg_.nominal_arm_configuration_overrides_is_set = std::move(arg);
    return Init_InverseKinematicsRequest_scene_tform_body_nominal(msg_);
  }

private:
  ::bosdyn_msgs::msg::InverseKinematicsRequest msg_;
};

class Init_InverseKinematicsRequest_nominal_arm_configuration_overrides
{
public:
  explicit Init_InverseKinematicsRequest_nominal_arm_configuration_overrides(::bosdyn_msgs::msg::InverseKinematicsRequest & msg)
  : msg_(msg)
  {}
  Init_InverseKinematicsRequest_nominal_arm_configuration_overrides_is_set nominal_arm_configuration_overrides(::bosdyn_msgs::msg::InverseKinematicsRequest::_nominal_arm_configuration_overrides_type arg)
  {
    msg_.nominal_arm_configuration_overrides = std::move(arg);
    return Init_InverseKinematicsRequest_nominal_arm_configuration_overrides_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::InverseKinematicsRequest msg_;
};

class Init_InverseKinematicsRequest_nominal_arm_configuration
{
public:
  explicit Init_InverseKinematicsRequest_nominal_arm_configuration(::bosdyn_msgs::msg::InverseKinematicsRequest & msg)
  : msg_(msg)
  {}
  Init_InverseKinematicsRequest_nominal_arm_configuration_overrides nominal_arm_configuration(::bosdyn_msgs::msg::InverseKinematicsRequest::_nominal_arm_configuration_type arg)
  {
    msg_.nominal_arm_configuration = std::move(arg);
    return Init_InverseKinematicsRequest_nominal_arm_configuration_overrides(msg_);
  }

private:
  ::bosdyn_msgs::msg::InverseKinematicsRequest msg_;
};

class Init_InverseKinematicsRequest_scene_tform_task_is_set
{
public:
  explicit Init_InverseKinematicsRequest_scene_tform_task_is_set(::bosdyn_msgs::msg::InverseKinematicsRequest & msg)
  : msg_(msg)
  {}
  Init_InverseKinematicsRequest_nominal_arm_configuration scene_tform_task_is_set(::bosdyn_msgs::msg::InverseKinematicsRequest::_scene_tform_task_is_set_type arg)
  {
    msg_.scene_tform_task_is_set = std::move(arg);
    return Init_InverseKinematicsRequest_nominal_arm_configuration(msg_);
  }

private:
  ::bosdyn_msgs::msg::InverseKinematicsRequest msg_;
};

class Init_InverseKinematicsRequest_scene_tform_task
{
public:
  explicit Init_InverseKinematicsRequest_scene_tform_task(::bosdyn_msgs::msg::InverseKinematicsRequest & msg)
  : msg_(msg)
  {}
  Init_InverseKinematicsRequest_scene_tform_task_is_set scene_tform_task(::bosdyn_msgs::msg::InverseKinematicsRequest::_scene_tform_task_type arg)
  {
    msg_.scene_tform_task = std::move(arg);
    return Init_InverseKinematicsRequest_scene_tform_task_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::InverseKinematicsRequest msg_;
};

class Init_InverseKinematicsRequest_root_tform_scene_is_set
{
public:
  explicit Init_InverseKinematicsRequest_root_tform_scene_is_set(::bosdyn_msgs::msg::InverseKinematicsRequest & msg)
  : msg_(msg)
  {}
  Init_InverseKinematicsRequest_scene_tform_task root_tform_scene_is_set(::bosdyn_msgs::msg::InverseKinematicsRequest::_root_tform_scene_is_set_type arg)
  {
    msg_.root_tform_scene_is_set = std::move(arg);
    return Init_InverseKinematicsRequest_scene_tform_task(msg_);
  }

private:
  ::bosdyn_msgs::msg::InverseKinematicsRequest msg_;
};

class Init_InverseKinematicsRequest_root_tform_scene
{
public:
  explicit Init_InverseKinematicsRequest_root_tform_scene(::bosdyn_msgs::msg::InverseKinematicsRequest & msg)
  : msg_(msg)
  {}
  Init_InverseKinematicsRequest_root_tform_scene_is_set root_tform_scene(::bosdyn_msgs::msg::InverseKinematicsRequest::_root_tform_scene_type arg)
  {
    msg_.root_tform_scene = std::move(arg);
    return Init_InverseKinematicsRequest_root_tform_scene_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::InverseKinematicsRequest msg_;
};

class Init_InverseKinematicsRequest_root_frame_name
{
public:
  explicit Init_InverseKinematicsRequest_root_frame_name(::bosdyn_msgs::msg::InverseKinematicsRequest & msg)
  : msg_(msg)
  {}
  Init_InverseKinematicsRequest_root_tform_scene root_frame_name(::bosdyn_msgs::msg::InverseKinematicsRequest::_root_frame_name_type arg)
  {
    msg_.root_frame_name = std::move(arg);
    return Init_InverseKinematicsRequest_root_tform_scene(msg_);
  }

private:
  ::bosdyn_msgs::msg::InverseKinematicsRequest msg_;
};

class Init_InverseKinematicsRequest_header_is_set
{
public:
  explicit Init_InverseKinematicsRequest_header_is_set(::bosdyn_msgs::msg::InverseKinematicsRequest & msg)
  : msg_(msg)
  {}
  Init_InverseKinematicsRequest_root_frame_name header_is_set(::bosdyn_msgs::msg::InverseKinematicsRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_InverseKinematicsRequest_root_frame_name(msg_);
  }

private:
  ::bosdyn_msgs::msg::InverseKinematicsRequest msg_;
};

class Init_InverseKinematicsRequest_header
{
public:
  Init_InverseKinematicsRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InverseKinematicsRequest_header_is_set header(::bosdyn_msgs::msg::InverseKinematicsRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_InverseKinematicsRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::InverseKinematicsRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::InverseKinematicsRequest>()
{
  return bosdyn_msgs::msg::builder::Init_InverseKinematicsRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST__BUILDER_HPP_
