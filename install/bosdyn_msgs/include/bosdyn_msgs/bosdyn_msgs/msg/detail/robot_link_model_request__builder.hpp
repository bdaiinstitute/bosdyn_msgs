// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/RobotLinkModelRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ROBOT_LINK_MODEL_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ROBOT_LINK_MODEL_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/robot_link_model_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotLinkModelRequest_link_name
{
public:
  explicit Init_RobotLinkModelRequest_link_name(::bosdyn_msgs::msg::RobotLinkModelRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::RobotLinkModelRequest link_name(::bosdyn_msgs::msg::RobotLinkModelRequest::_link_name_type arg)
  {
    msg_.link_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotLinkModelRequest msg_;
};

class Init_RobotLinkModelRequest_header_is_set
{
public:
  explicit Init_RobotLinkModelRequest_header_is_set(::bosdyn_msgs::msg::RobotLinkModelRequest & msg)
  : msg_(msg)
  {}
  Init_RobotLinkModelRequest_link_name header_is_set(::bosdyn_msgs::msg::RobotLinkModelRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_RobotLinkModelRequest_link_name(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotLinkModelRequest msg_;
};

class Init_RobotLinkModelRequest_header
{
public:
  Init_RobotLinkModelRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotLinkModelRequest_header_is_set header(::bosdyn_msgs::msg::RobotLinkModelRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RobotLinkModelRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotLinkModelRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::RobotLinkModelRequest>()
{
  return bosdyn_msgs::msg::builder::Init_RobotLinkModelRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ROBOT_LINK_MODEL_REQUEST__BUILDER_HPP_
