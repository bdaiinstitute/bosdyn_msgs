// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/NetworkComputeInputDataOneOfInput.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_INPUT_DATA_ONE_OF_INPUT__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_INPUT_DATA_ONE_OF_INPUT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/network_compute_input_data_one_of_input__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_NetworkComputeInputDataOneOfInput_input_choice
{
public:
  explicit Init_NetworkComputeInputDataOneOfInput_input_choice(::bosdyn_msgs::msg::NetworkComputeInputDataOneOfInput & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::NetworkComputeInputDataOneOfInput input_choice(::bosdyn_msgs::msg::NetworkComputeInputDataOneOfInput::_input_choice_type arg)
  {
    msg_.input_choice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::NetworkComputeInputDataOneOfInput msg_;
};

class Init_NetworkComputeInputDataOneOfInput_image
{
public:
  explicit Init_NetworkComputeInputDataOneOfInput_image(::bosdyn_msgs::msg::NetworkComputeInputDataOneOfInput & msg)
  : msg_(msg)
  {}
  Init_NetworkComputeInputDataOneOfInput_input_choice image(::bosdyn_msgs::msg::NetworkComputeInputDataOneOfInput::_image_type arg)
  {
    msg_.image = std::move(arg);
    return Init_NetworkComputeInputDataOneOfInput_input_choice(msg_);
  }

private:
  ::bosdyn_msgs::msg::NetworkComputeInputDataOneOfInput msg_;
};

class Init_NetworkComputeInputDataOneOfInput_image_source_and_service
{
public:
  Init_NetworkComputeInputDataOneOfInput_image_source_and_service()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NetworkComputeInputDataOneOfInput_image image_source_and_service(::bosdyn_msgs::msg::NetworkComputeInputDataOneOfInput::_image_source_and_service_type arg)
  {
    msg_.image_source_and_service = std::move(arg);
    return Init_NetworkComputeInputDataOneOfInput_image(msg_);
  }

private:
  ::bosdyn_msgs::msg::NetworkComputeInputDataOneOfInput msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::NetworkComputeInputDataOneOfInput>()
{
  return bosdyn_msgs::msg::builder::Init_NetworkComputeInputDataOneOfInput_image_source_and_service();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_INPUT_DATA_ONE_OF_INPUT__BUILDER_HPP_
