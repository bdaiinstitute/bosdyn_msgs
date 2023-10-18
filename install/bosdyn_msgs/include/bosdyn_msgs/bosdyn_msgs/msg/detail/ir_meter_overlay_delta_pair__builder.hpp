// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/IrMeterOverlayDeltaPair.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__IR_METER_OVERLAY_DELTA_PAIR__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__IR_METER_OVERLAY_DELTA_PAIR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/ir_meter_overlay_delta_pair__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_IrMeterOverlayDeltaPair_b
{
public:
  explicit Init_IrMeterOverlayDeltaPair_b(::bosdyn_msgs::msg::IrMeterOverlayDeltaPair & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::IrMeterOverlayDeltaPair b(::bosdyn_msgs::msg::IrMeterOverlayDeltaPair::_b_type arg)
  {
    msg_.b = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::IrMeterOverlayDeltaPair msg_;
};

class Init_IrMeterOverlayDeltaPair_a
{
public:
  Init_IrMeterOverlayDeltaPair_a()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IrMeterOverlayDeltaPair_b a(::bosdyn_msgs::msg::IrMeterOverlayDeltaPair::_a_type arg)
  {
    msg_.a = std::move(arg);
    return Init_IrMeterOverlayDeltaPair_b(msg_);
  }

private:
  ::bosdyn_msgs::msg::IrMeterOverlayDeltaPair msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::IrMeterOverlayDeltaPair>()
{
  return bosdyn_msgs::msg::builder::Init_IrMeterOverlayDeltaPair_a();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__IR_METER_OVERLAY_DELTA_PAIR__BUILDER_HPP_
