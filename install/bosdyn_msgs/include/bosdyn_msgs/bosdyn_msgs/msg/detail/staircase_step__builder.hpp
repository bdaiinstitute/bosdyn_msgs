// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/StaircaseStep.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__STAIRCASE_STEP__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__STAIRCASE_STEP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/staircase_step__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_StaircaseStep_width_is_set
{
public:
  explicit Init_StaircaseStep_width_is_set(::bosdyn_msgs::msg::StaircaseStep & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::StaircaseStep width_is_set(::bosdyn_msgs::msg::StaircaseStep::_width_is_set_type arg)
  {
    msg_.width_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::StaircaseStep msg_;
};

class Init_StaircaseStep_width
{
public:
  explicit Init_StaircaseStep_width(::bosdyn_msgs::msg::StaircaseStep & msg)
  : msg_(msg)
  {}
  Init_StaircaseStep_width_is_set width(::bosdyn_msgs::msg::StaircaseStep::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_StaircaseStep_width_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::StaircaseStep msg_;
};

class Init_StaircaseStep_north_is_set
{
public:
  explicit Init_StaircaseStep_north_is_set(::bosdyn_msgs::msg::StaircaseStep & msg)
  : msg_(msg)
  {}
  Init_StaircaseStep_width north_is_set(::bosdyn_msgs::msg::StaircaseStep::_north_is_set_type arg)
  {
    msg_.north_is_set = std::move(arg);
    return Init_StaircaseStep_width(msg_);
  }

private:
  ::bosdyn_msgs::msg::StaircaseStep msg_;
};

class Init_StaircaseStep_north
{
public:
  explicit Init_StaircaseStep_north(::bosdyn_msgs::msg::StaircaseStep & msg)
  : msg_(msg)
  {}
  Init_StaircaseStep_north_is_set north(::bosdyn_msgs::msg::StaircaseStep::_north_type arg)
  {
    msg_.north = std::move(arg);
    return Init_StaircaseStep_north_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::StaircaseStep msg_;
};

class Init_StaircaseStep_point_is_set
{
public:
  explicit Init_StaircaseStep_point_is_set(::bosdyn_msgs::msg::StaircaseStep & msg)
  : msg_(msg)
  {}
  Init_StaircaseStep_north point_is_set(::bosdyn_msgs::msg::StaircaseStep::_point_is_set_type arg)
  {
    msg_.point_is_set = std::move(arg);
    return Init_StaircaseStep_north(msg_);
  }

private:
  ::bosdyn_msgs::msg::StaircaseStep msg_;
};

class Init_StaircaseStep_point
{
public:
  Init_StaircaseStep_point()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StaircaseStep_point_is_set point(::bosdyn_msgs::msg::StaircaseStep::_point_type arg)
  {
    msg_.point = std::move(arg);
    return Init_StaircaseStep_point_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::StaircaseStep msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::StaircaseStep>()
{
  return bosdyn_msgs::msg::builder::Init_StaircaseStep_point();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__STAIRCASE_STEP__BUILDER_HPP_
