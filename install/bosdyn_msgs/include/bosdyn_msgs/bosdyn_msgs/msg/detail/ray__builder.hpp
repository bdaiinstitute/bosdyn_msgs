// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/Ray.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__RAY__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__RAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/ray__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_Ray_direction_is_set
{
public:
  explicit Init_Ray_direction_is_set(::bosdyn_msgs::msg::Ray & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::Ray direction_is_set(::bosdyn_msgs::msg::Ray::_direction_is_set_type arg)
  {
    msg_.direction_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::Ray msg_;
};

class Init_Ray_direction
{
public:
  explicit Init_Ray_direction(::bosdyn_msgs::msg::Ray & msg)
  : msg_(msg)
  {}
  Init_Ray_direction_is_set direction(::bosdyn_msgs::msg::Ray::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return Init_Ray_direction_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Ray msg_;
};

class Init_Ray_origin_is_set
{
public:
  explicit Init_Ray_origin_is_set(::bosdyn_msgs::msg::Ray & msg)
  : msg_(msg)
  {}
  Init_Ray_direction origin_is_set(::bosdyn_msgs::msg::Ray::_origin_is_set_type arg)
  {
    msg_.origin_is_set = std::move(arg);
    return Init_Ray_direction(msg_);
  }

private:
  ::bosdyn_msgs::msg::Ray msg_;
};

class Init_Ray_origin
{
public:
  Init_Ray_origin()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Ray_origin_is_set origin(::bosdyn_msgs::msg::Ray::_origin_type arg)
  {
    msg_.origin = std::move(arg);
    return Init_Ray_origin_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Ray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::Ray>()
{
  return bosdyn_msgs::msg::builder::Init_Ray_origin();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__RAY__BUILDER_HPP_
