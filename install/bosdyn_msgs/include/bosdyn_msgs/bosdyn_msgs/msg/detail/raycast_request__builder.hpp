// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/RaycastRequest.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__RAYCAST_REQUEST__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__RAYCAST_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/raycast_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_RaycastRequest_intersection_types
{
public:
  explicit Init_RaycastRequest_intersection_types(::bosdyn_msgs::msg::RaycastRequest & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::RaycastRequest intersection_types(::bosdyn_msgs::msg::RaycastRequest::_intersection_types_type arg)
  {
    msg_.intersection_types = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::RaycastRequest msg_;
};

class Init_RaycastRequest_min_intersection_distance
{
public:
  explicit Init_RaycastRequest_min_intersection_distance(::bosdyn_msgs::msg::RaycastRequest & msg)
  : msg_(msg)
  {}
  Init_RaycastRequest_intersection_types min_intersection_distance(::bosdyn_msgs::msg::RaycastRequest::_min_intersection_distance_type arg)
  {
    msg_.min_intersection_distance = std::move(arg);
    return Init_RaycastRequest_intersection_types(msg_);
  }

private:
  ::bosdyn_msgs::msg::RaycastRequest msg_;
};

class Init_RaycastRequest_ray_is_set
{
public:
  explicit Init_RaycastRequest_ray_is_set(::bosdyn_msgs::msg::RaycastRequest & msg)
  : msg_(msg)
  {}
  Init_RaycastRequest_min_intersection_distance ray_is_set(::bosdyn_msgs::msg::RaycastRequest::_ray_is_set_type arg)
  {
    msg_.ray_is_set = std::move(arg);
    return Init_RaycastRequest_min_intersection_distance(msg_);
  }

private:
  ::bosdyn_msgs::msg::RaycastRequest msg_;
};

class Init_RaycastRequest_ray
{
public:
  explicit Init_RaycastRequest_ray(::bosdyn_msgs::msg::RaycastRequest & msg)
  : msg_(msg)
  {}
  Init_RaycastRequest_ray_is_set ray(::bosdyn_msgs::msg::RaycastRequest::_ray_type arg)
  {
    msg_.ray = std::move(arg);
    return Init_RaycastRequest_ray_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RaycastRequest msg_;
};

class Init_RaycastRequest_ray_frame_name
{
public:
  explicit Init_RaycastRequest_ray_frame_name(::bosdyn_msgs::msg::RaycastRequest & msg)
  : msg_(msg)
  {}
  Init_RaycastRequest_ray ray_frame_name(::bosdyn_msgs::msg::RaycastRequest::_ray_frame_name_type arg)
  {
    msg_.ray_frame_name = std::move(arg);
    return Init_RaycastRequest_ray(msg_);
  }

private:
  ::bosdyn_msgs::msg::RaycastRequest msg_;
};

class Init_RaycastRequest_header_is_set
{
public:
  explicit Init_RaycastRequest_header_is_set(::bosdyn_msgs::msg::RaycastRequest & msg)
  : msg_(msg)
  {}
  Init_RaycastRequest_ray_frame_name header_is_set(::bosdyn_msgs::msg::RaycastRequest::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_RaycastRequest_ray_frame_name(msg_);
  }

private:
  ::bosdyn_msgs::msg::RaycastRequest msg_;
};

class Init_RaycastRequest_header
{
public:
  Init_RaycastRequest_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RaycastRequest_header_is_set header(::bosdyn_msgs::msg::RaycastRequest::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RaycastRequest_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RaycastRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::RaycastRequest>()
{
  return bosdyn_msgs::msg::builder::Init_RaycastRequest_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__RAYCAST_REQUEST__BUILDER_HPP_
