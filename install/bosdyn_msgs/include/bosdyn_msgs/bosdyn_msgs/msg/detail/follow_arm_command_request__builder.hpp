// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/FollowArmCommandRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__FOLLOW_ARM_COMMAND_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__FOLLOW_ARM_COMMAND_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/follow_arm_command_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_FollowArmCommandRequest_body_offset_from_hand_is_set
{
public:
  explicit Init_FollowArmCommandRequest_body_offset_from_hand_is_set(::bosdyn_msgs::msg::FollowArmCommandRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::FollowArmCommandRequest body_offset_from_hand_is_set(::bosdyn_msgs::msg::FollowArmCommandRequest::_body_offset_from_hand_is_set_type arg)
  {
    msg_.body_offset_from_hand_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::FollowArmCommandRequest msg_;
};

class Init_FollowArmCommandRequest_body_offset_from_hand
{
public:
  Init_FollowArmCommandRequest_body_offset_from_hand()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FollowArmCommandRequest_body_offset_from_hand_is_set body_offset_from_hand(::bosdyn_msgs::msg::FollowArmCommandRequest::_body_offset_from_hand_type arg)
  {
    msg_.body_offset_from_hand = std::move(arg);
    return Init_FollowArmCommandRequest_body_offset_from_hand_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::FollowArmCommandRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::FollowArmCommandRequest>()
{
  return bosdyn_msgs::msg::builder::Init_FollowArmCommandRequest_body_offset_from_hand();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__FOLLOW_ARM_COMMAND_REQUEST__BUILDER_HPP_
