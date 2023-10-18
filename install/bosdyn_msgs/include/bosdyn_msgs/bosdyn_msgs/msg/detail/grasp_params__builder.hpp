// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GraspParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GRASP_PARAMS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GRASP_PARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/grasp_params__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GraspParams_manipulation_camera_source
{
public:
  explicit Init_GraspParams_manipulation_camera_source(::bosdyn_msgs::msg::GraspParams & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GraspParams manipulation_camera_source(::bosdyn_msgs::msg::GraspParams::_manipulation_camera_source_type arg)
  {
    msg_.manipulation_camera_source = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GraspParams msg_;
};

class Init_GraspParams_position_constraint
{
public:
  explicit Init_GraspParams_position_constraint(::bosdyn_msgs::msg::GraspParams & msg)
  : msg_(msg)
  {}
  Init_GraspParams_manipulation_camera_source position_constraint(::bosdyn_msgs::msg::GraspParams::_position_constraint_type arg)
  {
    msg_.position_constraint = std::move(arg);
    return Init_GraspParams_manipulation_camera_source(msg_);
  }

private:
  ::bosdyn_msgs::msg::GraspParams msg_;
};

class Init_GraspParams_allowable_orientation
{
public:
  explicit Init_GraspParams_allowable_orientation(::bosdyn_msgs::msg::GraspParams & msg)
  : msg_(msg)
  {}
  Init_GraspParams_position_constraint allowable_orientation(::bosdyn_msgs::msg::GraspParams::_allowable_orientation_type arg)
  {
    msg_.allowable_orientation = std::move(arg);
    return Init_GraspParams_position_constraint(msg_);
  }

private:
  ::bosdyn_msgs::msg::GraspParams msg_;
};

class Init_GraspParams_grasp_params_frame_name
{
public:
  explicit Init_GraspParams_grasp_params_frame_name(::bosdyn_msgs::msg::GraspParams & msg)
  : msg_(msg)
  {}
  Init_GraspParams_allowable_orientation grasp_params_frame_name(::bosdyn_msgs::msg::GraspParams::_grasp_params_frame_name_type arg)
  {
    msg_.grasp_params_frame_name = std::move(arg);
    return Init_GraspParams_allowable_orientation(msg_);
  }

private:
  ::bosdyn_msgs::msg::GraspParams msg_;
};

class Init_GraspParams_grasp_palm_to_fingertip
{
public:
  Init_GraspParams_grasp_palm_to_fingertip()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GraspParams_grasp_params_frame_name grasp_palm_to_fingertip(::bosdyn_msgs::msg::GraspParams::_grasp_palm_to_fingertip_type arg)
  {
    msg_.grasp_palm_to_fingertip = std::move(arg);
    return Init_GraspParams_grasp_params_frame_name(msg_);
  }

private:
  ::bosdyn_msgs::msg::GraspParams msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GraspParams>()
{
  return bosdyn_msgs::msg::builder::Init_GraspParams_grasp_palm_to_fingertip();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GRASP_PARAMS__BUILDER_HPP_
