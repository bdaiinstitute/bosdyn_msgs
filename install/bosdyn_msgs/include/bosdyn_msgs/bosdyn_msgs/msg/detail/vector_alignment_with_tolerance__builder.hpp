// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from bosdyn_msgs:msg/VectorAlignmentWithTolerance.idl
// generated code does not contain a copyright notice

#ifndef BOSDYN_MSGS__MSG__DETAIL__VECTOR_ALIGNMENT_WITH_TOLERANCE__BUILDER_HPP_
#define BOSDYN_MSGS__MSG__DETAIL__VECTOR_ALIGNMENT_WITH_TOLERANCE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "bosdyn_msgs/msg/detail/vector_alignment_with_tolerance__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace bosdyn_msgs
{

namespace msg
{

namespace builder
{

class Init_VectorAlignmentWithTolerance_threshold_radians
{
public:
  explicit Init_VectorAlignmentWithTolerance_threshold_radians(::bosdyn_msgs::msg::VectorAlignmentWithTolerance & msg)
  : msg_(msg)
  {}
  ::bosdyn_msgs::msg::VectorAlignmentWithTolerance threshold_radians(::bosdyn_msgs::msg::VectorAlignmentWithTolerance::_threshold_radians_type arg)
  {
    msg_.threshold_radians = std::move(arg);
    return std::move(msg_);
  }

private:
  ::bosdyn_msgs::msg::VectorAlignmentWithTolerance msg_;
};

class Init_VectorAlignmentWithTolerance_axis_to_align_with_ewrt_frame_is_set
{
public:
  explicit Init_VectorAlignmentWithTolerance_axis_to_align_with_ewrt_frame_is_set(::bosdyn_msgs::msg::VectorAlignmentWithTolerance & msg)
  : msg_(msg)
  {}
  Init_VectorAlignmentWithTolerance_threshold_radians axis_to_align_with_ewrt_frame_is_set(::bosdyn_msgs::msg::VectorAlignmentWithTolerance::_axis_to_align_with_ewrt_frame_is_set_type arg)
  {
    msg_.axis_to_align_with_ewrt_frame_is_set = std::move(arg);
    return Init_VectorAlignmentWithTolerance_threshold_radians(msg_);
  }

private:
  ::bosdyn_msgs::msg::VectorAlignmentWithTolerance msg_;
};

class Init_VectorAlignmentWithTolerance_axis_to_align_with_ewrt_frame
{
public:
  explicit Init_VectorAlignmentWithTolerance_axis_to_align_with_ewrt_frame(::bosdyn_msgs::msg::VectorAlignmentWithTolerance & msg)
  : msg_(msg)
  {}
  Init_VectorAlignmentWithTolerance_axis_to_align_with_ewrt_frame_is_set axis_to_align_with_ewrt_frame(::bosdyn_msgs::msg::VectorAlignmentWithTolerance::_axis_to_align_with_ewrt_frame_type arg)
  {
    msg_.axis_to_align_with_ewrt_frame = std::move(arg);
    return Init_VectorAlignmentWithTolerance_axis_to_align_with_ewrt_frame_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::VectorAlignmentWithTolerance msg_;
};

class Init_VectorAlignmentWithTolerance_axis_on_gripper_ewrt_gripper_is_set
{
public:
  explicit Init_VectorAlignmentWithTolerance_axis_on_gripper_ewrt_gripper_is_set(::bosdyn_msgs::msg::VectorAlignmentWithTolerance & msg)
  : msg_(msg)
  {}
  Init_VectorAlignmentWithTolerance_axis_to_align_with_ewrt_frame axis_on_gripper_ewrt_gripper_is_set(::bosdyn_msgs::msg::VectorAlignmentWithTolerance::_axis_on_gripper_ewrt_gripper_is_set_type arg)
  {
    msg_.axis_on_gripper_ewrt_gripper_is_set = std::move(arg);
    return Init_VectorAlignmentWithTolerance_axis_to_align_with_ewrt_frame(msg_);
  }

private:
  ::bosdyn_msgs::msg::VectorAlignmentWithTolerance msg_;
};

class Init_VectorAlignmentWithTolerance_axis_on_gripper_ewrt_gripper
{
public:
  Init_VectorAlignmentWithTolerance_axis_on_gripper_ewrt_gripper()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VectorAlignmentWithTolerance_axis_on_gripper_ewrt_gripper_is_set axis_on_gripper_ewrt_gripper(::bosdyn_msgs::msg::VectorAlignmentWithTolerance::_axis_on_gripper_ewrt_gripper_type arg)
  {
    msg_.axis_on_gripper_ewrt_gripper = std::move(arg);
    return Init_VectorAlignmentWithTolerance_axis_on_gripper_ewrt_gripper_is_set(msg_);
  }

private:
  ::bosdyn_msgs::msg::VectorAlignmentWithTolerance msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::bosdyn_msgs::msg::VectorAlignmentWithTolerance>()
{
  return bosdyn_msgs::msg::builder::Init_VectorAlignmentWithTolerance_axis_on_gripper_ewrt_gripper();
}

}  // namespace bosdyn_msgs

#endif  // BOSDYN_MSGS__MSG__DETAIL__VECTOR_ALIGNMENT_WITH_TOLERANCE__BUILDER_HPP_
