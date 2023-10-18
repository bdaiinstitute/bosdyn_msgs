// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ArmSurfaceContactCommand.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ARM_SURFACE_CONTACT_COMMAND__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ARM_SURFACE_CONTACT_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/arm_surface_contact_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ArmSurfaceContactCommand_request_is_set
{
public:
  explicit Init_ArmSurfaceContactCommand_request_is_set(::bosdyn_msgs::msg::ArmSurfaceContactCommand & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ArmSurfaceContactCommand request_is_set(::bosdyn_msgs::msg::ArmSurfaceContactCommand::_request_is_set_type arg)
  {
    msg_.request_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmSurfaceContactCommand msg_;
};

class Init_ArmSurfaceContactCommand_request
{
public:
  explicit Init_ArmSurfaceContactCommand_request(::bosdyn_msgs::msg::ArmSurfaceContactCommand & msg)
  : msg_(msg)
  {}
  Init_ArmSurfaceContactCommand_request_is_set request(::bosdyn_msgs::msg::ArmSurfaceContactCommand::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_ArmSurfaceContactCommand_request_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmSurfaceContactCommand msg_;
};

class Init_ArmSurfaceContactCommand_lease_is_set
{
public:
  explicit Init_ArmSurfaceContactCommand_lease_is_set(::bosdyn_msgs::msg::ArmSurfaceContactCommand & msg)
  : msg_(msg)
  {}
  Init_ArmSurfaceContactCommand_request lease_is_set(::bosdyn_msgs::msg::ArmSurfaceContactCommand::_lease_is_set_type arg)
  {
    msg_.lease_is_set = std::move(arg);
    return Init_ArmSurfaceContactCommand_request(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmSurfaceContactCommand msg_;
};

class Init_ArmSurfaceContactCommand_lease
{
public:
  explicit Init_ArmSurfaceContactCommand_lease(::bosdyn_msgs::msg::ArmSurfaceContactCommand & msg)
  : msg_(msg)
  {}
  Init_ArmSurfaceContactCommand_lease_is_set lease(::bosdyn_msgs::msg::ArmSurfaceContactCommand::_lease_type arg)
  {
    msg_.lease = std::move(arg);
    return Init_ArmSurfaceContactCommand_lease_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmSurfaceContactCommand msg_;
};

class Init_ArmSurfaceContactCommand_header_is_set
{
public:
  explicit Init_ArmSurfaceContactCommand_header_is_set(::bosdyn_msgs::msg::ArmSurfaceContactCommand & msg)
  : msg_(msg)
  {}
  Init_ArmSurfaceContactCommand_lease header_is_set(::bosdyn_msgs::msg::ArmSurfaceContactCommand::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_ArmSurfaceContactCommand_lease(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmSurfaceContactCommand msg_;
};

class Init_ArmSurfaceContactCommand_header
{
public:
  Init_ArmSurfaceContactCommand_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArmSurfaceContactCommand_header_is_set header(::bosdyn_msgs::msg::ArmSurfaceContactCommand::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ArmSurfaceContactCommand_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ArmSurfaceContactCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ArmSurfaceContactCommand>()
{
  return bosdyn_msgs::msg::builder::Init_ArmSurfaceContactCommand_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ARM_SURFACE_CONTACT_COMMAND__BUILDER_HPP_
