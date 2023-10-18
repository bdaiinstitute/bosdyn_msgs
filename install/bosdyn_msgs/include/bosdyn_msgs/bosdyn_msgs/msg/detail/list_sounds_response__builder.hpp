// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/ListSoundsResponse.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__LIST_SOUNDS_RESPONSE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__LIST_SOUNDS_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/list_sounds_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_ListSoundsResponse_sounds
{
public:
  explicit Init_ListSoundsResponse_sounds(::bosdyn_msgs::msg::ListSoundsResponse & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::ListSoundsResponse sounds(::bosdyn_msgs::msg::ListSoundsResponse::_sounds_type arg)
  {
    msg_.sounds = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::ListSoundsResponse msg_;
};

class Init_ListSoundsResponse_header_is_set
{
public:
  explicit Init_ListSoundsResponse_header_is_set(::bosdyn_msgs::msg::ListSoundsResponse & msg)
  : msg_(msg)
  {}
  Init_ListSoundsResponse_sounds header_is_set(::bosdyn_msgs::msg::ListSoundsResponse::_header_is_set_type arg)
  {
    msg_.header_is_set = std::move(arg);
    return Init_ListSoundsResponse_sounds(msg_);
  }

private:
  ::bosdyn_msgs::msg::ListSoundsResponse msg_;
};

class Init_ListSoundsResponse_header
{
public:
  Init_ListSoundsResponse_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ListSoundsResponse_header_is_set header(::bosdyn_msgs::msg::ListSoundsResponse::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_ListSoundsResponse_header_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::ListSoundsResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::ListSoundsResponse>()
{
  return bosdyn_msgs::msg::builder::Init_ListSoundsResponse_header();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__LIST_SOUNDS_RESPONSE__BUILDER_HPP_
