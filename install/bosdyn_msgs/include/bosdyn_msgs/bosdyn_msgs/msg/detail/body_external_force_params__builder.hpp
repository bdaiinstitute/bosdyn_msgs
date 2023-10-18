// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/BodyExternalForceParams.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BODY_EXTERNAL_FORCE_PARAMS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__BODY_EXTERNAL_FORCE_PARAMS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/body_external_force_params__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_BodyExternalForceParams_external_force_override_is_set
{
public:
  explicit Init_BodyExternalForceParams_external_force_override_is_set(::bosdyn_msgs::msg::BodyExternalForceParams & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::BodyExternalForceParams external_force_override_is_set(::bosdyn_msgs::msg::BodyExternalForceParams::_external_force_override_is_set_type arg)
  {
    msg_.external_force_override_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::BodyExternalForceParams msg_;
};

class Init_BodyExternalForceParams_external_force_override
{
public:
  explicit Init_BodyExternalForceParams_external_force_override(::bosdyn_msgs::msg::BodyExternalForceParams & msg)
  : msg_(msg)
  {}
  Init_BodyExternalForceParams_external_force_override_is_set external_force_override(::bosdyn_msgs::msg::BodyExternalForceParams::_external_force_override_type arg)
  {
    msg_.external_force_override = std::move(arg);
    return Init_BodyExternalForceParams_external_force_override_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::BodyExternalForceParams msg_;
};

class Init_BodyExternalForceParams_frame_name
{
public:
  explicit Init_BodyExternalForceParams_frame_name(::bosdyn_msgs::msg::BodyExternalForceParams & msg)
  : msg_(msg)
  {}
  Init_BodyExternalForceParams_external_force_override frame_name(::bosdyn_msgs::msg::BodyExternalForceParams::_frame_name_type arg)
  {
    msg_.frame_name = std::move(arg);
    return Init_BodyExternalForceParams_external_force_override(msg_);
  }

private:
  ::bosdyn_msgs::msg::BodyExternalForceParams msg_;
};

class Init_BodyExternalForceParams_external_force_indicator
{
public:
  Init_BodyExternalForceParams_external_force_indicator()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BodyExternalForceParams_frame_name external_force_indicator(::bosdyn_msgs::msg::BodyExternalForceParams::_external_force_indicator_type arg)
  {
    msg_.external_force_indicator = std::move(arg);
    return Init_BodyExternalForceParams_frame_name(msg_);
  }

private:
  ::bosdyn_msgs::msg::BodyExternalForceParams msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::BodyExternalForceParams>()
{
  return bosdyn_msgs::msg::builder::Init_BodyExternalForceParams_external_force_indicator();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__BODY_EXTERNAL_FORCE_PARAMS__BUILDER_HPP_
