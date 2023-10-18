// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/WrenchTrajectory.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__WRENCH_TRAJECTORY__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__WRENCH_TRAJECTORY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/wrench_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_WrenchTrajectory_reference_time_is_set
{
public:
  explicit Init_WrenchTrajectory_reference_time_is_set(::bosdyn_msgs::msg::WrenchTrajectory & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::WrenchTrajectory reference_time_is_set(::bosdyn_msgs::msg::WrenchTrajectory::_reference_time_is_set_type arg)
  {
    msg_.reference_time_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::WrenchTrajectory msg_;
};

class Init_WrenchTrajectory_reference_time
{
public:
  explicit Init_WrenchTrajectory_reference_time(::bosdyn_msgs::msg::WrenchTrajectory & msg)
  : msg_(msg)
  {}
  Init_WrenchTrajectory_reference_time_is_set reference_time(::bosdyn_msgs::msg::WrenchTrajectory::_reference_time_type arg)
  {
    msg_.reference_time = std::move(arg);
    return Init_WrenchTrajectory_reference_time_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::WrenchTrajectory msg_;
};

class Init_WrenchTrajectory_points
{
public:
  Init_WrenchTrajectory_points()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WrenchTrajectory_reference_time points(::bosdyn_msgs::msg::WrenchTrajectory::_points_type arg)
  {
    msg_.points = std::move(arg);
    return Init_WrenchTrajectory_reference_time(msg_);
  }

private:
  ::bosdyn_msgs::msg::WrenchTrajectory msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::WrenchTrajectory>()
{
  return bosdyn_msgs::msg::builder::Init_WrenchTrajectory_points();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__WRENCH_TRAJECTORY__BUILDER_HPP_
