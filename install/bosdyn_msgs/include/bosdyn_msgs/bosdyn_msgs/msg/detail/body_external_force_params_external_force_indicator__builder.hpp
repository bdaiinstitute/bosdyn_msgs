// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/BodyExternalForceParamsExternalForceIndicator.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BODY_EXTERNAL_FORCE_PARAMS_EXTERNAL_FORCE_INDICATOR__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__BODY_EXTERNAL_FORCE_PARAMS_EXTERNAL_FORCE_INDICATOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/body_external_force_params_external_force_indicator__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_BodyExternalForceParamsExternalForceIndicator_value
{
public:
  Init_BodyExternalForceParamsExternalForceIndicator_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bosdyn_msgs::msg::BodyExternalForceParamsExternalForceIndicator value(::bosdyn_msgs::msg::BodyExternalForceParamsExternalForceIndicator::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::BodyExternalForceParamsExternalForceIndicator msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::BodyExternalForceParamsExternalForceIndicator>()
{
  return bosdyn_msgs::msg::builder::Init_BodyExternalForceParamsExternalForceIndicator_value();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__BODY_EXTERNAL_FORCE_PARAMS_EXTERNAL_FORCE_INDICATOR__BUILDER_HPP_
