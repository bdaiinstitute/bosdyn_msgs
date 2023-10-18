// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/Walk.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__WALK__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__WALK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/walk__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_Walk_id
{
public:
  explicit Init_Walk_id(::bosdyn_msgs::msg::Walk & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::Walk id(::bosdyn_msgs::msg::Walk::_id_type arg)
  {
    msg_.id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::Walk msg_;
};

class Init_Walk_docks
{
public:
  explicit Init_Walk_docks(::bosdyn_msgs::msg::Walk & msg)
  : msg_(msg)
  {}
  Init_Walk_id docks(::bosdyn_msgs::msg::Walk::_docks_type arg)
  {
    msg_.docks = std::move(arg);
    return Init_Walk_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::Walk msg_;
};

class Init_Walk_elements
{
public:
  explicit Init_Walk_elements(::bosdyn_msgs::msg::Walk & msg)
  : msg_(msg)
  {}
  Init_Walk_docks elements(::bosdyn_msgs::msg::Walk::_elements_type arg)
  {
    msg_.elements = std::move(arg);
    return Init_Walk_docks(msg_);
  }

private:
  ::bosdyn_msgs::msg::Walk msg_;
};

class Init_Walk_mission_name
{
public:
  explicit Init_Walk_mission_name(::bosdyn_msgs::msg::Walk & msg)
  : msg_(msg)
  {}
  Init_Walk_elements mission_name(::bosdyn_msgs::msg::Walk::_mission_name_type arg)
  {
    msg_.mission_name = std::move(arg);
    return Init_Walk_elements(msg_);
  }

private:
  ::bosdyn_msgs::msg::Walk msg_;
};

class Init_Walk_map_name
{
public:
  explicit Init_Walk_map_name(::bosdyn_msgs::msg::Walk & msg)
  : msg_(msg)
  {}
  Init_Walk_mission_name map_name(::bosdyn_msgs::msg::Walk::_map_name_type arg)
  {
    msg_.map_name = std::move(arg);
    return Init_Walk_mission_name(msg_);
  }

private:
  ::bosdyn_msgs::msg::Walk msg_;
};

class Init_Walk_playback_mode_is_set
{
public:
  explicit Init_Walk_playback_mode_is_set(::bosdyn_msgs::msg::Walk & msg)
  : msg_(msg)
  {}
  Init_Walk_map_name playback_mode_is_set(::bosdyn_msgs::msg::Walk::_playback_mode_is_set_type arg)
  {
    msg_.playback_mode_is_set = std::move(arg);
    return Init_Walk_map_name(msg_);
  }

private:
  ::bosdyn_msgs::msg::Walk msg_;
};

class Init_Walk_playback_mode
{
public:
  explicit Init_Walk_playback_mode(::bosdyn_msgs::msg::Walk & msg)
  : msg_(msg)
  {}
  Init_Walk_playback_mode_is_set playback_mode(::bosdyn_msgs::msg::Walk::_playback_mode_type arg)
  {
    msg_.playback_mode = std::move(arg);
    return Init_Walk_playback_mode_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Walk msg_;
};

class Init_Walk_global_parameters_is_set
{
public:
  explicit Init_Walk_global_parameters_is_set(::bosdyn_msgs::msg::Walk & msg)
  : msg_(msg)
  {}
  Init_Walk_playback_mode global_parameters_is_set(::bosdyn_msgs::msg::Walk::_global_parameters_is_set_type arg)
  {
    msg_.global_parameters_is_set = std::move(arg);
    return Init_Walk_playback_mode(msg_);
  }

private:
  ::bosdyn_msgs::msg::Walk msg_;
};

class Init_Walk_global_parameters
{
public:
  Init_Walk_global_parameters()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Walk_global_parameters_is_set global_parameters(::bosdyn_msgs::msg::Walk::_global_parameters_type arg)
  {
    msg_.global_parameters = std::move(arg);
    return Init_Walk_global_parameters_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::Walk msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::Walk>()
{
  return bosdyn_msgs::msg::builder::Init_Walk_global_parameters();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__WALK__BUILDER_HPP_
