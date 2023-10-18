// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ScreenDescription.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__SCREEN_DESCRIPTION__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__SCREEN_DESCRIPTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/screen_description__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ScreenDescription_name
{
public:
  Init_ScreenDescription_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bosdyn_msgs::msg::ScreenDescription name(::bosdyn_msgs::msg::ScreenDescription::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ScreenDescription msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ScreenDescription>()
{
  return bosdyn_msgs::msg::builder::Init_ScreenDescription_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__SCREEN_DESCRIPTION__BUILDER_HPP_
