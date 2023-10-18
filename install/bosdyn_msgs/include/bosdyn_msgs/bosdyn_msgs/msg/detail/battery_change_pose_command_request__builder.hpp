// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/BatteryChangePoseCommandRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BATTERY_CHANGE_POSE_COMMAND_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__BATTERY_CHANGE_POSE_COMMAND_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/battery_change_pose_command_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_BatteryChangePoseCommandRequest_direction_hint
{
public:
  Init_BatteryChangePoseCommandRequest_direction_hint()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bosdyn_msgs::msg::BatteryChangePoseCommandRequest direction_hint(::bosdyn_msgs::msg::BatteryChangePoseCommandRequest::_direction_hint_type arg)
  {
    msg_.direction_hint = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::BatteryChangePoseCommandRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::BatteryChangePoseCommandRequest>()
{
  return bosdyn_msgs::msg::builder::Init_BatteryChangePoseCommandRequest_direction_hint();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__BATTERY_CHANGE_POSE_COMMAND_REQUEST__BUILDER_HPP_
