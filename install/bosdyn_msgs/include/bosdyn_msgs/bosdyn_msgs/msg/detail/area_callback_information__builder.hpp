// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/AreaCallbackInformation.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__AREA_CALLBACK_INFORMATION__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__AREA_CALLBACK_INFORMATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/area_callback_information__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_AreaCallbackInformation_custom_params_is_set
{
public:
  explicit Init_AreaCallbackInformation_custom_params_is_set(::bosdyn_msgs::msg::AreaCallbackInformation & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::AreaCallbackInformation custom_params_is_set(::bosdyn_msgs::msg::AreaCallbackInformation::_custom_params_is_set_type arg)
  {
    msg_.custom_params_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::AreaCallbackInformation msg_;
};

class Init_AreaCallbackInformation_custom_params
{
public:
  explicit Init_AreaCallbackInformation_custom_params(::bosdyn_msgs::msg::AreaCallbackInformation & msg)
  : msg_(msg)
  {}
  Init_AreaCallbackInformation_custom_params_is_set custom_params(::bosdyn_msgs::msg::AreaCallbackInformation::_custom_params_type arg)
  {
    msg_.custom_params = std::move(arg);
    return Init_AreaCallbackInformation_custom_params_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::AreaCallbackInformation msg_;
};

class Init_AreaCallbackInformation_required_lease_resources
{
public:
  Init_AreaCallbackInformation_required_lease_resources()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AreaCallbackInformation_custom_params required_lease_resources(::bosdyn_msgs::msg::AreaCallbackInformation::_required_lease_resources_type arg)
  {
    msg_.required_lease_resources = std::move(arg);
    return Init_AreaCallbackInformation_custom_params(msg_);
  }

private:
  ::bosdyn_msgs::msg::AreaCallbackInformation msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::AreaCallbackInformation>()
{
  return bosdyn_msgs::msg::builder::Init_AreaCallbackInformation_required_lease_resources();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__AREA_CALLBACK_INFORMATION__BUILDER_HPP_
