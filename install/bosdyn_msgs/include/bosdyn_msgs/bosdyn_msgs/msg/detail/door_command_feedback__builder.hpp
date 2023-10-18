// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/DoorCommandFeedback.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DOOR_COMMAND_FEEDBACK__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DOOR_COMMAND_FEEDBACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/door_command_feedback__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_DoorCommandFeedback_distance_past_threshold
{
public:
  explicit Init_DoorCommandFeedback_distance_past_threshold(::bosdyn_msgs::msg::DoorCommandFeedback & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::DoorCommandFeedback distance_past_threshold(::bosdyn_msgs::msg::DoorCommandFeedback::_distance_past_threshold_type arg)
  {
    msg_.distance_past_threshold = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::DoorCommandFeedback msg_;
};

class Init_DoorCommandFeedback_status
{
public:
  Init_DoorCommandFeedback_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DoorCommandFeedback_distance_past_threshold status(::bosdyn_msgs::msg::DoorCommandFeedback::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_DoorCommandFeedback_distance_past_threshold(msg_);
  }

private:
  ::bosdyn_msgs::msg::DoorCommandFeedback msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::DoorCommandFeedback>()
{
  return bosdyn_msgs::msg::builder::Init_DoorCommandFeedback_status();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DOOR_COMMAND_FEEDBACK__BUILDER_HPP_
