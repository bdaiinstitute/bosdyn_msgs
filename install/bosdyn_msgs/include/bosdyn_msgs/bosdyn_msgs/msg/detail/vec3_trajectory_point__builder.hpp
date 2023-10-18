// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/Vec3TrajectoryPoint.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__VEC3_TRAJECTORY_POINT__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__VEC3_TRAJECTORY_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/vec3_trajectory_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_Vec3TrajectoryPoint_time_since_reference_is_set
{
public:
  explicit Init_Vec3TrajectoryPoint_time_since_reference_is_set(::bosdyn_msgs::msg::Vec3TrajectoryPoint & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::Vec3TrajectoryPoint time_since_reference_is_set(::bosdyn_msgs::msg::Vec3TrajectoryPoint::_time_since_reference_is_set_type arg)
  {
    msg_.time_since_reference_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::Vec3TrajectoryPoint msg_;
};

class Init_Vec3TrajectoryPoint_time_since_reference
{
public:
  explicit Init_Vec3TrajectoryPoint_time_since_reference(::bosdyn_msgs::msg::Vec3TrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_Vec3TrajectoryPoint_time_since_reference_is_set time_since_reference(::bosdyn_msgs::msg::Vec3TrajectoryPoint::_time_since_reference_type arg)
  {
    msg_.time_since_reference = std::move(arg);
    return Init_Vec3TrajectoryPoint_time_since_reference_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Vec3TrajectoryPoint msg_;
};

class Init_Vec3TrajectoryPoint_linear_speed
{
public:
  explicit Init_Vec3TrajectoryPoint_linear_speed(::bosdyn_msgs::msg::Vec3TrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_Vec3TrajectoryPoint_time_since_reference linear_speed(::bosdyn_msgs::msg::Vec3TrajectoryPoint::_linear_speed_type arg)
  {
    msg_.linear_speed = std::move(arg);
    return Init_Vec3TrajectoryPoint_time_since_reference(msg_);
  }

private:
  ::bosdyn_msgs::msg::Vec3TrajectoryPoint msg_;
};

class Init_Vec3TrajectoryPoint_point_is_set
{
public:
  explicit Init_Vec3TrajectoryPoint_point_is_set(::bosdyn_msgs::msg::Vec3TrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_Vec3TrajectoryPoint_linear_speed point_is_set(::bosdyn_msgs::msg::Vec3TrajectoryPoint::_point_is_set_type arg)
  {
    msg_.point_is_set = std::move(arg);
    return Init_Vec3TrajectoryPoint_linear_speed(msg_);
  }

private:
  ::bosdyn_msgs::msg::Vec3TrajectoryPoint msg_;
};

class Init_Vec3TrajectoryPoint_point
{
public:
  Init_Vec3TrajectoryPoint_point()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Vec3TrajectoryPoint_point_is_set point(::bosdyn_msgs::msg::Vec3TrajectoryPoint::_point_type arg)
  {
    msg_.point = std::move(arg);
    return Init_Vec3TrajectoryPoint_point_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Vec3TrajectoryPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::Vec3TrajectoryPoint>()
{
  return bosdyn_msgs::msg::builder::Init_Vec3TrajectoryPoint_point();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__VEC3_TRAJECTORY_POINT__BUILDER_HPP_
