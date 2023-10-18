// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GlobalParameters.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GLOBAL_PARAMETERS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GLOBAL_PARAMETERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/global_parameters__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GlobalParameters_skip_actions
{
public:
  explicit Init_GlobalParameters_skip_actions(::bosdyn_msgs::msg::GlobalParameters & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GlobalParameters skip_actions(::bosdyn_msgs::msg::GlobalParameters::_skip_actions_type arg)
  {
    msg_.skip_actions = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GlobalParameters msg_;
};

class Init_GlobalParameters_post_mission_callbacks
{
public:
  explicit Init_GlobalParameters_post_mission_callbacks(::bosdyn_msgs::msg::GlobalParameters & msg)
  : msg_(msg)
  {}
  Init_GlobalParameters_skip_actions post_mission_callbacks(::bosdyn_msgs::msg::GlobalParameters::_post_mission_callbacks_type arg)
  {
    msg_.post_mission_callbacks = std::move(arg);
    return Init_GlobalParameters_skip_actions(msg_);
  }

private:
  ::bosdyn_msgs::msg::GlobalParameters msg_;
};

class Init_GlobalParameters_self_right_attempts
{
public:
  explicit Init_GlobalParameters_self_right_attempts(::bosdyn_msgs::msg::GlobalParameters & msg)
  : msg_(msg)
  {}
  Init_GlobalParameters_post_mission_callbacks self_right_attempts(::bosdyn_msgs::msg::GlobalParameters::_self_right_attempts_type arg)
  {
    msg_.self_right_attempts = std::move(arg);
    return Init_GlobalParameters_post_mission_callbacks(msg_);
  }

private:
  ::bosdyn_msgs::msg::GlobalParameters msg_;
};

class Init_GlobalParameters_should_autofocus_ptz
{
public:
  explicit Init_GlobalParameters_should_autofocus_ptz(::bosdyn_msgs::msg::GlobalParameters & msg)
  : msg_(msg)
  {}
  Init_GlobalParameters_self_right_attempts should_autofocus_ptz(::bosdyn_msgs::msg::GlobalParameters::_should_autofocus_ptz_type arg)
  {
    msg_.should_autofocus_ptz = std::move(arg);
    return Init_GlobalParameters_self_right_attempts(msg_);
  }

private:
  ::bosdyn_msgs::msg::GlobalParameters msg_;
};

class Init_GlobalParameters_group_name
{
public:
  Init_GlobalParameters_group_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GlobalParameters_should_autofocus_ptz group_name(::bosdyn_msgs::msg::GlobalParameters::_group_name_type arg)
  {
    msg_.group_name = std::move(arg);
    return Init_GlobalParameters_should_autofocus_ptz(msg_);
  }

private:
  ::bosdyn_msgs::msg::GlobalParameters msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GlobalParameters>()
{
  return bosdyn_msgs::msg::builder::Init_GlobalParameters_group_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GLOBAL_PARAMETERS__BUILDER_HPP_
