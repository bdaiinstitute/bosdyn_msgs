// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ObstacleParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__OBSTACLE_PARAMS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__OBSTACLE_PARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/obstacle_params__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ObstacleParams_disable_vision_negative_obstacles
{
public:
  explicit Init_ObstacleParams_disable_vision_negative_obstacles(::bosdyn_msgs::msg::ObstacleParams & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ObstacleParams disable_vision_negative_obstacles(::bosdyn_msgs::msg::ObstacleParams::_disable_vision_negative_obstacles_type arg)
  {
    msg_.disable_vision_negative_obstacles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ObstacleParams msg_;
};

class Init_ObstacleParams_disable_vision_foot_obstacle_body_assist
{
public:
  explicit Init_ObstacleParams_disable_vision_foot_obstacle_body_assist(::bosdyn_msgs::msg::ObstacleParams & msg)
  : msg_(msg)
  {}
  Init_ObstacleParams_disable_vision_negative_obstacles disable_vision_foot_obstacle_body_assist(::bosdyn_msgs::msg::ObstacleParams::_disable_vision_foot_obstacle_body_assist_type arg)
  {
    msg_.disable_vision_foot_obstacle_body_assist = std::move(arg);
    return Init_ObstacleParams_disable_vision_negative_obstacles(msg_);
  }

private:
  ::bosdyn_msgs::msg::ObstacleParams msg_;
};

class Init_ObstacleParams_obstacle_avoidance_padding
{
public:
  explicit Init_ObstacleParams_obstacle_avoidance_padding(::bosdyn_msgs::msg::ObstacleParams & msg)
  : msg_(msg)
  {}
  Init_ObstacleParams_disable_vision_foot_obstacle_body_assist obstacle_avoidance_padding(::bosdyn_msgs::msg::ObstacleParams::_obstacle_avoidance_padding_type arg)
  {
    msg_.obstacle_avoidance_padding = std::move(arg);
    return Init_ObstacleParams_disable_vision_foot_obstacle_body_assist(msg_);
  }

private:
  ::bosdyn_msgs::msg::ObstacleParams msg_;
};

class Init_ObstacleParams_disable_vision_body_obstacle_avoidance
{
public:
  explicit Init_ObstacleParams_disable_vision_body_obstacle_avoidance(::bosdyn_msgs::msg::ObstacleParams & msg)
  : msg_(msg)
  {}
  Init_ObstacleParams_obstacle_avoidance_padding disable_vision_body_obstacle_avoidance(::bosdyn_msgs::msg::ObstacleParams::_disable_vision_body_obstacle_avoidance_type arg)
  {
    msg_.disable_vision_body_obstacle_avoidance = std::move(arg);
    return Init_ObstacleParams_obstacle_avoidance_padding(msg_);
  }

private:
  ::bosdyn_msgs::msg::ObstacleParams msg_;
};

class Init_ObstacleParams_disable_vision_foot_constraint_avoidance
{
public:
  explicit Init_ObstacleParams_disable_vision_foot_constraint_avoidance(::bosdyn_msgs::msg::ObstacleParams & msg)
  : msg_(msg)
  {}
  Init_ObstacleParams_disable_vision_body_obstacle_avoidance disable_vision_foot_constraint_avoidance(::bosdyn_msgs::msg::ObstacleParams::_disable_vision_foot_constraint_avoidance_type arg)
  {
    msg_.disable_vision_foot_constraint_avoidance = std::move(arg);
    return Init_ObstacleParams_disable_vision_body_obstacle_avoidance(msg_);
  }

private:
  ::bosdyn_msgs::msg::ObstacleParams msg_;
};

class Init_ObstacleParams_disable_vision_foot_obstacle_avoidance
{
public:
  Init_ObstacleParams_disable_vision_foot_obstacle_avoidance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ObstacleParams_disable_vision_foot_constraint_avoidance disable_vision_foot_obstacle_avoidance(::bosdyn_msgs::msg::ObstacleParams::_disable_vision_foot_obstacle_avoidance_type arg)
  {
    msg_.disable_vision_foot_obstacle_avoidance = std::move(arg);
    return Init_ObstacleParams_disable_vision_foot_constraint_avoidance(msg_);
  }

private:
  ::bosdyn_msgs::msg::ObstacleParams msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ObstacleParams>()
{
  return bosdyn_msgs::msg::builder::Init_ObstacleParams_disable_vision_foot_obstacle_avoidance();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__OBSTACLE_PARAMS__BUILDER_HPP_
