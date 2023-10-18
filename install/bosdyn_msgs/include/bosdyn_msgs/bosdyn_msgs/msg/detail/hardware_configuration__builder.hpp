// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/HardwareConfiguration.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__HARDWARE_CONFIGURATION__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__HARDWARE_CONFIGURATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/hardware_configuration__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_HardwareConfiguration_has_audio_visual_system
{
public:
  explicit Init_HardwareConfiguration_has_audio_visual_system(::bosdyn_msgs::msg::HardwareConfiguration & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::HardwareConfiguration has_audio_visual_system(::bosdyn_msgs::msg::HardwareConfiguration::_has_audio_visual_system_type arg)
  {
    msg_.has_audio_visual_system = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::HardwareConfiguration msg_;
};

class Init_HardwareConfiguration_can_power_command_request_wifi_radio
{
public:
  explicit Init_HardwareConfiguration_can_power_command_request_wifi_radio(::bosdyn_msgs::msg::HardwareConfiguration & msg)
  : msg_(msg)
  {}
  Init_HardwareConfiguration_has_audio_visual_system can_power_command_request_wifi_radio(::bosdyn_msgs::msg::HardwareConfiguration::_can_power_command_request_wifi_radio_type arg)
  {
    msg_.can_power_command_request_wifi_radio = std::move(arg);
    return Init_HardwareConfiguration_has_audio_visual_system(msg_);
  }

private:
  ::bosdyn_msgs::msg::HardwareConfiguration msg_;
};

class Init_HardwareConfiguration_can_power_command_request_payload_ports
{
public:
  explicit Init_HardwareConfiguration_can_power_command_request_payload_ports(::bosdyn_msgs::msg::HardwareConfiguration & msg)
  : msg_(msg)
  {}
  Init_HardwareConfiguration_can_power_command_request_wifi_radio can_power_command_request_payload_ports(::bosdyn_msgs::msg::HardwareConfiguration::_can_power_command_request_payload_ports_type arg)
  {
    msg_.can_power_command_request_payload_ports = std::move(arg);
    return Init_HardwareConfiguration_can_power_command_request_wifi_radio(msg_);
  }

private:
  ::bosdyn_msgs::msg::HardwareConfiguration msg_;
};

class Init_HardwareConfiguration_can_power_command_request_cycle_robot
{
public:
  explicit Init_HardwareConfiguration_can_power_command_request_cycle_robot(::bosdyn_msgs::msg::HardwareConfiguration & msg)
  : msg_(msg)
  {}
  Init_HardwareConfiguration_can_power_command_request_payload_ports can_power_command_request_cycle_robot(::bosdyn_msgs::msg::HardwareConfiguration::_can_power_command_request_cycle_robot_type arg)
  {
    msg_.can_power_command_request_cycle_robot = std::move(arg);
    return Init_HardwareConfiguration_can_power_command_request_payload_ports(msg_);
  }

private:
  ::bosdyn_msgs::msg::HardwareConfiguration msg_;
};

class Init_HardwareConfiguration_can_power_command_request_off_robot
{
public:
  explicit Init_HardwareConfiguration_can_power_command_request_off_robot(::bosdyn_msgs::msg::HardwareConfiguration & msg)
  : msg_(msg)
  {}
  Init_HardwareConfiguration_can_power_command_request_cycle_robot can_power_command_request_off_robot(::bosdyn_msgs::msg::HardwareConfiguration::_can_power_command_request_off_robot_type arg)
  {
    msg_.can_power_command_request_off_robot = std::move(arg);
    return Init_HardwareConfiguration_can_power_command_request_cycle_robot(msg_);
  }

private:
  ::bosdyn_msgs::msg::HardwareConfiguration msg_;
};

class Init_HardwareConfiguration_skeleton_is_set
{
public:
  explicit Init_HardwareConfiguration_skeleton_is_set(::bosdyn_msgs::msg::HardwareConfiguration & msg)
  : msg_(msg)
  {}
  Init_HardwareConfiguration_can_power_command_request_off_robot skeleton_is_set(::bosdyn_msgs::msg::HardwareConfiguration::_skeleton_is_set_type arg)
  {
    msg_.skeleton_is_set = std::move(arg);
    return Init_HardwareConfiguration_can_power_command_request_off_robot(msg_);
  }

private:
  ::bosdyn_msgs::msg::HardwareConfiguration msg_;
};

class Init_HardwareConfiguration_skeleton
{
public:
  Init_HardwareConfiguration_skeleton()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HardwareConfiguration_skeleton_is_set skeleton(::bosdyn_msgs::msg::HardwareConfiguration::_skeleton_type arg)
  {
    msg_.skeleton = std::move(arg);
    return Init_HardwareConfiguration_skeleton_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::HardwareConfiguration msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::HardwareConfiguration>()
{
  return bosdyn_msgs::msg::builder::Init_HardwareConfiguration_skeleton();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__HARDWARE_CONFIGURATION__BUILDER_HPP_
