// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/AvailableModels.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__AVAILABLE_MODELS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__AVAILABLE_MODELS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/available_models__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_AvailableModels_data
{
public:
  Init_AvailableModels_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bosdyn_msgs::msg::AvailableModels data(::bosdyn_msgs::msg::AvailableModels::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::AvailableModels msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::AvailableModels>()
{
  return bosdyn_msgs::msg::builder::Init_AvailableModels_data();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__AVAILABLE_MODELS__BUILDER_HPP_
