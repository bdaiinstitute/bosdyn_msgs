// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/SetIrMeterOverlayRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SET_IR_METER_OVERLAY_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SET_IR_METER_OVERLAY_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/set_ir_meter_overlay_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_SetIrMeterOverlayRequest_overlay_is_set
{
public:
  explicit Init_SetIrMeterOverlayRequest_overlay_is_set(::bosdyn_msgs::msg::SetIrMeterOverlayRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::SetIrMeterOverlayRequest overlay_is_set(::bosdyn_msgs::msg::SetIrMeterOverlayRequest::_overlay_is_set_type arg)
  {
    msg_.overlay_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetIrMeterOverlayRequest msg_;
};

class Init_SetIrMeterOverlayRequest_overlay
{
public:
  explicit Init_SetIrMeterOverlayRequest_overlay(::bosdyn_msgs::msg::SetIrMeterOverlayRequest & msg)
  : msg_(msg)
  {}
  Init_SetIrMeterOverlayRequest_overlay_is_set overlay(::bosdyn_msgs::msg::SetIrMeterOverlayRequest::_overlay_type arg)
  {
    msg_.overlay = std::move(arg);
    return Init_SetIrMeterOverlayRequest_overlay_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetIrMeterOverlayRequest msg_;
};

class Init_SetIrMeterOverlayRequest_header_is_set
{
public:
  explicit Init_SetIrMeterOverlayRequest_header_is_set(::bosdyn_msgs::msg::SetIrMeterOverlayRequest & msg)
  : msg_(msg)
  {}
  Init_SetIrMeterOverlayRequest_overlay header_is_set(::bosdyn_msgs::msg::SetIrMeterOverlayRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_SetIrMeterOverlayRequest_overlay(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetIrMeterOverlayRequest msg_;
};

class Init_SetIrMeterOverlayRequest_header
{
public:
  Init_SetIrMeterOverlayRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetIrMeterOverlayRequest_header_is_set header(::bosdyn_msgs::msg::SetIrMeterOverlayRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SetIrMeterOverlayRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetIrMeterOverlayRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::SetIrMeterOverlayRequest>()
{
  return bosdyn_msgs::msg::builder::Init_SetIrMeterOverlayRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SET_IR_METER_OVERLAY_REQUEST__BUILDER_HPP_
