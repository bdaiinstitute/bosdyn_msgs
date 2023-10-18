// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/MobilityParamsStairsMode.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__MOBILITY_PARAMS_STAIRS_MODE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__MOBILITY_PARAMS_STAIRS_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/mobility_params_stairs_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_MobilityParamsStairsMode_value
{
public:
  Init_MobilityParamsStairsMode_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bosdyn_msgs::msg::MobilityParamsStairsMode value(::bosdyn_msgs::msg::MobilityParamsStairsMode::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::MobilityParamsStairsMode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::MobilityParamsStairsMode>()
{
  return bosdyn_msgs::msg::builder::Init_MobilityParamsStairsMode_value();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__MOBILITY_PARAMS_STAIRS_MODE__BUILDER_HPP_
