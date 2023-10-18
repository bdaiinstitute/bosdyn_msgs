// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/BodyControlParamsBodyAssistForManipulation.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BODY_CONTROL_PARAMS_BODY_ASSIST_FOR_MANIPULATION__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__BODY_CONTROL_PARAMS_BODY_ASSIST_FOR_MANIPULATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/body_control_params_body_assist_for_manipulation__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_BodyControlParamsBodyAssistForManipulation_enable_hip_height_assist
{
public:
  explicit Init_BodyControlParamsBodyAssistForManipulation_enable_hip_height_assist(::bosdyn_msgs::msg::BodyControlParamsBodyAssistForManipulation & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::BodyControlParamsBodyAssistForManipulation enable_hip_height_assist(::bosdyn_msgs::msg::BodyControlParamsBodyAssistForManipulation::_enable_hip_height_assist_type arg)
  {
    msg_.enable_hip_height_assist = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::BodyControlParamsBodyAssistForManipulation msg_;
};

class Init_BodyControlParamsBodyAssistForManipulation_enable_body_yaw_assist
{
public:
  Init_BodyControlParamsBodyAssistForManipulation_enable_body_yaw_assist()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BodyControlParamsBodyAssistForManipulation_enable_hip_height_assist enable_body_yaw_assist(::bosdyn_msgs::msg::BodyControlParamsBodyAssistForManipulation::_enable_body_yaw_assist_type arg)
  {
    msg_.enable_body_yaw_assist = std::move(arg);
    return Init_BodyControlParamsBodyAssistForManipulation_enable_hip_height_assist(msg_);
  }

private:
  ::bosdyn_msgs::msg::BodyControlParamsBodyAssistForManipulation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::BodyControlParamsBodyAssistForManipulation>()
{
  return bosdyn_msgs::msg::builder::Init_BodyControlParamsBodyAssistForManipulation_enable_body_yaw_assist();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__BODY_CONTROL_PARAMS_BODY_ASSIST_FOR_MANIPULATION__BUILDER_HPP_
