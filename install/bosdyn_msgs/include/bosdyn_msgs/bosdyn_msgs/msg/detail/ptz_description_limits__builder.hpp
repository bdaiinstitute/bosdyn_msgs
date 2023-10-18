// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/PtzDescriptionLimits.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PTZ_DESCRIPTION_LIMITS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PTZ_DESCRIPTION_LIMITS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/ptz_description_limits__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_PtzDescriptionLimits_max_is_set
{
public:
  explicit Init_PtzDescriptionLimits_max_is_set(::bosdyn_msgs::msg::PtzDescriptionLimits & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::PtzDescriptionLimits max_is_set(::bosdyn_msgs::msg::PtzDescriptionLimits::_max_is_set_type arg)
  {
    msg_.max_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::PtzDescriptionLimits msg_;
};

class Init_PtzDescriptionLimits_max
{
public:
  explicit Init_PtzDescriptionLimits_max(::bosdyn_msgs::msg::PtzDescriptionLimits & msg)
  : msg_(msg)
  {}
  Init_PtzDescriptionLimits_max_is_set max(::bosdyn_msgs::msg::PtzDescriptionLimits::_max_type arg)
  {
    msg_.max = std::move(arg);
    return Init_PtzDescriptionLimits_max_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::PtzDescriptionLimits msg_;
};

class Init_PtzDescriptionLimits_min_is_set
{
public:
  explicit Init_PtzDescriptionLimits_min_is_set(::bosdyn_msgs::msg::PtzDescriptionLimits & msg)
  : msg_(msg)
  {}
  Init_PtzDescriptionLimits_max min_is_set(::bosdyn_msgs::msg::PtzDescriptionLimits::_min_is_set_type arg)
  {
    msg_.min_is_set = std::move(arg);
    return Init_PtzDescriptionLimits_max(msg_);
  }

private:
  ::bosdyn_msgs::msg::PtzDescriptionLimits msg_;
};

class Init_PtzDescriptionLimits_min
{
public:
  Init_PtzDescriptionLimits_min()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PtzDescriptionLimits_min_is_set min(::bosdyn_msgs::msg::PtzDescriptionLimits::_min_type arg)
  {
    msg_.min = std::move(arg);
    return Init_PtzDescriptionLimits_min_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::PtzDescriptionLimits msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::PtzDescriptionLimits>()
{
  return bosdyn_msgs::msg::builder::Init_PtzDescriptionLimits_min();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PTZ_DESCRIPTION_LIMITS__BUILDER_HPP_
