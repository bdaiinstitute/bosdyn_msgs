// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/RobotIdRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ROBOT_ID_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ROBOT_ID_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/robot_id_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotIdRequest_header_is_set
{
public:
  explicit Init_RobotIdRequest_header_is_set(::bosdyn_msgs::msg::RobotIdRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::RobotIdRequest header_is_set(::bosdyn_msgs::msg::RobotIdRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotIdRequest msg_;
};

class Init_RobotIdRequest_header
{
public:
  Init_RobotIdRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotIdRequest_header_is_set header(::bosdyn_msgs::msg::RobotIdRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RobotIdRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RobotIdRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::RobotIdRequest>()
{
  return bosdyn_msgs::msg::builder::Init_RobotIdRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ROBOT_ID_REQUEST__BUILDER_HPP_
