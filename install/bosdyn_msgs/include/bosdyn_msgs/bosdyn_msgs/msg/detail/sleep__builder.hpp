// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/Sleep.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SLEEP__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SLEEP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/sleep__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_Sleep_restart_after_stop
{
public:
  explicit Init_Sleep_restart_after_stop(::bosdyn_msgs::msg::Sleep & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::Sleep restart_after_stop(::bosdyn_msgs::msg::Sleep::_restart_after_stop_type arg)
  {
    msg_.restart_after_stop = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::Sleep msg_;
};

class Init_Sleep_seconds
{
public:
  Init_Sleep_seconds()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Sleep_restart_after_stop seconds(::bosdyn_msgs::msg::Sleep::_seconds_type arg)
  {
    msg_.seconds = std::move(arg);
    return Init_Sleep_restart_after_stop(msg_);
  }

private:
  ::bosdyn_msgs::msg::Sleep msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::Sleep>()
{
  return bosdyn_msgs::msg::builder::Init_Sleep_seconds();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SLEEP__BUILDER_HPP_
