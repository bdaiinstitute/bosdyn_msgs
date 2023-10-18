// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/Quad.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__QUAD__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__QUAD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/quad__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_Quad_size
{
public:
  explicit Init_Quad_size(::bosdyn_msgs::msg::Quad & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::Quad size(::bosdyn_msgs::msg::Quad::_size_type arg)
  {
    msg_.size = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::Quad msg_;
};

class Init_Quad_pose_is_set
{
public:
  explicit Init_Quad_pose_is_set(::bosdyn_msgs::msg::Quad & msg)
  : msg_(msg)
  {}
  Init_Quad_size pose_is_set(::bosdyn_msgs::msg::Quad::_pose_is_set_type arg)
  {
    msg_.pose_is_set = std::move(arg);
    return Init_Quad_size(msg_);
  }

private:
  ::bosdyn_msgs::msg::Quad msg_;
};

class Init_Quad_pose
{
public:
  Init_Quad_pose()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Quad_pose_is_set pose(::bosdyn_msgs::msg::Quad::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return Init_Quad_pose_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Quad msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::Quad>()
{
  return bosdyn_msgs::msg::builder::Init_Quad_pose();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__QUAD__BUILDER_HPP_
