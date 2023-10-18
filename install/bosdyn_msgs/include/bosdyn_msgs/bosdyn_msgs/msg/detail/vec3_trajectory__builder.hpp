// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/Vec3Trajectory.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__VEC3_TRAJECTORY__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__VEC3_TRAJECTORY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/vec3_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_Vec3Trajectory_ending_velocity_is_set
{
public:
  explicit Init_Vec3Trajectory_ending_velocity_is_set(::bosdyn_msgs::msg::Vec3Trajectory & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::Vec3Trajectory ending_velocity_is_set(::bosdyn_msgs::msg::Vec3Trajectory::_ending_velocity_is_set_type arg)
  {
    msg_.ending_velocity_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::Vec3Trajectory msg_;
};

class Init_Vec3Trajectory_ending_velocity
{
public:
  explicit Init_Vec3Trajectory_ending_velocity(::bosdyn_msgs::msg::Vec3Trajectory & msg)
  : msg_(msg)
  {}
  Init_Vec3Trajectory_ending_velocity_is_set ending_velocity(::bosdyn_msgs::msg::Vec3Trajectory::_ending_velocity_type arg)
  {
    msg_.ending_velocity = std::move(arg);
    return Init_Vec3Trajectory_ending_velocity_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Vec3Trajectory msg_;
};

class Init_Vec3Trajectory_starting_velocity_is_set
{
public:
  explicit Init_Vec3Trajectory_starting_velocity_is_set(::bosdyn_msgs::msg::Vec3Trajectory & msg)
  : msg_(msg)
  {}
  Init_Vec3Trajectory_ending_velocity starting_velocity_is_set(::bosdyn_msgs::msg::Vec3Trajectory::_starting_velocity_is_set_type arg)
  {
    msg_.starting_velocity_is_set = std::move(arg);
    return Init_Vec3Trajectory_ending_velocity(msg_);
  }

private:
  ::bosdyn_msgs::msg::Vec3Trajectory msg_;
};

class Init_Vec3Trajectory_starting_velocity
{
public:
  explicit Init_Vec3Trajectory_starting_velocity(::bosdyn_msgs::msg::Vec3Trajectory & msg)
  : msg_(msg)
  {}
  Init_Vec3Trajectory_starting_velocity_is_set starting_velocity(::bosdyn_msgs::msg::Vec3Trajectory::_starting_velocity_type arg)
  {
    msg_.starting_velocity = std::move(arg);
    return Init_Vec3Trajectory_starting_velocity_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Vec3Trajectory msg_;
};

class Init_Vec3Trajectory_pos_interpolation
{
public:
  explicit Init_Vec3Trajectory_pos_interpolation(::bosdyn_msgs::msg::Vec3Trajectory & msg)
  : msg_(msg)
  {}
  Init_Vec3Trajectory_starting_velocity pos_interpolation(::bosdyn_msgs::msg::Vec3Trajectory::_pos_interpolation_type arg)
  {
    msg_.pos_interpolation = std::move(arg);
    return Init_Vec3Trajectory_starting_velocity(msg_);
  }

private:
  ::bosdyn_msgs::msg::Vec3Trajectory msg_;
};

class Init_Vec3Trajectory_reference_time_is_set
{
public:
  explicit Init_Vec3Trajectory_reference_time_is_set(::bosdyn_msgs::msg::Vec3Trajectory & msg)
  : msg_(msg)
  {}
  Init_Vec3Trajectory_pos_interpolation reference_time_is_set(::bosdyn_msgs::msg::Vec3Trajectory::_reference_time_is_set_type arg)
  {
    msg_.reference_time_is_set = std::move(arg);
    return Init_Vec3Trajectory_pos_interpolation(msg_);
  }

private:
  ::bosdyn_msgs::msg::Vec3Trajectory msg_;
};

class Init_Vec3Trajectory_reference_time
{
public:
  explicit Init_Vec3Trajectory_reference_time(::bosdyn_msgs::msg::Vec3Trajectory & msg)
  : msg_(msg)
  {}
  Init_Vec3Trajectory_reference_time_is_set reference_time(::bosdyn_msgs::msg::Vec3Trajectory::_reference_time_type arg)
  {
    msg_.reference_time = std::move(arg);
    return Init_Vec3Trajectory_reference_time_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Vec3Trajectory msg_;
};

class Init_Vec3Trajectory_points
{
public:
  Init_Vec3Trajectory_points()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Vec3Trajectory_reference_time points(::bosdyn_msgs::msg::Vec3Trajectory::_points_type arg)
  {
    msg_.points = std::move(arg);
    return Init_Vec3Trajectory_reference_time(msg_);
  }

private:
  ::bosdyn_msgs::msg::Vec3Trajectory msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::Vec3Trajectory>()
{
  return bosdyn_msgs::msg::builder::Init_Vec3Trajectory_points();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__VEC3_TRAJECTORY__BUILDER_HPP_
