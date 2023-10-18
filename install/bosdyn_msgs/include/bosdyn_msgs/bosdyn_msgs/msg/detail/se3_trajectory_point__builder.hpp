// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/SE3TrajectoryPoint.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SE3_TRAJECTORY_POINT__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SE3_TRAJECTORY_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/se3_trajectory_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_SE3TrajectoryPoint_time_since_reference_is_set
{
public:
  explicit Init_SE3TrajectoryPoint_time_since_reference_is_set(::bosdyn_msgs::msg::SE3TrajectoryPoint & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::SE3TrajectoryPoint time_since_reference_is_set(::bosdyn_msgs::msg::SE3TrajectoryPoint::_time_since_reference_is_set_type arg)
  {
    msg_.time_since_reference_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::SE3TrajectoryPoint msg_;
};

class Init_SE3TrajectoryPoint_time_since_reference
{
public:
  explicit Init_SE3TrajectoryPoint_time_since_reference(::bosdyn_msgs::msg::SE3TrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_SE3TrajectoryPoint_time_since_reference_is_set time_since_reference(::bosdyn_msgs::msg::SE3TrajectoryPoint::_time_since_reference_type arg)
  {
    msg_.time_since_reference = std::move(arg);
    return Init_SE3TrajectoryPoint_time_since_reference_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SE3TrajectoryPoint msg_;
};

class Init_SE3TrajectoryPoint_velocity_is_set
{
public:
  explicit Init_SE3TrajectoryPoint_velocity_is_set(::bosdyn_msgs::msg::SE3TrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_SE3TrajectoryPoint_time_since_reference velocity_is_set(::bosdyn_msgs::msg::SE3TrajectoryPoint::_velocity_is_set_type arg)
  {
    msg_.velocity_is_set = std::move(arg);
    return Init_SE3TrajectoryPoint_time_since_reference(msg_);
  }

private:
  ::bosdyn_msgs::msg::SE3TrajectoryPoint msg_;
};

class Init_SE3TrajectoryPoint_velocity
{
public:
  explicit Init_SE3TrajectoryPoint_velocity(::bosdyn_msgs::msg::SE3TrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_SE3TrajectoryPoint_velocity_is_set velocity(::bosdyn_msgs::msg::SE3TrajectoryPoint::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_SE3TrajectoryPoint_velocity_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SE3TrajectoryPoint msg_;
};

class Init_SE3TrajectoryPoint_pose_is_set
{
public:
  explicit Init_SE3TrajectoryPoint_pose_is_set(::bosdyn_msgs::msg::SE3TrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_SE3TrajectoryPoint_velocity pose_is_set(::bosdyn_msgs::msg::SE3TrajectoryPoint::_pose_is_set_type arg)
  {
    msg_.pose_is_set = std::move(arg);
    return Init_SE3TrajectoryPoint_velocity(msg_);
  }

private:
  ::bosdyn_msgs::msg::SE3TrajectoryPoint msg_;
};

class Init_SE3TrajectoryPoint_pose
{
public:
  Init_SE3TrajectoryPoint_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SE3TrajectoryPoint_pose_is_set pose(::bosdyn_msgs::msg::SE3TrajectoryPoint::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_SE3TrajectoryPoint_pose_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SE3TrajectoryPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::SE3TrajectoryPoint>()
{
  return bosdyn_msgs::msg::builder::Init_SE3TrajectoryPoint_pose();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SE3_TRAJECTORY_POINT__BUILDER_HPP_
