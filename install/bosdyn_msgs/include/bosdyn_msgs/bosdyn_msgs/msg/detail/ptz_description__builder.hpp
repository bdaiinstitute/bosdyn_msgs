// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/PtzDescription.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PTZ_DESCRIPTION__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PTZ_DESCRIPTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/ptz_description__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_PtzDescription_zoom_limit_is_set
{
public:
  explicit Init_PtzDescription_zoom_limit_is_set(::bosdyn_msgs::msg::PtzDescription & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::PtzDescription zoom_limit_is_set(::bosdyn_msgs::msg::PtzDescription::_zoom_limit_is_set_type arg)
  {
    msg_.zoom_limit_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::PtzDescription msg_;
};

class Init_PtzDescription_zoom_limit
{
public:
  explicit Init_PtzDescription_zoom_limit(::bosdyn_msgs::msg::PtzDescription & msg)
  : msg_(msg)
  {}
  Init_PtzDescription_zoom_limit_is_set zoom_limit(::bosdyn_msgs::msg::PtzDescription::_zoom_limit_type arg)
  {
    msg_.zoom_limit = std::move(arg);
    return Init_PtzDescription_zoom_limit_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::PtzDescription msg_;
};

class Init_PtzDescription_tilt_limit_is_set
{
public:
  explicit Init_PtzDescription_tilt_limit_is_set(::bosdyn_msgs::msg::PtzDescription & msg)
  : msg_(msg)
  {}
  Init_PtzDescription_zoom_limit tilt_limit_is_set(::bosdyn_msgs::msg::PtzDescription::_tilt_limit_is_set_type arg)
  {
    msg_.tilt_limit_is_set = std::move(arg);
    return Init_PtzDescription_zoom_limit(msg_);
  }

private:
  ::bosdyn_msgs::msg::PtzDescription msg_;
};

class Init_PtzDescription_tilt_limit
{
public:
  explicit Init_PtzDescription_tilt_limit(::bosdyn_msgs::msg::PtzDescription & msg)
  : msg_(msg)
  {}
  Init_PtzDescription_tilt_limit_is_set tilt_limit(::bosdyn_msgs::msg::PtzDescription::_tilt_limit_type arg)
  {
    msg_.tilt_limit = std::move(arg);
    return Init_PtzDescription_tilt_limit_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::PtzDescription msg_;
};

class Init_PtzDescription_pan_limit_is_set
{
public:
  explicit Init_PtzDescription_pan_limit_is_set(::bosdyn_msgs::msg::PtzDescription & msg)
  : msg_(msg)
  {}
  Init_PtzDescription_tilt_limit pan_limit_is_set(::bosdyn_msgs::msg::PtzDescription::_pan_limit_is_set_type arg)
  {
    msg_.pan_limit_is_set = std::move(arg);
    return Init_PtzDescription_tilt_limit(msg_);
  }

private:
  ::bosdyn_msgs::msg::PtzDescription msg_;
};

class Init_PtzDescription_pan_limit
{
public:
  explicit Init_PtzDescription_pan_limit(::bosdyn_msgs::msg::PtzDescription & msg)
  : msg_(msg)
  {}
  Init_PtzDescription_pan_limit_is_set pan_limit(::bosdyn_msgs::msg::PtzDescription::_pan_limit_type arg)
  {
    msg_.pan_limit = std::move(arg);
    return Init_PtzDescription_pan_limit_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::PtzDescription msg_;
};

class Init_PtzDescription_name
{
public:
  Init_PtzDescription_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PtzDescription_pan_limit name(::bosdyn_msgs::msg::PtzDescription::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_PtzDescription_pan_limit(msg_);
  }

private:
  ::bosdyn_msgs::msg::PtzDescription msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::PtzDescription>()
{
  return bosdyn_msgs::msg::builder::Init_PtzDescription_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PTZ_DESCRIPTION__BUILDER_HPP_
