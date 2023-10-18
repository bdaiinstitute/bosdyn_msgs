// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/AnchoringHint.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ANCHORING_HINT__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ANCHORING_HINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/anchoring_hint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_AnchoringHint_world_objects
{
public:
  explicit Init_AnchoringHint_world_objects(::bosdyn_msgs::msg::AnchoringHint & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::AnchoringHint world_objects(::bosdyn_msgs::msg::AnchoringHint::_world_objects_type arg)
  {
    msg_.world_objects = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::AnchoringHint msg_;
};

class Init_AnchoringHint_waypoint_anchors
{
public:
  Init_AnchoringHint_waypoint_anchors()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AnchoringHint_world_objects waypoint_anchors(::bosdyn_msgs::msg::AnchoringHint::_waypoint_anchors_type arg)
  {
    msg_.waypoint_anchors = std::move(arg);
    return Init_AnchoringHint_world_objects(msg_);
  }

private:
  ::bosdyn_msgs::msg::AnchoringHint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::AnchoringHint>()
{
  return bosdyn_msgs::msg::builder::Init_AnchoringHint_waypoint_anchors();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ANCHORING_HINT__BUILDER_HPP_
