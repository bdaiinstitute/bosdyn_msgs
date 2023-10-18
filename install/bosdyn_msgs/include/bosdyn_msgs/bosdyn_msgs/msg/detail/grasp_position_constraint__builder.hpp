// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/GraspPositionConstraint.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__GRASP_POSITION_CONSTRAINT__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__GRASP_POSITION_CONSTRAINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/grasp_position_constraint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_GraspPositionConstraint_value
{
public:
  Init_GraspPositionConstraint_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::bosdyn_msgs::msg::GraspPositionConstraint value(::bosdyn_msgs::msg::GraspPositionConstraint::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::GraspPositionConstraint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::GraspPositionConstraint>()
{
  return bosdyn_msgs::msg::builder::Init_GraspPositionConstraint_value();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__GRASP_POSITION_CONSTRAINT__BUILDER_HPP_
