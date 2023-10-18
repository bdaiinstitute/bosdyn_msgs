// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/NetworkComputeInputData.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_INPUT_DATA__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_INPUT_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/network_compute_input_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_NetworkComputeInputData_rotate_image
{
public:
  explicit Init_NetworkComputeInputData_rotate_image(::bosdyn_msgs::msg::NetworkComputeInputData & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::NetworkComputeInputData rotate_image(::bosdyn_msgs::msg::NetworkComputeInputData::_rotate_image_type arg)
  {
    msg_.rotate_image = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::NetworkComputeInputData msg_;
};

class Init_NetworkComputeInputData_min_confidence
{
public:
  explicit Init_NetworkComputeInputData_min_confidence(::bosdyn_msgs::msg::NetworkComputeInputData & msg)
  : msg_(msg)
  {}
  Init_NetworkComputeInputData_rotate_image min_confidence(::bosdyn_msgs::msg::NetworkComputeInputData::_min_confidence_type arg)
  {
    msg_.min_confidence = std::move(arg);
    return Init_NetworkComputeInputData_rotate_image(msg_);
  }

private:
  ::bosdyn_msgs::msg::NetworkComputeInputData msg_;
};

class Init_NetworkComputeInputData_model_name
{
public:
  explicit Init_NetworkComputeInputData_model_name(::bosdyn_msgs::msg::NetworkComputeInputData & msg)
  : msg_(msg)
  {}
  Init_NetworkComputeInputData_min_confidence model_name(::bosdyn_msgs::msg::NetworkComputeInputData::_model_name_type arg)
  {
    msg_.model_name = std::move(arg);
    return Init_NetworkComputeInputData_min_confidence(msg_);
  }

private:
  ::bosdyn_msgs::msg::NetworkComputeInputData msg_;
};

class Init_NetworkComputeInputData_input
{
public:
  Init_NetworkComputeInputData_input()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NetworkComputeInputData_model_name input(::bosdyn_msgs::msg::NetworkComputeInputData::_input_type arg)
  {
    msg_.input = std::move(arg);
    return Init_NetworkComputeInputData_model_name(msg_);
  }

private:
  ::bosdyn_msgs::msg::NetworkComputeInputData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::NetworkComputeInputData>()
{
  return bosdyn_msgs::msg::builder::Init_NetworkComputeInputData_input();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_INPUT_DATA__BUILDER_HPP_
