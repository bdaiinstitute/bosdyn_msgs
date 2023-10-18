// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/PlaySettings.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__PLAY_SETTINGS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__PLAY_SETTINGS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/play_settings__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_PlaySettings_ground_clutter_mode
{
public:
  explicit Init_PlaySettings_ground_clutter_mode(::bosdyn_msgs::msg::PlaySettings & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::PlaySettings ground_clutter_mode(::bosdyn_msgs::msg::PlaySettings::_ground_clutter_mode_type arg)
  {
    msg_.ground_clutter_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::PlaySettings msg_;
};

class Init_PlaySettings_path_following_mode
{
public:
  explicit Init_PlaySettings_path_following_mode(::bosdyn_msgs::msg::PlaySettings & msg)
  : msg_(msg)
  {}
  Init_PlaySettings_ground_clutter_mode path_following_mode(::bosdyn_msgs::msg::PlaySettings::_path_following_mode_type arg)
  {
    msg_.path_following_mode = std::move(arg);
    return Init_PlaySettings_ground_clutter_mode(msg_);
  }

private:
  ::bosdyn_msgs::msg::PlaySettings msg_;
};

class Init_PlaySettings_disable_alternate_route_finding
{
public:
  explicit Init_PlaySettings_disable_alternate_route_finding(::bosdyn_msgs::msg::PlaySettings & msg)
  : msg_(msg)
  {}
  Init_PlaySettings_path_following_mode disable_alternate_route_finding(::bosdyn_msgs::msg::PlaySettings::_disable_alternate_route_finding_type arg)
  {
    msg_.disable_alternate_route_finding = std::move(arg);
    return Init_PlaySettings_path_following_mode(msg_);
  }

private:
  ::bosdyn_msgs::msg::PlaySettings msg_;
};

class Init_PlaySettings_disable_directed_exploration
{
public:
  explicit Init_PlaySettings_disable_directed_exploration(::bosdyn_msgs::msg::PlaySettings & msg)
  : msg_(msg)
  {}
  Init_PlaySettings_disable_alternate_route_finding disable_directed_exploration(::bosdyn_msgs::msg::PlaySettings::_disable_directed_exploration_type arg)
  {
    msg_.disable_directed_exploration = std::move(arg);
    return Init_PlaySettings_disable_alternate_route_finding(msg_);
  }

private:
  ::bosdyn_msgs::msg::PlaySettings msg_;
};

class Init_PlaySettings_velocity_limit_is_set
{
public:
  explicit Init_PlaySettings_velocity_limit_is_set(::bosdyn_msgs::msg::PlaySettings & msg)
  : msg_(msg)
  {}
  Init_PlaySettings_disable_directed_exploration velocity_limit_is_set(::bosdyn_msgs::msg::PlaySettings::_velocity_limit_is_set_type arg)
  {
    msg_.velocity_limit_is_set = std::move(arg);
    return Init_PlaySettings_disable_directed_exploration(msg_);
  }

private:
  ::bosdyn_msgs::msg::PlaySettings msg_;
};

class Init_PlaySettings_velocity_limit
{
public:
  Init_PlaySettings_velocity_limit()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PlaySettings_velocity_limit_is_set velocity_limit(::bosdyn_msgs::msg::PlaySettings::_velocity_limit_type arg)
  {
    msg_.velocity_limit = std::move(arg);
    return Init_PlaySettings_velocity_limit_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::PlaySettings msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::PlaySettings>()
{
  return bosdyn_msgs::msg::builder::Init_PlaySettings_velocity_limit();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__PLAY_SETTINGS__BUILDER_HPP_
