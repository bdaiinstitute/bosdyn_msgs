// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/DrawablePropertiesOneOfDrawable.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__DRAWABLE_PROPERTIES_ONE_OF_DRAWABLE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__DRAWABLE_PROPERTIES_ONE_OF_DRAWABLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/drawable_properties_one_of_drawable__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_DrawablePropertiesOneOfDrawable_drawable_choice
{
public:
  explicit Init_DrawablePropertiesOneOfDrawable_drawable_choice(::bosdyn_msgs::msg::DrawablePropertiesOneOfDrawable & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::DrawablePropertiesOneOfDrawable drawable_choice(::bosdyn_msgs::msg::DrawablePropertiesOneOfDrawable::_drawable_choice_type arg)
  {
    msg_.drawable_choice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::DrawablePropertiesOneOfDrawable msg_;
};

class Init_DrawablePropertiesOneOfDrawable_points
{
public:
  explicit Init_DrawablePropertiesOneOfDrawable_points(::bosdyn_msgs::msg::DrawablePropertiesOneOfDrawable & msg)
  : msg_(msg)
  {}
  Init_DrawablePropertiesOneOfDrawable_drawable_choice points(::bosdyn_msgs::msg::DrawablePropertiesOneOfDrawable::_points_type arg)
  {
    msg_.points = std::move(arg);
    return Init_DrawablePropertiesOneOfDrawable_drawable_choice(msg_);
  }

private:
  ::bosdyn_msgs::msg::DrawablePropertiesOneOfDrawable msg_;
};

class Init_DrawablePropertiesOneOfDrawable_linestrip
{
public:
  explicit Init_DrawablePropertiesOneOfDrawable_linestrip(::bosdyn_msgs::msg::DrawablePropertiesOneOfDrawable & msg)
  : msg_(msg)
  {}
  Init_DrawablePropertiesOneOfDrawable_points linestrip(::bosdyn_msgs::msg::DrawablePropertiesOneOfDrawable::_linestrip_type arg)
  {
    msg_.linestrip = std::move(arg);
    return Init_DrawablePropertiesOneOfDrawable_points(msg_);
  }

private:
  ::bosdyn_msgs::msg::DrawablePropertiesOneOfDrawable msg_;
};

class Init_DrawablePropertiesOneOfDrawable_cylinder
{
public:
  explicit Init_DrawablePropertiesOneOfDrawable_cylinder(::bosdyn_msgs::msg::DrawablePropertiesOneOfDrawable & msg)
  : msg_(msg)
  {}
  Init_DrawablePropertiesOneOfDrawable_linestrip cylinder(::bosdyn_msgs::msg::DrawablePropertiesOneOfDrawable::_cylinder_type arg)
  {
    msg_.cylinder = std::move(arg);
    return Init_DrawablePropertiesOneOfDrawable_linestrip(msg_);
  }

private:
  ::bosdyn_msgs::msg::DrawablePropertiesOneOfDrawable msg_;
};

class Init_DrawablePropertiesOneOfDrawable_capsule
{
public:
  explicit Init_DrawablePropertiesOneOfDrawable_capsule(::bosdyn_msgs::msg::DrawablePropertiesOneOfDrawable & msg)
  : msg_(msg)
  {}
  Init_DrawablePropertiesOneOfDrawable_cylinder capsule(::bosdyn_msgs::msg::DrawablePropertiesOneOfDrawable::_capsule_type arg)
  {
    msg_.capsule = std::move(arg);
    return Init_DrawablePropertiesOneOfDrawable_cylinder(msg_);
  }

private:
  ::bosdyn_msgs::msg::DrawablePropertiesOneOfDrawable msg_;
};

class Init_DrawablePropertiesOneOfDrawable_arrow
{
public:
  explicit Init_DrawablePropertiesOneOfDrawable_arrow(::bosdyn_msgs::msg::DrawablePropertiesOneOfDrawable & msg)
  : msg_(msg)
  {}
  Init_DrawablePropertiesOneOfDrawable_capsule arrow(::bosdyn_msgs::msg::DrawablePropertiesOneOfDrawable::_arrow_type arg)
  {
    msg_.arrow = std::move(arg);
    return Init_DrawablePropertiesOneOfDrawable_capsule(msg_);
  }

private:
  ::bosdyn_msgs::msg::DrawablePropertiesOneOfDrawable msg_;
};

class Init_DrawablePropertiesOneOfDrawable_box
{
public:
  explicit Init_DrawablePropertiesOneOfDrawable_box(::bosdyn_msgs::msg::DrawablePropertiesOneOfDrawable & msg)
  : msg_(msg)
  {}
  Init_DrawablePropertiesOneOfDrawable_arrow box(::bosdyn_msgs::msg::DrawablePropertiesOneOfDrawable::_box_type arg)
  {
    msg_.box = std::move(arg);
    return Init_DrawablePropertiesOneOfDrawable_arrow(msg_);
  }

private:
  ::bosdyn_msgs::msg::DrawablePropertiesOneOfDrawable msg_;
};

class Init_DrawablePropertiesOneOfDrawable_sphere
{
public:
  explicit Init_DrawablePropertiesOneOfDrawable_sphere(::bosdyn_msgs::msg::DrawablePropertiesOneOfDrawable & msg)
  : msg_(msg)
  {}
  Init_DrawablePropertiesOneOfDrawable_box sphere(::bosdyn_msgs::msg::DrawablePropertiesOneOfDrawable::_sphere_type arg)
  {
    msg_.sphere = std::move(arg);
    return Init_DrawablePropertiesOneOfDrawable_box(msg_);
  }

private:
  ::bosdyn_msgs::msg::DrawablePropertiesOneOfDrawable msg_;
};

class Init_DrawablePropertiesOneOfDrawable_frame
{
public:
  Init_DrawablePropertiesOneOfDrawable_frame()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DrawablePropertiesOneOfDrawable_sphere frame(::bosdyn_msgs::msg::DrawablePropertiesOneOfDrawable::_frame_type arg)
  {
    msg_.frame = std::move(arg);
    return Init_DrawablePropertiesOneOfDrawable_sphere(msg_);
  }

private:
  ::bosdyn_msgs::msg::DrawablePropertiesOneOfDrawable msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::DrawablePropertiesOneOfDrawable>()
{
  return bosdyn_msgs::msg::builder::Init_DrawablePropertiesOneOfDrawable_frame();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__DRAWABLE_PROPERTIES_ONE_OF_DRAWABLE__BUILDER_HPP_
