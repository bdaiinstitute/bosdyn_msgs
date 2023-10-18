// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/AreaCallbackDoorConfig.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__AREA_CALLBACK_DOOR_CONFIG__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__AREA_CALLBACK_DOOR_CONFIG__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/area_callback_door_config__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_AreaCallbackDoorConfig_reverse_command_is_set
{
public:
  explicit Init_AreaCallbackDoorConfig_reverse_command_is_set(::bosdyn_msgs::msg::AreaCallbackDoorConfig & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::AreaCallbackDoorConfig reverse_command_is_set(::bosdyn_msgs::msg::AreaCallbackDoorConfig::_reverse_command_is_set_type arg)
  {
    msg_.reverse_command_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::AreaCallbackDoorConfig msg_;
};

class Init_AreaCallbackDoorConfig_reverse_command
{
public:
  explicit Init_AreaCallbackDoorConfig_reverse_command(::bosdyn_msgs::msg::AreaCallbackDoorConfig & msg)
  : msg_(msg)
  {}
  Init_AreaCallbackDoorConfig_reverse_command_is_set reverse_command(::bosdyn_msgs::msg::AreaCallbackDoorConfig::_reverse_command_type arg)
  {
    msg_.reverse_command = std::move(arg);
    return Init_AreaCallbackDoorConfig_reverse_command_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::AreaCallbackDoorConfig msg_;
};

class Init_AreaCallbackDoorConfig_forward_command_is_set
{
public:
  explicit Init_AreaCallbackDoorConfig_forward_command_is_set(::bosdyn_msgs::msg::AreaCallbackDoorConfig & msg)
  : msg_(msg)
  {}
  Init_AreaCallbackDoorConfig_reverse_command forward_command_is_set(::bosdyn_msgs::msg::AreaCallbackDoorConfig::_forward_command_is_set_type arg)
  {
    msg_.forward_command_is_set = std::move(arg);
    return Init_AreaCallbackDoorConfig_reverse_command(msg_);
  }

private:
  ::bosdyn_msgs::msg::AreaCallbackDoorConfig msg_;
};

class Init_AreaCallbackDoorConfig_forward_command
{
public:
  Init_AreaCallbackDoorConfig_forward_command()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AreaCallbackDoorConfig_forward_command_is_set forward_command(::bosdyn_msgs::msg::AreaCallbackDoorConfig::_forward_command_type arg)
  {
    msg_.forward_command = std::move(arg);
    return Init_AreaCallbackDoorConfig_forward_command_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::AreaCallbackDoorConfig msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::AreaCallbackDoorConfig>()
{
  return bosdyn_msgs::msg::builder::Init_AreaCallbackDoorConfig_forward_command();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__AREA_CALLBACK_DOOR_CONFIG__BUILDER_HPP_
