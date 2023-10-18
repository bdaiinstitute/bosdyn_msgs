// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/StairTransform.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STAIR_TRANSFORM__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STAIR_TRANSFORM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/stair_transform__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_StairTransform_frame_name
{
public:
  explicit Init_StairTransform_frame_name(::bosdyn_msgs::msg::StairTransform & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::StairTransform frame_name(::bosdyn_msgs::msg::StairTransform::_frame_name_type arg)
  {
    msg_.frame_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::StairTransform msg_;
};

class Init_StairTransform_frame_tform_stairs_is_set
{
public:
  explicit Init_StairTransform_frame_tform_stairs_is_set(::bosdyn_msgs::msg::StairTransform & msg)
  : msg_(msg)
  {}
  Init_StairTransform_frame_name frame_tform_stairs_is_set(::bosdyn_msgs::msg::StairTransform::_frame_tform_stairs_is_set_type arg)
  {
    msg_.frame_tform_stairs_is_set = std::move(arg);
    return Init_StairTransform_frame_name(msg_);
  }

private:
  ::bosdyn_msgs::msg::StairTransform msg_;
};

class Init_StairTransform_frame_tform_stairs
{
public:
  Init_StairTransform_frame_tform_stairs()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StairTransform_frame_tform_stairs_is_set frame_tform_stairs(::bosdyn_msgs::msg::StairTransform::_frame_tform_stairs_type arg)
  {
    msg_.frame_tform_stairs = std::move(arg);
    return Init_StairTransform_frame_tform_stairs_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::StairTransform msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::StairTransform>()
{
  return bosdyn_msgs::msg::builder::Init_StairTransform_frame_tform_stairs();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__STAIR_TRANSFORM__BUILDER_HPP_
