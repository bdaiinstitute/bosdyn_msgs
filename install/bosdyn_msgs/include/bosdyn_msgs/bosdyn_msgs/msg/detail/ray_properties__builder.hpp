// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/RayProperties.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__RAY_PROPERTIES__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__RAY_PROPERTIES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/ray_properties__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_RayProperties_frame
{
public:
  explicit Init_RayProperties_frame(::bosdyn_msgs::msg::RayProperties & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::RayProperties frame(::bosdyn_msgs::msg::RayProperties::_frame_type arg)
  {
    msg_.frame = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::RayProperties msg_;
};

class Init_RayProperties_ray_is_set
{
public:
  explicit Init_RayProperties_ray_is_set(::bosdyn_msgs::msg::RayProperties & msg)
  : msg_(msg)
  {}
  Init_RayProperties_frame ray_is_set(::bosdyn_msgs::msg::RayProperties::_ray_is_set_type arg)
  {
    msg_.ray_is_set = std::move(arg);
    return Init_RayProperties_frame(msg_);
  }

private:
  ::bosdyn_msgs::msg::RayProperties msg_;
};

class Init_RayProperties_ray
{
public:
  Init_RayProperties_ray()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RayProperties_ray_is_set ray(::bosdyn_msgs::msg::RayProperties::_ray_type arg)
  {
    msg_.ray = std::move(arg);
    return Init_RayProperties_ray_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RayProperties msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::RayProperties>()
{
  return bosdyn_msgs::msg::builder::Init_RayProperties_ray();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__RAY_PROPERTIES__BUILDER_HPP_
