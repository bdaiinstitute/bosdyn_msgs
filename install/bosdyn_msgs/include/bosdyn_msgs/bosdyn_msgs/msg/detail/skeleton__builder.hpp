// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/Skeleton.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SKELETON__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SKELETON__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/skeleton__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_Skeleton_urdf
{
public:
  explicit Init_Skeleton_urdf(::bosdyn_msgs::msg::Skeleton & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::Skeleton urdf(::bosdyn_msgs::msg::Skeleton::_urdf_type arg)
  {
    msg_.urdf = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::Skeleton msg_;
};

class Init_Skeleton_links
{
public:
  Init_Skeleton_links()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Skeleton_urdf links(::bosdyn_msgs::msg::Skeleton::_links_type arg)
  {
    msg_.links = std::move(arg);
    return Init_Skeleton_urdf(msg_);
  }

private:
  ::bosdyn_msgs::msg::Skeleton msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::Skeleton>()
{
  return bosdyn_msgs::msg::builder::Init_Skeleton_links();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SKELETON__BUILDER_HPP_
