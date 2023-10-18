// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/PtzVelocity.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PTZ_VELOCITY__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PTZ_VELOCITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/ptz_velocity__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_PtzVelocity_zoom_is_set
{
public:
  explicit Init_PtzVelocity_zoom_is_set(::bosdyn_msgs::msg::PtzVelocity & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::PtzVelocity zoom_is_set(::bosdyn_msgs::msg::PtzVelocity::_zoom_is_set_type arg)
  {
    msg_.zoom_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::PtzVelocity msg_;
};

class Init_PtzVelocity_zoom
{
public:
  explicit Init_PtzVelocity_zoom(::bosdyn_msgs::msg::PtzVelocity & msg)
  : msg_(msg)
  {}
  Init_PtzVelocity_zoom_is_set zoom(::bosdyn_msgs::msg::PtzVelocity::_zoom_type arg)
  {
    msg_.zoom = std::move(arg);
    return Init_PtzVelocity_zoom_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::PtzVelocity msg_;
};

class Init_PtzVelocity_tilt_is_set
{
public:
  explicit Init_PtzVelocity_tilt_is_set(::bosdyn_msgs::msg::PtzVelocity & msg)
  : msg_(msg)
  {}
  Init_PtzVelocity_zoom tilt_is_set(::bosdyn_msgs::msg::PtzVelocity::_tilt_is_set_type arg)
  {
    msg_.tilt_is_set = std::move(arg);
    return Init_PtzVelocity_zoom(msg_);
  }

private:
  ::bosdyn_msgs::msg::PtzVelocity msg_;
};

class Init_PtzVelocity_tilt
{
public:
  explicit Init_PtzVelocity_tilt(::bosdyn_msgs::msg::PtzVelocity & msg)
  : msg_(msg)
  {}
  Init_PtzVelocity_tilt_is_set tilt(::bosdyn_msgs::msg::PtzVelocity::_tilt_type arg)
  {
    msg_.tilt = std::move(arg);
    return Init_PtzVelocity_tilt_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::PtzVelocity msg_;
};

class Init_PtzVelocity_pan_is_set
{
public:
  explicit Init_PtzVelocity_pan_is_set(::bosdyn_msgs::msg::PtzVelocity & msg)
  : msg_(msg)
  {}
  Init_PtzVelocity_tilt pan_is_set(::bosdyn_msgs::msg::PtzVelocity::_pan_is_set_type arg)
  {
    msg_.pan_is_set = std::move(arg);
    return Init_PtzVelocity_tilt(msg_);
  }

private:
  ::bosdyn_msgs::msg::PtzVelocity msg_;
};

class Init_PtzVelocity_pan
{
public:
  explicit Init_PtzVelocity_pan(::bosdyn_msgs::msg::PtzVelocity & msg)
  : msg_(msg)
  {}
  Init_PtzVelocity_pan_is_set pan(::bosdyn_msgs::msg::PtzVelocity::_pan_type arg)
  {
    msg_.pan = std::move(arg);
    return Init_PtzVelocity_pan_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::PtzVelocity msg_;
};

class Init_PtzVelocity_ptz_is_set
{
public:
  explicit Init_PtzVelocity_ptz_is_set(::bosdyn_msgs::msg::PtzVelocity & msg)
  : msg_(msg)
  {}
  Init_PtzVelocity_pan ptz_is_set(::bosdyn_msgs::msg::PtzVelocity::_ptz_is_set_type arg)
  {
    msg_.ptz_is_set = std::move(arg);
    return Init_PtzVelocity_pan(msg_);
  }

private:
  ::bosdyn_msgs::msg::PtzVelocity msg_;
};

class Init_PtzVelocity_ptz
{
public:
  Init_PtzVelocity_ptz()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PtzVelocity_ptz_is_set ptz(::bosdyn_msgs::msg::PtzVelocity::_ptz_type arg)
  {
    msg_.ptz = std::move(arg);
    return Init_PtzVelocity_ptz_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::PtzVelocity msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::PtzVelocity>()
{
  return bosdyn_msgs::msg::builder::Init_PtzVelocity_ptz();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PTZ_VELOCITY__BUILDER_HPP_
