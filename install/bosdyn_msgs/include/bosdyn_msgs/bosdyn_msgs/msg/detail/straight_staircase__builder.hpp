// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/StraightStaircase.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STRAIGHT_STAIRCASE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STRAIGHT_STAIRCASE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/straight_staircase__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_StraightStaircase_top_landing_is_set
{
public:
  explicit Init_StraightStaircase_top_landing_is_set(::bosdyn_msgs::msg::StraightStaircase & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::StraightStaircase top_landing_is_set(::bosdyn_msgs::msg::StraightStaircase::_top_landing_is_set_type arg)
  {
    msg_.top_landing_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::StraightStaircase msg_;
};

class Init_StraightStaircase_top_landing
{
public:
  explicit Init_StraightStaircase_top_landing(::bosdyn_msgs::msg::StraightStaircase & msg)
  : msg_(msg)
  {}
  Init_StraightStaircase_top_landing_is_set top_landing(::bosdyn_msgs::msg::StraightStaircase::_top_landing_type arg)
  {
    msg_.top_landing = std::move(arg);
    return Init_StraightStaircase_top_landing_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::StraightStaircase msg_;
};

class Init_StraightStaircase_bottom_landing_is_set
{
public:
  explicit Init_StraightStaircase_bottom_landing_is_set(::bosdyn_msgs::msg::StraightStaircase & msg)
  : msg_(msg)
  {}
  Init_StraightStaircase_top_landing bottom_landing_is_set(::bosdyn_msgs::msg::StraightStaircase::_bottom_landing_is_set_type arg)
  {
    msg_.bottom_landing_is_set = std::move(arg);
    return Init_StraightStaircase_top_landing(msg_);
  }

private:
  ::bosdyn_msgs::msg::StraightStaircase msg_;
};

class Init_StraightStaircase_bottom_landing
{
public:
  explicit Init_StraightStaircase_bottom_landing(::bosdyn_msgs::msg::StraightStaircase & msg)
  : msg_(msg)
  {}
  Init_StraightStaircase_bottom_landing_is_set bottom_landing(::bosdyn_msgs::msg::StraightStaircase::_bottom_landing_type arg)
  {
    msg_.bottom_landing = std::move(arg);
    return Init_StraightStaircase_bottom_landing_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::StraightStaircase msg_;
};

class Init_StraightStaircase_stairs
{
public:
  explicit Init_StraightStaircase_stairs(::bosdyn_msgs::msg::StraightStaircase & msg)
  : msg_(msg)
  {}
  Init_StraightStaircase_bottom_landing stairs(::bosdyn_msgs::msg::StraightStaircase::_stairs_type arg)
  {
    msg_.stairs = std::move(arg);
    return Init_StraightStaircase_bottom_landing(msg_);
  }

private:
  ::bosdyn_msgs::msg::StraightStaircase msg_;
};

class Init_StraightStaircase_location
{
public:
  Init_StraightStaircase_location()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StraightStaircase_stairs location(::bosdyn_msgs::msg::StraightStaircase::_location_type arg)
  {
    msg_.location = std::move(arg);
    return Init_StraightStaircase_stairs(msg_);
  }

private:
  ::bosdyn_msgs::msg::StraightStaircase msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::StraightStaircase>()
{
  return bosdyn_msgs::msg::builder::Init_StraightStaircase_location();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__STRAIGHT_STAIRCASE__BUILDER_HPP_
