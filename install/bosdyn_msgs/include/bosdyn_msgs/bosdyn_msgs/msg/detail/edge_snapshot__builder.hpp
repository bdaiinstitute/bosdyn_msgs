// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/EdgeSnapshot.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__EDGE_SNAPSHOT__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__EDGE_SNAPSHOT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/edge_snapshot__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_EdgeSnapshot_area_callbacks
{
public:
  explicit Init_EdgeSnapshot_area_callbacks(::bosdyn_msgs::msg::EdgeSnapshot & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::EdgeSnapshot area_callbacks(::bosdyn_msgs::msg::EdgeSnapshot::_area_callbacks_type arg)
  {
    msg_.area_callbacks = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::EdgeSnapshot msg_;
};

class Init_EdgeSnapshot_stances
{
public:
  explicit Init_EdgeSnapshot_stances(::bosdyn_msgs::msg::EdgeSnapshot & msg)
  : msg_(msg)
  {}
  Init_EdgeSnapshot_area_callbacks stances(::bosdyn_msgs::msg::EdgeSnapshot::_stances_type arg)
  {
    msg_.stances = std::move(arg);
    return Init_EdgeSnapshot_area_callbacks(msg_);
  }

private:
  ::bosdyn_msgs::msg::EdgeSnapshot msg_;
};

class Init_EdgeSnapshot_id
{
public:
  Init_EdgeSnapshot_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EdgeSnapshot_stances id(::bosdyn_msgs::msg::EdgeSnapshot::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_EdgeSnapshot_stances(msg_);
  }

private:
  ::bosdyn_msgs::msg::EdgeSnapshot msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::EdgeSnapshot>()
{
  return bosdyn_msgs::msg::builder::Init_EdgeSnapshot_id();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__EDGE_SNAPSHOT__BUILDER_HPP_
