// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/DrawablePropertiesColor.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DRAWABLE_PROPERTIES_COLOR__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DRAWABLE_PROPERTIES_COLOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/drawable_properties_color__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_DrawablePropertiesColor_a
{
public:
  explicit Init_DrawablePropertiesColor_a(::bosdyn_msgs::msg::DrawablePropertiesColor & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::DrawablePropertiesColor a(::bosdyn_msgs::msg::DrawablePropertiesColor::_a_type arg)
  {
    msg_.a = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::DrawablePropertiesColor msg_;
};

class Init_DrawablePropertiesColor_b
{
public:
  explicit Init_DrawablePropertiesColor_b(::bosdyn_msgs::msg::DrawablePropertiesColor & msg)
  : msg_(msg)
  {}
  Init_DrawablePropertiesColor_a b(::bosdyn_msgs::msg::DrawablePropertiesColor::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_DrawablePropertiesColor_a(msg_);
  }

private:
  ::bosdyn_msgs::msg::DrawablePropertiesColor msg_;
};

class Init_DrawablePropertiesColor_g
{
public:
  explicit Init_DrawablePropertiesColor_g(::bosdyn_msgs::msg::DrawablePropertiesColor & msg)
  : msg_(msg)
  {}
  Init_DrawablePropertiesColor_b g(::bosdyn_msgs::msg::DrawablePropertiesColor::_g_type arg)
  {
    msg_.g = std::move(arg);
    return Init_DrawablePropertiesColor_b(msg_);
  }

private:
  ::bosdyn_msgs::msg::DrawablePropertiesColor msg_;
};

class Init_DrawablePropertiesColor_r
{
public:
  Init_DrawablePropertiesColor_r()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DrawablePropertiesColor_g r(::bosdyn_msgs::msg::DrawablePropertiesColor::_r_type arg)
  {
    msg_.r = std::move(arg);
    return Init_DrawablePropertiesColor_g(msg_);
  }

private:
  ::bosdyn_msgs::msg::DrawablePropertiesColor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::DrawablePropertiesColor>()
{
  return bosdyn_msgs::msg::builder::Init_DrawablePropertiesColor_r();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DRAWABLE_PROPERTIES_COLOR__BUILDER_HPP_
