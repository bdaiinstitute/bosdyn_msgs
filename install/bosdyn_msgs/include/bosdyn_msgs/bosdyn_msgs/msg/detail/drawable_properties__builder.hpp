// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/DrawableProperties.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DRAWABLE_PROPERTIES__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DRAWABLE_PROPERTIES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/drawable_properties__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_DrawableProperties_frame_name_drawable
{
public:
  explicit Init_DrawableProperties_frame_name_drawable(::bosdyn_msgs::msg::DrawableProperties & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::DrawableProperties frame_name_drawable(::bosdyn_msgs::msg::DrawableProperties::_frame_name_drawable_type arg)
  {
    msg_.frame_name_drawable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::DrawableProperties msg_;
};

class Init_DrawableProperties_drawable
{
public:
  explicit Init_DrawableProperties_drawable(::bosdyn_msgs::msg::DrawableProperties & msg)
  : msg_(msg)
  {}
  Init_DrawableProperties_frame_name_drawable drawable(::bosdyn_msgs::msg::DrawableProperties::_drawable_type arg)
  {
    msg_.drawable = std::move(arg);
    return Init_DrawableProperties_frame_name_drawable(msg_);
  }

private:
  ::bosdyn_msgs::msg::DrawableProperties msg_;
};

class Init_DrawableProperties_wireframe
{
public:
  explicit Init_DrawableProperties_wireframe(::bosdyn_msgs::msg::DrawableProperties & msg)
  : msg_(msg)
  {}
  Init_DrawableProperties_drawable wireframe(::bosdyn_msgs::msg::DrawableProperties::_wireframe_type arg)
  {
    msg_.wireframe = std::move(arg);
    return Init_DrawableProperties_drawable(msg_);
  }

private:
  ::bosdyn_msgs::msg::DrawableProperties msg_;
};

class Init_DrawableProperties_label
{
public:
  explicit Init_DrawableProperties_label(::bosdyn_msgs::msg::DrawableProperties & msg)
  : msg_(msg)
  {}
  Init_DrawableProperties_wireframe label(::bosdyn_msgs::msg::DrawableProperties::_label_type arg)
  {
    msg_.label = std::move(arg);
    return Init_DrawableProperties_wireframe(msg_);
  }

private:
  ::bosdyn_msgs::msg::DrawableProperties msg_;
};

class Init_DrawableProperties_color_is_set
{
public:
  explicit Init_DrawableProperties_color_is_set(::bosdyn_msgs::msg::DrawableProperties & msg)
  : msg_(msg)
  {}
  Init_DrawableProperties_label color_is_set(::bosdyn_msgs::msg::DrawableProperties::_color_is_set_type arg)
  {
    msg_.color_is_set = std::move(arg);
    return Init_DrawableProperties_label(msg_);
  }

private:
  ::bosdyn_msgs::msg::DrawableProperties msg_;
};

class Init_DrawableProperties_color
{
public:
  Init_DrawableProperties_color()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DrawableProperties_color_is_set color(::bosdyn_msgs::msg::DrawableProperties::_color_type arg)
  {
    msg_.color = std::move(arg);
    return Init_DrawableProperties_color_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::DrawableProperties msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::DrawableProperties>()
{
  return bosdyn_msgs::msg::builder::Init_DrawableProperties_color();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DRAWABLE_PROPERTIES__BUILDER_HPP_
