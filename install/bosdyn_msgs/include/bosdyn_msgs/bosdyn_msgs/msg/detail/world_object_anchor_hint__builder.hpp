// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/WorldObjectAnchorHint.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__WORLD_OBJECT_ANCHOR_HINT__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__WORLD_OBJECT_ANCHOR_HINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/world_object_anchor_hint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_WorldObjectAnchorHint_seed_tform_object_constraint_is_set
{
public:
  explicit Init_WorldObjectAnchorHint_seed_tform_object_constraint_is_set(::bosdyn_msgs::msg::WorldObjectAnchorHint & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::WorldObjectAnchorHint seed_tform_object_constraint_is_set(::bosdyn_msgs::msg::WorldObjectAnchorHint::_seed_tform_object_constraint_is_set_type arg)
  {
    msg_.seed_tform_object_constraint_is_set = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::WorldObjectAnchorHint msg_;
};

class Init_WorldObjectAnchorHint_seed_tform_object_constraint
{
public:
  explicit Init_WorldObjectAnchorHint_seed_tform_object_constraint(::bosdyn_msgs::msg::WorldObjectAnchorHint & msg)
  : msg_(msg)
  {}
  Init_WorldObjectAnchorHint_seed_tform_object_constraint_is_set seed_tform_object_constraint(::bosdyn_msgs::msg::WorldObjectAnchorHint::_seed_tform_object_constraint_type arg)
  {
    msg_.seed_tform_object_constraint = std::move(arg);
    return Init_WorldObjectAnchorHint_seed_tform_object_constraint_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::WorldObjectAnchorHint msg_;
};

class Init_WorldObjectAnchorHint_seed_tform_object_uncertainty_is_set
{
public:
  explicit Init_WorldObjectAnchorHint_seed_tform_object_uncertainty_is_set(::bosdyn_msgs::msg::WorldObjectAnchorHint & msg)
  : msg_(msg)
  {}
  Init_WorldObjectAnchorHint_seed_tform_object_constraint seed_tform_object_uncertainty_is_set(::bosdyn_msgs::msg::WorldObjectAnchorHint::_seed_tform_object_uncertainty_is_set_type arg)
  {
    msg_.seed_tform_object_uncertainty_is_set = std::move(arg);
    return Init_WorldObjectAnchorHint_seed_tform_object_constraint(msg_);
  }

private:
  ::bosdyn_msgs::msg::WorldObjectAnchorHint msg_;
};

class Init_WorldObjectAnchorHint_seed_tform_object_uncertainty
{
public:
  explicit Init_WorldObjectAnchorHint_seed_tform_object_uncertainty(::bosdyn_msgs::msg::WorldObjectAnchorHint & msg)
  : msg_(msg)
  {}
  Init_WorldObjectAnchorHint_seed_tform_object_uncertainty_is_set seed_tform_object_uncertainty(::bosdyn_msgs::msg::WorldObjectAnchorHint::_seed_tform_object_uncertainty_type arg)
  {
    msg_.seed_tform_object_uncertainty = std::move(arg);
    return Init_WorldObjectAnchorHint_seed_tform_object_uncertainty_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::WorldObjectAnchorHint msg_;
};

class Init_WorldObjectAnchorHint_object_anchor_is_set
{
public:
  explicit Init_WorldObjectAnchorHint_object_anchor_is_set(::bosdyn_msgs::msg::WorldObjectAnchorHint & msg)
  : msg_(msg)
  {}
  Init_WorldObjectAnchorHint_seed_tform_object_uncertainty object_anchor_is_set(::bosdyn_msgs::msg::WorldObjectAnchorHint::_object_anchor_is_set_type arg)
  {
    msg_.object_anchor_is_set = std::move(arg);
    return Init_WorldObjectAnchorHint_seed_tform_object_uncertainty(msg_);
  }

private:
  ::bosdyn_msgs::msg::WorldObjectAnchorHint msg_;
};

class Init_WorldObjectAnchorHint_object_anchor
{
public:
  Init_WorldObjectAnchorHint_object_anchor()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WorldObjectAnchorHint_object_anchor_is_set object_anchor(::bosdyn_msgs::msg::WorldObjectAnchorHint::_object_anchor_type arg)
  {
    msg_.object_anchor = std::move(arg);
    return Init_WorldObjectAnchorHint_object_anchor_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::WorldObjectAnchorHint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::WorldObjectAnchorHint>()
{
  return bosdyn_msgs::msg::builder::Init_WorldObjectAnchorHint_object_anchor();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__WORLD_OBJECT_ANCHOR_HINT__BUILDER_HPP_
