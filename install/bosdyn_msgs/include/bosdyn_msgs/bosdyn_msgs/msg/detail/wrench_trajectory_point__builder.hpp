// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/WrenchTrajectoryPoint.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__WRENCH_TRAJECTORY_POINT__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__WRENCH_TRAJECTORY_POINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/wrench_trajectory_point__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_WrenchTrajectoryPoint_time_since_reference_is_set
{
public:
  explicit Init_WrenchTrajectoryPoint_time_since_reference_is_set(::bosdyn_msgs::msg::WrenchTrajectoryPoint & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::WrenchTrajectoryPoint time_since_reference_is_set(::bosdyn_msgs::msg::WrenchTrajectoryPoint::_time_since_reference_is_set_type arg)
  {
    msg_.time_since_reference_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::WrenchTrajectoryPoint msg_;
};

class Init_WrenchTrajectoryPoint_time_since_reference
{
public:
  explicit Init_WrenchTrajectoryPoint_time_since_reference(::bosdyn_msgs::msg::WrenchTrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_WrenchTrajectoryPoint_time_since_reference_is_set time_since_reference(::bosdyn_msgs::msg::WrenchTrajectoryPoint::_time_since_reference_type arg)
  {
    msg_.time_since_reference = std::move(arg);
    return Init_WrenchTrajectoryPoint_time_since_reference_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::WrenchTrajectoryPoint msg_;
};

class Init_WrenchTrajectoryPoint_wrench_is_set
{
public:
  explicit Init_WrenchTrajectoryPoint_wrench_is_set(::bosdyn_msgs::msg::WrenchTrajectoryPoint & msg)
  : msg_(msg)
  {}
  Init_WrenchTrajectoryPoint_time_since_reference wrench_is_set(::bosdyn_msgs::msg::WrenchTrajectoryPoint::_wrench_is_set_type arg)
  {
    msg_.wrench_is_set = std::move(arg);
    return Init_WrenchTrajectoryPoint_time_since_reference(msg_);
  }

private:
  ::bosdyn_msgs::msg::WrenchTrajectoryPoint msg_;
};

class Init_WrenchTrajectoryPoint_wrench
{
public:
  Init_WrenchTrajectoryPoint_wrench()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WrenchTrajectoryPoint_wrench_is_set wrench(::bosdyn_msgs::msg::WrenchTrajectoryPoint::_wrench_type arg)
  {
    msg_.wrench = std::move(arg);
    return Init_WrenchTrajectoryPoint_wrench_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::WrenchTrajectoryPoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::WrenchTrajectoryPoint>()
{
  return bosdyn_msgs::msg::builder::Init_WrenchTrajectoryPoint_wrench();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__WRENCH_TRAJECTORY_POINT__BUILDER_HPP_
