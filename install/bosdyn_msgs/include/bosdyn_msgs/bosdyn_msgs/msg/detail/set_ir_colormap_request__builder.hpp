// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/SetIrColormapRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SET_IR_COLORMAP_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SET_IR_COLORMAP_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/set_ir_colormap_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_SetIrColormapRequest_map_is_set
{
public:
  explicit Init_SetIrColormapRequest_map_is_set(::bosdyn_msgs::msg::SetIrColormapRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::SetIrColormapRequest map_is_set(::bosdyn_msgs::msg::SetIrColormapRequest::_map_is_set_type arg)
  {
    msg_.map_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetIrColormapRequest msg_;
};

class Init_SetIrColormapRequest_map
{
public:
  explicit Init_SetIrColormapRequest_map(::bosdyn_msgs::msg::SetIrColormapRequest & msg)
  : msg_(msg)
  {}
  Init_SetIrColormapRequest_map_is_set map(::bosdyn_msgs::msg::SetIrColormapRequest::_map_type arg)
  {
    msg_.map = std::move(arg);
    return Init_SetIrColormapRequest_map_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetIrColormapRequest msg_;
};

class Init_SetIrColormapRequest_header_is_set
{
public:
  explicit Init_SetIrColormapRequest_header_is_set(::bosdyn_msgs::msg::SetIrColormapRequest & msg)
  : msg_(msg)
  {}
  Init_SetIrColormapRequest_map header_is_set(::bosdyn_msgs::msg::SetIrColormapRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_SetIrColormapRequest_map(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetIrColormapRequest msg_;
};

class Init_SetIrColormapRequest_header
{
public:
  Init_SetIrColormapRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetIrColormapRequest_header_is_set header(::bosdyn_msgs::msg::SetIrColormapRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SetIrColormapRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetIrColormapRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::SetIrColormapRequest>()
{
  return bosdyn_msgs::msg::builder::Init_SetIrColormapRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SET_IR_COLORMAP_REQUEST__BUILDER_HPP_
