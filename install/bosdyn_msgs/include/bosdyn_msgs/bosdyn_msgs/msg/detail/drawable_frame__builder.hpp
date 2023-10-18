// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/DrawableFrame.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DRAWABLE_FRAME__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DRAWABLE_FRAME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/drawable_frame__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_DrawableFrame_arrow_radius
{
public:
  explicit Init_DrawableFrame_arrow_radius(::bosdyn_msgs::msg::DrawableFrame & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::DrawableFrame arrow_radius(::bosdyn_msgs::msg::DrawableFrame::_arrow_radius_type arg)
  {
    msg_.arrow_radius = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::DrawableFrame msg_;
};

class Init_DrawableFrame_arrow_length
{
public:
  Init_DrawableFrame_arrow_length()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DrawableFrame_arrow_radius arrow_length(::bosdyn_msgs::msg::DrawableFrame::_arrow_length_type arg)
  {
    msg_.arrow_length = std::move(arg);
    return Init_DrawableFrame_arrow_radius(msg_);
  }

private:
  ::bosdyn_msgs::msg::DrawableFrame msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::DrawableFrame>()
{
  return bosdyn_msgs::msg::builder::Init_DrawableFrame_arrow_length();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DRAWABLE_FRAME__BUILDER_HPP_
