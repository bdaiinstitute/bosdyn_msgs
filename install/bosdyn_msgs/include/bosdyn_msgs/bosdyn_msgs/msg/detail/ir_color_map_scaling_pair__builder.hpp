// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/IrColorMapScalingPair.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__IR_COLOR_MAP_SCALING_PAIR__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__IR_COLOR_MAP_SCALING_PAIR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/ir_color_map_scaling_pair__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_IrColorMapScalingPair_max
{
public:
  explicit Init_IrColorMapScalingPair_max(::bosdyn_msgs::msg::IrColorMapScalingPair & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::IrColorMapScalingPair max(::bosdyn_msgs::msg::IrColorMapScalingPair::_max_type arg)
  {
    msg_.max = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::IrColorMapScalingPair msg_;
};

class Init_IrColorMapScalingPair_min
{
public:
  Init_IrColorMapScalingPair_min()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IrColorMapScalingPair_max min(::bosdyn_msgs::msg::IrColorMapScalingPair::_min_type arg)
  {
    msg_.min = std::move(arg);
    return Init_IrColorMapScalingPair_max(msg_);
  }

private:
  ::bosdyn_msgs::msg::IrColorMapScalingPair msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::IrColorMapScalingPair>()
{
  return bosdyn_msgs::msg::builder::Init_IrColorMapScalingPair_min();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__IR_COLOR_MAP_SCALING_PAIR__BUILDER_HPP_
