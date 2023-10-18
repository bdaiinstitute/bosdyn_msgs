// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/RobotHardwareConfigurationResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ROBOT_HARDWARE_CONFIGURATION_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ROBOT_HARDWARE_CONFIGURATION_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/robot_hardware_configuration_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotHardwareConfigurationResponse_hardware_configuration_is_set
{
public:
  explicit Init_RobotHardwareConfigurationResponse_hardware_configuration_is_set(::bosdyn_msgs::msg::RobotHardwareConfigurationResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::RobotHardwareConfigurationResponse hardware_configuration_is_set(::bosdyn_msgs::msg::RobotHardwareConfigurationResponse::_hardware_configuration_is_set_type arg)
  {
    msg_.hardware_configuration_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotHardwareConfigurationResponse msg_;
};

class Init_RobotHardwareConfigurationResponse_hardware_configuration
{
public:
  explicit Init_RobotHardwareConfigurationResponse_hardware_configuration(::bosdyn_msgs::msg::RobotHardwareConfigurationResponse & msg)
  : msg_(msg)
  {}
  Init_RobotHardwareConfigurationResponse_hardware_configuration_is_set hardware_configuration(::bosdyn_msgs::msg::RobotHardwareConfigurationResponse::_hardware_configuration_type arg)
  {
    msg_.hardware_configuration = std::move(arg);
    return Init_RobotHardwareConfigurationResponse_hardware_configuration_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotHardwareConfigurationResponse msg_;
};

class Init_RobotHardwareConfigurationResponse_header_is_set
{
public:
  explicit Init_RobotHardwareConfigurationResponse_header_is_set(::bosdyn_msgs::msg::RobotHardwareConfigurationResponse & msg)
  : msg_(msg)
  {}
  Init_RobotHardwareConfigurationResponse_hardware_configuration header_is_set(::bosdyn_msgs::msg::RobotHardwareConfigurationResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_RobotHardwareConfigurationResponse_hardware_configuration(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotHardwareConfigurationResponse msg_;
};

class Init_RobotHardwareConfigurationResponse_header
{
public:
  Init_RobotHardwareConfigurationResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotHardwareConfigurationResponse_header_is_set header(::bosdyn_msgs::msg::RobotHardwareConfigurationResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RobotHardwareConfigurationResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotHardwareConfigurationResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::RobotHardwareConfigurationResponse>()
{
  return bosdyn_msgs::msg::builder::Init_RobotHardwareConfigurationResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ROBOT_HARDWARE_CONFIGURATION_RESPONSE__BUILDER_HPP_
