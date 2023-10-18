// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/IrMeterOverlayNormalizedCoordinates.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__IR_METER_OVERLAY_NORMALIZED_COORDINATES__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__IR_METER_OVERLAY_NORMALIZED_COORDINATES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/ir_meter_overlay_normalized_coordinates__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_IrMeterOverlayNormalizedCoordinates_y
{
public:
  explicit Init_IrMeterOverlayNormalizedCoordinates_y(::bosdyn_msgs::msg::IrMeterOverlayNormalizedCoordinates & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::IrMeterOverlayNormalizedCoordinates y(::bosdyn_msgs::msg::IrMeterOverlayNormalizedCoordinates::_y_type arg)
  {
    msg_.y = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::IrMeterOverlayNormalizedCoordinates msg_;
};

class Init_IrMeterOverlayNormalizedCoordinates_x
{
public:
  Init_IrMeterOverlayNormalizedCoordinates_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IrMeterOverlayNormalizedCoordinates_y x(::bosdyn_msgs::msg::IrMeterOverlayNormalizedCoordinates::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_IrMeterOverlayNormalizedCoordinates_y(msg_);
  }

private:
  ::bosdyn_msgs::msg::IrMeterOverlayNormalizedCoordinates msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::IrMeterOverlayNormalizedCoordinates>()
{
  return bosdyn_msgs::msg::builder::Init_IrMeterOverlayNormalizedCoordinates_x();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__IR_METER_OVERLAY_NORMALIZED_COORDINATES__BUILDER_HPP_
