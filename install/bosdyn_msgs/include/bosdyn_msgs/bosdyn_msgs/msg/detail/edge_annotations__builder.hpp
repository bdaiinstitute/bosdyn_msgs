// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/EdgeAnnotations.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__EDGE_ANNOTATIONS__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__EDGE_ANNOTATIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/edge_annotations__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_EdgeAnnotations_ground_clutter_mode
{
public:
  explicit Init_EdgeAnnotations_ground_clutter_mode(::bosdyn_msgs::msg::EdgeAnnotations & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::EdgeAnnotations ground_clutter_mode(::bosdyn_msgs::msg::EdgeAnnotations::_ground_clutter_mode_type arg)
  {
    msg_.ground_clutter_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::EdgeAnnotations msg_;
};

class Init_EdgeAnnotations_area_callbacks
{
public:
  explicit Init_EdgeAnnotations_area_callbacks(::bosdyn_msgs::msg::EdgeAnnotations & msg)
  : msg_(msg)
  {}
  Init_EdgeAnnotations_ground_clutter_mode area_callbacks(::bosdyn_msgs::msg::EdgeAnnotations::_area_callbacks_type arg)
  {
    msg_.area_callbacks = std::move(arg);
    return Init_EdgeAnnotations_ground_clutter_mode(msg_);
  }

private:
  ::bosdyn_msgs::msg::EdgeAnnotations msg_;
};

class Init_EdgeAnnotations_disable_directed_exploration
{
public:
  explicit Init_EdgeAnnotations_disable_directed_exploration(::bosdyn_msgs::msg::EdgeAnnotations & msg)
  : msg_(msg)
  {}
  Init_EdgeAnnotations_area_callbacks disable_directed_exploration(::bosdyn_msgs::msg::EdgeAnnotations::_disable_directed_exploration_type arg)
  {
    msg_.disable_directed_exploration = std::move(arg);
    return Init_EdgeAnnotations_area_callbacks(msg_);
  }

private:
  ::bosdyn_msgs::msg::EdgeAnnotations msg_;
};

class Init_EdgeAnnotations_path_following_mode
{
public:
  explicit Init_EdgeAnnotations_path_following_mode(::bosdyn_msgs::msg::EdgeAnnotations & msg)
  : msg_(msg)
  {}
  Init_EdgeAnnotations_disable_directed_exploration path_following_mode(::bosdyn_msgs::msg::EdgeAnnotations::_path_following_mode_type arg)
  {
    msg_.path_following_mode = std::move(arg);
    return Init_EdgeAnnotations_disable_directed_exploration(msg_);
  }

private:
  ::bosdyn_msgs::msg::EdgeAnnotations msg_;
};

class Init_EdgeAnnotations_disable_alternate_route_finding
{
public:
  explicit Init_EdgeAnnotations_disable_alternate_route_finding(::bosdyn_msgs::msg::EdgeAnnotations & msg)
  : msg_(msg)
  {}
  Init_EdgeAnnotations_path_following_mode disable_alternate_route_finding(::bosdyn_msgs::msg::EdgeAnnotations::_disable_alternate_route_finding_type arg)
  {
    msg_.disable_alternate_route_finding = std::move(arg);
    return Init_EdgeAnnotations_path_following_mode(msg_);
  }

private:
  ::bosdyn_msgs::msg::EdgeAnnotations msg_;
};

class Init_EdgeAnnotations_edge_source
{
public:
  explicit Init_EdgeAnnotations_edge_source(::bosdyn_msgs::msg::EdgeAnnotations & msg)
  : msg_(msg)
  {}
  Init_EdgeAnnotations_disable_alternate_route_finding edge_source(::bosdyn_msgs::msg::EdgeAnnotations::_edge_source_type arg)
  {
    msg_.edge_source = std::move(arg);
    return Init_EdgeAnnotations_disable_alternate_route_finding(msg_);
  }

private:
  ::bosdyn_msgs::msg::EdgeAnnotations msg_;
};

class Init_EdgeAnnotations_cost_is_set
{
public:
  explicit Init_EdgeAnnotations_cost_is_set(::bosdyn_msgs::msg::EdgeAnnotations & msg)
  : msg_(msg)
  {}
  Init_EdgeAnnotations_edge_source cost_is_set(::bosdyn_msgs::msg::EdgeAnnotations::_cost_is_set_type arg)
  {
    msg_.cost_is_set = std::move(arg);
    return Init_EdgeAnnotations_edge_source(msg_);
  }

private:
  ::bosdyn_msgs::msg::EdgeAnnotations msg_;
};

class Init_EdgeAnnotations_cost
{
public:
  explicit Init_EdgeAnnotations_cost(::bosdyn_msgs::msg::EdgeAnnotations & msg)
  : msg_(msg)
  {}
  Init_EdgeAnnotations_cost_is_set cost(::bosdyn_msgs::msg::EdgeAnnotations::_cost_type arg)
  {
    msg_.cost = std::move(arg);
    return Init_EdgeAnnotations_cost_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::EdgeAnnotations msg_;
};

class Init_EdgeAnnotations_mobility_params_is_set
{
public:
  explicit Init_EdgeAnnotations_mobility_params_is_set(::bosdyn_msgs::msg::EdgeAnnotations & msg)
  : msg_(msg)
  {}
  Init_EdgeAnnotations_cost mobility_params_is_set(::bosdyn_msgs::msg::EdgeAnnotations::_mobility_params_is_set_type arg)
  {
    msg_.mobility_params_is_set = std::move(arg);
    return Init_EdgeAnnotations_cost(msg_);
  }

private:
  ::bosdyn_msgs::msg::EdgeAnnotations msg_;
};

class Init_EdgeAnnotations_mobility_params
{
public:
  explicit Init_EdgeAnnotations_mobility_params(::bosdyn_msgs::msg::EdgeAnnotations & msg)
  : msg_(msg)
  {}
  Init_EdgeAnnotations_mobility_params_is_set mobility_params(::bosdyn_msgs::msg::EdgeAnnotations::_mobility_params_type arg)
  {
    msg_.mobility_params = std::move(arg);
    return Init_EdgeAnnotations_mobility_params_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::EdgeAnnotations msg_;
};

class Init_EdgeAnnotations_require_alignment_is_set
{
public:
  explicit Init_EdgeAnnotations_require_alignment_is_set(::bosdyn_msgs::msg::EdgeAnnotations & msg)
  : msg_(msg)
  {}
  Init_EdgeAnnotations_mobility_params require_alignment_is_set(::bosdyn_msgs::msg::EdgeAnnotations::_require_alignment_is_set_type arg)
  {
    msg_.require_alignment_is_set = std::move(arg);
    return Init_EdgeAnnotations_mobility_params(msg_);
  }

private:
  ::bosdyn_msgs::msg::EdgeAnnotations msg_;
};

class Init_EdgeAnnotations_require_alignment
{
public:
  explicit Init_EdgeAnnotations_require_alignment(::bosdyn_msgs::msg::EdgeAnnotations & msg)
  : msg_(msg)
  {}
  Init_EdgeAnnotations_require_alignment_is_set require_alignment(::bosdyn_msgs::msg::EdgeAnnotations::_require_alignment_type arg)
  {
    msg_.require_alignment = std::move(arg);
    return Init_EdgeAnnotations_require_alignment_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::EdgeAnnotations msg_;
};

class Init_EdgeAnnotations_direction_constraint
{
public:
  explicit Init_EdgeAnnotations_direction_constraint(::bosdyn_msgs::msg::EdgeAnnotations & msg)
  : msg_(msg)
  {}
  Init_EdgeAnnotations_require_alignment direction_constraint(::bosdyn_msgs::msg::EdgeAnnotations::_direction_constraint_type arg)
  {
    msg_.direction_constraint = std::move(arg);
    return Init_EdgeAnnotations_require_alignment(msg_);
  }

private:
  ::bosdyn_msgs::msg::EdgeAnnotations msg_;
};

class Init_EdgeAnnotations_stairs_is_set
{
public:
  explicit Init_EdgeAnnotations_stairs_is_set(::bosdyn_msgs::msg::EdgeAnnotations & msg)
  : msg_(msg)
  {}
  Init_EdgeAnnotations_direction_constraint stairs_is_set(::bosdyn_msgs::msg::EdgeAnnotations::_stairs_is_set_type arg)
  {
    msg_.stairs_is_set = std::move(arg);
    return Init_EdgeAnnotations_direction_constraint(msg_);
  }

private:
  ::bosdyn_msgs::msg::EdgeAnnotations msg_;
};

class Init_EdgeAnnotations_stairs
{
public:
  Init_EdgeAnnotations_stairs()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EdgeAnnotations_stairs_is_set stairs(::bosdyn_msgs::msg::EdgeAnnotations::_stairs_type arg)
  {
    msg_.stairs = std::move(arg);
    return Init_EdgeAnnotations_stairs_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::EdgeAnnotations msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::EdgeAnnotations>()
{
  return bosdyn_msgs::msg::builder::Init_EdgeAnnotations_stairs();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__EDGE_ANNOTATIONS__BUILDER_HPP_
