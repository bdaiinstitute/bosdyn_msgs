// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/RobotMetricsResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ROBOT_METRICS_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ROBOT_METRICS_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/robot_metrics_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotMetricsResponse_robot_metrics_is_set
{
public:
  explicit Init_RobotMetricsResponse_robot_metrics_is_set(::bosdyn_msgs::msg::RobotMetricsResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::RobotMetricsResponse robot_metrics_is_set(::bosdyn_msgs::msg::RobotMetricsResponse::_robot_metrics_is_set_type arg)
  {
    msg_.robot_metrics_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotMetricsResponse msg_;
};

class Init_RobotMetricsResponse_robot_metrics
{
public:
  explicit Init_RobotMetricsResponse_robot_metrics(::bosdyn_msgs::msg::RobotMetricsResponse & msg)
  : msg_(msg)
  {}
  Init_RobotMetricsResponse_robot_metrics_is_set robot_metrics(::bosdyn_msgs::msg::RobotMetricsResponse::_robot_metrics_type arg)
  {
    msg_.robot_metrics = std::move(arg);
    return Init_RobotMetricsResponse_robot_metrics_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotMetricsResponse msg_;
};

class Init_RobotMetricsResponse_header_is_set
{
public:
  explicit Init_RobotMetricsResponse_header_is_set(::bosdyn_msgs::msg::RobotMetricsResponse & msg)
  : msg_(msg)
  {}
  Init_RobotMetricsResponse_robot_metrics header_is_set(::bosdyn_msgs::msg::RobotMetricsResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_RobotMetricsResponse_robot_metrics(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotMetricsResponse msg_;
};

class Init_RobotMetricsResponse_header
{
public:
  Init_RobotMetricsResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotMetricsResponse_header_is_set header(::bosdyn_msgs::msg::RobotMetricsResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RobotMetricsResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotMetricsResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::RobotMetricsResponse>()
{
  return bosdyn_msgs::msg::builder::Init_RobotMetricsResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ROBOT_METRICS_RESPONSE__BUILDER_HPP_
