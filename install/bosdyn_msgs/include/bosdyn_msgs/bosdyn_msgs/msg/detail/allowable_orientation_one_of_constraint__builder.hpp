// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/AllowableOrientationOneOfConstraint.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__ALLOWABLE_ORIENTATION_ONE_OF_CONSTRAINT__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__ALLOWABLE_ORIENTATION_ONE_OF_CONSTRAINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/allowable_orientation_one_of_constraint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_AllowableOrientationOneOfConstraint_constraint_choice
{
public:
  explicit Init_AllowableOrientationOneOfConstraint_constraint_choice(::bosdyn_msgs::msg::AllowableOrientationOneOfConstraint & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::AllowableOrientationOneOfConstraint constraint_choice(::bosdyn_msgs::msg::AllowableOrientationOneOfConstraint::_constraint_choice_type arg)
  {
    msg_.constraint_choice = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::AllowableOrientationOneOfConstraint msg_;
};

class Init_AllowableOrientationOneOfConstraint_squeeze_grasp
{
public:
  explicit Init_AllowableOrientationOneOfConstraint_squeeze_grasp(::bosdyn_msgs::msg::AllowableOrientationOneOfConstraint & msg)
  : msg_(msg)
  {}
  Init_AllowableOrientationOneOfConstraint_constraint_choice squeeze_grasp(::bosdyn_msgs::msg::AllowableOrientationOneOfConstraint::_squeeze_grasp_type arg)
  {
    msg_.squeeze_grasp = std::move(arg);
    return Init_AllowableOrientationOneOfConstraint_constraint_choice(msg_);
  }

private:
  ::bosdyn_msgs::msg::AllowableOrientationOneOfConstraint msg_;
};

class Init_AllowableOrientationOneOfConstraint_vector_alignment_with_tolerance
{
public:
  explicit Init_AllowableOrientationOneOfConstraint_vector_alignment_with_tolerance(::bosdyn_msgs::msg::AllowableOrientationOneOfConstraint & msg)
  : msg_(msg)
  {}
  Init_AllowableOrientationOneOfConstraint_squeeze_grasp vector_alignment_with_tolerance(::bosdyn_msgs::msg::AllowableOrientationOneOfConstraint::_vector_alignment_with_tolerance_type arg)
  {
    msg_.vector_alignment_with_tolerance = std::move(arg);
    return Init_AllowableOrientationOneOfConstraint_squeeze_grasp(msg_);
  }

private:
  ::bosdyn_msgs::msg::AllowableOrientationOneOfConstraint msg_;
};

class Init_AllowableOrientationOneOfConstraint_rotation_with_tolerance
{
public:
  Init_AllowableOrientationOneOfConstraint_rotation_with_tolerance()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AllowableOrientationOneOfConstraint_vector_alignment_with_tolerance rotation_with_tolerance(::bosdyn_msgs::msg::AllowableOrientationOneOfConstraint::_rotation_with_tolerance_type arg)
  {
    msg_.rotation_with_tolerance = std::move(arg);
    return Init_AllowableOrientationOneOfConstraint_vector_alignment_with_tolerance(msg_);
  }

private:
  ::bosdyn_msgs::msg::AllowableOrientationOneOfConstraint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::AllowableOrientationOneOfConstraint>()
{
  return bosdyn_msgs::msg::builder::Init_AllowableOrientationOneOfConstraint_rotation_with_tolerance();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__ALLOWABLE_ORIENTATION_ONE_OF_CONSTRAINT__BUILDER_HPP_
