// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/Route.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ROUTE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ROUTE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/route__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_Route_edge_id
{
public:
  explicit Init_Route_edge_id(::bosdyn_msgs::msg::Route & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::Route edge_id(::bosdyn_msgs::msg::Route::_edge_id_type arg)
  {
    msg_.edge_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::Route msg_;
};

class Init_Route_waypoint_id
{
public:
  Init_Route_waypoint_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Route_edge_id waypoint_id(::bosdyn_msgs::msg::Route::_waypoint_id_type arg)
  {
    msg_.waypoint_id = std::move(arg);
    return Init_Route_edge_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::Route msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::Route>()
{
  return bosdyn_msgs::msg::builder::Init_Route_waypoint_id();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ROUTE__BUILDER_HPP_
