// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/RobotMetrics.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ROBOT_METRICS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ROBOT_METRICS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/robot_metrics__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotMetrics_metrics
{
public:
  explicit Init_RobotMetrics_metrics(::bosdyn_msgs::msg::RobotMetrics & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::RobotMetrics metrics(::bosdyn_msgs::msg::RobotMetrics::_metrics_type arg)
  {
    msg_.metrics = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotMetrics msg_;
};

class Init_RobotMetrics_timestamp_is_set
{
public:
  explicit Init_RobotMetrics_timestamp_is_set(::bosdyn_msgs::msg::RobotMetrics & msg)
  : msg_(msg)
  {}
  Init_RobotMetrics_metrics timestamp_is_set(::bosdyn_msgs::msg::RobotMetrics::_timestamp_is_set_type arg)
  {
    msg_.timestamp_is_set = std::move(arg);
    return Init_RobotMetrics_metrics(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotMetrics msg_;
};

class Init_RobotMetrics_timestamp
{
public:
  Init_RobotMetrics_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotMetrics_timestamp_is_set timestamp(::bosdyn_msgs::msg::RobotMetrics::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_RobotMetrics_timestamp_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotMetrics msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::RobotMetrics>()
{
  return bosdyn_msgs::msg::builder::Init_RobotMetrics_timestamp();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ROBOT_METRICS__BUILDER_HPP_
