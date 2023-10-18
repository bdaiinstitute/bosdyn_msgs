// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ComputeParameters.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__COMPUTE_PARAMETERS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__COMPUTE_PARAMETERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/compute_parameters__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ComputeParameters_custom_params_is_set
{
public:
  explicit Init_ComputeParameters_custom_params_is_set(::bosdyn_msgs::msg::ComputeParameters & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ComputeParameters custom_params_is_set(::bosdyn_msgs::msg::ComputeParameters::_custom_params_is_set_type arg)
  {
    msg_.custom_params_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ComputeParameters msg_;
};

class Init_ComputeParameters_custom_params
{
public:
  explicit Init_ComputeParameters_custom_params(::bosdyn_msgs::msg::ComputeParameters & msg)
  : msg_(msg)
  {}
  Init_ComputeParameters_custom_params_is_set custom_params(::bosdyn_msgs::msg::ComputeParameters::_custom_params_type arg)
  {
    msg_.custom_params = std::move(arg);
    return Init_ComputeParameters_custom_params_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ComputeParameters msg_;
};

class Init_ComputeParameters_reference_images
{
public:
  explicit Init_ComputeParameters_reference_images(::bosdyn_msgs::msg::ComputeParameters & msg)
  : msg_(msg)
  {}
  Init_ComputeParameters_custom_params reference_images(::bosdyn_msgs::msg::ComputeParameters::_reference_images_type arg)
  {
    msg_.reference_images = std::move(arg);
    return Init_ComputeParameters_custom_params(msg_);
  }

private:
  ::bosdyn_msgs::msg::ComputeParameters msg_;
};

class Init_ComputeParameters_model_name
{
public:
  Init_ComputeParameters_model_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ComputeParameters_reference_images model_name(::bosdyn_msgs::msg::ComputeParameters::_model_name_type arg)
  {
    msg_.model_name = std::move(arg);
    return Init_ComputeParameters_reference_images(msg_);
  }

private:
  ::bosdyn_msgs::msg::ComputeParameters msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ComputeParameters>()
{
  return bosdyn_msgs::msg::builder::Init_ComputeParameters_model_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__COMPUTE_PARAMETERS__BUILDER_HPP_
