// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ForDuration.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__FOR_DURATION__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__FOR_DURATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/for_duration__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ForDuration_timeout_child_is_set
{
public:
  explicit Init_ForDuration_timeout_child_is_set(::bosdyn_msgs::msg::ForDuration & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ForDuration timeout_child_is_set(::bosdyn_msgs::msg::ForDuration::_timeout_child_is_set_type arg)
  {
    msg_.timeout_child_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ForDuration msg_;
};

class Init_ForDuration_timeout_child
{
public:
  explicit Init_ForDuration_timeout_child(::bosdyn_msgs::msg::ForDuration & msg)
  : msg_(msg)
  {}
  Init_ForDuration_timeout_child_is_set timeout_child(::bosdyn_msgs::msg::ForDuration::_timeout_child_type arg)
  {
    msg_.timeout_child = std::move(arg);
    return Init_ForDuration_timeout_child_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ForDuration msg_;
};

class Init_ForDuration_time_remaining_name
{
public:
  explicit Init_ForDuration_time_remaining_name(::bosdyn_msgs::msg::ForDuration & msg)
  : msg_(msg)
  {}
  Init_ForDuration_timeout_child time_remaining_name(::bosdyn_msgs::msg::ForDuration::_time_remaining_name_type arg)
  {
    msg_.time_remaining_name = std::move(arg);
    return Init_ForDuration_timeout_child(msg_);
  }

private:
  ::bosdyn_msgs::msg::ForDuration msg_;
};

class Init_ForDuration_child_is_set
{
public:
  explicit Init_ForDuration_child_is_set(::bosdyn_msgs::msg::ForDuration & msg)
  : msg_(msg)
  {}
  Init_ForDuration_time_remaining_name child_is_set(::bosdyn_msgs::msg::ForDuration::_child_is_set_type arg)
  {
    msg_.child_is_set = std::move(arg);
    return Init_ForDuration_time_remaining_name(msg_);
  }

private:
  ::bosdyn_msgs::msg::ForDuration msg_;
};

class Init_ForDuration_child
{
public:
  explicit Init_ForDuration_child(::bosdyn_msgs::msg::ForDuration & msg)
  : msg_(msg)
  {}
  Init_ForDuration_child_is_set child(::bosdyn_msgs::msg::ForDuration::_child_type arg)
  {
    msg_.child = std::move(arg);
    return Init_ForDuration_child_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ForDuration msg_;
};

class Init_ForDuration_duration_is_set
{
public:
  explicit Init_ForDuration_duration_is_set(::bosdyn_msgs::msg::ForDuration & msg)
  : msg_(msg)
  {}
  Init_ForDuration_child duration_is_set(::bosdyn_msgs::msg::ForDuration::_duration_is_set_type arg)
  {
    msg_.duration_is_set = std::move(arg);
    return Init_ForDuration_child(msg_);
  }

private:
  ::bosdyn_msgs::msg::ForDuration msg_;
};

class Init_ForDuration_duration
{
public:
  Init_ForDuration_duration()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ForDuration_duration_is_set duration(::bosdyn_msgs::msg::ForDuration::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return Init_ForDuration_duration_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ForDuration msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ForDuration>()
{
  return bosdyn_msgs::msg::builder::Init_ForDuration_duration();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__FOR_DURATION__BUILDER_HPP_
