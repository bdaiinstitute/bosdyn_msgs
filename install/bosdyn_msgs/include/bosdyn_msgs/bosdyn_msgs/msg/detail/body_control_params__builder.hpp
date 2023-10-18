// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/BodyControlParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BODY_CONTROL_PARAMS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__BODY_CONTROL_PARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/body_control_params__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_BodyControlParams_rotation_setting
{
public:
  explicit Init_BodyControlParams_rotation_setting(::bosdyn_msgs::msg::BodyControlParams & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::BodyControlParams rotation_setting(::bosdyn_msgs::msg::BodyControlParams::_rotation_setting_type arg)
  {
    msg_.rotation_setting = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::BodyControlParams msg_;
};

class Init_BodyControlParams_param
{
public:
  Init_BodyControlParams_param()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BodyControlParams_rotation_setting param(::bosdyn_msgs::msg::BodyControlParams::_param_type arg)
  {
    msg_.param = std::move(arg);
    return Init_BodyControlParams_rotation_setting(msg_);
  }

private:
  ::bosdyn_msgs::msg::BodyControlParams msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::BodyControlParams>()
{
  return bosdyn_msgs::msg::builder::Init_BodyControlParams_param();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__BODY_CONTROL_PARAMS__BUILDER_HPP_
