// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/SetLEDBrightnessRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SET_LED_BRIGHTNESS_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SET_LED_BRIGHTNESS_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/set_led_brightness_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_SetLEDBrightnessRequest_brightnesses
{
public:
  explicit Init_SetLEDBrightnessRequest_brightnesses(::bosdyn_msgs::msg::SetLEDBrightnessRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::SetLEDBrightnessRequest brightnesses(::bosdyn_msgs::msg::SetLEDBrightnessRequest::_brightnesses_type arg)
  {
    msg_.brightnesses = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetLEDBrightnessRequest msg_;
};

class Init_SetLEDBrightnessRequest_header_is_set
{
public:
  explicit Init_SetLEDBrightnessRequest_header_is_set(::bosdyn_msgs::msg::SetLEDBrightnessRequest & msg)
  : msg_(msg)
  {}
  Init_SetLEDBrightnessRequest_brightnesses header_is_set(::bosdyn_msgs::msg::SetLEDBrightnessRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_SetLEDBrightnessRequest_brightnesses(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetLEDBrightnessRequest msg_;
};

class Init_SetLEDBrightnessRequest_header
{
public:
  Init_SetLEDBrightnessRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetLEDBrightnessRequest_header_is_set header(::bosdyn_msgs::msg::SetLEDBrightnessRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SetLEDBrightnessRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetLEDBrightnessRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::SetLEDBrightnessRequest>()
{
  return bosdyn_msgs::msg::builder::Init_SetLEDBrightnessRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SET_LED_BRIGHTNESS_REQUEST__BUILDER_HPP_
