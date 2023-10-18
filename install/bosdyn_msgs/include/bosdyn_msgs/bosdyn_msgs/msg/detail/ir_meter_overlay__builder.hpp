// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/IrMeterOverlay.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__IR_METER_OVERLAY__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__IR_METER_OVERLAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/ir_meter_overlay__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_IrMeterOverlay_delta
{
public:
  explicit Init_IrMeterOverlay_delta(::bosdyn_msgs::msg::IrMeterOverlay & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::IrMeterOverlay delta(::bosdyn_msgs::msg::IrMeterOverlay::_delta_type arg)
  {
    msg_.delta = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::IrMeterOverlay msg_;
};

class Init_IrMeterOverlay_unit_is_set
{
public:
  explicit Init_IrMeterOverlay_unit_is_set(::bosdyn_msgs::msg::IrMeterOverlay & msg)
  : msg_(msg)
  {}
  Init_IrMeterOverlay_delta unit_is_set(::bosdyn_msgs::msg::IrMeterOverlay::_unit_is_set_type arg)
  {
    msg_.unit_is_set = std::move(arg);
    return Init_IrMeterOverlay_delta(msg_);
  }

private:
  ::bosdyn_msgs::msg::IrMeterOverlay msg_;
};

class Init_IrMeterOverlay_unit
{
public:
  explicit Init_IrMeterOverlay_unit(::bosdyn_msgs::msg::IrMeterOverlay & msg)
  : msg_(msg)
  {}
  Init_IrMeterOverlay_unit_is_set unit(::bosdyn_msgs::msg::IrMeterOverlay::_unit_type arg)
  {
    msg_.unit = std::move(arg);
    return Init_IrMeterOverlay_unit_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::IrMeterOverlay msg_;
};

class Init_IrMeterOverlay_meter
{
public:
  explicit Init_IrMeterOverlay_meter(::bosdyn_msgs::msg::IrMeterOverlay & msg)
  : msg_(msg)
  {}
  Init_IrMeterOverlay_unit meter(::bosdyn_msgs::msg::IrMeterOverlay::_meter_type arg)
  {
    msg_.meter = std::move(arg);
    return Init_IrMeterOverlay_unit(msg_);
  }

private:
  ::bosdyn_msgs::msg::IrMeterOverlay msg_;
};

class Init_IrMeterOverlay_enable
{
public:
  Init_IrMeterOverlay_enable()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IrMeterOverlay_meter enable(::bosdyn_msgs::msg::IrMeterOverlay::_enable_type arg)
  {
    msg_.enable = std::move(arg);
    return Init_IrMeterOverlay_meter(msg_);
  }

private:
  ::bosdyn_msgs::msg::IrMeterOverlay msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::IrMeterOverlay>()
{
  return bosdyn_msgs::msg::builder::Init_IrMeterOverlay_enable();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__IR_METER_OVERLAY__BUILDER_HPP_
