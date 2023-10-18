// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GetVisibleCamerasResponseStreamWindow.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_VISIBLE_CAMERAS_RESPONSE_STREAM_WINDOW__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_VISIBLE_CAMERAS_RESPONSE_STREAM_WINDOW__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/get_visible_cameras_response_stream_window__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GetVisibleCamerasResponseStreamWindow_height
{
public:
  explicit Init_GetVisibleCamerasResponseStreamWindow_height(::bosdyn_msgs::msg::GetVisibleCamerasResponseStreamWindow & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GetVisibleCamerasResponseStreamWindow height(::bosdyn_msgs::msg::GetVisibleCamerasResponseStreamWindow::_height_type arg)
  {
    msg_.height = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetVisibleCamerasResponseStreamWindow msg_;
};

class Init_GetVisibleCamerasResponseStreamWindow_width
{
public:
  explicit Init_GetVisibleCamerasResponseStreamWindow_width(::bosdyn_msgs::msg::GetVisibleCamerasResponseStreamWindow & msg)
  : msg_(msg)
  {}
  Init_GetVisibleCamerasResponseStreamWindow_height width(::bosdyn_msgs::msg::GetVisibleCamerasResponseStreamWindow::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_GetVisibleCamerasResponseStreamWindow_height(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetVisibleCamerasResponseStreamWindow msg_;
};

class Init_GetVisibleCamerasResponseStreamWindow_yoffset
{
public:
  explicit Init_GetVisibleCamerasResponseStreamWindow_yoffset(::bosdyn_msgs::msg::GetVisibleCamerasResponseStreamWindow & msg)
  : msg_(msg)
  {}
  Init_GetVisibleCamerasResponseStreamWindow_width yoffset(::bosdyn_msgs::msg::GetVisibleCamerasResponseStreamWindow::_yoffset_type arg)
  {
    msg_.yoffset = std::move(arg);
    return Init_GetVisibleCamerasResponseStreamWindow_width(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetVisibleCamerasResponseStreamWindow msg_;
};

class Init_GetVisibleCamerasResponseStreamWindow_xoffset
{
public:
  Init_GetVisibleCamerasResponseStreamWindow_xoffset()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetVisibleCamerasResponseStreamWindow_yoffset xoffset(::bosdyn_msgs::msg::GetVisibleCamerasResponseStreamWindow::_xoffset_type arg)
  {
    msg_.xoffset = std::move(arg);
    return Init_GetVisibleCamerasResponseStreamWindow_yoffset(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetVisibleCamerasResponseStreamWindow msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GetVisibleCamerasResponseStreamWindow>()
{
  return bosdyn_msgs::msg::builder::Init_GetVisibleCamerasResponseStreamWindow_xoffset();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_VISIBLE_CAMERAS_RESPONSE_STREAM_WINDOW__BUILDER_HPP_
