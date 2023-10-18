// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/RotationWithTolerance.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ROTATION_WITH_TOLERANCE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ROTATION_WITH_TOLERANCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/rotation_with_tolerance__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_RotationWithTolerance_threshold_radians
{
public:
  explicit Init_RotationWithTolerance_threshold_radians(::bosdyn_msgs::msg::RotationWithTolerance & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::RotationWithTolerance threshold_radians(::bosdyn_msgs::msg::RotationWithTolerance::_threshold_radians_type arg)
  {
    msg_.threshold_radians = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::RotationWithTolerance msg_;
};

class Init_RotationWithTolerance_rotation_ewrt_frame_is_set
{
public:
  explicit Init_RotationWithTolerance_rotation_ewrt_frame_is_set(::bosdyn_msgs::msg::RotationWithTolerance & msg)
  : msg_(msg)
  {}
  Init_RotationWithTolerance_threshold_radians rotation_ewrt_frame_is_set(::bosdyn_msgs::msg::RotationWithTolerance::_rotation_ewrt_frame_is_set_type arg)
  {
    msg_.rotation_ewrt_frame_is_set = std::move(arg);
    return Init_RotationWithTolerance_threshold_radians(msg_);
  }

private:
  ::bosdyn_msgs::msg::RotationWithTolerance msg_;
};

class Init_RotationWithTolerance_rotation_ewrt_frame
{
public:
  Init_RotationWithTolerance_rotation_ewrt_frame()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RotationWithTolerance_rotation_ewrt_frame_is_set rotation_ewrt_frame(::bosdyn_msgs::msg::RotationWithTolerance::_rotation_ewrt_frame_type arg)
  {
    msg_.rotation_ewrt_frame = std::move(arg);
    return Init_RotationWithTolerance_rotation_ewrt_frame_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RotationWithTolerance msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::RotationWithTolerance>()
{
  return bosdyn_msgs::msg::builder::Init_RotationWithTolerance_rotation_ewrt_frame();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ROTATION_WITH_TOLERANCE__BUILDER_HPP_
