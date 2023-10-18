// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/SE2Pose.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SE2_POSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SE2_POSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/se2_pose__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_SE2Pose_angle
{
public:
  explicit Init_SE2Pose_angle(::bosdyn_msgs::msg::SE2Pose & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::SE2Pose angle(::bosdyn_msgs::msg::SE2Pose::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::SE2Pose msg_;
};

class Init_SE2Pose_position_is_set
{
public:
  explicit Init_SE2Pose_position_is_set(::bosdyn_msgs::msg::SE2Pose & msg)
  : msg_(msg)
  {}
  Init_SE2Pose_angle position_is_set(::bosdyn_msgs::msg::SE2Pose::_position_is_set_type arg)
  {
    msg_.position_is_set = std::move(arg);
    return Init_SE2Pose_angle(msg_);
  }

private:
  ::bosdyn_msgs::msg::SE2Pose msg_;
};

class Init_SE2Pose_position
{
public:
  Init_SE2Pose_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SE2Pose_position_is_set position(::bosdyn_msgs::msg::SE2Pose::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_SE2Pose_position_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SE2Pose msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::SE2Pose>()
{
  return bosdyn_msgs::msg::builder::Init_SE2Pose_position();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SE2_POSE__BUILDER_HPP_
