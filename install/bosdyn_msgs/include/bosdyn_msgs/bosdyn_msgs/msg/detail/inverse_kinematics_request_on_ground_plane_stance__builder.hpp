// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/InverseKinematicsRequestOnGroundPlaneStance.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_ON_GROUND_PLANE_STANCE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_ON_GROUND_PLANE_STANCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/inverse_kinematics_request_on_ground_plane_stance__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_InverseKinematicsRequestOnGroundPlaneStance_scene_tform_ground_is_set
{
public:
  explicit Init_InverseKinematicsRequestOnGroundPlaneStance_scene_tform_ground_is_set(::bosdyn_msgs::msg::InverseKinematicsRequestOnGroundPlaneStance & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::InverseKinematicsRequestOnGroundPlaneStance scene_tform_ground_is_set(::bosdyn_msgs::msg::InverseKinematicsRequestOnGroundPlaneStance::_scene_tform_ground_is_set_type arg)
  {
    msg_.scene_tform_ground_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::InverseKinematicsRequestOnGroundPlaneStance msg_;
};

class Init_InverseKinematicsRequestOnGroundPlaneStance_scene_tform_ground
{
public:
  Init_InverseKinematicsRequestOnGroundPlaneStance_scene_tform_ground()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InverseKinematicsRequestOnGroundPlaneStance_scene_tform_ground_is_set scene_tform_ground(::bosdyn_msgs::msg::InverseKinematicsRequestOnGroundPlaneStance::_scene_tform_ground_type arg)
  {
    msg_.scene_tform_ground = std::move(arg);
    return Init_InverseKinematicsRequestOnGroundPlaneStance_scene_tform_ground_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::InverseKinematicsRequestOnGroundPlaneStance msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::InverseKinematicsRequestOnGroundPlaneStance>()
{
  return bosdyn_msgs::msg::builder::Init_InverseKinematicsRequestOnGroundPlaneStance_scene_tform_ground();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__INVERSE_KINEMATICS_REQUEST_ON_GROUND_PLANE_STANCE__BUILDER_HPP_
