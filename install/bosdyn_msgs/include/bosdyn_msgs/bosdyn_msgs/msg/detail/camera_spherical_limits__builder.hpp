// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/CameraSphericalLimits.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CAMERA_SPHERICAL_LIMITS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CAMERA_SPHERICAL_LIMITS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/camera_spherical_limits__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_CameraSphericalLimits_max_angle_is_set
{
public:
  explicit Init_CameraSphericalLimits_max_angle_is_set(::bosdyn_msgs::msg::CameraSphericalLimits & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::CameraSphericalLimits max_angle_is_set(::bosdyn_msgs::msg::CameraSphericalLimits::_max_angle_is_set_type arg)
  {
    msg_.max_angle_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::CameraSphericalLimits msg_;
};

class Init_CameraSphericalLimits_max_angle
{
public:
  explicit Init_CameraSphericalLimits_max_angle(::bosdyn_msgs::msg::CameraSphericalLimits & msg)
  : msg_(msg)
  {}
  Init_CameraSphericalLimits_max_angle_is_set max_angle(::bosdyn_msgs::msg::CameraSphericalLimits::_max_angle_type arg)
  {
    msg_.max_angle = std::move(arg);
    return Init_CameraSphericalLimits_max_angle_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::CameraSphericalLimits msg_;
};

class Init_CameraSphericalLimits_min_angle_is_set
{
public:
  explicit Init_CameraSphericalLimits_min_angle_is_set(::bosdyn_msgs::msg::CameraSphericalLimits & msg)
  : msg_(msg)
  {}
  Init_CameraSphericalLimits_max_angle min_angle_is_set(::bosdyn_msgs::msg::CameraSphericalLimits::_min_angle_is_set_type arg)
  {
    msg_.min_angle_is_set = std::move(arg);
    return Init_CameraSphericalLimits_max_angle(msg_);
  }

private:
  ::bosdyn_msgs::msg::CameraSphericalLimits msg_;
};

class Init_CameraSphericalLimits_min_angle
{
public:
  Init_CameraSphericalLimits_min_angle()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CameraSphericalLimits_min_angle_is_set min_angle(::bosdyn_msgs::msg::CameraSphericalLimits::_min_angle_type arg)
  {
    msg_.min_angle = std::move(arg);
    return Init_CameraSphericalLimits_min_angle_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::CameraSphericalLimits msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::CameraSphericalLimits>()
{
  return bosdyn_msgs::msg::builder::Init_CameraSphericalLimits_min_angle();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CAMERA_SPHERICAL_LIMITS__BUILDER_HPP_
