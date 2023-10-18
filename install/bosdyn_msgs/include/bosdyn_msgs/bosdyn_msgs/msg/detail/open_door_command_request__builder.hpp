// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/OpenDoorCommandRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__OPEN_DOOR_COMMAND_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__OPEN_DOOR_COMMAND_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/open_door_command_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_OpenDoorCommandRequest_door_command_is_set
{
public:
  explicit Init_OpenDoorCommandRequest_door_command_is_set(::bosdyn_msgs::msg::OpenDoorCommandRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::OpenDoorCommandRequest door_command_is_set(::bosdyn_msgs::msg::OpenDoorCommandRequest::_door_command_is_set_type arg)
  {
    msg_.door_command_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::OpenDoorCommandRequest msg_;
};

class Init_OpenDoorCommandRequest_door_command
{
public:
  explicit Init_OpenDoorCommandRequest_door_command(::bosdyn_msgs::msg::OpenDoorCommandRequest & msg)
  : msg_(msg)
  {}
  Init_OpenDoorCommandRequest_door_command_is_set door_command(::bosdyn_msgs::msg::OpenDoorCommandRequest::_door_command_type arg)
  {
    msg_.door_command = std::move(arg);
    return Init_OpenDoorCommandRequest_door_command_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::OpenDoorCommandRequest msg_;
};

class Init_OpenDoorCommandRequest_lease_is_set
{
public:
  explicit Init_OpenDoorCommandRequest_lease_is_set(::bosdyn_msgs::msg::OpenDoorCommandRequest & msg)
  : msg_(msg)
  {}
  Init_OpenDoorCommandRequest_door_command lease_is_set(::bosdyn_msgs::msg::OpenDoorCommandRequest::_lease_is_set_type arg)
  {
    msg_.lease_is_set = std::move(arg);
    return Init_OpenDoorCommandRequest_door_command(msg_);
  }

private:
  ::bosdyn_msgs::msg::OpenDoorCommandRequest msg_;
};

class Init_OpenDoorCommandRequest_lease
{
public:
  explicit Init_OpenDoorCommandRequest_lease(::bosdyn_msgs::msg::OpenDoorCommandRequest & msg)
  : msg_(msg)
  {}
  Init_OpenDoorCommandRequest_lease_is_set lease(::bosdyn_msgs::msg::OpenDoorCommandRequest::_lease_type arg)
  {
    msg_.lease = std::move(arg);
    return Init_OpenDoorCommandRequest_lease_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::OpenDoorCommandRequest msg_;
};

class Init_OpenDoorCommandRequest_header_is_set
{
public:
  explicit Init_OpenDoorCommandRequest_header_is_set(::bosdyn_msgs::msg::OpenDoorCommandRequest & msg)
  : msg_(msg)
  {}
  Init_OpenDoorCommandRequest_lease header_is_set(::bosdyn_msgs::msg::OpenDoorCommandRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_OpenDoorCommandRequest_lease(msg_);
  }

private:
  ::bosdyn_msgs::msg::OpenDoorCommandRequest msg_;
};

class Init_OpenDoorCommandRequest_header
{
public:
  Init_OpenDoorCommandRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OpenDoorCommandRequest_header_is_set header(::bosdyn_msgs::msg::OpenDoorCommandRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_OpenDoorCommandRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::OpenDoorCommandRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::OpenDoorCommandRequest>()
{
  return bosdyn_msgs::msg::builder::Init_OpenDoorCommandRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__OPEN_DOOR_COMMAND_REQUEST__BUILDER_HPP_
