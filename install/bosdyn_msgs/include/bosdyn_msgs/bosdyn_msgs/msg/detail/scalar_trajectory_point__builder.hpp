// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ScalarTrajectoryPoint.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SCALAR_TRAJECTORY_POINT__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SCALAR_TRAJECTORY_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/scalar_trajectory_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ScalarTrajectoryPoint_time_since_reference_is_set
{
public:
  explicit Init_ScalarTrajectoryPoint_time_since_reference_is_set(::bosdyn_msgs::msg::ScalarTrajectoryPoint & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ScalarTrajectoryPoint time_since_reference_is_set(::bosdyn_msgs::msg::ScalarTrajectoryPoint::_time_since_reference_is_set_type arg)
  {
    msg_.time_since_reference_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ScalarTrajectoryPoint msg_;
};

class Init_ScalarTrajectoryPoint_time_since_reference
{
public:
  explicit Init_ScalarTrajectoryPoint_time_since_reference(::bosdyn_msgs::msg::ScalarTrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_ScalarTrajectoryPoint_time_since_reference_is_set time_since_reference(::bosdyn_msgs::msg::ScalarTrajectoryPoint::_time_since_reference_type arg)
  {
    msg_.time_since_reference = std::move(arg);
    return Init_ScalarTrajectoryPoint_time_since_reference_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ScalarTrajectoryPoint msg_;
};

class Init_ScalarTrajectoryPoint_velocity_is_set
{
public:
  explicit Init_ScalarTrajectoryPoint_velocity_is_set(::bosdyn_msgs::msg::ScalarTrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_ScalarTrajectoryPoint_time_since_reference velocity_is_set(::bosdyn_msgs::msg::ScalarTrajectoryPoint::_velocity_is_set_type arg)
  {
    msg_.velocity_is_set = std::move(arg);
    return Init_ScalarTrajectoryPoint_time_since_reference(msg_);
  }

private:
  ::bosdyn_msgs::msg::ScalarTrajectoryPoint msg_;
};

class Init_ScalarTrajectoryPoint_velocity
{
public:
  explicit Init_ScalarTrajectoryPoint_velocity(::bosdyn_msgs::msg::ScalarTrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_ScalarTrajectoryPoint_velocity_is_set velocity(::bosdyn_msgs::msg::ScalarTrajectoryPoint::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return Init_ScalarTrajectoryPoint_velocity_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ScalarTrajectoryPoint msg_;
};

class Init_ScalarTrajectoryPoint_point
{
public:
  Init_ScalarTrajectoryPoint_point()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ScalarTrajectoryPoint_velocity point(::bosdyn_msgs::msg::ScalarTrajectoryPoint::_point_type arg)
  {
    msg_.point = std::move(arg);
    return Init_ScalarTrajectoryPoint_velocity(msg_);
  }

private:
  ::bosdyn_msgs::msg::ScalarTrajectoryPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ScalarTrajectoryPoint>()
{
  return bosdyn_msgs::msg::builder::Init_ScalarTrajectoryPoint_point();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SCALAR_TRAJECTORY_POINT__BUILDER_HPP_
