// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/TimeRange.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__TIME_RANGE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__TIME_RANGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/time_range__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_TimeRange_end_is_set
{
public:
  explicit Init_TimeRange_end_is_set(::bosdyn_msgs::msg::TimeRange & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::TimeRange end_is_set(::bosdyn_msgs::msg::TimeRange::_end_is_set_type arg)
  {
    msg_.end_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::TimeRange msg_;
};

class Init_TimeRange_end
{
public:
  explicit Init_TimeRange_end(::bosdyn_msgs::msg::TimeRange & msg)
  : msg_(msg)
  {}
  Init_TimeRange_end_is_set end(::bosdyn_msgs::msg::TimeRange::_end_type arg)
  {
    msg_.end = std::move(arg);
    return Init_TimeRange_end_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::TimeRange msg_;
};

class Init_TimeRange_start_is_set
{
public:
  explicit Init_TimeRange_start_is_set(::bosdyn_msgs::msg::TimeRange & msg)
  : msg_(msg)
  {}
  Init_TimeRange_end start_is_set(::bosdyn_msgs::msg::TimeRange::_start_is_set_type arg)
  {
    msg_.start_is_set = std::move(arg);
    return Init_TimeRange_end(msg_);
  }

private:
  ::bosdyn_msgs::msg::TimeRange msg_;
};

class Init_TimeRange_start
{
public:
  Init_TimeRange_start()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TimeRange_start_is_set start(::bosdyn_msgs::msg::TimeRange::_start_type arg)
  {
    msg_.start = std::move(arg);
    return Init_TimeRange_start_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::TimeRange msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::TimeRange>()
{
  return bosdyn_msgs::msg::builder::Init_TimeRange_start();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__TIME_RANGE__BUILDER_HPP_
