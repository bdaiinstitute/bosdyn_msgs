// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/SetLEDBrightnessResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SET_LED_BRIGHTNESS_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SET_LED_BRIGHTNESS_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/set_led_brightness_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_SetLEDBrightnessResponse_header_is_set
{
public:
  explicit Init_SetLEDBrightnessResponse_header_is_set(::bosdyn_msgs::msg::SetLEDBrightnessResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::SetLEDBrightnessResponse header_is_set(::bosdyn_msgs::msg::SetLEDBrightnessResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetLEDBrightnessResponse msg_;
};

class Init_SetLEDBrightnessResponse_header
{
public:
  Init_SetLEDBrightnessResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SetLEDBrightnessResponse_header_is_set header(::bosdyn_msgs::msg::SetLEDBrightnessResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SetLEDBrightnessResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::SetLEDBrightnessResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::SetLEDBrightnessResponse>()
{
  return bosdyn_msgs::msg::builder::Init_SetLEDBrightnessResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SET_LED_BRIGHTNESS_RESPONSE__BUILDER_HPP_
