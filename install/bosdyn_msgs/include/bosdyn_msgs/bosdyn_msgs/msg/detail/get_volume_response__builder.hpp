// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GetVolumeResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GET_VOLUME_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GET_VOLUME_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/get_volume_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GetVolumeResponse_volume
{
public:
  explicit Init_GetVolumeResponse_volume(::bosdyn_msgs::msg::GetVolumeResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::GetVolumeResponse volume(::bosdyn_msgs::msg::GetVolumeResponse::_volume_type arg)
  {
    msg_.volume = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetVolumeResponse msg_;
};

class Init_GetVolumeResponse_header_is_set
{
public:
  explicit Init_GetVolumeResponse_header_is_set(::bosdyn_msgs::msg::GetVolumeResponse & msg)
  : msg_(msg)
  {}
  Init_GetVolumeResponse_volume header_is_set(::bosdyn_msgs::msg::GetVolumeResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_GetVolumeResponse_volume(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetVolumeResponse msg_;
};

class Init_GetVolumeResponse_header
{
public:
  Init_GetVolumeResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GetVolumeResponse_header_is_set header(::bosdyn_msgs::msg::GetVolumeResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_GetVolumeResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::GetVolumeResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GetVolumeResponse>()
{
  return bosdyn_msgs::msg::builder::Init_GetVolumeResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GET_VOLUME_RESPONSE__BUILDER_HPP_
