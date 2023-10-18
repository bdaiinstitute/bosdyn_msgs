// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/NetworkComputeInputDataBridge.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_INPUT_DATA_BRIDGE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_INPUT_DATA_BRIDGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/network_compute_input_data_bridge__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_NetworkComputeInputDataBridge_parameters_is_set
{
public:
  explicit Init_NetworkComputeInputDataBridge_parameters_is_set(::bosdyn_msgs::msg::NetworkComputeInputDataBridge & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::NetworkComputeInputDataBridge parameters_is_set(::bosdyn_msgs::msg::NetworkComputeInputDataBridge::_parameters_is_set_type arg)
  {
    msg_.parameters_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::NetworkComputeInputDataBridge msg_;
};

class Init_NetworkComputeInputDataBridge_parameters
{
public:
  explicit Init_NetworkComputeInputDataBridge_parameters(::bosdyn_msgs::msg::NetworkComputeInputDataBridge & msg)
  : msg_(msg)
  {}
  Init_NetworkComputeInputDataBridge_parameters_is_set parameters(::bosdyn_msgs::msg::NetworkComputeInputDataBridge::_parameters_type arg)
  {
    msg_.parameters = std::move(arg);
    return Init_NetworkComputeInputDataBridge_parameters_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::NetworkComputeInputDataBridge msg_;
};

class Init_NetworkComputeInputDataBridge_image_sources_and_services
{
public:
  Init_NetworkComputeInputDataBridge_image_sources_and_services()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NetworkComputeInputDataBridge_parameters image_sources_and_services(::bosdyn_msgs::msg::NetworkComputeInputDataBridge::_image_sources_and_services_type arg)
  {
    msg_.image_sources_and_services = std::move(arg);
    return Init_NetworkComputeInputDataBridge_parameters(msg_);
  }

private:
  ::bosdyn_msgs::msg::NetworkComputeInputDataBridge msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::NetworkComputeInputDataBridge>()
{
  return bosdyn_msgs::msg::builder::Init_NetworkComputeInputDataBridge_image_sources_and_services();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_INPUT_DATA_BRIDGE__BUILDER_HPP_
