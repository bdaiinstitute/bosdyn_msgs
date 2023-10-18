// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/CaptureActionId.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__CAPTURE_ACTION_ID__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__CAPTURE_ACTION_ID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/capture_action_id__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_CaptureActionId_timestamp_is_set
{
public:
  explicit Init_CaptureActionId_timestamp_is_set(::bosdyn_msgs::msg::CaptureActionId & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::CaptureActionId timestamp_is_set(::bosdyn_msgs::msg::CaptureActionId::_timestamp_is_set_type arg)
  {
    msg_.timestamp_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::CaptureActionId msg_;
};

class Init_CaptureActionId_timestamp
{
public:
  explicit Init_CaptureActionId_timestamp(::bosdyn_msgs::msg::CaptureActionId & msg)
  : msg_(msg)
  {}
  Init_CaptureActionId_timestamp_is_set timestamp(::bosdyn_msgs::msg::CaptureActionId::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_CaptureActionId_timestamp_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::CaptureActionId msg_;
};

class Init_CaptureActionId_group_name
{
public:
  explicit Init_CaptureActionId_group_name(::bosdyn_msgs::msg::CaptureActionId & msg)
  : msg_(msg)
  {}
  Init_CaptureActionId_timestamp group_name(::bosdyn_msgs::msg::CaptureActionId::_group_name_type arg)
  {
    msg_.group_name = std::move(arg);
    return Init_CaptureActionId_timestamp(msg_);
  }

private:
  ::bosdyn_msgs::msg::CaptureActionId msg_;
};

class Init_CaptureActionId_action_name
{
public:
  Init_CaptureActionId_action_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CaptureActionId_group_name action_name(::bosdyn_msgs::msg::CaptureActionId::_action_name_type arg)
  {
    msg_.action_name = std::move(arg);
    return Init_CaptureActionId_group_name(msg_);
  }

private:
  ::bosdyn_msgs::msg::CaptureActionId msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::CaptureActionId>()
{
  return bosdyn_msgs::msg::builder::Init_CaptureActionId_action_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__CAPTURE_ACTION_ID__BUILDER_HPP_
