// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/RaycastResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__RAYCAST_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__RAYCAST_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/raycast_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_RaycastResponse_transforms_snapshot_is_set
{
public:
  explicit Init_RaycastResponse_transforms_snapshot_is_set(::bosdyn_msgs::msg::RaycastResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::RaycastResponse transforms_snapshot_is_set(::bosdyn_msgs::msg::RaycastResponse::_transforms_snapshot_is_set_type arg)
  {
    msg_.transforms_snapshot_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::RaycastResponse msg_;
};

class Init_RaycastResponse_transforms_snapshot
{
public:
  explicit Init_RaycastResponse_transforms_snapshot(::bosdyn_msgs::msg::RaycastResponse & msg)
  : msg_(msg)
  {}
  Init_RaycastResponse_transforms_snapshot_is_set transforms_snapshot(::bosdyn_msgs::msg::RaycastResponse::_transforms_snapshot_type arg)
  {
    msg_.transforms_snapshot = std::move(arg);
    return Init_RaycastResponse_transforms_snapshot_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RaycastResponse msg_;
};

class Init_RaycastResponse_hits
{
public:
  explicit Init_RaycastResponse_hits(::bosdyn_msgs::msg::RaycastResponse & msg)
  : msg_(msg)
  {}
  Init_RaycastResponse_transforms_snapshot hits(::bosdyn_msgs::msg::RaycastResponse::_hits_type arg)
  {
    msg_.hits = std::move(arg);
    return Init_RaycastResponse_transforms_snapshot(msg_);
  }

private:
  ::bosdyn_msgs::msg::RaycastResponse msg_;
};

class Init_RaycastResponse_hit_frame_name
{
public:
  explicit Init_RaycastResponse_hit_frame_name(::bosdyn_msgs::msg::RaycastResponse & msg)
  : msg_(msg)
  {}
  Init_RaycastResponse_hits hit_frame_name(::bosdyn_msgs::msg::RaycastResponse::_hit_frame_name_type arg)
  {
    msg_.hit_frame_name = std::move(arg);
    return Init_RaycastResponse_hits(msg_);
  }

private:
  ::bosdyn_msgs::msg::RaycastResponse msg_;
};

class Init_RaycastResponse_message
{
public:
  explicit Init_RaycastResponse_message(::bosdyn_msgs::msg::RaycastResponse & msg)
  : msg_(msg)
  {}
  Init_RaycastResponse_hit_frame_name message(::bosdyn_msgs::msg::RaycastResponse::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_RaycastResponse_hit_frame_name(msg_);
  }

private:
  ::bosdyn_msgs::msg::RaycastResponse msg_;
};

class Init_RaycastResponse_status
{
public:
  explicit Init_RaycastResponse_status(::bosdyn_msgs::msg::RaycastResponse & msg)
  : msg_(msg)
  {}
  Init_RaycastResponse_message status(::bosdyn_msgs::msg::RaycastResponse::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_RaycastResponse_message(msg_);
  }

private:
  ::bosdyn_msgs::msg::RaycastResponse msg_;
};

class Init_RaycastResponse_header_is_set
{
public:
  explicit Init_RaycastResponse_header_is_set(::bosdyn_msgs::msg::RaycastResponse & msg)
  : msg_(msg)
  {}
  Init_RaycastResponse_status header_is_set(::bosdyn_msgs::msg::RaycastResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_RaycastResponse_status(msg_);
  }

private:
  ::bosdyn_msgs::msg::RaycastResponse msg_;
};

class Init_RaycastResponse_header
{
public:
  Init_RaycastResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RaycastResponse_header_is_set header(::bosdyn_msgs::msg::RaycastResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_RaycastResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::RaycastResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::RaycastResponse>()
{
  return bosdyn_msgs::msg::builder::Init_RaycastResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__RAYCAST_RESPONSE__BUILDER_HPP_
