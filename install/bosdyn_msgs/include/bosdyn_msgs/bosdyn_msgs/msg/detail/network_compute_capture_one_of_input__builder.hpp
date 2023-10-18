// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/NetworkComputeCaptureOneOfInput.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_CAPTURE_ONE_OF_INPUT__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_CAPTURE_ONE_OF_INPUT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/network_compute_capture_one_of_input__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_NetworkComputeCaptureOneOfInput_input_choice
{
public:
  explicit Init_NetworkComputeCaptureOneOfInput_input_choice(::bosdyn_msgs::msg::NetworkComputeCaptureOneOfInput & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::NetworkComputeCaptureOneOfInput input_choice(::bosdyn_msgs::msg::NetworkComputeCaptureOneOfInput::_input_choice_type arg)
  {
    msg_.input_choice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::NetworkComputeCaptureOneOfInput msg_;
};

class Init_NetworkComputeCaptureOneOfInput_input_data_bridge
{
public:
  Init_NetworkComputeCaptureOneOfInput_input_data_bridge()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NetworkComputeCaptureOneOfInput_input_choice input_data_bridge(::bosdyn_msgs::msg::NetworkComputeCaptureOneOfInput::_input_data_bridge_type arg)
  {
    msg_.input_data_bridge = std::move(arg);
    return Init_NetworkComputeCaptureOneOfInput_input_choice(msg_);
  }

private:
  ::bosdyn_msgs::msg::NetworkComputeCaptureOneOfInput msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::NetworkComputeCaptureOneOfInput>()
{
  return bosdyn_msgs::msg::builder::Init_NetworkComputeCaptureOneOfInput_input_data_bridge();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__NETWORK_COMPUTE_CAPTURE_ONE_OF_INPUT__BUILDER_HPP_
