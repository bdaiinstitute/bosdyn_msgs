// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/EdgeId.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__EDGE_ID__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__EDGE_ID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/edge_id__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_EdgeId_to_waypoint
{
public:
  explicit Init_EdgeId_to_waypoint(::bosdyn_msgs::msg::EdgeId & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::EdgeId to_waypoint(::bosdyn_msgs::msg::EdgeId::_to_waypoint_type arg)
  {
    msg_.to_waypoint = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::EdgeId msg_;
};

class Init_EdgeId_from_waypoint
{
public:
  Init_EdgeId_from_waypoint()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EdgeId_to_waypoint from_waypoint(::bosdyn_msgs::msg::EdgeId::_from_waypoint_type arg)
  {
    msg_.from_waypoint = std::move(arg);
    return Init_EdgeId_to_waypoint(msg_);
  }

private:
  ::bosdyn_msgs::msg::EdgeId msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::EdgeId>()
{
  return bosdyn_msgs::msg::builder::Init_EdgeId_from_waypoint();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__EDGE_ID__BUILDER_HPP_
