// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/BosdynGraphNavState.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__BOSDYN_GRAPH_NAV_STATE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__BOSDYN_GRAPH_NAV_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/bosdyn_graph_nav_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_BosdynGraphNavState_waypoint_id
{
public:
  explicit Init_BosdynGraphNavState_waypoint_id(::bosdyn_msgs::msg::BosdynGraphNavState & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::BosdynGraphNavState waypoint_id(::bosdyn_msgs::msg::BosdynGraphNavState::_waypoint_id_type arg)
  {
    msg_.waypoint_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::BosdynGraphNavState msg_;
};

class Init_BosdynGraphNavState_state_name
{
public:
  explicit Init_BosdynGraphNavState_state_name(::bosdyn_msgs::msg::BosdynGraphNavState & msg)
  : msg_(msg)
  {}
  Init_BosdynGraphNavState_waypoint_id state_name(::bosdyn_msgs::msg::BosdynGraphNavState::_state_name_type arg)
  {
    msg_.state_name = std::move(arg);
    return Init_BosdynGraphNavState_waypoint_id(msg_);
  }

private:
  ::bosdyn_msgs::msg::BosdynGraphNavState msg_;
};

class Init_BosdynGraphNavState_child_is_set
{
public:
  explicit Init_BosdynGraphNavState_child_is_set(::bosdyn_msgs::msg::BosdynGraphNavState & msg)
  : msg_(msg)
  {}
  Init_BosdynGraphNavState_state_name child_is_set(::bosdyn_msgs::msg::BosdynGraphNavState::_child_is_set_type arg)
  {
    msg_.child_is_set = std::move(arg);
    return Init_BosdynGraphNavState_state_name(msg_);
  }

private:
  ::bosdyn_msgs::msg::BosdynGraphNavState msg_;
};

class Init_BosdynGraphNavState_child
{
public:
  explicit Init_BosdynGraphNavState_child(::bosdyn_msgs::msg::BosdynGraphNavState & msg)
  : msg_(msg)
  {}
  Init_BosdynGraphNavState_child_is_set child(::bosdyn_msgs::msg::BosdynGraphNavState::_child_type arg)
  {
    msg_.child = std::move(arg);
    return Init_BosdynGraphNavState_child_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::BosdynGraphNavState msg_;
};

class Init_BosdynGraphNavState_host
{
public:
  explicit Init_BosdynGraphNavState_host(::bosdyn_msgs::msg::BosdynGraphNavState & msg)
  : msg_(msg)
  {}
  Init_BosdynGraphNavState_child host(::bosdyn_msgs::msg::BosdynGraphNavState::_host_type arg)
  {
    msg_.host = std::move(arg);
    return Init_BosdynGraphNavState_child(msg_);
  }

private:
  ::bosdyn_msgs::msg::BosdynGraphNavState msg_;
};

class Init_BosdynGraphNavState_service_name
{
public:
  Init_BosdynGraphNavState_service_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BosdynGraphNavState_host service_name(::bosdyn_msgs::msg::BosdynGraphNavState::_service_name_type arg)
  {
    msg_.service_name = std::move(arg);
    return Init_BosdynGraphNavState_host(msg_);
  }

private:
  ::bosdyn_msgs::msg::BosdynGraphNavState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::BosdynGraphNavState>()
{
  return bosdyn_msgs::msg::builder::Init_BosdynGraphNavState_service_name();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__BOSDYN_GRAPH_NAV_STATE__BUILDER_HPP_
