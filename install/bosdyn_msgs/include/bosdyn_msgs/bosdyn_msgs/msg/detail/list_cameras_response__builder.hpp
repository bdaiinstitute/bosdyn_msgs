// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ListCamerasResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LIST_CAMERAS_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LIST_CAMERAS_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/list_cameras_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ListCamerasResponse_cameras
{
public:
  explicit Init_ListCamerasResponse_cameras(::bosdyn_msgs::msg::ListCamerasResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ListCamerasResponse cameras(::bosdyn_msgs::msg::ListCamerasResponse::_cameras_type arg)
  {
    msg_.cameras = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ListCamerasResponse msg_;
};

class Init_ListCamerasResponse_header_is_set
{
public:
  explicit Init_ListCamerasResponse_header_is_set(::bosdyn_msgs::msg::ListCamerasResponse & msg)
  : msg_(msg)
  {}
  Init_ListCamerasResponse_cameras header_is_set(::bosdyn_msgs::msg::ListCamerasResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_ListCamerasResponse_cameras(msg_);
  }

private:
  ::bosdyn_msgs::msg::ListCamerasResponse msg_;
};

class Init_ListCamerasResponse_header
{
public:
  Init_ListCamerasResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ListCamerasResponse_header_is_set header(::bosdyn_msgs::msg::ListCamerasResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ListCamerasResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ListCamerasResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ListCamerasResponse>()
{
  return bosdyn_msgs::msg::builder::Init_ListCamerasResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LIST_CAMERAS_RESPONSE__BUILDER_HPP_
