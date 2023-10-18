// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GetVisibleCamerasResponseStream.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_VISIBLE_CAMERAS_RESPONSE_STREAM__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_VISIBLE_CAMERAS_RESPONSE_STREAM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/get_visible_cameras_response_stream__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GetVisibleCamerasResponseStream_camera_is_set
{
public:
  explicit Init_GetVisibleCamerasResponseStream_camera_is_set(::bosdyn_msgs::msg::GetVisibleCamerasResponseStream & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GetVisibleCamerasResponseStream camera_is_set(::bosdyn_msgs::msg::GetVisibleCamerasResponseStream::_camera_is_set_type arg)
  {
    msg_.camera_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetVisibleCamerasResponseStream msg_;
};

class Init_GetVisibleCamerasResponseStream_camera
{
public:
  explicit Init_GetVisibleCamerasResponseStream_camera(::bosdyn_msgs::msg::GetVisibleCamerasResponseStream & msg)
  : msg_(msg)
  {}
  Init_GetVisibleCamerasResponseStream_camera_is_set camera(::bosdyn_msgs::msg::GetVisibleCamerasResponseStream::_camera_type arg)
  {
    msg_.camera = std::move(arg);
    return Init_GetVisibleCamerasResponseStream_camera_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetVisibleCamerasResponseStream msg_;
};

class Init_GetVisibleCamerasResponseStream_window_is_set
{
public:
  explicit Init_GetVisibleCamerasResponseStream_window_is_set(::bosdyn_msgs::msg::GetVisibleCamerasResponseStream & msg)
  : msg_(msg)
  {}
  Init_GetVisibleCamerasResponseStream_camera window_is_set(::bosdyn_msgs::msg::GetVisibleCamerasResponseStream::_window_is_set_type arg)
  {
    msg_.window_is_set = std::move(arg);
    return Init_GetVisibleCamerasResponseStream_camera(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetVisibleCamerasResponseStream msg_;
};

class Init_GetVisibleCamerasResponseStream_window
{
public:
  Init_GetVisibleCamerasResponseStream_window()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetVisibleCamerasResponseStream_window_is_set window(::bosdyn_msgs::msg::GetVisibleCamerasResponseStream::_window_type arg)
  {
    msg_.window = std::move(arg);
    return Init_GetVisibleCamerasResponseStream_window_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetVisibleCamerasResponseStream msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GetVisibleCamerasResponseStream>()
{
  return bosdyn_msgs::msg::builder::Init_GetVisibleCamerasResponseStream_window();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_VISIBLE_CAMERAS_RESPONSE_STREAM__BUILDER_HPP_
