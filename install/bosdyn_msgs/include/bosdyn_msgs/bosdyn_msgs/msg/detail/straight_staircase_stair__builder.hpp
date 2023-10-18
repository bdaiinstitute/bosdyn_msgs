// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/StraightStaircaseStair.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STRAIGHT_STAIRCASE_STAIR__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STRAIGHT_STAIRCASE_STAIR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/straight_staircase_stair__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_StraightStaircaseStair_run
{
public:
  explicit Init_StraightStaircaseStair_run(::bosdyn_msgs::msg::StraightStaircaseStair & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::StraightStaircaseStair run(::bosdyn_msgs::msg::StraightStaircaseStair::_run_type arg)
  {
    msg_.run = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::StraightStaircaseStair msg_;
};

class Init_StraightStaircaseStair_rise
{
public:
  Init_StraightStaircaseStair_rise()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StraightStaircaseStair_run rise(::bosdyn_msgs::msg::StraightStaircaseStair::_rise_type arg)
  {
    msg_.rise = std::move(arg);
    return Init_StraightStaircaseStair_run(msg_);
  }

private:
  ::bosdyn_msgs::msg::StraightStaircaseStair msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::StraightStaircaseStair>()
{
  return bosdyn_msgs::msg::builder::Init_StraightStaircaseStair_rise();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__STRAIGHT_STAIRCASE_STAIR__BUILDER_HPP_
